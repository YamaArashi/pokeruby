LilycoveCity_DepartmentStore_2F_MapScripts:: @ 8159F0E
	.byte 0

LilycoveCity_DepartmentStore_2F_EventScript_159F0F:: @ 8159F0F
	loadptr 0, LilycoveCity_DepartmentStore_2F_Text_18C162
	callstd 2
	end

LilycoveCity_DepartmentStore_2F_EventScript_159F18:: @ 8159F18
	loadptr 0, LilycoveCity_DepartmentStore_2F_Text_18C195
	callstd 2
	end

LilycoveCity_DepartmentStore_2F_EventScript_159F21:: @ 8159F21
	loadptr 0, LilycoveCity_DepartmentStore_2F_Text_18C1D9
	callstd 2
	end

LilycoveCity_DepartmentStore_2F_EventScript_159F2A:: @ 8159F2A
	lock
	faceplayer
	message LilycoveCity_DepartmentStore_2F_Text_1A0BE4
	waittext
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart_159F44
	loadptr 0, LilycoveCity_DepartmentStore_2F_Text_1A0C02
	callstd 4
	release
	end

	.incbin "baserom.gba", 0x159f41, 0x3

LilycoveCity_DepartmentStore_2F_Pokemart_159F44:: @ 8159F44
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_BURN_HEAL
	.2byte ITEM_ICE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE
	release
	end

LilycoveCity_DepartmentStore_2F_EventScript_159F5E:: @ 8159F5E
	lock
	faceplayer
	message LilycoveCity_DepartmentStore_2F_Text_1A0BE4
	waittext
	pokemart LilycoveCity_DepartmentStore_2F_Pokemart_159F78
	loadptr 0, LilycoveCity_DepartmentStore_2F_Text_1A0C02
	callstd 4
	release
	end

	.incbin "baserom.gba", 0x159f75, 0x3

LilycoveCity_DepartmentStore_2F_Pokemart_159F78:: @ 8159F78
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_MAX_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_WAVE_MAIL
	.2byte ITEM_MECH_MAIL
	.2byte ITEM_NONE
	release
	end

