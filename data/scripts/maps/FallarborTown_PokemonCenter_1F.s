FallarborTown_PokemonCenter_1F_MapScripts:: @ 8153AF3
	map_script 3, FallarborTown_PokemonCenter_1F_MapScript1_153AF9
	.byte 0

FallarborTown_PokemonCenter_1F_MapScript1_153AF9:: @ 8153AF9
	sethealplace 17
	call FallarborTown_PokemonCenter_1F_EventScript_19FD1B
	end

FallarborTown_PokemonCenter_1F_EventScript_153B02:: @ 8153B02
	setvar 0x800b, 1
	call FallarborTown_PokemonCenter_1F_EventScript_19FD5B
	waittext
	waitbutton
	release
	end

FallarborTown_PokemonCenter_1F_EventScript_153B10:: @ 8153B10
	msgbox FallarborTown_PokemonCenter_1F_Text_17768C, 2
	end

FallarborTown_PokemonCenter_1F_EventScript_153B19:: @ 8153B19
	msgbox FallarborTown_PokemonCenter_1F_Text_1776F5, 2
	end

FallarborTown_PokemonCenter_1F_EventScript_153B22:: @ 8153B22
	lock
	faceplayer
	msgbox FallarborTown_PokemonCenter_1F_Text_1774D4, 4
	closebutton
	switch FACING
	case 2, FallarborTown_PokemonCenter_1F_EventScript_153B49
	case 3, FallarborTown_PokemonCenter_1F_EventScript_153B59
	end

FallarborTown_PokemonCenter_1F_EventScript_153B49:: @ 8153B49
	move 4, FallarborTown_PokemonCenter_1F_Movement_153B74
	waitmove 0
	jump FallarborTown_PokemonCenter_1F_EventScript_153B69
	end

FallarborTown_PokemonCenter_1F_EventScript_153B59:: @ 8153B59
	move 4, FallarborTown_PokemonCenter_1F_Movement_153B81
	waitmove 0
	jump FallarborTown_PokemonCenter_1F_EventScript_153B69
	end

FallarborTown_PokemonCenter_1F_EventScript_153B69:: @ 8153B69
	playsfx 18
	disappear 4
	clearflag 870
	release
	end

FallarborTown_PokemonCenter_1F_Movement_153B74:: @ 8153B74
	step_right
	step_down
	step_down
	step_left
	step_left
	step_left
	step_left
	step_down
	step_down
	step_down
	step_down
	step_13
	step_end

FallarborTown_PokemonCenter_1F_Movement_153B81:: @ 8153B81
	step_down
	step_down
	step_left
	step_left
	step_left
	step_down
	step_down
	step_down
	step_down
	step_13
	step_end
