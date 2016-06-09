LittlerootTown_ProfessorBirchsLab_MapScripts:: @ 8152C82
	map_script 3, LittlerootTown_ProfessorBirchsLab_MapScript1_152C92
	map_script 4, LittlerootTown_ProfessorBirchsLab_MapScript2_152C9D
	map_script 2, LittlerootTown_ProfessorBirchsLab_MapScript2_152CAC
	.byte 0

LittlerootTown_ProfessorBirchsLab_MapScript1_152C92:: @ 8152C92
	call LittlerootTown_ProfessorBirchsLab_EventScript_1A014E
	call LittlerootTown_ProfessorBirchsLab_EventScript_1A02F4
	end

LittlerootTown_ProfessorBirchsLab_MapScript2_152C9D:: @ 8152C9D
	map_script_2 0x4084, 2, LittlerootTown_ProfessorBirchsLab_EventScript_152CA7
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_152CA7:: @ 8152CA7
	spriteface 255, 2
	end

LittlerootTown_ProfessorBirchsLab_MapScript2_152CAC:: @ 8152CAC
	map_script_2 0x4084, 2, LittlerootTown_ProfessorBirchsLab_EventScript_152CBE
	map_script_2 0x4084, 4, LittlerootTown_ProfessorBirchsLab_EventScript_152D4A
	.2byte 0

LittlerootTown_ProfessorBirchsLab_EventScript_152CBE:: @ 8152CBE
	lockall
	bufferfirstpoke 0
	message LittlerootTown_ProfessorBirchsLab_Text_173D94
	waittext
	fanfare 370
	waitfanfare
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_173EF8
	callstd 5
	compare RESULT, 1
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152CEA
	compare RESULT, 0
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152CFA
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152CEA:: @ 8152CEA
	setvar 0x8004, 0
	call LittlerootTown_ProfessorBirchsLab_EventScript_1A0678
	jump LittlerootTown_ProfessorBirchsLab_EventScript_152CFA
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152CFA:: @ 8152CFA
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_173F3D
	callstd 5
	compare RESULT, 1
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152D19
	compare RESULT, 0
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152D2B
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D19:: @ 8152D19
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174015
	callstd 4
	clearflag 991
	setvar 0x4084, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D2B:: @ 8152D2B
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174075
	callstd 5
	compare RESULT, 1
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152D19
	compare RESULT, 0
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152D2B
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D4A:: @ 8152D4A
	lockall
	move 255, LittlerootTown_ProfessorBirchsLab_Movement_152D5B
	waitmove 0
	jump LittlerootTown_ProfessorBirchsLab_EventScript_152DBA
	end

LittlerootTown_ProfessorBirchsLab_Movement_152D5B:: @ 8152D5B
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_152D63:: @ 8152D63
	lock
	faceplayer
	compare 0x4084, 3
	jumpif 4, LittlerootTown_ProfessorBirchsLab_EventScript_152D90
	checkflag 88
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152D86
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_173B29
	callstd 4
	setflag 88
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D86:: @ 8152D86
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_173C88
	callstd 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D90:: @ 8152D90
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_173D15
	callstd 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152D9A:: @ 8152D9A
	lock
	faceplayer
	checkflag 896
	jumpif 0, LittlerootTown_ProfessorBirchsLab_EventScript_1A037F
	compare 0x4084, 5
	jumpeq LittlerootTown_ProfessorBirchsLab_EventScript_152E7B
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_1740B4
	callstd 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152DBA:: @ 8152DBA
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17411F
	callstd 4
	call LittlerootTown_ProfessorBirchsLab_EventScript_152E6D
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174248
	callstd 4
	move 3, LittlerootTown_ProfessorBirchsLab_Movement_152E97
	waitmove 0
	move 255, LittlerootTown_ProfessorBirchsLab_Movement_1A0843
	waitmove 0
	checkgender
	compare RESULT, 0
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152E13
	compare RESULT, 1
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152E40
	setvar 0x4084, 5
	setflag 116
	setvar 0x4051, 1
	setvar 0x408d, 4
	setvar 0x4050, 3
	releaseall
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152E13:: @ 8152E13
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_1743D4
	callstd 4
	setorcopyvar 0x8000, 0x4
	setorcopyvar 0x8001, 0x5
	callstd 0
	compare RESULT, 0
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152E85
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17443D
	callstd 4
	setvar RESULT, 0
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152E40:: @ 8152E40
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17453C
	callstd 4
	setorcopyvar 0x8000, 0x4
	setorcopyvar 0x8001, 0x5
	callstd 0
	compare RESULT, 0
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152E8E
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17458C
	callstd 4
	setvar RESULT, 1
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152E6D:: @ 8152E6D
	fanfare 370
	message LittlerootTown_ProfessorBirchsLab_Text_17422F
	waitfanfare
	waittext
	setflag 2049
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152E7B:: @ 8152E7B
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17436C
	callstd 4
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152E85:: @ 8152E85
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_1744F0
	callstd 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152E8E:: @ 8152E8E
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_17465B
	callstd 4
	return

LittlerootTown_ProfessorBirchsLab_Movement_152E97:: @ 8152E97
	step_down
	step_27
	step_end

LittlerootTown_ProfessorBirchsLab_EventScript_152E9A:: @ 8152E9A
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_1746A2
	callstd 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152EA3:: @ 8152EA3
	lock
	faceplayer
	checkgender
	compare RESULT, 0
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152EBE
	compare RESULT, 1
	callif 1, LittlerootTown_ProfessorBirchsLab_EventScript_152EC7
	release
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152EBE:: @ 8152EBE
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174505
	callstd 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152EC7:: @ 8152EC7
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174671
	callstd 4
	return

LittlerootTown_ProfessorBirchsLab_EventScript_152ED0:: @ 8152ED0
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_1746E7
	callstd 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152ED9:: @ 8152ED9
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174724
	callstd 3
	end

LittlerootTown_ProfessorBirchsLab_EventScript_152EE2:: @ 8152EE2
	loadptr 0, LittlerootTown_ProfessorBirchsLab_Text_174748
	callstd 3
	end

