// 函数: sub_142946ae0
// 地址: 0x142946ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x138)
uint64_t r10 = zx.q(arg2[2])
uint64_t rcx_4 = ((zx.q(r10.d << 0x10) | zx.q(*arg2)) & 0x1fffff) | zx.q(arg2[1]) << 8
uint64_t rcx_5 = zx.q(arg2[5])
uint64_t r9_7 = (((zx.q(rcx_5.d) & 3) << 8 | zx.q(arg2[4])) << 8 | zx.q(arg2[3])) << 3 | r10 u>> 5
uint64_t r9_13 = ((zx.q(arg2[7]) & 0x7f) << 8 | zx.q(arg2[6])) << 6 | rcx_5 u>> 2
uint64_t rcx_14 = ((((zx.q(arg2[0xa]) & 0xf) << 8 | zx.q(arg2[9])) << 8 | zx.q(arg2[8])) * 2)
    | zx.q(arg2[7]) u>> 7
uint64_t r9_19 = ((zx.q(arg2[0xd]) & 1) << 8 | zx.q(arg2[0xc])) << 0xc
    | ((zx.q(zx.d(arg2[0xb]) << 4) | zx.q(zx.d(arg2[0xa]) u>> 4)) & 0x1fffff)
uint64_t rcx_24 = ((zx.q(arg2[0xf]) & 0x3f) << 8 | zx.q(arg2[0xe])) << 7 | zx.q(arg2[0xd]) u>> 1
uint64_t rcx_32 = (((zx.q(arg2[0x12]) & 7) << 8 | zx.q(arg2[0x11])) << 8 | zx.q(arg2[0x10])) << 2
    | zx.q(arg2[0xf]) u>> 6
uint64_t rcx_37 = (zx.q(arg2[0x14]) << 8 | zx.q(arg2[0x13])) << 5 | zx.q(arg2[0x12]) u>> 3
uint64_t rcx_42 =
    ((zx.q(zx.d(arg2[0x17]) << 0x10) | zx.q(arg2[0x15])) & 0x1fffff) | zx.q(arg2[0x16]) << 8
uint64_t rcx_50 = (((zx.q(arg2[0x1a]) & 3) << 8 | zx.q(arg2[0x19])) << 8 | zx.q(arg2[0x18])) << 3
    | zx.q(arg2[0x17]) u>> 5
uint64_t rcx_55 = ((zx.q(zx.d(arg2[0x1b]) << 6) | zx.q(zx.d(arg2[0x1a]) u>> 2)) & 0x1fffff)
    | (zx.q(arg2[0x1c]) & 0x7f) << 0xe
uint64_t r10_8 = (((zx.q(arg2[0x1f]) << 8 | zx.q(arg2[0x1e])) << 8 | zx.q(arg2[0x1d])) * 2)
    | zx.q(arg2[0x1c]) u>> 7
uint64_t rdi_4 = ((zx.q(zx.d(arg3[2]) << 0x10) | zx.q(*arg3)) & 0x1fffff) | zx.q(arg3[1]) << 8
uint64_t r11_7 =
    (((zx.q(arg3[5]) & 3) << 8 | zx.q(arg3[4])) << 8 | zx.q(arg3[3])) << 3 | zx.q(arg3[2]) u>> 5
uint64_t rdx_5 = ((zx.q(arg3[7]) & 0x7f) << 8 | zx.q(arg3[6])) << 6 | zx.q(arg3[5]) u>> 2
uint64_t rsi_7 = ((((zx.q(arg3[0xa]) & 0xf) << 8 | zx.q(arg3[9])) << 8 | zx.q(arg3[8])) * 2)
    | zx.q(arg3[7]) u>> 7
uint64_t r9_27 = (((zx.q(arg3[0xd]) & 1) << 8 | zx.q(arg3[0xc])) << 8 | zx.q(arg3[0xb])) << 4
    | zx.q(arg3[0xa]) u>> 4
uint64_t rbp_5 = ((zx.q(arg3[0xf]) & 0x3f) << 8 | zx.q(arg3[0xe])) << 7 | zx.q(arg3[0xd]) u>> 1
uint64_t rcx_63 = (((zx.q(arg3[0x12]) & 7) << 8 | zx.q(arg3[0x11])) << 8 | zx.q(arg3[0x10])) << 2
    | zx.q(arg3[0xf]) u>> 6
uint64_t r14_4 = (zx.q(arg3[0x14]) << 8 | zx.q(arg3[0x13])) << 5 | zx.q(arg3[0x12]) u>> 3
uint64_t r13_4 =
    ((zx.q(zx.d(arg3[0x17]) << 0x10) | zx.q(arg3[0x15])) & 0x1fffff) | zx.q(arg3[0x16]) << 8
uint64_t r15_7 = (((zx.q(arg3[0x1a]) & 3) << 8 | zx.q(arg3[0x19])) << 8 | zx.q(arg3[0x18])) << 3
    | zx.q(arg3[0x17]) u>> 5
uint64_t r12_5 = ((zx.q(arg3[0x1c]) & 0x7f) << 8 | zx.q(arg3[0x1b])) << 6 | zx.q(arg3[0x1a]) u>> 2
char* r8 = arg4
uint64_t rbx_6 = (((zx.q(arg3[0x1f]) << 8 | zx.q(arg3[0x1e])) << 8 | zx.q(arg3[0x1d])) * 2)
    | zx.q(arg3[0x1c]) u>> 7
int64_t var_170_4 =
    (((zx.q(r8[2]) << 0x10 | zx.q(*r8)) & 0x1fffff) | zx.q(r8[1]) << 8) + rdi_4 * rcx_4
int64_t var_178_6 = (((zx.q(r8[7]) & 0x7f) << 8 | zx.q(r8[6])) << 6 | zx.q(r8[5]) u>> 2)
    + rdi_4 * r9_13 + r11_7 * r9_7 + rdx_5 * rcx_4
uint64_t arg_18 = ((((zx.q(r8[0xd]) & 1) << 8 | zx.q(r8[0xc])) << 8 | zx.q(r8[0xb])) << 4
    | zx.q(r8[0xa]) u>> 4) + rdi_4 * r9_19 + r11_7 * rcx_14 + rdx_5 * r9_13 + rsi_7 * r9_7
    + r9_27 * rcx_4
int64_t r8_15 = (
    (((zx.q(r8[0x12]) & 7) << 8 | zx.q(*(arg4 + 0x11))) << 8 | zx.q(*(arg4 + 0x10))) << 2
    | zx.q(*(arg4 + 0xf)) u>> 6) + rdi_4 * rcx_32 + r11_7 * rcx_24 + rdx_5 * r9_19 + rsi_7 * rcx_14
    + r9_27 * r9_13 + rbp_5 * r9_7 + rcx_63 * rcx_4
uint64_t arg_10 = (((zx.q(*(arg4 + 0x17)) << 0x10 | zx.q(*(arg4 + 0x15))) & 0x1fffff)
    | zx.q(*(arg4 + 0x16)) << 8) + rdi_4 * rcx_42 + r11_7 * rcx_37 + rdx_5 * rcx_32 + rsi_7 * rcx_24
    + r9_27 * r9_19 + rbp_5 * rcx_14 + rcx_63 * r9_13 + r14_4 * r9_7 + r13_4 * rcx_4
int64_t r8_20 = (((zx.q(*(arg4 + 0x1c)) & 0x7f) << 8 | zx.q(*(arg4 + 0x1b))) << 6
    | zx.q(*(arg4 + 0x1a)) u>> 2) + rdi_4 * rcx_55 + r11_7 * rcx_50
int64_t r8_28 = r8_20 + rdx_5 * rcx_42 + rsi_7 * rcx_37 + r9_27 * rcx_32 + rbp_5 * rcx_24
    + rcx_63 * r9_19 + r14_4 * rcx_14 + r13_4 * r9_13 + r15_7 * r9_7
int64_t r8_29 = r8_28 + r12_5 * rcx_4
int64_t r8_39 = r11_7 * r10_8 + rdx_5 * rcx_55 + rsi_7 * rcx_50 + r9_27 * rcx_42 + rbp_5 * rcx_37
    + rcx_63 * rcx_32 + r14_4 * rcx_24 + r13_4 * r9_19 + r15_7 * rcx_14
int64_t r8_41 = r8_39 + r12_5 * r9_13 + rbx_6 * r9_7
int64_t rdx_15 = rsi_7 * r10_8 + r9_27 * rcx_55 + rbp_5 * rcx_50 + rcx_63 * rcx_42 + r14_4 * rcx_37
    + r13_4 * rcx_32 + r15_7 * rcx_24 + r12_5 * r9_19 + rbx_6 * rcx_14
int64_t rdx_23 = rbp_5 * r10_8 + rcx_63 * rcx_55 + r14_4 * rcx_50 + r13_4 * rcx_42 + r15_7 * rcx_37
    + r12_5 * rcx_32 + rbx_6 * rcx_24
uint64_t rdx_26 = (var_170_4 + 0x100000) u>> 0x15
int64_t r9_33 = r14_4 * r10_8 + r13_4 * rcx_55 + r15_7 * rcx_50 + r12_5 * rcx_42 + rbx_6 * rcx_37
int64_t rbx_7 = rbx_6 * r10_8
int64_t r10_12 = r15_7 * r10_8 + r12_5 * rcx_55 + rbx_6 * rcx_50
uint64_t rcx_71 = (((zx.q(*(arg4 + 5)) & 3) << 8 | zx.q(*(arg4 + 4))) << 8 | zx.q(*(arg4 + 3))) << 3
    | zx.q(*(arg4 + 2)) u>> 5
int64_t rdx_29 = r11_7 * rcx_4 + rdi_4 * r9_7 + rdx_26 + rcx_71
int64_t rdx_32 = (var_178_6 + 0x100000) s>> 0x15
int64_t rdx_35 = rsi_7 * rcx_4 + rdx_5 * r9_7 + rdx_32 + (((
    ((zx.q(*(arg4 + 0xa)) & 0xf) << 8 | zx.q(*(arg4 + 9))) << 8 | zx.q(*(arg4 + 8))) * 2)
    | zx.q(*(arg4 + 7)) u>> 7) + rdi_4 * rcx_14 + r11_7 * r9_13
int64_t rdx_38 = (arg_18 + 0x100000) s>> 0x15
int64_t rcx_89 = (((zx.q(*(arg4 + 0xf)) & 0x3f) << 8 | zx.q(*(arg4 + 0xe))) << 7
    | zx.q(*(arg4 + 0xd)) u>> 1) + rdi_4 * rcx_24 + r11_7 * r9_19
int64_t rdx_41 = rbp_5 * rcx_4 + r9_27 * r9_7 + rdx_38 + rcx_89 + rdx_5 * rcx_14 + rsi_7 * r9_13
int64_t rdx_44 = (r8_15 + 0x100000) s>> 0x15
int64_t rdx_47 = r14_4 * rcx_4 + rcx_63 * r9_7 + rdx_44
    + ((zx.q(*(arg4 + 0x14)) << 8 | zx.q(*(arg4 + 0x13))) << 5 | zx.q(*(arg4 + 0x12)) u>> 3)
    + rdi_4 * rcx_37 + r11_7 * rcx_32 + rdx_5 * rcx_24 + rsi_7 * r9_19 + r9_27 * rcx_14
    + rbp_5 * r9_13
int64_t rdx_50 = (arg_10 + 0x100000) s>> 0x15
uint64_t rcx_110 =
    (((zx.q(*(arg4 + 0x1a)) & 3) << 8 | zx.q(*(arg4 + 0x19))) << 8 | zx.q(*(arg4 + 0x18))) << 3
    | zx.q(*(arg4 + 0x17)) u>> 5
int64_t rcx_118 = rcx_110 + rdi_4 * rcx_50 + r11_7 * rcx_42 + rdx_5 * rcx_37 + rsi_7 * rcx_32
    + r9_27 * rcx_24 + rbp_5 * r9_19 + rcx_63 * rcx_14 + r14_4 * r9_13
int64_t r13_7 = (r8_29 + 0x100000) s>> 0x15
int64_t rdx_53 = r15_7 * rcx_4 + r13_4 * r9_7 + rdx_50 + rcx_118
int64_t rdi_8 = (r8_41 + 0x100000) s>> 0x15
int64_t rcx_131 = ((((zx.q(*(arg4 + 0x1f)) << 8 | zx.q(*(arg4 + 0x1e))) << 8 | zx.q(*(arg4 + 0x1d)))
    * 2) | zx.q(*(arg4 + 0x1c)) u>> 7) + rdi_4 * r10_8 + r11_7 * rcx_55 + rdx_5 * rcx_50
    + rsi_7 * rcx_42 + r9_27 * rcx_37 + rbp_5 * rcx_32
void* r8_48 = rbx_6 * rcx_4 + r12_5 * r9_7 + r13_7 + rcx_131 + rcx_63 * rcx_24 + r14_4 * r9_19
    + r13_4 * rcx_14 + r15_7 * r9_13
int64_t rax_373 = r12_5 * rcx_14 + rdi_8 + rdx_5 * r10_8 + rsi_7 * rcx_55 + r9_27 * rcx_50
    + rbp_5 * rcx_42 + rcx_63 * rcx_37 + r14_4 * rcx_32 + r13_4 * rcx_24 + r15_7 * r9_19
int64_t rsi_11 = rbx_6 * r9_13 + rax_373
int64_t r11_20 = (rdx_15 + 0x100000) s>> 0x15
int64_t rbp_9 = rbx_6 * r9_19 + r12_5 * rcx_24 + r11_20 + r9_27 * r10_8 + rbp_5 * rcx_55
    + rcx_63 * rcx_50 + r14_4 * rcx_42 + r13_4 * rcx_37 + r15_7 * rcx_32
int64_t r8_58 = (rdx_23 + 0x100000) s>> 0x15
int64_t r15_10 = rbx_6 * rcx_32 + r12_5 * rcx_37 + r8_58 + rcx_63 * r10_8 + r14_4 * rcx_55
    + r13_4 * rcx_50 + r15_7 * rcx_42
int64_t rcx_142 = (r9_33 + 0x100000) s>> 0x15
int64_t r14_8 = rbx_6 * rcx_42 + r12_5 * rcx_50 + rcx_142 + r13_4 * r10_8 + r15_7 * rcx_55
int64_t rdx_59 = (r10_12 + 0x100000) s>> 0x15
int64_t r9_36 = rbx_6 * rcx_55 + rdx_59 + r12_5 * r10_8
int64_t r12_8 = (rbx_7 + 0x100000) s>> 0x15
int64_t rax_403 = (rdx_29 + 0x100000) s>> 0x15
int64_t rax_406 = (rdx_35 + 0x100000) s>> 0x15
int64_t rax_409 = (rdx_41 + 0x100000) s>> 0x15
int64_t r15_12 = (r15_10 + 0x100000) s>> 0x15
int64_t rbp_11 = (rbp_9 + 0x100000) s>> 0x15
int64_t var_88_1 = r9_33 + r15_12 - (rcx_142 << 0x15)
int64_t rcx_145 = (r14_8 + 0x100000) s>> 0x15
int64_t rsi_13 = (rsi_11 + 0x100000) s>> 0x15
int64_t var_98_1 = r10_12 + rcx_145 - (rdx_59 << 0x15)
int64_t r14_9 = r14_8 + (neg.q(rcx_145) << 0x15)
int64_t rdx_63 = (r9_36 + 0x100000) s>> 0x15
int64_t rbx_10 = (r8_48 + 0x100000) s>> 0x15
int64_t r9_39 = (rdx_47 + 0x100000) s>> 0x15
int64_t var_a8_1 = rbx_7 + rdx_63 - (r12_8 << 0x15)
int64_t rcx_151 = r9_36 + (neg.q(rdx_63) << 0x15)
int64_t r10_15 = (rdx_53 + 0x100000) s>> 0x15
int64_t var_b0_1 = rdx_23 + r12_8 * -0xa6f7d - (r8_58 << 0x15) + rbp_11
int64_t var_d8_1 =
    rdx_15 + r12_8 * -0xf39ad - rcx_151 * 0xa6f7d + var_a8_1 * 0x215d1 - (r11_20 << 0x15) + rsi_13
int64_t var_c0_1 = r8_41 + var_a8_1 * 0x9fb67 + var_98_1 * 0x215d1 + r12_8 * 0x72d18
    - r14_9 * 0xa6f7d - rcx_151 * 0xf39ad - (rdi_8 << 0x15) + rbx_10
int64_t rdi_11 = r8_15 + var_88_1 * 0xa2c13 - (rdx_44 << 0x15) + rax_409
int64_t rdi_13 = (rdi_11 + 0x100000) s>> 0x15
uint64_t r11_23 =
    arg_10 + var_88_1 * 0x9fb67 + r9_39 + r14_9 * 0x72d18 + var_98_1 * 0xa2c13 - (rdx_50 << 0x15)
int64_t r11_25 = (r11_23 + 0x100000) s>> 0x15
int64_t var_168_4 = r8_29 + var_98_1 * 0x9fb67 + var_88_1 * 0x215d1 + rcx_151 * 0x72d18
    - r14_9 * 0xf39ad + var_a8_1 * 0xa2c13 - (r13_7 << 0x15) + r10_15
int64_t var_f8_1 = rdx_47 + var_88_1 * 0x72d18 + r14_9 * 0xa2c13 - (r9_39 << 0x15) + rdi_13
int64_t r9_43 = (var_c0_1 + 0x100000) s>> 0x15
int64_t r10_19 = (var_168_4 + 0x100000) s>> 0x15
int64_t var_c8_1 = rdx_53 + r14_9 * 0x9fb67 + rcx_151 * 0xa2c13 + var_98_1 * 0x72d18
    - var_88_1 * 0xf39ad - (r10_15 << 0x15) + r11_25
void* arg_20 = r8_48 + rcx_151 * 0x9fb67 + r14_9 * 0x215d1 + r12_8 * 0xa2c13 - var_88_1 * 0xa6f7d
    - var_98_1 * 0xf39ad + var_a8_1 * 0x72d18 - (rbx_10 << 0x15) + r10_19
int64_t r14_11 = rsi_11 + r12_8 * 0x9fb67 + rcx_151 * 0x215d1 + var_a8_1 * -0xf39ad
    - var_98_1 * 0xa6f7d - (rsi_13 << 0x15) + r9_43
int64_t rdx_85 = (var_d8_1 + 0x100000) s>> 0x15
int64_t r12_11 = (arg_20 + 0x100000) s>> 0x15
int64_t rbx_14 = (var_f8_1 + 0x100000) s>> 0x15
int64_t rsi_16 = rbp_9 + r12_8 * 0x215d1 - var_a8_1 * 0xa6f7d - (rbp_11 << 0x15) + rdx_85
int64_t rcx_180 = (r14_11 + 0x100000) s>> 0x15
int64_t r8_63 = (var_b0_1 + 0x100000) s>> 0x15
int64_t r13_11 = r15_10 + r8_63 - (r15_12 << 0x15)
int64_t r15_16 = (var_c8_1 + 0x100000) s>> 0x15
int64_t var_c0_2 = var_c0_1 + r12_11 - (r9_43 << 0x15)
int64_t r9_46 = var_d8_1 + rcx_180 - (rdx_85 << 0x15)
int64_t r14_12 = r14_11 + (neg.q(rcx_180) << 0x15)
int64_t rcx_184 = (rsi_16 + 0x100000) s>> 0x15
int64_t rsi_17 = rsi_16 + (neg.q(rcx_184) << 0x15)
int64_t rbp_14 = var_b0_1 + rcx_184 - (r8_63 << 0x15)
int64_t var_168_5 = var_168_4 + (neg.q(r10_19) << 0x15) - r13_11 * 0xa6f7d + r15_16
arg_10 =
    r11_23 + r13_11 * -0xf39ad - rsi_17 * 0xa6f7d + rbp_14 * 0x215d1 - (r11_25 << 0x15) + rbx_14
int64_t r10_26 = rbp_14 * 0x9fb67 + rdi_11 + rsi_17 * -0xf39ad - r14_12 * 0xa6f7d + r13_11 * 0x72d18
    + r9_46 * 0x215d1 - (rdi_13 << 0x15)
int64_t rdi_16 = var_170_4 + var_c0_2 * 0xa2c13 - (rdx_26 << 0x15)
int64_t var_178_7 =
    var_178_6 + var_c0_2 * 0x9fb67 + rax_403 + r14_12 * 0x72d18 + r9_46 * 0xa2c13 - (rdx_32 << 0x15)
int64_t rbp_16 = (rdi_16 + 0x100000) s>> 0x15
arg_18 += r9_46 * 0x9fb67 + rax_406 + rsi_17 * 0x72d18 - r14_12 * 0xf39ad + rbp_14 * 0xa2c13
    + var_c0_2 * 0x215d1 - (rdx_38 << 0x15)
int64_t r14_15 = (var_178_7 + 0x100000) s>> 0x15
int64_t var_f0_1 = rdx_29 + var_c0_2 * 0x72d18 + r14_12 * 0xa2c13 - (rax_403 << 0x15) + rbp_16
int64_t rsi_20 = (arg_18 + 0x100000) s>> 0x15
int64_t var_100_1 = rdx_35 + r14_12 * 0x9fb67 + rsi_17 * 0xa2c13 + r9_46 * 0x72d18
    - var_c0_2 * 0xf39ad - (rax_406 << 0x15) + r14_15
int64_t r8_68 = (r10_26 + 0x100000) s>> 0x15
int64_t var_d0_1 = rdx_41 + rsi_17 * 0x9fb67 + rsi_20 + r9_46 * -0xf39ad - var_c0_2 * 0xa6f7d
    + rbp_14 * 0x72d18 + r13_11 * 0xa2c13 + r14_12 * 0x215d1 - (rax_409 << 0x15)
int64_t r9_51 = (var_f0_1 + 0x100000) s>> 0x15
int64_t r10_29 = (var_100_1 + 0x100000) s>> 0x15
int64_t rbx_17 = var_f8_1 + r13_11 * 0x9fb67 + rsi_17 * 0x215d1 + rbp_14 * -0xf39ad
    - r9_46 * 0xa6f7d - (rbx_14 << 0x15) + r8_68
int64_t rdx_107 = (arg_10 + 0x100000) s>> 0x15
int64_t r11_31 = (var_d0_1 + 0x100000) s>> 0x15
int64_t r15_19 = var_c8_1 + r13_11 * 0x215d1 - rbp_14 * 0xa6f7d - (r15_16 << 0x15) + rdx_107
int64_t rcx_218 = (var_168_5 + 0x100000) s>> 0x15
void* r12_14 = arg_20 + rcx_218 - (r12_11 << 0x15)
int64_t r8_71 = (rbx_17 + 0x100000) s>> 0x15
int64_t rbx_19 = (r15_19 + 0x100000) s>> 0x15
int64_t rdi_21 = (r12_14 + 0x100000) s>> 0x15
int64_t rcx_221 = rdi_16 + rdi_21 * 0xa2c13 - (rbp_16 << 0x15)
int64_t rcx_222 = rcx_221 s>> 0x15
int64_t rdx_110 = var_f0_1 + rdi_21 * 0x72d18 - (r9_51 << 0x15) + rcx_222
int64_t rdx_111 = rdx_110 s>> 0x15
int64_t rbp_20 = var_178_7 + rdi_21 * 0x9fb67 - (r14_15 << 0x15) + r9_51 + rdx_111
int64_t r9_54 = rbp_20 s>> 0x15
int64_t rax_525 = var_100_1 + (neg.q(r10_29) << 0x15) - rdi_21 * 0xf39ad + r9_54
int64_t r10_35 = rax_525 s>> 0x15
uint64_t rsi_24 = arg_18 + rdi_21 * 0x215d1 - (rsi_20 << 0x15) + r10_29 + r10_35
int64_t rsi_25 = rsi_24 s>> 0x15
int64_t r11_34 = var_d0_1 + rdi_21 * -0xa6f7d - (r11_31 << 0x15) + rsi_25
int64_t r11_35 = r11_34 s>> 0x15
int64_t r13_14 = r10_26 + r11_31 - (r8_68 << 0x15) + r11_35
int64_t rbp_22 = r13_14 s>> 0x15
int64_t r8_74 = rbx_17 + rbp_22 - (r8_71 << 0x15)
int64_t r8_75 = r8_74 s>> 0x15
uint64_t rax_532 = arg_10 + r8_71 - (rdx_107 << 0x15) + r8_75
int64_t r14_18 = rax_532 s>> 0x15
int64_t r15_20 = r15_19 + r14_18 - (rbx_19 << 0x15)
int64_t rbx_22 = r15_20 s>> 0x15
int64_t rax_536 = var_168_5 + rbx_19 - (rcx_218 << 0x15) + rbx_22
int64_t r15_22 = rax_536 s>> 0x15
void* r12_15 = r12_14 + r15_22 - (rdi_21 << 0x15)
int64_t rdi_24 = r12_15 s>> 0x15
int64_t rcx_225 = rcx_221 + rdi_24 * 0xa2c13 - (rcx_222 << 0x15)
int64_t rcx_226 = rcx_225 s>> 0x15
int64_t rdx_114 = rdx_110 + rdi_24 * 0x72d18 - (rdx_111 << 0x15) + rcx_226
int64_t var_170_8 = rcx_225 + (neg.q(rcx_226) << 0x15)
int64_t rcx_230 = rdx_114 s>> 0x15
int64_t r9_57 = rbp_20 + rdi_24 * 0x9fb67 - (r9_54 << 0x15) + rcx_230
int64_t rdx_115 = rdx_114 + (neg.q(rcx_230) << 0x15)
int64_t rcx_234 = r9_57 s>> 0x15
int64_t var_100_3 = rax_525 + (neg.q(r10_35) << 0x15) - rdi_24 * 0xf39ad + rcx_234
int64_t r9_58 = r9_57 + (neg.q(rcx_234) << 0x15)
int64_t rcx_238 = var_100_3 s>> 0x15
int64_t rdx_117 = rsi_24 + rdi_24 * 0x215d1 - (rsi_25 << 0x15) + rcx_238
int64_t r10_41 = var_100_3 + (neg.q(rcx_238) << 0x15)
int64_t rcx_242 = rdx_117 s>> 0x15
int64_t r9_60 = r11_34 + rdi_24 * -0xa6f7d - (r11_35 << 0x15) + rcx_242
uint64_t rdx_118 = rdx_117 + (neg.q(rcx_242) << 0x15)
int64_t rcx_246 = r9_60 s>> 0x15
int64_t r13_15 = r13_14 + rcx_246 - (rbp_22 << 0x15)
int64_t r9_61 = r9_60 + (neg.q(rcx_246) << 0x15)
int64_t rcx_250 = r13_15 s>> 0x15
int64_t r13_16 = r13_15 + (neg.q(rcx_250) << 0x15)
int64_t r8_78 = r8_74 + rcx_250 - (r8_75 << 0x15)
int64_t rcx_254 = r8_78 s>> 0x15
int64_t rsi_28 = rax_532 + rcx_254 - (r14_18 << 0x15)
int64_t r8_79 = r8_78 + (neg.q(rcx_254) << 0x15)
int64_t rcx_258 = rsi_28 s>> 0x15
int64_t rdx_120 = r15_20 + rcx_258 - (rbx_22 << 0x15)
int64_t rsi_29 = rsi_28 + (neg.q(rcx_258) << 0x15)
int64_t rcx_262 = rdx_120 s>> 0x15
int64_t r11_38 = rax_536 + rcx_262 - (r15_22 << 0x15)
int64_t rdx_121 = rdx_120 + (neg.q(rcx_262) << 0x15)
int64_t rcx_266 = r11_38 s>> 0x15
void* r12_16 = r12_15 + rcx_266 - (rdi_24 << 0x15)
int64_t r11_39 = r11_38 + (neg.q(rcx_266) << 0x15)
arg1[1] = (var_170_8 s>> 8).b
*arg1 = var_170_8.b
arg1[2] = rdx_115.b << 5 | (var_170_8 s>> 0x10).b
arg1[3] = (rdx_115 s>> 3).b
arg1[4] = (rdx_115 s>> 0xb).b
arg1[6] = (r9_58 s>> 6).b
arg1[5] = (rdx_115 s>> 0x13).b | r9_58.b << 2
arg1[7] = r10_41.b << 7 | (r9_58 s>> 0xe).b
arg1[8] = (r10_41 s>> 1).b
arg1[9] = (r10_41 s>> 9).b
arg1[0xb] = (rdx_118 s>> 4).b
arg1[0xa] = (r10_41 s>> 0x11).b | rdx_118.b << 4
arg1[0x15] = rsi_29.b
arg1[0xc] = (rdx_118 s>> 0xc).b
arg1[0xe] = (r9_61 s>> 7).b
arg1[0xd] = (rdx_118 s>> 0x14).b | (r9_61.b * 2)
arg1[0xf] = r13_16.b << 6 | (r9_61 s>> 0xf).b
arg1[0x10] = (r13_16 s>> 2).b
arg1[0x11] = (r13_16 s>> 0xa).b
arg1[0x13] = (r8_79 s>> 5).b
arg1[0x16] = (rsi_29 s>> 8).b
arg1[0x17] = rdx_121.b << 5 | (rsi_29 s>> 0x10).b
arg1[0x18] = (rdx_121 s>> 3).b
arg1[0x19] = (rdx_121 s>> 0xb).b
arg1[0x12] = (r13_16 s>> 0x12).b | r8_79.b << 3
arg1[0x14] = (r8_79 s>> 0xd).b
arg1[0x1b] = (r11_39 s>> 6).b
arg1[0x1a] = (rdx_121 s>> 0x13).b | r11_39.b << 2
arg1[0x1c] = r12_16.b << 7 | (r11_39 s>> 0xe).b
arg1[0x1d] = (r12_16 s>> 1).b
char result = (r12_16 s>> 9).b
arg1[0x1f] = (r12_16 s>> 0x11).b
arg1[0x1e] = result
return result
