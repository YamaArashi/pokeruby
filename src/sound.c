#include "global.h"
#include "gba/m4a_internal.h"
#include "task.h"
#include "sound.h"
#include "songs.h"

struct Fanfare
{
    u16 songNum;
    u16 duration;
};

extern u32 SpeciesToCryId(u32);

extern u16 gUnknown_020239F8;
extern struct MusicPlayerInfo *gMPlay_PokemonCry;
extern u8 gPokemonCryBGMDuckingCounter;

static u16 sCurrentMapMusic;
static u16 sNextMapMusic;
static u8 sMapMusicState;
static u8 sMapMusicFadeInSpeed;
static u16 sFanfareCounter;

extern bool8 gDisableMusic;
extern struct MusicPlayerInfo gMPlay_BGM;
extern struct MusicPlayerInfo gMPlay_SE1;
extern struct MusicPlayerInfo gMPlay_SE2;
extern struct MusicPlayerInfo gMPlay_SE3;

extern struct Fanfare gFanfares[];

extern struct ToneData voicegroup_8452590[];
extern struct ToneData voicegroup_8452B90[];
extern struct ToneData voicegroup_8453190[];
extern struct ToneData voicegroup_8453790[];

extern struct ToneData voicegroup_84537C0[];
extern struct ToneData voicegroup_8453DC0[];
extern struct ToneData voicegroup_84543C0[];
extern struct ToneData voicegroup_84549C0[];

static void Task_Fanfare(u8 taskId);
static void CreateFanfareTask(void);
static void PlayCryInternal(u16 species, s8 pan, s8 volume, u8 priority, u8 mode);
static void Task_DuckBGMForPokemonCry(u8 taskId);
static void RestoreBGMVolumeAfterPokemonCry(void);

void InitMapMusic(void)
{
    gDisableMusic = FALSE;
    ResetMapMusic();
}

void MapMusicMain(void)
{
    switch (sMapMusicState)
    {
    case 0:
        break;
    case 1:
        sMapMusicState = 2;
        PlayBGM(sCurrentMapMusic);
        break;
    case 2:
    case 3:
    case 4:
        break;
    case 5:
        if (IsBGMStopped())
        {
            sNextMapMusic = 0;
            sMapMusicState = 0;
        }
        break;
    case 6:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            PlayBGM(sCurrentMapMusic);
        }
        break;
    case 7:
        if (IsBGMStopped() && IsFanfareTaskInactive())
        {
            FadeInNewBGM(sNextMapMusic, sMapMusicFadeInSpeed);
            sCurrentMapMusic = sNextMapMusic;
            sNextMapMusic = 0;
            sMapMusicState = 2;
            sMapMusicFadeInSpeed = 0;
        }
        break;
    }
}

void ResetMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 0;
    sMapMusicFadeInSpeed = 0;
}

u16 GetCurrentMapMusic(void)
{
    return sCurrentMapMusic;
}

void PlayNewMapMusic(u16 songNum)
{
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void StopMapMusic(void)
{
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 1;
}

void FadeOutMapMusic(u8 speed)
{
    if (IsNotWaitingForBGMStop())
        FadeOutBGM(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = 0;
    sMapMusicState = 5;
}

void FadeOutAndPlayNewMapMusic(u16 songNum, u8 speed)
{
    FadeOutMapMusic(speed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 6;
}

void FadeOutAndFadeInNewMapMusic(u16 songNum, u8 fadeOutSpeed, u8 fadeInSpeed)
{
    FadeOutMapMusic(fadeOutSpeed);
    sCurrentMapMusic = 0;
    sNextMapMusic = songNum;
    sMapMusicState = 7;
    sMapMusicFadeInSpeed = fadeInSpeed;
}

void FadeInNewMapMusic(u16 songNum, u8 speed)
{
    FadeInNewBGM(songNum, speed);
    sCurrentMapMusic = songNum;
    sNextMapMusic = 0;
    sMapMusicState = 2;
    sMapMusicFadeInSpeed = 0;
}

bool8 IsNotWaitingForBGMStop(void)
{
    if (sMapMusicState == 6)
        return FALSE;
    if (sMapMusicState == 5)
        return FALSE;
    if (sMapMusicState == 7)
        return FALSE;
    return TRUE;
}

void PlayFanfareByFanfareNum(u8 fanfareNum)
{
    struct Fanfare *fanfares;
    struct Fanfare *fanfare;
    u16 songNum;
    m4aMPlayStop(&gMPlay_BGM);
    fanfares = gFanfares;
    fanfare = &fanfares[fanfareNum];
    songNum = fanfare->songNum;
    sFanfareCounter = fanfare->duration;
    m4aSongNumStart(songNum);
}

bool8 WaitFanfare(bool8 stop)
{
    if (sFanfareCounter)
    {
        sFanfareCounter--;
        return FALSE;
    }
    else
    {
        if (!stop)
            m4aMPlayContinue(&gMPlay_BGM);
        else
            m4aSongNumStart(SE_STOP);

        return TRUE;
    }
}

void StopFanfareByFanfareNum(u8 fanfareNum)
{
    m4aSongNumStop(gFanfares[fanfareNum].songNum);
}

void PlayFanfare(u16 songNum)
{
    s32 i;
    for (i = 0; (u32)i < 12; i++)
    {
        struct Fanfare *fanfare = &gFanfares[i];
        if (fanfare->songNum == songNum)
        {
            PlayFanfareByFanfareNum(i);
            CreateFanfareTask();
            return;
        }
    }

    PlayFanfareByFanfareNum(0);
    CreateFanfareTask();
}

bool8 IsFanfareTaskInactive(void)
{
    if (FuncIsActiveTask(Task_Fanfare) == TRUE)
        return FALSE;
    return TRUE;
}

static void Task_Fanfare(u8 taskId)
{
    if (sFanfareCounter)
    {
        sFanfareCounter--;
    }
    else
    {
        m4aMPlayContinue(&gMPlay_BGM);
        DestroyTask(taskId);
    }
}

static void CreateFanfareTask(void)
{
    if (FuncIsActiveTask(Task_Fanfare) != TRUE)
        CreateTask(Task_Fanfare, 80);
}

void FadeInNewBGM(u16 songNum, u8 speed)
{
    if (gDisableMusic)
        songNum = 0;
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlay_BGM);
    m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 0);
    m4aSongNumStop(songNum);
    m4aMPlayFadeIn(&gMPlay_BGM, speed);
}

void FadeOutBGMTemporarily(u8 speed)
{
    m4aMPlayFadeOutTemporarily(&gMPlay_BGM, speed);
}

bool8 IsBGMPausedOrStopped(void)
{
    if (gMPlay_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return TRUE;
    if (!(gMPlay_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void FadeInBGM(u8 speed)
{
    m4aMPlayFadeIn(&gMPlay_BGM, speed);
}

void FadeOutBGM(u8 speed)
{
    m4aMPlayFadeOut(&gMPlay_BGM, speed);
}

bool8 IsBGMStopped(void)
{
    if (!(gMPlay_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return TRUE;
    return FALSE;
}

void PlayCry1(u16 species, s8 pan)
{
    m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 85);
    PlayCryInternal(species, pan, 125, 10, 0);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

void PlayCry2(u16 species, s8 pan, s8 volume, u8 priority)
{
    PlayCryInternal(species, pan, volume, priority, 0);
}

void PlayCry3(u16 species, s8 pan, u8 mode)
{
    if (mode == 1)
    {
        PlayCryInternal(species, pan, 125, 10, 1);
    }
    else
    {
        m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 85);
        PlayCryInternal(species, pan, 125, 10, mode);
        gPokemonCryBGMDuckingCounter = 2;
        RestoreBGMVolumeAfterPokemonCry();
    }
}

void PlayCry4(u16 species, s8 pan, u8 mode)
{
    if (mode == 1)
    {
        PlayCryInternal(species, pan, 125, 10, 1);
    }
    else
    {
        if (!(gUnknown_020239F8 & 0x40))
            m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 85);
        PlayCryInternal(species, pan, 125, 10, mode);
    }
}

void PlayCry5(u16 species, u8 mode)
{
    m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 85);
    PlayCryInternal(species, 0, 125, 10, mode);
    gPokemonCryBGMDuckingCounter = 2;
    RestoreBGMVolumeAfterPokemonCry();
}

#define GET_CRY_PTR(a, b)\
{\
    struct ToneData *tone;\
    if (v0)\
        tone = &a[index];\
    else\
        tone = &b[index];\
    gMPlay_PokemonCry = SetPokemonCryTone(tone);\
    break;\
}

static void PlayCryInternal(u16 species, s8 pan, s8 volume, u8 priority, u8 mode)
{
    u32 cryId;
    u32 v0;
    u32 release;
    u32 length;
    u32 pitch;
    u32 chorus;
    u32 index;
    u8 table;

    species--;

    cryId = species;

    v0 = 0;
    release = 0;
    length = 140;
    pitch = 15360;
    chorus = 0;

    switch (mode)
    {
    case 0:
        break;
    case 1:
        length = 20;
        release = 225;
        break;
    case 2:
        length = 30;
        release = 225;
        pitch = 15600;
        chorus = 20;
        volume = 80;
        break;
    case 3:
        length = 50;
        release = 200;
        pitch = 14800;
        break;
    case 4:
        length = 20;
        release = 220;
        pitch = 15800;
        break;
    case 5:
        release = 200;
        pitch = 14500;
        break;
    }

    SetPokemonCryVolume(volume);
    SetPokemonCryPanpot(pan);
    SetPokemonCryPitch(pitch);
    SetPokemonCryLength(length);
    SetPokemonCryProgress(0);
    SetPokemonCryRelease(release);
    SetPokemonCryChorus(chorus);
    SetPokemonCryPriority(priority);

    asm("");
    asm("");
    asm("");
    asm("");
    asm("");
    asm("");
    asm("");

    cryId = SpeciesToCryId(cryId);
    index = 0x7F;
    asm("" ::: "r0");
    index &= cryId;
    table = cryId >> 7;

    switch (table)
    {
    case 0: GET_CRY_PTR(voicegroup_84537C0, voicegroup_8452590);
    case 1: GET_CRY_PTR(voicegroup_8453DC0, voicegroup_8452B90);
    case 2: GET_CRY_PTR(voicegroup_84543C0, voicegroup_8453190);
    case 3: GET_CRY_PTR(voicegroup_84549C0, voicegroup_8453790);
    }
}

bool8 IsCryFinished(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) == TRUE)
    {
        return FALSE;
    }
    else
    {
        ClearPokemonCrySongs();
        return TRUE;
    }
}

void StopCryAndClearCrySongs(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
    ClearPokemonCrySongs();
}

void StopCry(void)
{
    m4aMPlayStop(gMPlay_PokemonCry);
}

bool8 IsCryPlayingOrClearCrySongs(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        return TRUE;
    }
    else
    {
        ClearPokemonCrySongs();
        return FALSE;
    }
}

bool8 IsCryPlaying(void)
{
    if (IsPokemonCryPlaying(gMPlay_PokemonCry))
        return TRUE;
    else
        return FALSE;
}

static void Task_DuckBGMForPokemonCry(u8 taskId)
{
    if (gPokemonCryBGMDuckingCounter)
    {
        gPokemonCryBGMDuckingCounter--;
        return;
    }

    if (!IsPokemonCryPlaying(gMPlay_PokemonCry))
    {
        m4aMPlayVolumeControl(&gMPlay_BGM, 0xFFFF, 256);
        DestroyTask(taskId);
    }
}

static void RestoreBGMVolumeAfterPokemonCry(void)
{
    if (FuncIsActiveTask(Task_DuckBGMForPokemonCry) != TRUE)
        CreateTask(Task_DuckBGMForPokemonCry, 80);
}

void PlayBGM(u16 songNum)
{
    if (gDisableMusic)
        songNum = 0;
    m4aSongNumStart(songNum);
}

void PlaySE(u16 songNum)
{
    m4aSongNumStart(songNum);
}

void PlaySE12WithPanning(u16 songNum, u8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlay_SE1);
    m4aMPlayImmInit(&gMPlay_SE2);
    m4aMPlayPanpotControl(&gMPlay_SE1, 0xFFFF, pan);
    m4aMPlayPanpotControl(&gMPlay_SE2, 0xFFFF, pan);
}

void PlaySE1WithPanning(u16 songNum, u8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlay_SE1);
    m4aMPlayPanpotControl(&gMPlay_SE1, 0xFFFF, pan);
}

void PlaySE2WithPanning(u16 songNum, u8 pan)
{
    m4aSongNumStart(songNum);
    m4aMPlayImmInit(&gMPlay_SE2);
    m4aMPlayPanpotControl(&gMPlay_SE2, 0xFFFF, pan);
}

void SE12PanpotControl(u8 pan)
{
    m4aMPlayPanpotControl(&gMPlay_SE1, 0xFFFF, pan);
    m4aMPlayPanpotControl(&gMPlay_SE2, 0xFFFF, pan);
}

bool8 IsSEPlaying(void)
{
    if ((gMPlay_SE1.status & MUSICPLAYER_STATUS_PAUSE) && (gMPlay_SE2.status & MUSICPLAYER_STATUS_PAUSE))
        return FALSE;
    if (!(gMPlay_SE1.status & MUSICPLAYER_STATUS_TRACK) && !(gMPlay_SE2.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsBGMPlaying(void)
{
    if (gMPlay_BGM.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlay_BGM.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}

bool8 IsSpecialSEPlaying(void)
{
    if (gMPlay_SE3.status & MUSICPLAYER_STATUS_PAUSE)
        return FALSE;
    if (!(gMPlay_SE3.status & MUSICPLAYER_STATUS_TRACK))
        return FALSE;
    return TRUE;
}
