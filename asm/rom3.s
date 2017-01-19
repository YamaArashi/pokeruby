	.include "constants/gba_constants.inc"
	.include "constants/species_constants.inc"
	.include "asm/macros.inc"

	.syntax unified

	.text

	thumb_func_start dp01_build_cmdbuf_x10_TODO
dp01_build_cmdbuf_x10_TODO: @ 800C948
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsls r0, 24
	lsrs r0, 24
	mov r10, r0
	lsls r1, 16
	lsrs r1, 16
	ldr r2, _0800CA2C @ =gUnknown_03004040
	movs r0, 0x10
	strb r0, [r2]
	ldr r0, _0800CA30 @ =gUnknown_02024D26
	ldrb r0, [r0]
	strb r0, [r2, 0x1]
	strb r1, [r2, 0x2]
	lsrs r1, 8
	strb r1, [r2, 0x3]
	adds r0, r2, 0x4
	mov r12, r0
	ldr r4, _0800CA34 @ =gUnknown_02024BE6
	ldrh r0, [r4]
	strh r0, [r2, 0x4]
	ldr r0, _0800CA38 @ =gUnknown_02024BE8
	ldrh r0, [r0]
	mov r1, r12
	strh r0, [r1, 0x2]
	ldr r0, _0800CA3C @ =gUnknown_02024C04
	ldrh r0, [r0]
	strh r0, [r1, 0x4]
	ldr r0, _0800CA40 @ =byte_2024C06
	ldrb r0, [r0]
	strb r0, [r1, 0x6]
	ldr r1, _0800CA44 @ =0x02000000
	ldr r3, _0800CA48 @ =0x00016003
	adds r0, r1, r3
	ldrb r0, [r0]
	mov r7, r12
	strb r0, [r7, 0x7]
	adds r3, 0x5B
	adds r0, r1, r3
	ldrb r0, [r0]
	strb r0, [r7, 0x8]
	ldr r7, _0800CA4C @ =0x000160c1
	adds r1, r7
	ldrb r0, [r1]
	mov r1, r12
	strb r0, [r1, 0x9]
	ldr r0, _0800CA50 @ =gUnknown_02024C0B
	ldrb r0, [r0]
	strb r0, [r1, 0xA]
	ldr r3, _0800CA54 @ =gBattleMoves
	ldrh r1, [r4]
	lsls r0, r1, 1
	adds r0, r1
	lsls r0, 2
	adds r0, r3
	ldrb r0, [r0, 0x2]
	mov r3, r12
	strb r0, [r3, 0xB]
	movs r3, 0
	mov r9, r2
	ldr r7, _0800CA58 @ =gUnknown_030042B0
	mov r8, r7
	adds r2, 0x10
	ldr r0, _0800CA5C @ =gBattleMons
	adds r4, r0, 0
	adds r4, 0x20
_0800C9D2:
	adds r1, r2, r3
	ldrb r0, [r4]
	strb r0, [r1]
	adds r4, 0x58
	adds r3, 0x1
	cmp r3, 0x3
	ble _0800C9D2
	movs r3, 0
	mov r5, r12
	adds r5, 0x10
	mov r4, r12
	adds r4, 0x20
	ldr r6, _0800CA60 @ =gUnknown_03004290
	mov r2, r12
	adds r2, 0x30
_0800C9F0:
	adds r1, r5, r3
	ldr r7, _0800CA64 @ =gUnknown_030041C0
	adds r0, r3, r7
	ldrb r0, [r0]
	strb r0, [r1]
	adds r1, r4, r3
	adds r0, r3, r6
	ldrb r0, [r0]
	strb r0, [r1]
	adds r1, r2, r3
	mov r7, r8
	adds r0, r3, r7
	ldrb r0, [r0]
	strb r0, [r1]
	adds r3, 0x1
	cmp r3, 0xF
	ble _0800C9F0
	mov r0, r10
	mov r1, r9
	movs r2, 0x44
	bl dp01_prepare_buffer
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.align 2, 0
_0800CA2C: .4byte gUnknown_03004040
_0800CA30: .4byte gUnknown_02024D26
_0800CA34: .4byte gUnknown_02024BE6
_0800CA38: .4byte gUnknown_02024BE8
_0800CA3C: .4byte gUnknown_02024C04
_0800CA40: .4byte byte_2024C06
_0800CA44: .4byte 0x02000000
_0800CA48: .4byte 0x00016003
_0800CA4C: .4byte 0x000160c1
_0800CA50: .4byte gUnknown_02024C0B
_0800CA54: .4byte gBattleMoves
_0800CA58: .4byte gUnknown_030042B0
_0800CA5C: .4byte gBattleMons
_0800CA60: .4byte gUnknown_03004290
_0800CA64: .4byte gUnknown_030041C0
	thumb_func_end dp01_build_cmdbuf_x10_TODO

	thumb_func_start dp01_build_cmdbuf_x11_TODO
dp01_build_cmdbuf_x11_TODO: @ 800CA68
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsls r0, 24
	lsrs r0, 24
	mov r10, r0
	lsls r1, 16
	lsrs r1, 16
	ldr r2, _0800CB28 @ =gUnknown_03004040
	movs r0, 0x11
	strb r0, [r2]
	strb r0, [r2, 0x1]
	strb r1, [r2, 0x2]
	lsrs r1, 8
	strb r1, [r2, 0x3]
	adds r0, r2, 0x4
	mov r12, r0
	ldr r0, _0800CB2C @ =gUnknown_02024BE6
	ldrh r0, [r0]
	strh r0, [r2, 0x4]
	ldr r0, _0800CB30 @ =gUnknown_02024BE8
	ldrh r0, [r0]
	mov r1, r12
	strh r0, [r1, 0x2]
	ldr r0, _0800CB34 @ =gUnknown_02024C04
	ldrh r0, [r0]
	strh r0, [r1, 0x4]
	ldr r0, _0800CB38 @ =byte_2024C06
	ldrb r0, [r0]
	strb r0, [r1, 0x6]
	ldr r0, _0800CB3C @ =0x02000000
	ldr r3, _0800CB40 @ =0x00016003
	adds r1, r0, r3
	ldrb r1, [r1]
	mov r7, r12
	strb r1, [r7, 0x7]
	ldr r1, _0800CB44 @ =0x0001605e
	adds r0, r1
	ldrb r0, [r0]
	strb r0, [r7, 0x8]
	movs r3, 0
	mov r9, r2
	ldr r7, _0800CB48 @ =gUnknown_030042B0
	mov r8, r7
	mov r4, r9
	adds r4, 0x10
	ldr r0, _0800CB4C @ =gBattleMons
	adds r2, r0, 0
	adds r2, 0x20
_0800CACE:
	adds r1, r4, r3
	ldrb r0, [r2]
	strb r0, [r1]
	adds r2, 0x58
	adds r3, 0x1
	cmp r3, 0x3
	ble _0800CACE
	movs r3, 0
	mov r5, r12
	adds r5, 0x10
	mov r4, r12
	adds r4, 0x20
	ldr r6, _0800CB50 @ =gUnknown_03004290
	mov r2, r12
	adds r2, 0x30
_0800CAEC:
	adds r1, r5, r3
	ldr r7, _0800CB54 @ =gUnknown_030041C0
	adds r0, r3, r7
	ldrb r0, [r0]
	strb r0, [r1]
	adds r1, r4, r3
	adds r0, r3, r6
	ldrb r0, [r0]
	strb r0, [r1]
	adds r1, r2, r3
	mov r7, r8
	adds r0, r3, r7
	ldrb r0, [r0]
	strb r0, [r1]
	adds r3, 0x1
	cmp r3, 0xF
	ble _0800CAEC
	mov r0, r10
	mov r1, r9
	movs r2, 0x44
	bl dp01_prepare_buffer
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.align 2, 0
_0800CB28: .4byte gUnknown_03004040
_0800CB2C: .4byte gUnknown_02024BE6
_0800CB30: .4byte gUnknown_02024BE8
_0800CB34: .4byte gUnknown_02024C04
_0800CB38: .4byte byte_2024C06
_0800CB3C: .4byte 0x02000000
_0800CB40: .4byte 0x00016003
_0800CB44: .4byte 0x0001605e
_0800CB48: .4byte gUnknown_030042B0
_0800CB4C: .4byte gBattleMons
_0800CB50: .4byte gUnknown_03004290
_0800CB54: .4byte gUnknown_030041C0
	thumb_func_end dp01_build_cmdbuf_x11_TODO

	thumb_func_start dp01_build_cmdbuf_x12_a_bb
dp01_build_cmdbuf_x12_a_bb: @ 800CB58
	push {r4,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	lsls r2, 16
	lsrs r2, 16
	ldr r1, _0800CB80 @ =gUnknown_03004040
	movs r3, 0x12
	strb r3, [r1]
	strb r4, [r1, 0x1]
	strb r2, [r1, 0x2]
	lsrs r2, 8
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CB80: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x12_a_bb

	thumb_func_start unref_sub_800CB84
unref_sub_800CB84: @ 800CB84
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CBA0 @ =gUnknown_03004040
	movs r2, 0x13
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CBA0: .4byte gUnknown_03004040
	thumb_func_end unref_sub_800CB84

	thumb_func_start sub_800CBA4
sub_800CBA4: @ 800CBA4
	push {r4-r6,lr}
	adds r5, r3, 0
	lsls r0, 24
	lsrs r6, r0, 24
	ldr r3, _0800CBDC @ =gUnknown_03004040
	movs r4, 0
	movs r0, 0x14
	strb r0, [r3]
	strb r1, [r3, 0x1]
	strb r2, [r3, 0x2]
	strb r4, [r3, 0x3]
	movs r2, 0
	adds r1, r3, 0
	adds r4, r1, 0x4
_0800CBC0:
	adds r0, r5, r2
	ldrb r0, [r0]
	strb r0, [r4]
	adds r4, 0x1
	adds r2, 0x1
	cmp r2, 0x13
	bls _0800CBC0
	adds r0, r6, 0
	movs r2, 0x18
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CBDC: .4byte gUnknown_03004040
	thumb_func_end sub_800CBA4

	thumb_func_start sub_800CBE0
sub_800CBE0: @ 800CBE0
	push {r4,r5,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r5, r0, 24
	ldr r1, _0800CC10 @ =gUnknown_03004040
	movs r0, 0x15
	strb r0, [r1]
	movs r2, 0
	adds r3, r1, 0x1
_0800CBF2:
	adds r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r3]
	adds r3, 0x1
	adds r2, 0x1
	cmp r2, 0x2
	ble _0800CBF2
	adds r0, r5, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4,r5}
	pop {r0}
	bx r0
	.align 2, 0
_0800CC10: .4byte gUnknown_03004040
	thumb_func_end sub_800CBE0

	thumb_func_start dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f
dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f: @ 800CC14
	push {r4-r6,lr}
	ldr r6, [sp, 0x10]
	lsls r0, 24
	lsrs r5, r0, 24
	ldr r4, _0800CC4C @ =gUnknown_03004040
	movs r0, 0x16
	strb r0, [r4]
	strb r1, [r4, 0x1]
	strb r2, [r4, 0x2]
	strb r3, [r4, 0x3]
	movs r2, 0
	adds r1, r4, 0
	adds r3, r1, 0x4
_0800CC2E:
	adds r0, r6, r2
	ldrb r0, [r0]
	strb r0, [r3]
	adds r3, 0x1
	adds r2, 0x1
	cmp r2, 0x2
	ble _0800CC2E
	adds r0, r5, 0
	movs r2, 0x8
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CC4C: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f

	thumb_func_start dp01_build_cmdbuf_x17_17_17_17
dp01_build_cmdbuf_x17_17_17_17: @ 800CC50
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CC6C @ =gUnknown_03004040
	movs r2, 0x17
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CC6C: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x17_17_17_17

	thumb_func_start dp01_build_cmdbuf_x18_0_aa_health_bar_update
dp01_build_cmdbuf_x18_0_aa_health_bar_update: @ 800CC70
	push {r4,lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 16
	lsrs r1, 16
	ldr r3, _0800CCA4 @ =gUnknown_03004040
	movs r4, 0
	movs r2, 0x18
	strb r2, [r3]
	strb r4, [r3, 0x1]
	strb r1, [r3, 0x2]
	lsls r1, 16
	asrs r1, 16
	movs r2, 0xFF
	lsls r2, 8
	ands r1, r2
	asrs r1, 8
	strb r1, [r3, 0x3]
	adds r1, r3, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CCA4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x18_0_aa_health_bar_update

	thumb_func_start dp01_build_cmdbuf_x19_a_bb
dp01_build_cmdbuf_x19_a_bb: @ 800CCA8
	push {r4,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	lsls r2, 16
	lsrs r2, 16
	ldr r1, _0800CCD8 @ =gUnknown_03004040
	movs r3, 0x19
	strb r3, [r1]
	strb r4, [r1, 0x1]
	strb r2, [r1, 0x2]
	lsls r2, 16
	asrs r2, 16
	movs r3, 0xFF
	lsls r3, 8
	ands r2, r3
	asrs r2, 8
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CCD8: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x19_a_bb

	thumb_func_start dp01_build_cmdbuf_x1A_aaaa_bbbb
dp01_build_cmdbuf_x1A_aaaa_bbbb: @ 800CCDC
	push {r4-r6,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CD2C @ =gUnknown_03004040
	movs r3, 0x1A
	strb r3, [r1]
	strb r4, [r1, 0x1]
	movs r6, 0xFF
	lsls r6, 8
	adds r3, r4, 0
	ands r3, r6
	lsrs r3, 8
	strb r3, [r1, 0x2]
	movs r5, 0xFF
	lsls r5, 16
	adds r3, r4, 0
	ands r3, r5
	lsrs r3, 16
	strb r3, [r1, 0x3]
	lsrs r4, 24
	strb r4, [r1, 0x4]
	strb r2, [r1, 0x5]
	adds r3, r2, 0
	ands r3, r6
	lsrs r3, 8
	strb r3, [r1, 0x6]
	adds r3, r2, 0
	ands r3, r5
	lsrs r3, 16
	strb r3, [r1, 0x7]
	lsrs r2, 24
	strb r2, [r1, 0x8]
	movs r2, 0x9
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CD2C: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x1A_aaaa_bbbb

	thumb_func_start dp01_build_cmdbuf_x1B_aaaa_b
dp01_build_cmdbuf_x1B_aaaa_b: @ 800CD30
	push {r4,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CD68 @ =gUnknown_03004040
	movs r3, 0x1B
	strb r3, [r1]
	strb r4, [r1, 0x1]
	strb r2, [r1, 0x2]
	movs r3, 0xFF
	lsls r3, 8
	ands r3, r2
	lsrs r3, 8
	strb r3, [r1, 0x3]
	movs r3, 0xFF
	lsls r3, 16
	ands r3, r2
	lsrs r3, 16
	strb r3, [r1, 0x4]
	lsrs r2, 24
	strb r2, [r1, 0x5]
	movs r2, 0x6
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CD68: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x1B_aaaa_b

	thumb_func_start dp01_build_cmdbuf_x1C_a
dp01_build_cmdbuf_x1C_a: @ 800CD6C
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CD88 @ =gUnknown_03004040
	movs r2, 0x1C
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CD88: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x1C_a

	thumb_func_start dp01_build_cmdbuf_x1D_1D_numargs_varargs
dp01_build_cmdbuf_x1D_1D_numargs_varargs: @ 800CD8C
	push {r4-r6,lr}
	lsls r0, 24
	lsrs r6, r0, 24
	lsls r1, 16
	lsrs r4, r1, 16
	ldr r1, _0800CDD0 @ =gUnknown_03004040
	movs r0, 0x1D
	strb r0, [r1]
	strb r0, [r1, 0x1]
	strb r4, [r1, 0x2]
	lsrs r0, r4, 8
	strb r0, [r1, 0x3]
	adds r5, r1, 0
	cmp r4, 0
	beq _0800CDBC
	adds r1, r5, 0x4
	adds r3, r4, 0
_0800CDAE:
	ldrb r0, [r2]
	strb r0, [r1]
	adds r2, 0x1
	adds r1, 0x1
	subs r3, 0x1
	cmp r3, 0
	bne _0800CDAE
_0800CDBC:
	adds r2, r4, 0x4
	lsls r2, 16
	lsrs r2, 16
	adds r0, r6, 0
	adds r1, r5, 0
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CDD0: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x1D_1D_numargs_varargs

	thumb_func_start unref_sub_800CDD4
unref_sub_800CDD4: @ 800CDD4
	push {r4-r6,lr}
	adds r4, r3, 0
	lsls r0, 24
	lsrs r6, r0, 24
	lsls r2, 16
	lsrs r5, r2, 16
	ldr r2, _0800CE38 @ =gUnknown_03004040
	movs r0, 0x1E
	strb r0, [r2]
	strb r1, [r2, 0x1]
	movs r3, 0xFF
	lsls r3, 8
	adds r0, r1, 0
	ands r0, r3
	lsrs r0, 8
	strb r0, [r2, 0x2]
	movs r0, 0xFF
	lsls r0, 16
	ands r0, r1
	lsrs r0, 16
	strb r0, [r2, 0x3]
	lsrs r1, 24
	strb r1, [r2, 0x4]
	strb r5, [r2, 0x5]
	adds r0, r5, 0
	ands r0, r3
	lsrs r0, 8
	strb r0, [r2, 0x6]
	adds r1, r2, 0
	cmp r5, 0
	beq _0800CE24
	adds r3, r1, 0x7
	adds r2, r5, 0
_0800CE16:
	ldrb r0, [r4]
	strb r0, [r3]
	adds r4, 0x1
	adds r3, 0x1
	subs r2, 0x1
	cmp r2, 0
	bne _0800CE16
_0800CE24:
	adds r2, r5, 0x7
	lsls r2, 16
	lsrs r2, 16
	adds r0, r6, 0
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CE38: .4byte gUnknown_03004040
	thumb_func_end unref_sub_800CDD4

	thumb_func_start unref_sub_800CE3C
unref_sub_800CE3C: @ 800CE3C
	push {r4-r6,lr}
	lsls r0, 24
	lsrs r6, r0, 24
	lsls r1, 16
	lsrs r4, r1, 16
	ldr r1, _0800CE80 @ =gUnknown_03004040
	movs r0, 0x1F
	strb r0, [r1]
	strb r4, [r1, 0x1]
	lsrs r0, r4, 8
	strb r0, [r1, 0x2]
	adds r5, r1, 0
	cmp r4, 0
	beq _0800CE6A
	adds r1, r5, 0x3
	adds r3, r4, 0
_0800CE5C:
	ldrb r0, [r2]
	strb r0, [r1]
	adds r2, 0x1
	adds r1, 0x1
	subs r3, 0x1
	cmp r3, 0
	bne _0800CE5C
_0800CE6A:
	adds r2, r4, 0x3
	lsls r2, 16
	lsrs r2, 16
	adds r0, r6, 0
	adds r1, r5, 0
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CE80: .4byte gUnknown_03004040
	thumb_func_end unref_sub_800CE3C

	thumb_func_start unref_sub_800CE84
unref_sub_800CE84: @ 800CE84
	push {r4-r6,lr}
	lsls r0, 24
	lsrs r6, r0, 24
	lsls r1, 16
	lsrs r4, r1, 16
	ldr r1, _0800CEC8 @ =gUnknown_03004040
	movs r0, 0x20
	strb r0, [r1]
	strb r4, [r1, 0x1]
	lsrs r0, r4, 8
	strb r0, [r1, 0x2]
	adds r5, r1, 0
	cmp r4, 0
	beq _0800CEB2
	adds r1, r5, 0x3
	adds r3, r4, 0
_0800CEA4:
	ldrb r0, [r2]
	strb r0, [r1]
	adds r2, 0x1
	adds r1, 0x1
	subs r3, 0x1
	cmp r3, 0
	bne _0800CEA4
_0800CEB2:
	adds r2, r4, 0x3
	lsls r2, 16
	lsrs r2, 16
	adds r0, r6, 0
	adds r1, r5, 0
	bl dp01_prepare_buffer
	pop {r4-r6}
	pop {r0}
	bx r0
	.align 2, 0
_0800CEC8: .4byte gUnknown_03004040
	thumb_func_end unref_sub_800CE84

	thumb_func_start dp01_build_cmdbuf_x21_a_bb
dp01_build_cmdbuf_x21_a_bb: @ 800CECC
	push {r4,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	lsls r2, 16
	lsrs r2, 16
	ldr r1, _0800CEF4 @ =gUnknown_03004040
	movs r3, 0x21
	strb r3, [r1]
	strb r4, [r1, 0x1]
	strb r2, [r1, 0x2]
	lsrs r2, 8
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CEF4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x21_a_bb

	thumb_func_start dp01_build_cmdbuf_x22_a_three_bytes
dp01_build_cmdbuf_x22_a_three_bytes: @ 800CEF8
	push {r4,r5,lr}
	adds r4, r2, 0
	lsls r0, 24
	lsrs r5, r0, 24
	ldr r2, _0800CF2C @ =gUnknown_03004040
	movs r0, 0x22
	strb r0, [r2]
	strb r1, [r2, 0x1]
	movs r3, 0
	adds r1, r2, 0x2
_0800CF0C:
	adds r0, r4, r3
	ldrb r0, [r0]
	strb r0, [r1]
	adds r1, 0x1
	adds r3, 0x1
	cmp r3, 0x2
	ble _0800CF0C
	adds r0, r5, 0
	adds r1, r2, 0
	movs r2, 0x5
	bl dp01_prepare_buffer
	pop {r4,r5}
	pop {r0}
	bx r0
	.align 2, 0
_0800CF2C: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x22_a_three_bytes

	thumb_func_start dp01_build_cmdbuf_x23_aa_0
dp01_build_cmdbuf_x23_aa_0: @ 800CF30
	push {r4,lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 16
	lsrs r1, 16
	ldr r3, _0800CF58 @ =gUnknown_03004040
	movs r4, 0
	movs r2, 0x23
	strb r2, [r3]
	strb r1, [r3, 0x1]
	lsrs r1, 8
	strb r1, [r3, 0x2]
	strb r4, [r3, 0x3]
	adds r1, r3, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CF58: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x23_aa_0

	thumb_func_start dp01_build_cmdbuf_x24_aa_0
dp01_build_cmdbuf_x24_aa_0: @ 800CF5C
	push {r4,lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 16
	lsrs r1, 16
	ldr r3, _0800CF84 @ =gUnknown_03004040
	movs r4, 0
	movs r2, 0x24
	strb r2, [r3]
	strb r1, [r3, 0x1]
	lsrs r1, 8
	strb r1, [r3, 0x2]
	strb r4, [r3, 0x3]
	adds r1, r3, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800CF84: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x24_aa_0

	thumb_func_start dp01_build_cmdbuf_x25_25_25_25
dp01_build_cmdbuf_x25_25_25_25: @ 800CF88
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CFA4 @ =gUnknown_03004040
	movs r2, 0x25
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CFA4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x25_25_25_25

	thumb_func_start dp01_build_cmdbuf_x26_a
dp01_build_cmdbuf_x26_a: @ 800CFA8
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CFC4 @ =gUnknown_03004040
	movs r2, 0x26
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CFC4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x26_a

	thumb_func_start dp01_build_cmdbuf_x27_27_27_27
dp01_build_cmdbuf_x27_27_27_27: @ 800CFC8
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800CFE4 @ =gUnknown_03004040
	movs r2, 0x27
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800CFE4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x27_27_27_27

	thumb_func_start dp01_build_cmdbuf_x28_28_28_28
dp01_build_cmdbuf_x28_28_28_28: @ 800CFE8
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D004 @ =gUnknown_03004040
	movs r2, 0x28
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D004: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x28_28_28_28

	thumb_func_start dp01_build_cmdbuf_x29_29_29_29
dp01_build_cmdbuf_x29_29_29_29: @ 800D008
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D024 @ =gUnknown_03004040
	movs r2, 0x29
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D024: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x29_29_29_29

	thumb_func_start dp01_build_cmdbuf_x2A_2A_2A_2A
dp01_build_cmdbuf_x2A_2A_2A_2A: @ 800D028
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D044 @ =gUnknown_03004040
	movs r2, 0x2A
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D044: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x2A_2A_2A_2A

	thumb_func_start dp01_build_cmdbuf_x2B_aa_0
dp01_build_cmdbuf_x2B_aa_0: @ 800D048
	push {r4,lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 16
	lsrs r1, 16
	ldr r3, _0800D070 @ =gUnknown_03004040
	movs r4, 0
	movs r2, 0x2B
	strb r2, [r3]
	strb r1, [r3, 0x1]
	lsrs r1, 8
	strb r1, [r3, 0x2]
	strb r4, [r3, 0x3]
	adds r1, r3, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800D070: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x2B_aa_0

	thumb_func_start sub_800D074
sub_800D074: @ 800D074
	push {r4,lr}
	lsls r0, 24
	lsrs r0, 24
	lsls r1, 16
	lsrs r1, 16
	ldr r3, _0800D09C @ =gUnknown_03004040
	movs r4, 0
	movs r2, 0x2C
	strb r2, [r3]
	strb r1, [r3, 0x1]
	lsrs r1, 8
	strb r1, [r3, 0x2]
	strb r4, [r3, 0x3]
	adds r1, r3, 0
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800D09C: .4byte gUnknown_03004040
	thumb_func_end sub_800D074

	thumb_func_start dp01_build_cmdbuf_x2D_2D_2D_2D
dp01_build_cmdbuf_x2D_2D_2D_2D: @ 800D0A0
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D0BC @ =gUnknown_03004040
	movs r2, 0x2D
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D0BC: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x2D_2D_2D_2D

	thumb_func_start dp01_build_cmdbuf_x2E_a
dp01_build_cmdbuf_x2E_a: @ 800D0C0
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D0DC @ =gUnknown_03004040
	movs r2, 0x2E
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D0DC: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x2E_a

	thumb_func_start dp01_build_cmdbuf_x2F_2F_2F_2F
dp01_build_cmdbuf_x2F_2F_2F_2F: @ 800D0E0
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D0FC @ =gUnknown_03004040
	movs r2, 0x2F
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D0FC: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x2F_2F_2F_2F

	thumb_func_start dp01_build_cmdbuf_x30_TODO
dp01_build_cmdbuf_x30_TODO: @ 800D100
	push {r4,r5,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r5, r0, 24
	lsls r2, 24
	lsrs r2, 24
	ldr r1, _0800D144 @ =gUnknown_03004040
	movs r3, 0x30
	strb r3, [r1]
	movs r0, 0x7F
	ands r0, r2
	strb r0, [r1, 0x1]
	movs r0, 0x80
	ands r0, r2
	lsls r0, 24
	lsrs r0, 31
	strb r0, [r1, 0x2]
	strb r3, [r1, 0x3]
	movs r2, 0
	adds r3, r1, 0x4
_0800D128:
	adds r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r3]
	adds r3, 0x1
	adds r2, 0x1
	cmp r2, 0x2F
	ble _0800D128
	adds r0, r5, 0
	movs r2, 0x34
	bl dp01_prepare_buffer
	pop {r4,r5}
	pop {r0}
	bx r0
	.align 2, 0
_0800D144: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x30_TODO

	thumb_func_start dp01_build_cmdbuf_x31_31_31_31
dp01_build_cmdbuf_x31_31_31_31: @ 800D148
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D164 @ =gUnknown_03004040
	movs r2, 0x31
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D164: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x31_31_31_31

	thumb_func_start dp01_build_cmdbuf_x32_32_32_32
dp01_build_cmdbuf_x32_32_32_32: @ 800D168
	push {lr}
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D184 @ =gUnknown_03004040
	movs r2, 0x32
	strb r2, [r1]
	strb r2, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D184: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x32_32_32_32

	thumb_func_start dp01_build_cmdbuf_x33_a_33_33
dp01_build_cmdbuf_x33_a_33_33: @ 800D188
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D1A8 @ =gUnknown_03004040
	movs r2, 0x33
	strb r2, [r1]
	strb r3, [r1, 0x1]
	strb r2, [r1, 0x2]
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D1A8: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x33_a_33_33

	thumb_func_start dp01_build_cmdbuf_x34_a_bb_aka_battle_anim
dp01_build_cmdbuf_x34_a_bb_aka_battle_anim: @ 800D1AC
	push {r4,lr}
	adds r4, r1, 0
	lsls r0, 24
	lsrs r0, 24
	lsls r2, 16
	lsrs r2, 16
	ldr r1, _0800D1D4 @ =gUnknown_03004040
	movs r3, 0x34
	strb r3, [r1]
	strb r4, [r1, 0x1]
	strb r2, [r1, 0x2]
	lsrs r2, 8
	strb r2, [r1, 0x3]
	movs r2, 0x4
	bl dp01_prepare_buffer
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
_0800D1D4: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x34_a_bb_aka_battle_anim

	thumb_func_start sub_800D1D8
sub_800D1D8: @ 800D1D8
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D1F4 @ =gUnknown_03004040
	movs r2, 0x35
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D1F4: .4byte gUnknown_03004040
	thumb_func_end sub_800D1D8

	thumb_func_start dp01_build_cmdbuf_x38_a
dp01_build_cmdbuf_x38_a: @ 800D1F8
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D214 @ =gUnknown_03004040
	movs r2, 0x36
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D214: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x38_a

	thumb_func_start dp01_build_cmdbuf_x37_a
dp01_build_cmdbuf_x37_a: @ 800D218
	push {lr}
	adds r3, r1, 0
	lsls r0, 24
	lsrs r0, 24
	ldr r1, _0800D234 @ =gUnknown_03004040
	movs r2, 0x37
	strb r2, [r1]
	strb r3, [r1, 0x1]
	movs r2, 0x2
	bl dp01_prepare_buffer
	pop {r0}
	bx r0
	.align 2, 0
_0800D234: .4byte gUnknown_03004040
	thumb_func_end dp01_build_cmdbuf_x37_a

	.align 2, 0 @ Don't pad with nop.
