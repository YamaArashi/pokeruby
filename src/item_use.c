#include "global.h"
#include "asm.h"
#include "event_data.h"
#include "field_player_avatar.h"
#include "field_map_obj_helpers.h"
#include "item.h"
#include "mail.h"
#include "map_obj_lock.h"
#include "menu.h"
#include "metatile_behavior.h"
#include "palette.h"
#include "rom4.h"
#include "script.h"
#include "songs.h"
#include "sound.h"
#include "string_util.h"
#include "task.h"
#include "field_screeneffect.h"
#include "fieldmap.h"
#include "coins.h"
#include "berry.h"

extern void (* const gExitToOverworldFuncList[])();
extern void (* gUnknown_03005D00)(u8);
extern void (* gUnknown_0300485C)(void);
extern void (* gUnknown_03004AE4)(u8);
extern u8 *gUnknown_083D61DC[];

extern u8 gUnknown_02038561;
extern u8 gLastFieldPokeMenuOpened;

extern void HandleItemMenuPaletteFade(u8);
extern void ExecuteItemUseFromBlackPalette(void);
extern void DisplayItemMessageOnField(u8, u8*, TaskFunc, u16);
extern void CleanUpItemMenuMessage(u8);
extern void CleanUpOverworldMessage(u8);
extern void ItemUseOutOfBattle_TMHM(u8);
extern void ItemUseOutOfBattle_EvolutionStone(u8);
extern void ItemUseOnFieldCB_Bike(u8);
extern void ItemUseOnFieldCB_Rod(u8);
extern void ItemUseOnFieldCB_Itemfinder(u8);
extern void sub_80A5D04(void);
extern bool8 IsBikingDisallowedByPlayer(void);
extern void GetOnOffBike(u8);
extern struct MapConnection *sub_8056BA0(s16 x, s16 y); // fieldmap.c
extern void sub_810BA7C(u8);
extern void sub_8080E28(void);
extern void UseMedicine(u8);
extern void sub_8070048(u8);

extern u8 gOtherText_DadsAdvice[];
extern u8 gOtherText_CantGetOffBike[];
extern u8 gOtherText_NoResponse[];
extern u8 gOtherText_ItemfinderResponding[];
extern u8 gOtherText_ItemfinderItemUnderfoot[];
extern u8 gOtherText_Coins3[];

extern u8 gItemFinderDirections[];

extern u8 gUnknown_081A1654[];
extern u8 gUnknown_081A168F[];

extern u16 gScriptItemId;

bool8 ItemfinderCheckForHiddenItems(struct MapEvents *events, u8 taskId);
void RunItemfinderResults(u8);
void ExitItemfinder(u8);
void sub_80C9720(u8);
void sub_80C9838(u8, s16, s16);
u8 GetPlayerDirectionTowardsHiddenItem(s16, s16);
void SetPlayerDirectionTowardsItem(u8);
void DisplayItemRespondingMessageAndExitItemfinder(u8);
void RotatePlayerAndExitItemfinder(u8);
void sub_80C9D00(u8);
void sub_80C9D74(u8);

void ExecuteSwitchToOverworldFromItemUse(u8 taskId)
{
    u8 taskData;

    if (gScriptItemId == 0xAF)
        taskData = gTasks[taskId].data[15] - 1;
    else
        taskData = ItemId_GetType(gScriptItemId) - 1;

    gTasks[taskId].data[8] = (u32)gExitToOverworldFuncList[taskData] >> 16;
    gTasks[taskId].data[9] = (u32)gExitToOverworldFuncList[taskData];
    gTasks[taskId].func = HandleItemMenuPaletteFade;
}

void ItemMenu_ConfirmNormalFade(u8 var)
{
    ExecuteSwitchToOverworldFromItemUse(var);
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, 0);
}

void ItemMenu_ConfirmComplexFade(u8 var)
{
    ExecuteSwitchToOverworldFromItemUse(var);
    fade_screen(1, 0);
}

void SetUpItemUseOnFieldCallback(u8 taskId)
{
    if (gTasks[taskId].data[2] != 1)
    {
        gUnknown_0300485C = (void *)ExecuteItemUseFromBlackPalette;
        ItemMenu_ConfirmNormalFade(taskId);
    }
    else
        gUnknown_03005D00(taskId);
}

void HandleDeniedItemUseMessage(u8 var1, u8 playerMenuStatus, const u8 *text)
{
    StringExpandPlaceholders(gStringVar4, text);

    switch (playerMenuStatus)
    {
        case 0: // Item Menu
            MenuZeroFillWindowRect(0, 13, 13, 20);
            DisplayItemMessageOnField(var1, gStringVar4, CleanUpItemMenuMessage, 1);
            break;
        default: // Field
            DisplayItemMessageOnField(var1, gStringVar4, CleanUpOverworldMessage, 0);
            break;
    }
}

void DisplayDadsAdviceCannotUseItemMessage(u8 var1, u8 playerMenuStatus)
{
    HandleDeniedItemUseMessage(var1, playerMenuStatus, gOtherText_DadsAdvice);
}

void DisplayCantGetOffBikeItemMessage(u8 var1, u8 playerMenuStatus)
{
    HandleDeniedItemUseMessage(var1, playerMenuStatus, gOtherText_CantGetOffBike);
}

u8 CheckIfItemIsTMHMOrEvolutionStone(u16 itemId)
{
    if (ItemId_GetFieldFunc(itemId) == ItemUseOutOfBattle_TMHM)
        return 1;
    else if (ItemId_GetFieldFunc(itemId) == ItemUseOutOfBattle_EvolutionStone)
        return 2;
    else
        return 0;
}

void ItemMenu_ReadMail(u8 taskId)
{
    struct MailStruct mailStruct;

    if (!gPaletteFade.active)
    {
        mailStruct.itemId = gScriptItemId;
        HandleReadMail(&mailStruct, sub_80A5D04, 0);
        DestroyTask(taskId);
    }
}

void ItemUseOutOfBattle_Mail(u8 taskId)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, 0);
    gTasks[taskId].func = ItemMenu_ReadMail;
}

void ItemUseOutOfBattle_Bike(u8 taskId)
{
    s16 x, y;
    u8 tileBehavior;

    PlayerGetDestCoords(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (FlagGet(SYS_CYCLING_ROAD) == TRUE // on cycling road?
        || MetatileBehavior_IsVerticalRail(tileBehavior) == TRUE
        || MetatileBehavior_IsHorizontalRail(tileBehavior) == TRUE
        || MetatileBehavior_IsIsolatedVerticalRail(tileBehavior) == TRUE
        || MetatileBehavior_IsIsolatedHorizontalRail(tileBehavior) == TRUE)
    {
        DisplayCantGetOffBikeItemMessage(taskId, gTasks[taskId].data[2]);
    }
    else
    {
        if (IsBikingAllowedByMap() == TRUE && IsBikingDisallowedByPlayer() == FALSE)
        {
            gUnknown_03005D00 = (void *)ItemUseOnFieldCB_Bike;
            SetUpItemUseOnFieldCallback(taskId);
        }
        else
            DisplayDadsAdviceCannotUseItemMessage(taskId, gTasks[taskId].data[2]);
    }
}

void ItemUseOnFieldCB_Bike(u8 taskId)
{
    if (ItemId_GetSecondaryId(gScriptItemId) == 0)
        GetOnOffBike(2);
    if (ItemId_GetSecondaryId(gScriptItemId) == 1)
        GetOnOffBike(4);

    sub_8064E2C();
    ScriptContext2_Disable();
    DestroyTask(taskId);
}

bool32 CanFish(void)
{
    s16 x, y;
    u16 tileBehavior;

    GetXYCoordsOneStepInFrontOfPlayer(&x, &y);
    tileBehavior = MapGridGetMetatileBehaviorAt(x, y);

    if (MetatileBehavior_IsWaterfall(tileBehavior))
        return FALSE;

    if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_4))
        return FALSE;

    if (!TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_SURFING))
    {
        if (IsPlayerFacingSurfableFishableWater())
            return TRUE;
    }
    else
    {
        if (MetatileBehavior_IsSurfableWaterOrUnderwater(tileBehavior) && !MapGridIsImpassableAt(x, y))
            return TRUE;
        if (MetatileBehavior_IsBridge(tileBehavior) == TRUE)
            return TRUE;
    }

    return FALSE;
}

void ItemUseOutOfBattle_Rod(u8 taskId)
{
    if (CanFish() == TRUE)
    {
        gUnknown_03005D00 = (void *)ItemUseOnFieldCB_Rod;
        SetUpItemUseOnFieldCallback(taskId);
    }
    else
        DisplayDadsAdviceCannotUseItemMessage(taskId, gTasks[taskId].data[2]);
}

void ItemUseOnFieldCB_Rod(u8 taskId)
{
    StartFishing(ItemId_GetSecondaryId(gScriptItemId));
    DestroyTask(taskId);
}

void ItemUseOutOfBattle_Itemfinder(u8 var)
{
    IncrementGameStat(0x27);
    gUnknown_03005D00 = (void *)ItemUseOnFieldCB_Itemfinder;
    SetUpItemUseOnFieldCallback(var);
}

void ItemUseOnFieldCB_Itemfinder(u8 taskId)
{
    if (ItemfinderCheckForHiddenItems(gMapHeader.events, taskId) == TRUE)
        gTasks[taskId].func = RunItemfinderResults;
    else
        DisplayItemMessageOnField(taskId, gOtherText_NoResponse, ExitItemfinder, 0);
}

void RunItemfinderResults(u8 taskId)
{
    u8 playerDir;
    u8 playerDirToItem;
    u8 i;
    s16 *data = gTasks[taskId].data;

    if (!data[3])
    {
        if (data[4] == 4)
        {
            playerDirToItem = GetPlayerDirectionTowardsHiddenItem(data[0], data[1]);
            if (playerDirToItem)
            {
                SetPlayerDirectionTowardsItem(gItemFinderDirections[playerDirToItem - 1]);
                gTasks[taskId].func = DisplayItemRespondingMessageAndExitItemfinder;
            }
            else // player is above hidden item.
            {
                playerDir = player_get_direction_lower_nybble();

                // rotate player clockwise depending on current direction.
                for (i = 0; i < 4; i++)
                    if (playerDir == gItemFinderDirections[i])
                        data[5] = (i + 1) & 3;

                gTasks[taskId].func = RotatePlayerAndExitItemfinder;
                data[3] = 0;
                data[2] = 0;
            }
            return;
        }
        PlaySE(SE_DAUGI); // play the itemfinder jingle 4 times before executing the itemfinder.
        data[4]++;
    }
    data[3] = (data[3] + 1) & 0x1F;
}

void ExitItemfinder(u8 taskId)
{
    MenuZeroFillWindowRect(0, 14, 29, 19);
    sub_8064E2C();
    ScriptContext2_Disable();
    DestroyTask(taskId);
}

bool8 ItemfinderCheckForHiddenItems(struct MapEvents *events, u8 taskId)
{
    int distanceX, distanceY;
    u16 x, y;
    s16 newDistanceX, newDistanceY, i;

    PlayerGetDestCoords(&x, &y);
    gTasks[taskId].data[2] = FALSE;

    for (i = 0; i < events->bgEventCount; i++)
    {
        if ((events -> bgEvents[i].kind == 7) && !FlagGet(events -> bgEvents[i].bgUnion.hiddenItem.hiddenItemId + 600))
        {
            // do a distance lookup of each item so long as the index remains less than the objects on the current map.
            distanceX = (u16)events -> bgEvents[i].x + 7;
            newDistanceX = distanceX - x;
            distanceY = (u16)events -> bgEvents[i].y + 7;
            newDistanceY = distanceY - y;

            // is item in range?
            if ((u16)(newDistanceX + 7) < 15 && (newDistanceY >= -5) && (newDistanceY < 6))
                sub_80C9838(taskId, newDistanceX, newDistanceY); // send coordinates of the item relative to the player
        }
    }
    sub_80C9720(taskId);  

    // hidden item detected?
    if(gTasks[taskId].data[2] == TRUE)
        return TRUE;
    else
        return FALSE;
}

bool8 HiddenItemAtPos(struct MapEvents *events, s16 x, s16 y)
{
    u8 bgEventCount = events->bgEventCount;
    struct BgEvent *bgEvent = events->bgEvents;
    int i;

    for(i = 0; i < bgEventCount; i++)
    {
        if(bgEvent[i].kind == 7 && x == (u16)bgEvent[i].x && y == (u16)bgEvent[i].y) // hidden item and coordinates matches x and y passed?
        {
            if(!FlagGet(bgEvent[i].bgUnion.hiddenItem.hiddenItemId + 600))
                return TRUE;
            else
                return FALSE;
        }
    }
    return FALSE;
}

bool8 sub_80C9688(struct MapConnection *connection, int x, int y)
{
    struct MapHeader *mapHeader;
    u16 localX, localY;
    u32 localOffset;
    s32 localLength;
    
    mapHeader = mapconnection_get_mapheader(connection);
    
    switch(connection->direction)
    {
        // same weird temp variable behavior seen in HiddenItemAtPos
        case 2:
            localOffset = connection->offset + 7;
            localX = x - localOffset;
            localLength = mapHeader->mapData->height - 7;
            localY = localLength + y; // additions are reversed for some reason
            break;
        case 1:
            localOffset = connection->offset + 7;
            localX = x - localOffset;
            localLength = gMapHeader.mapData->height + 7;
            localY = y - localLength;
            break;
        case 3:
            localLength = mapHeader->mapData->width - 7;
            localX = localLength + x; // additions are reversed for some reason
            localOffset = connection->offset + 7;
            localY = y - localOffset;
            break;
        case 4:
            localLength = gMapHeader.mapData->width + 7;
            localX = x - localLength;
            localOffset = connection->offset + 7;
            localY = y - localOffset;
            break;
        default:
            return FALSE;
    }
    return HiddenItemAtPos(mapHeader->events, localX, localY);
}

// weird math
#ifdef NONMATCHING
void sub_80C9720(u8 taskId)
{
    s16 x, y;
    s16 curX, curY;
    s16 width = gMapHeader.mapData->width + 7;
    s16 height = gMapHeader.mapData->height + 7;

    PlayerGetDestCoords(&x, &y);

    for (curX = x - 7; curX <= x + 7; curX++)
    {
        for (curY = y - 5; curY <= y + 5; curY++)
        {
            if (7 > curX
             || curX >= width
             || 7 > curY
             || curY >= height)
            {
                struct MapConnection *conn = sub_8056BA0(curX, curY);
                if (conn && sub_80C9688(conn, curX, curY) == TRUE)
                    sub_80C9838(taskId, curX - x, curY - y);
            }
        }
    }
}
#else
__attribute__((naked))
void sub_80C9720(u8 taskId)
{
    asm(".syntax unified\n\
    push {r4-r7,lr}\n\
    mov r7, r10\n\
    mov r6, r9\n\
    mov r5, r8\n\
    push {r5-r7}\n\
    sub sp, 0x14\n\
    lsls r0, 24\n\
    lsrs r0, 24\n\
    str r0, [sp, 0x4]\n\
    ldr r0, _080C9834 @ =gMapHeader\n\
    ldr r1, [r0]\n\
    ldr r0, [r1]\n\
    adds r0, 0x7\n\
    lsls r0, 16\n\
    lsrs r0, 16\n\
    str r0, [sp, 0x8]\n\
    ldr r0, [r1, 0x4]\n\
    adds r0, 0x7\n\
    lsls r0, 16\n\
    lsrs r0, 16\n\
    str r0, [sp, 0xC]\n\
    mov r4, sp\n\
    adds r4, 0x2\n\
    mov r0, sp\n\
    adds r1, r4, 0\n\
    bl PlayerGetDestCoords\n\
    mov r0, sp\n\
    ldrh r0, [r0]\n\
    subs r0, 0x7\n\
    lsls r0, 16\n\
    lsrs r3, r0, 16\n\
    asrs r0, 16\n\
    mov r1, sp\n\
    movs r2, 0\n\
    ldrsh r1, [r1, r2]\n\
    adds r1, 0x7\n\
    cmp r0, r1\n\
    bgt _080C9824\n\
_080C976E:\n\
    mov r5, sp\n\
    ldrh r0, [r5, 0x2]\n\
    subs r0, 0x5\n\
    lsls r0, 16\n\
    lsrs r4, r0, 16\n\
    lsls r2, r4, 16\n\
    asrs r1, r2, 16\n\
    movs r6, 0x2\n\
    ldrsh r0, [r5, r6]\n\
    adds r0, 0x5\n\
    lsls r3, 16\n\
    mov r8, r3\n\
    cmp r1, r0\n\
    bgt _080C980E\n\
    movs r0, 0x7\n\
    str r0, [sp, 0x10]\n\
    mov r1, r8\n\
    asrs r1, 16\n\
    mov r9, r1\n\
    mov r10, r0\n\
_080C9796:\n\
    ldr r3, [sp, 0x10]\n\
    cmp r3, r9\n\
    bgt _080C97B8\n\
    ldr r5, [sp, 0x8]\n\
    lsls r0, r5, 16\n\
    asrs r0, 16\n\
    cmp r9, r0\n\
    bge _080C97B8\n\
    asrs r1, r2, 16\n\
    cmp r10, r1\n\
    bgt _080C97B8\n\
    ldr r6, [sp, 0xC]\n\
    lsls r0, r6, 16\n\
    asrs r0, 16\n\
    lsls r7, r4, 16\n\
    cmp r1, r0\n\
    blt _080C97F6\n\
_080C97B8:\n\
    mov r0, r8\n\
    asrs r5, r0, 16\n\
    lsls r4, 16\n\
    asrs r6, r4, 16\n\
    adds r0, r5, 0\n\
    adds r1, r6, 0\n\
    bl sub_8056BA0\n\
    adds r7, r4, 0\n\
    cmp r0, 0\n\
    beq _080C97F6\n\
    adds r1, r5, 0\n\
    adds r2, r6, 0\n\
    bl sub_80C9688\n\
    lsls r0, 24\n\
    lsrs r0, 24\n\
    cmp r0, 0x1\n\
    bne _080C97F6\n\
    mov r0, sp\n\
    ldrh r1, [r0]\n\
    subs r1, r5, r1\n\
    lsls r1, 16\n\
    asrs r1, 16\n\
    ldrh r2, [r0, 0x2]\n\
    subs r2, r6, r2\n\
    lsls r2, 16\n\
    asrs r2, 16\n\
    ldr r0, [sp, 0x4]\n\
    bl sub_80C9838\n\
_080C97F6:\n\
    movs r1, 0x80\n\
    lsls r1, 9\n\
    adds r0, r7, r1\n\
    lsrs r4, r0, 16\n\
    lsls r2, r4, 16\n\
    asrs r1, r2, 16\n\
    mov r3, sp\n\
    movs r5, 0x2\n\
    ldrsh r0, [r3, r5]\n\
    adds r0, 0x5\n\
    cmp r1, r0\n\
    ble _080C9796\n\
_080C980E:\n\
    movs r1, 0x80\n\
    lsls r1, 9\n\
    add r1, r8\n\
    lsrs r3, r1, 16\n\
    asrs r1, 16\n\
    mov r0, sp\n\
    movs r6, 0\n\
    ldrsh r0, [r0, r6]\n\
    adds r0, 0x7\n\
    cmp r1, r0\n\
    ble _080C976E\n\
_080C9824:\n\
    add sp, 0x14\n\
    pop {r3-r5}\n\
    mov r8, r3\n\
    mov r9, r4\n\
    mov r10, r5\n\
    pop {r4-r7}\n\
    pop {r0}\n\
    bx r0\n\
    .align 2, 0\n\
_080C9834: .4byte gMapHeader\n\
    .syntax divided");
}
#endif

void sub_80C9838(u8 taskId, s16 x, s16 y)
{
    s16 *data = gTasks[taskId].data;
    s16 var1, var2, var3, var4;
    
    if(data[2] == FALSE)
    {
        data[0] = x;
        data[1] = y;
        data[2] = TRUE;
    }
    else
    {
        // data[0] and data[1] contain the player's coordinates.
        // x and y contain the item's coordinates.
        if(data[0] < 0)
            var1 = data[0] * -1; // item is to the left
        else
            var1 = data[0]; // item is to the right
        
        if(data[1] < 0)
            var2 = data[1] * -1; // item is to the north
        else
            var2 = data[1]; // item is to the south
        
        if(x < 0)
            var3 = x * -1;
        else
            var3 = x;
        
        if(y < 0)
            var4 = y * -1;
        else
            var4 = y;
        
        if(var1 + var2 > var3 + var4)
        {
            data[0] = x;
            data[1] = y;
        }
        else
        {
            if(var1 + var2 == var3 + var4 && (var2 > var4 || (var2 == var4 && data[1] < y)))
            {
                data[0] = x;
                data[1] = y;
            }
        }
    }
}

u8 GetPlayerDirectionTowardsHiddenItem(s16 itemX, s16 itemY)
{
    s16 abX, abY;

    if(itemX == 0 && itemY == 0)
        return DIR_NONE; // player is standing on the item.

    // get absolute X distance.
    if(itemX < 0)
        abX = itemX * -1;
    else
        abX = itemX;

    // get absolute Y distance.
    if(itemY < 0)
        abY = itemY * -1;
    else
        abY = itemY;
    
    if(abX > abY)
    {
        if(itemX < 0)
            return DIR_EAST;
        else
            return DIR_NORTH;
    }
    else
    {
        if(abX < abY)
        {
            if(itemY < 0)
                return DIR_SOUTH;
            else
                return DIR_WEST;
        }
        if(abX == abY)
        {
            if(itemY < 0)
                return DIR_SOUTH;
            else
                return DIR_WEST;            
        }
        return DIR_NONE; // should never get here. return something so it doesnt crash.
    }
}

void SetPlayerDirectionTowardsItem(u8 direction)
{
    FieldObjectClearAnimIfSpecialAnimFinished(&gMapObjects[GetFieldObjectIdByLocalIdAndMap(0xFF, 0, 0)]);
    FieldObjectClearAnim(&gMapObjects[GetFieldObjectIdByLocalIdAndMap(0xFF, 0, 0)]);
    UnfreezeMapObject(&gMapObjects[GetFieldObjectIdByLocalIdAndMap(0xFF, 0, 0)]);
    PlayerTurnInPlace(direction);
}

void DisplayItemRespondingMessageAndExitItemfinder(u8 taskId)
{
    if(FieldObjectCheckIfSpecialAnimFinishedOrInactive(&gMapObjects[GetFieldObjectIdByLocalIdAndMap(0xFF, 0, 0)]) == TRUE)
        DisplayItemMessageOnField(taskId, gOtherText_ItemfinderResponding, ExitItemfinder, 0);
}

void RotatePlayerAndExitItemfinder(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    
    if(FieldObjectCheckIfSpecialAnimFinishedOrInactive(&gMapObjects[GetFieldObjectIdByLocalIdAndMap(0xFF, 0, 0)]) == TRUE
    || data[2] == FALSE)
    {
        SetPlayerDirectionTowardsItem(gItemFinderDirections[data[5]]);
        data[2] = 1;
        data[5] = (data[5] + 1) & 3;
        data[3]++;
        
        if(data[3] == 4)
            DisplayItemMessageOnField(taskId, gOtherText_ItemfinderItemUnderfoot, ExitItemfinder, 0);
    }
}

void ItemUseOutOfBattle_PokeblockCase(u8 taskId)
{
    if(sub_80F9344() == TRUE)
    {
        DisplayDadsAdviceCannotUseItemMessage(taskId, gTasks[taskId].data[2]);
    }
    else if(gTasks[taskId].data[2] != TRUE)
    {
        sub_810BA7C(0);
        ItemMenu_ConfirmNormalFade(taskId);
    }
    else
    {
        gUnknown_0300485C = (void *)sub_8080E28;
        sub_810BA7C(1);
        ItemMenu_ConfirmComplexFade(taskId);
    }
}

void ItemUseOutOfBattle_CoinCase(u8 taskId)
{
    ConvertIntToDecimalStringN(gStringVar1, GetCoins(), 0, 4);
    StringExpandPlaceholders(gStringVar4, gOtherText_Coins3);
    
    if(!gTasks[taskId].data[2])
    {
        MenuZeroFillWindowRect(0, 0xD, 0xD, 0x14);
        DisplayItemMessageOnField(taskId, gStringVar4, CleanUpItemMenuMessage, 1);
    }
    else
    {
        DisplayItemMessageOnField(taskId, gStringVar4, CleanUpOverworldMessage, 0);
    }
}

void sub_80C9BB8(u8 var)
{
    if(gMain.newKeys & A_BUTTON)
        CleanUpItemMenuMessage(var);
}

void sub_80C9BD8(u8 var)
{
    if(gMain.newKeys & A_BUTTON)
        CleanUpOverworldMessage(var);
}

// unused
void ItemUseOutOfBattle_SSTicket(u8 taskId)
{
    if(gTasks[taskId].data[2] == 0)
    {
        MenuZeroFillWindowRect(0, 0xD, 0xD, 0x14);
        DisplayItemMessageOnField(taskId, gUnknown_083D61DC[ItemId_GetSecondaryId(gScriptItemId)], sub_80C9BB8, 1);
    }
    else
    {
        DisplayItemMessageOnField(taskId, gUnknown_083D61DC[ItemId_GetSecondaryId(gScriptItemId)], sub_80C9BD8, 0);
    }
}

void sub_80C9C7C(u8 taskId)
{
    if(IsPlayerFacingPlantedBerryTree() == TRUE)
    {
        gUnknown_03005D00 = sub_80C9D00;
        gUnknown_0300485C = ExecuteItemUseFromBlackPalette;
        gTasks[taskId].data[8] = (u32)c2_exit_to_overworld_2_switch >> 16;
        gTasks[taskId].data[9] = (u32)c2_exit_to_overworld_2_switch;
        gTasks[taskId].func = HandleItemMenuPaletteFade;
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 0x10, 0);
    }
    else
    {
        ItemId_GetFieldFunc(gScriptItemId)(taskId);
    }
}

void sub_80C9D00(u8 taskId)
{
    RemoveBagItem(gScriptItemId, 1);
    ScriptContext2_Enable();
    ScriptContext1_SetupScript(gUnknown_081A1654);
    DestroyTask(taskId);
}

void ItemUseOutOfBattle_WailmerPail(u8 taskId)
{
    if(TryToWaterBerryTree() == TRUE)
    {
        gUnknown_03005D00 = sub_80C9D74;
        SetUpItemUseOnFieldCallback(taskId);
    }
    else
    {
        DisplayDadsAdviceCannotUseItemMessage(taskId, gTasks[taskId].data[2]);
    }
}

void sub_80C9D74(u8 taskId)
{
    ScriptContext2_Enable();
    ScriptContext1_SetupScript(gUnknown_081A168F);
    DestroyTask(taskId);
}

void sub_80C9D98(u8 taskId)
{
    gUnknown_02038561 = 0;
    ItemMenu_ConfirmNormalFade(taskId);
}

void ItemUseOutOfBattle_Medicine(u8 taskId)
{
    gUnknown_03004AE4 = UseMedicine;
    sub_80C9D98(taskId);
}

void ItemUseOutOfBattle_SacredAsh(u8 taskId)
{
    u8 i;
    
    gLastFieldPokeMenuOpened = 0;
    
    for(i = 0; i < 6; i++)
    {
        if(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) != 0 && GetMonData(&gPlayerParty[i], MON_DATA_HP) == 0)
        {
            gLastFieldPokeMenuOpened = i;
            break;
        }
    }
    gUnknown_03004AE4 = sub_8070048;
    gUnknown_02038561 = 4;
    ItemMenu_ConfirmNormalFade(taskId);
}
