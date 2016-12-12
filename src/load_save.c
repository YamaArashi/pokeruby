#include "global.h"
#include "main.h"
#include "rom4.h"
#include "pokemon.h"

extern u8 gPlayerPartyCount;
extern u32 gUnknown_3004820;

extern u16 IdentifyFlash(void);
extern void gpu_sync_bg_hide();

void CheckForFlashMemory(void)
{
    if(!IdentifyFlash())
    {
        gUnknown_3004820 = 1;
        InitFlashTimer();
    }
    else
        gUnknown_3004820 = 0;
}

u8 GetSecretBase2Field_9(void)
{
    return gSaveBlock2.sb2_field_9;
}

void ClearSecretBase2Field_9(void)
{
    gSaveBlock2.sb2_field_9 = 0;
}

void SetSecretBase2Field_9(void)
{
    gSaveBlock2.sb2_field_9 = 1;
}

void SetSecretBase2Field_9_AndHideBG(void) // note: no other function sets sb2_field_9 to values other than 0 or 1, hence clear and set distinctions.
{
	gpu_sync_bg_hide(0); // the function doesn't use the parameter passed to it, but this is necessary to match.
	gSaveBlock2.sb2_field_9 = 1;
}

void ClearSecretBase2Field_9_2(void) // duplicate function
{
    gSaveBlock2.sb2_field_9 = 0;
}

void SavePlayerParty(void)
{
    int i;

    gSaveBlock1.playerPartyCount = gPlayerPartyCount;

    for (i = 0; i < 6; i++)
        gSaveBlock1.playerParty[i] = gPlayerParty[i];
}

void LoadPlayerParty(void)
{
	int i;

    gPlayerPartyCount = gSaveBlock1.playerPartyCount;

    for (i = 0; i < 6; i++)
        gPlayerParty[i] = gSaveBlock1.playerParty[i];
}

void SaveMapObjects(void)
{
	int i;
	
	for(i = 0; i < 16; i++)
		gSaveBlock1.mapObjects[i] = gMapObjects[i];
}

void LoadMapObjects(void)
{
	int i;
	
	for(i = 0; i < 16; i++)
		gMapObjects[i] = gSaveBlock1.mapObjects[i];
}

void SaveSerializedGame(void)
{
	SavePlayerParty();
	SaveMapObjects();
}

void LoadSerializedGame(void)
{
	LoadPlayerParty();
	LoadMapObjects();
}

/*
	thumb_func_start save_serialize_game
save_serialize_game: @ 8047B3C
	push {lr}
	bl SavePlayerParty
	bl SaveMapObjects
	pop {r0}
	bx r0
	thumb_func_end save_serialize_game

	thumb_func_start save_deserialize_game
save_deserialize_game: @ 8047B4C
	push {lr}
	bl LoadPlayerParty
	bl LoadMapObjects
	pop {r0}
	bx r0
	thumb_func_end save_deserialize_game
*/