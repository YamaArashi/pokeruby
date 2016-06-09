Route111_MapScripts:: @ 814FF91
	map_script 1, Route111_MapScript1_14FF9C
	map_script 3, Route111_MapScript1_14FFB9
	.byte 0

Route111_MapScript1_14FF9C:: @ 814FF9C
	checkflag 228
	callif 0, Route111_EventScript_14FFA6
	end

Route111_EventScript_14FFA6:: @ 814FFA6
	setmaptile 29, 86, 124, 1
	setmaptile 29, 87, 145, 1
	return

Route111_MapScript1_14FFB9:: @ 814FFB9
	call Route111_EventScript_14FFCD
	call Route111_EventScript_1AE313
	checktrainerflag 312
	jumpif 0, Route111_EventScript_15000D
	end

Route111_EventScript_14FFCD:: @ 814FFCD
	getplayerxy 0x4000, 0x4001
	compare 0x4001, 34
	jumpif 0, Route111_EventScript_15000C
	compare 0x4001, 107
	jumpif 2, Route111_EventScript_15000C
	compare 0x4001, 72
	jumpif 2, Route111_EventScript_150009
	compare 0x4000, 2000
	jumpif 2, Route111_EventScript_15000C
	compare 0x4000, 8
	jumpif 0, Route111_EventScript_15000C

Route111_EventScript_150009:: @ 8150009
	setweather 8

Route111_EventScript_15000C:: @ 815000C
	return

Route111_EventScript_15000D:: @ 815000D
	clearflag 768
	setflag 769
	setflag 770
	setflag 771
	settrainerflag 292
	settrainerflag 299
	settrainerflag 606
	end

Route111_EventScript_150023:: @ 8150023
	lockall
	loadptr 0, Route111_Text_16FA54
	callstd 5
	compare RESULT, 0
	jumpeq Route111_EventScript_15005F
	setorcopyvar 0x8000, 0x11e
	setorcopyvar 0x8001, 0x1
	callstd 0
	closebutton
	setflag 963
	setflag 964
	disappear 34
	pause 30
	move 35, Route111_Movement_1500AF
	waitmove 0
	disappear 35
	releaseall
	end

Route111_EventScript_15005F:: @ 815005F
	loadptr 0, Route111_Text_16FACE
	callstd 4
	releaseall
	end

Route111_EventScript_150069:: @ 8150069
	lockall
	loadptr 0, Route111_Text_16FAED
	callstd 5
	compare RESULT, 0
	jumpeq Route111_EventScript_1500A5
	setorcopyvar 0x8000, 0x11f
	setorcopyvar 0x8001, 0x1
	callstd 0
	closebutton
	setflag 964
	setflag 963
	disappear 35
	pause 30
	move 34, Route111_Movement_1500AF
	waitmove 0
	disappear 34
	releaseall
	end

Route111_EventScript_1500A5:: @ 81500A5
	loadptr 0, Route111_Text_16FB67
	callstd 4
	releaseall
	end

Route111_Movement_1500AF:: @ 81500AF
	step_55
	step_12
	step_54
	step_12
	step_55
	step_12
	step_54
	step_12
	step_55
	step_13
	step_54
	step_13
	step_55
	step_13
	step_54
	step_13
	step_55
	step_14
	step_54
	step_14
	step_55
	step_end

Route111_EventScript_1500C5:: @ 81500C5
	lock
	faceplayer
	checkdailyflags
	checkflag 2252
	jumpeq Route111_EventScript_150100
	loadptr 0, Route111_Text_1C56F0
	callstd 4
	setorcopyvar 0x8000, 0x94
	setorcopyvar 0x8001, 0x1
	callstd 0
	compare RESULT, 0
	jumpeq Route111_EventScript_1A029B
	setflag 2252
	special 148
	loadptr 0, Route111_Text_1C5781
	callstd 4
	release
	end

Route111_EventScript_150100:: @ 8150100
	loadptr 0, Route111_Text_1C57D2
	callstd 4
	release
	end

	.incbin "baserom.gba", 0x15010a, 0xc

Route111_EventScript_150116:: @ 8150116
	lockall
	setvar 0x8004, 1
	jump Route111_EventScript_15013A
	end

Route111_EventScript_150122:: @ 8150122
	lockall
	setvar 0x8004, 2
	jump Route111_EventScript_15013A
	end

	.incbin "baserom.gba", 0x15012e, 0xc

Route111_EventScript_15013A:: @ 815013A
	checkitem ITEM_GO_GOGGLES, 1
	compare RESULT, 0
	jumpeq Route111_EventScript_150151
	setvar 0x4003, 1
	releaseall
	end

Route111_EventScript_150151:: @ 8150151
	loadptr 0, Route111_Text_1A0F93
	callstd 4
	closebutton
	compare 0x8004, 0
	callif 1, Route111_EventScript_150188
	compare 0x8004, 1
	callif 1, Route111_EventScript_150193
	compare 0x8004, 2
	callif 1, Route111_EventScript_15019E
	compare 0x8004, 3
	callif 1, Route111_EventScript_1501A9
	releaseall
	end

Route111_EventScript_150188:: @ 8150188
	move 255, Route111_Movement_1501B4
	waitmove 0
	return

Route111_EventScript_150193:: @ 8150193
	move 255, Route111_Movement_1501B6
	waitmove 0
	return

Route111_EventScript_15019E:: @ 815019E
	move 255, Route111_Movement_1501B8
	waitmove 0
	return

Route111_EventScript_1501A9:: @ 81501A9
	move 255, Route111_Movement_1501BA
	waitmove 0
	return

Route111_Movement_1501B4:: @ 81501B4
	step_up
	step_end

Route111_Movement_1501B6:: @ 81501B6
	step_down
	step_end

Route111_Movement_1501B8:: @ 81501B8
	step_left
	step_end

Route111_Movement_1501BA:: @ 81501BA
	step_right
	step_end

Route111_EventScript_1501BC:: @ 81501BC
	setweather 2
	fademusic 360
	doweather
	setvar 0x4003, 0
	end

Route111_EventScript_1501C9:: @ 81501C9
	setweather 8
	fademusic 409
	doweather
	end

Route111_EventScript_1501D1:: @ 81501D1
	lock
	faceplayer
	setflag 2115
	loadptr 0, Route111_Text_16F705
	callstd 5
	compare RESULT, 1
	jumpeq Route111_EventScript_1501F3
	loadptr 0, Route111_Text_16F785
	callstd 4
	release
	end

Route111_EventScript_1501F3:: @ 81501F3
	loadptr 0, Route111_Text_16F7B3
	callstd 4
	trainerbattle 3, 292, 0, Route111_Text_16F7D2
	move 1, Route111_Movement_1A0841
	waitmove 0
	call Route111_EventScript_150348
	loadptr 0, Route111_Text_16F7FF
	callstd 4
	closebutton
	move 1, Route111_Movement_150356
	waitmove 0
	disappear 1
	call Route111_EventScript_15034F
	move 255, Route111_Movement_15035B
	waitmove 0
	call Route111_EventScript_150348
	reappear 2
	move 2, Route111_Movement_150359
	waitmove 0
	call Route111_EventScript_15034F
	loadptr 0, Route111_Text_16F82D
	callstd 4
	trainerbattle 3, 299, 0, Route111_Text_16F8A6
	move 2, Route111_Movement_1A0841
	waitmove 0
	call Route111_EventScript_150348
	loadptr 0, Route111_Text_16F8D5
	callstd 4
	closebutton
	move 2, Route111_Movement_150356
	waitmove 0
	disappear 2
	call Route111_EventScript_15034F
	move 255, Route111_Movement_15035B
	waitmove 0
	call Route111_EventScript_150348
	reappear 3
	move 3, Route111_Movement_150359
	waitmove 0
	call Route111_EventScript_15034F
	loadptr 0, Route111_Text_16F90E
	callstd 4
	trainerbattle 3, 606, 0, Route111_Text_16F956
	move 3, Route111_Movement_1A0841
	waitmove 0
	call Route111_EventScript_150348
	loadptr 0, Route111_Text_16F96C
	callstd 4
	closebutton
	move 3, Route111_Movement_150356
	waitmove 0
	disappear 3
	call Route111_EventScript_15034F
	move 255, Route111_Movement_15035B
	waitmove 0
	call Route111_EventScript_150348
	reappear 4
	move 4, Route111_Movement_150359
	waitmove 0
	call Route111_EventScript_15034F
	loadptr 0, Route111_Text_16F991
	callstd 4
	trainerbattle 3, 312, 0, Route111_Text_16F9EC
	loadptr 0, Route111_Text_16FA22
	callstd 4
	closebutton
	move 4, Route111_Movement_1A0841
	waitmove 0
	call Route111_EventScript_150348
	move 4, Route111_Movement_150356
	waitmove 0
	disappear 4
	call Route111_EventScript_15034F
	release
	end

Route111_EventScript_150348:: @ 8150348
	setdooropened 13, 113
	doorchange
	return

Route111_EventScript_15034F:: @ 815034F
	setdoorclosed 13, 113
	doorchange
	return

Route111_Movement_150356:: @ 8150356
	step_26
	step_up
	step_end

Route111_Movement_150359:: @ 8150359
	step_down
	step_end

Route111_Movement_15035B:: @ 815035B
	step_14
	step_14
	step_14
	step_end

Route111_EventScript_15035F:: @ 815035F
	loadptr 0, Route111_Text_16FC9C
	callstd 3
	end

Route111_EventScript_150368:: @ 8150368
	loadptr 0, Route111_Text_16FCB6
	callstd 3
	end

Route111_EventScript_150371:: @ 8150371
	loadptr 0, Route111_Text_16FCEF
	callstd 3
	end

Route111_EventScript_15037A:: @ 815037A
	loadptr 0, Route111_Text_16FD05
	callstd 3
	end

Route111_EventScript_150383:: @ 8150383
	loadptr 0, Route111_Text_16FD1B
	callstd 3
	end

Route111_EventScript_15038C:: @ 815038C
	loadptr 0, Route111_Text_16FD55
	callstd 3
	end

Route111_EventScript_150395:: @ 8150395
	loadptr 0, Route111_Text_16FB86
	callstd 2
	end

Route111_EventScript_15039E:: @ 815039E
	loadptr 0, Route111_Text_16FC3A
	callstd 2
	end

Route111_EventScript_1503A7:: @ 81503A7
	trainerbattle 0, 211, 0, Route111_Text_1BAB4B, Route111_Text_1BABC7
	loadptr 0, Route111_Text_1BAC10
	callstd 6
	end

Route111_EventScript_1503BE:: @ 81503BE
	trainerbattle 0, 469, 0, Route111_Text_1BAC60, Route111_Text_1BACC5
	loadptr 0, Route111_Text_1BACD8
	callstd 6
	end

Route111_EventScript_1503D5:: @ 81503D5
	trainerbattle 0, 212, 0, Route111_Text_1BAD4B, Route111_Text_1BADA3
	loadptr 0, Route111_Text_1BADC2
	callstd 6
	end

Route111_EventScript_1503EC:: @ 81503EC
	trainerbattle 0, 470, 0, Route111_Text_1BAE24, Route111_Text_1BAE6E
	loadptr 0, Route111_Text_1BAE81
	callstd 6
	end

Route111_EventScript_150403:: @ 8150403
	trainerbattle 0, 44, 0, Route111_Text_1BAEC9, Route111_Text_1BAF14
	specialval RESULT, 57
	compare RESULT, 1
	jumpeq Route111_EventScript_15042A
	loadptr 0, Route111_Text_1BAF5B
	callstd 6
	end

Route111_EventScript_15042A:: @ 815042A
	trainerbattle 5, 44, 0, Route111_Text_1BAFC1, Route111_Text_1BB034
	loadptr 0, Route111_Text_1BB070
	callstd 6
	end

Route111_EventScript_150441:: @ 8150441
	trainerbattle 0, 218, 0, Route111_Text_1BB111, Route111_Text_1BB140
	loadptr 0, Route111_Text_1BB15B
	callstd 6
	end

Route111_EventScript_150458:: @ 8150458
	trainerbattle 0, 476, 0, Route111_Text_1BB199, Route111_Text_1BB1D8
	loadptr 0, Route111_Text_1BB1F6
	callstd 6
	end

Route111_EventScript_15046F:: @ 815046F
	trainerbattle 0, 189, 0, Route111_Text_1BB250, Route111_Text_1BB27E
	loadptr 0, Route111_Text_1BB290
	callstd 6
	end

Route111_EventScript_150486:: @ 8150486
	trainerbattle 0, 78, 0, Route111_Text_1BB2E3, Route111_Text_1BB313
	specialval RESULT, 57
	compare RESULT, 1
	jumpeq Route111_EventScript_1504AD
	loadptr 0, Route111_Text_1BB33E
	callstd 6
	end

Route111_EventScript_1504AD:: @ 81504AD
	trainerbattle 5, 78, 0, Route111_Text_1BB3A7, Route111_Text_1BB3FA
	loadptr 0, Route111_Text_1BB40E
	callstd 6
	end

Route111_EventScript_1504C4:: @ 81504C4
	trainerbattle 0, 94, 0, Route111_Text_1BB44F, Route111_Text_1BB49F
	specialval RESULT, 57
	compare RESULT, 1
	jumpeq Route111_EventScript_1504EB
	loadptr 0, Route111_Text_1BB4CE
	callstd 6
	end

Route111_EventScript_1504EB:: @ 81504EB
	trainerbattle 5, 94, 0, Route111_Text_1BB529, Route111_Text_1BB5A2
	loadptr 0, Route111_Text_1BB5C1
	callstd 6
	end

