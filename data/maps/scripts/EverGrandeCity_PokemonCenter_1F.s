EverGrandeCity_PokemonCenter_1F_MapScripts:: @ 815BC66
	map_script 3, EverGrandeCity_PokemonCenter_1F_MapScript1_15BC6C
	.byte 0

EverGrandeCity_PokemonCenter_1F_MapScript1_15BC6C:: @ 815BC6C
	sethealplace 11
	end

EverGrandeCity_PokemonCenter_1F_EventScript_15BC70:: @ 815BC70
SootopolisCity_PokemonCenter_1F_EventScript_15BC70:: @ 815BC70
	setvar 0x800b, 1
	call SootopolisCity_PokemonCenter_1F_EventScript_19FD5B
	waittext
	waitbutton
	release
	end

EverGrandeCity_PokemonCenter_1F_EventScript_15BC7E:: @ 815BC7E
	loadptr 0, EverGrandeCity_PokemonCenter_1F_Text_191967
	callstd 2
	end

EverGrandeCity_PokemonCenter_1F_EventScript_15BC87:: @ 815BC87
	loadptr 0, EverGrandeCity_PokemonCenter_1F_Text_1919EF
	callstd 2
	end

