// 函数: sub_1429392b0
// 地址: 0x1429392b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
uint32_t r12_6 = ((zx.d(*arg2) << 8 ^ zx.d(arg2[1])) << 8 ^ zx.d(arg2[2])) << 8 ^ zx.d(arg2[3])
*arg3 = r12_6
uint32_t rdi = r12_6
uint32_t var_58 = r12_6
uint32_t r13_6 = ((zx.d(arg2[4]) << 8 ^ zx.d(arg2[5])) << 8 ^ zx.d(arg2[6])) << 8 ^ zx.d(arg2[7])
arg3[1] = r13_6
uint32_t rsi = r13_6
uint32_t arg_18 = r13_6
uint32_t r14_6 =
    ((zx.d(arg2[8]) << 8 ^ zx.d(arg2[9])) << 8 ^ zx.d(arg2[0xa])) << 8 ^ zx.d(arg2[0xb])
arg3[2] = r14_6
uint32_t r11 = r14_6
uint32_t arg_10 = r14_6
uint32_t rbp_6 =
    ((zx.d(arg2[0xc]) << 8 ^ zx.d(arg2[0xd])) << 8 ^ zx.d(arg2[0xe])) << 8 ^ zx.d(arg2[0xf])
arg3[3] = rbp_6
uint32_t rbx = rbp_6
uint32_t arg_20 = rbx

if (arg1 != 0x80)
    uint32_t r12_13 =
        ((zx.d(arg2[0x10]) << 8 ^ zx.d(arg2[0x11])) << 8 ^ zx.d(arg2[0x12])) << 8 ^ zx.d(arg2[0x13])
    arg3[8] = r12_13
    uint32_t r13_13 =
        ((zx.d(arg2[0x14]) << 8 ^ zx.d(arg2[0x15])) << 8 ^ zx.d(arg2[0x16])) << 8 ^ zx.d(arg2[0x17])
    arg3[9] = r13_13
    uint32_t rbp_8
    uint32_t r14_8
    
    if (arg1 != 0xc0)
        r14_8 = ((zx.d(arg2[0x18]) << 8 ^ zx.d(arg2[0x19])) << 8 ^ zx.d(arg2[0x1a])) << 8
            ^ zx.d(arg2[0x1b])
        arg3[0xa] = r14_8
        rbp_8 = ((zx.d(arg2[0x1c]) << 8 ^ zx.d(arg2[0x1d])) << 8 ^ zx.d(arg2[0x1e])) << 8
            ^ zx.d(arg2[0x1f])
    else
        r14_8 = not.d(r12_13)
        rbp_8 = not.d(r13_13)
        arg3[0xa] = r14_8
    
    arg3[0xb] = rbp_8
    rdi = *arg3
    r12_6 = r12_13 ^ rdi
    rsi = arg3[1]
    r13_6 = r13_13 ^ rsi
    r11 = arg3[2]
    r14_6 = r14_8 ^ r11
    rbx = arg3[3]
    rbp_6 = rbp_8 ^ rbx
    var_58 = rdi
    arg_18 = rsi
    arg_10 = r11
    arg_20 = rbx

int64_t r8_1 = zx.q(r12_6) ^ 0xa09e667f
int64_t r8_3 = zx.q(r13_6) ^ 0x3bcc908b
int32_t r10_3 = *((zx.q((r8_1 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_1 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_1 u>> 0x18 << 2))
    ^ *((zx.q(r8_1.b) << 2) + 0x14353afd0)
int32_t r9_4 = *((zx.q((r8_3 u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((r8_3 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_3 u>> 0x18 << 2) + 0x14353b3d0)
    ^ *(&data_14353abd0 + (zx.q(r8_3.b) << 2)) ^ r10_3
int32_t r14_15 = r14_6 ^ r9_4
int32_t rbp_15 = rbp_6 ^ ((r10_3 << 0x18) + (r10_3 u>> 8)) ^ r9_4
int64_t r8_5 = zx.q(r14_15) ^ 0xb67ae858
int64_t r8_7 = zx.q(rbp_15) ^ 0x4caa73b2
int32_t r10_8 = *((zx.q((r8_5 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_5 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_5 u>> 0x18 << 2))
    ^ *((zx.q(r8_5.b) << 2) + 0x14353afd0)
int32_t r9_9 = *((zx.q((r8_7 u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((r8_7 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_7 u>> 0x18 << 2) + 0x14353b3d0)
    ^ *(&data_14353abd0 + (zx.q(r8_7.b) << 2)) ^ r10_8
int32_t r12_14 = r12_6 ^ rdi ^ r9_9
int32_t r13_14 = r13_6 ^ ((r10_8 << 0x18) + (r10_8 u>> 8)) ^ rsi ^ r9_9
int64_t r8_9 = zx.q(r12_14) ^ 0xc6ef372f
int32_t r10_13 = *((zx.q((r8_9 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_9 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_9 u>> 0x18 << 2))
    ^ *((zx.q(r8_9.b) << 2) + 0x14353afd0)
int64_t r8_11 = zx.q(r13_14) ^ 0xe94f82be
int32_t r9_14 = *((zx.q((r8_11 u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((r8_11 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_11 u>> 0x18 << 2) + 0x14353b3d0)
    ^ *(&data_14353abd0 + (zx.q(r8_11.b) << 2)) ^ r10_13
int32_t r14_16 = r14_15 ^ r11 ^ r9_14
int64_t r8_13 = zx.q(r14_16) ^ 0x54ff53a5
int32_t rbp_16 = rbp_15 ^ ((r10_13 << 0x18) + (r10_13 u>> 8)) ^ rbx ^ r9_14
int32_t r9_16 = rbp_16 ^ 0xf1d36f1c
int32_t r10_18 = *((zx.q((r8_13 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_13 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_13 u>> 0x18 << 2))
    ^ *((zx.q(r8_13.b) << 2) + 0x14353afd0)
int32_t r9_19 = *((zx.q((zx.q(r9_16) u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((zx.q(r9_16) u>> 8).b) << 2) + 0x14353afd0)
    ^ *((zx.q(r9_16) u>> 0x18 << 2) + 0x14353b3d0)
int32_t r9_21 = r9_19 ^ *(&data_14353abd0 + (zx.q(r9_16.b) << 2)) ^ r10_18
int32_t r12_15 = r12_14 ^ r9_21
int32_t r13_15 = r13_14 ^ ((r10_18 << 0x18) + (r10_18 u>> 8)) ^ r9_21
int64_t result
uint64_t rbx_12

if (arg1 != 0x80)
    int32_t rbx_13 = arg3[8]
    int32_t rdi_2 = arg3[9]
    int32_t rsi_2 = arg3[0xb]
    arg3[0xc] = r12_15
    int32_t r12_17 = r12_15 ^ rbx_13
    int64_t r8_41 = zx.q(r12_17) ^ 0x10e527fa
    arg3[0xd] = r13_15
    arg3[0xe] = r14_16
    int32_t r13_17 = r13_15 ^ rdi_2
    int32_t r10_35 = *((zx.q((r8_41 u>> 0x10).b) << 2) + 0x14353b3d0)
    arg3[0xf] = rbp_16
    int32_t r10_38 = r10_35 ^ *((zx.q((r8_41 u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (r8_41 u>> 0x18 << 2)) ^ *((zx.q(r8_41.b) << 2) + 0x14353afd0)
    int64_t r8_43 = zx.q(r13_17) ^ 0xde682d1d
    int32_t r11_5 = arg3[0xa]
    int32_t r9_52 = *((zx.q((r8_43 u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((r8_43 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_43 u>> 0x18 << 2) + 0x14353b3d0)
        ^ *(&data_14353abd0 + (zx.q(r8_43.b) << 2)) ^ r10_38
    int32_t r14_18 = r14_16 ^ r11_5 ^ r9_52
    int32_t rbp_25 = rbp_16 ^ ((r10_38 << 0x18) + (r10_38 u>> 8)) ^ rsi_2 ^ r9_52
    int64_t r8_45 = zx.q(r14_18) ^ 0xb05688c2
    int32_t r10_43 = *((zx.q((r8_45 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((r8_45 u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (r8_45 u>> 0x18 << 2)) ^ *((zx.q(r8_45.b) << 2) + 0x14353afd0)
    int64_t r8_47 = zx.q(rbp_25) ^ 0xb3e6c1fd
    int32_t r9_54 = *((zx.q((r8_47 u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((r8_47 u>> 8).b) << 2) + 0x14353afd0)
    arg3[7] = rbp_25
    arg3[6] = r14_18
    int32_t r9_57 = r9_54 ^ *((r8_47 u>> 0x18 << 2) + 0x14353b3d0)
        ^ *(&data_14353abd0 + (zx.q(r8_47.b) << 2)) ^ r10_43
    int32_t r12_18 = r12_17 ^ r9_57
    arg3[4] = r12_18
    int32_t r13_18 = r13_17 ^ ((r10_43 << 0x18) + (r10_43 u>> 8)) ^ r9_57
    int32_t r12_20 = r12_18 << 0x1e | r13_18 u>> 2
    arg3[5] = r13_18
    int32_t r13_20 = r13_18 << 0x1e | r14_18 u>> 2
    arg3[0x14] = r12_20
    int32_t r14_20 = r14_18 << 0x1e | rbp_25 u>> 2
    int32_t rbp_27 = rbp_25 << 0x1e | r12_18 u>> 2
    arg3[0x15] = r13_20
    arg3[0x17] = rbp_27
    int32_t r12_22 = r12_20 << 0x1e | r13_20 u>> 2
    arg3[0x16] = r14_20
    int32_t r13_22 = r13_20 << 0x1e | r14_20 u>> 2
    arg3[0x28] = r12_22
    int32_t r14_22 = r14_20 << 0x1e | rbp_27 u>> 2
    int32_t rbp_29 = rbp_27 << 0x1e | r12_20 u>> 2
    arg3[0x29] = r13_22
    arg3[0x2b] = rbp_29
    arg3[0x2a] = r14_22
    arg3[0x40] = r14_22 u>> 0xd | r13_22 << 0x13
    arg3[0x41] = rbp_29 u>> 0xd | r14_22 << 0x13
    arg3[0x42] = rbp_29 << 0x13 | r12_22 u>> 0xd
    arg3[0x43] = r12_22 << 0x13 | r13_22 u>> 0xd
    int32_t rcx_47 = rdi_2 u>> 0x11 | rbx_13 << 0xf
    arg3[8] = rcx_47
    int32_t rsi_4 = rsi_2 << 0xf | rbx_13 u>> 0x11
    arg3[0xb] = rsi_4
    int32_t r8_50 = rsi_2 u>> 0x11 | r11_5 << 0xf
    int32_t rsi_6 = rsi_4 << 0xf | rcx_47 u>> 0x11
    int32_t rdx_45 = r11_5 u>> 0x11 | rdi_2 << 0xf
    arg3[0xa] = r8_50
    arg3[9] = rdx_45
    int32_t r9_60 = r8_50 u>> 0x11 | rdx_45 << 0xf
    int32_t r11_9 = rdx_45 u>> 0x11 | rcx_47 << 0xf
    int32_t r10_47 = rsi_4 u>> 0x11 | r8_50 << 0xf
    arg3[0x10] = r11_9
    arg3[0x11] = r9_60
    uint64_t r11_11 = zx.q(r11_9 << 0x1e) | zx.q(r9_60 u>> 2)
    arg3[0x12] = r10_47
    uint64_t r9_62 = zx.q(r9_60 << 0x1e) | zx.q(r10_47 u>> 2)
    arg3[0x13] = rsi_6
    uint64_t r10_49 = zx.q(r10_47 << 0x1e) | zx.q(rsi_6 u>> 2)
    uint64_t rsi_8 = zx.q(rsi_6 << 0x1e) | zx.q(r11_9 u>> 2)
    arg3[0x24] = r11_11.d
    arg3[0x25] = r9_62.d
    arg3[0x26] = r10_49.d
    arg3[0x34] = r10_49.d u>> 0x1e | (r9_62 << 2).d
    arg3[0x27] = rsi_8.d
    arg3[0x35] = rsi_8.d u>> 0x1e | (r10_49 << 2).d
    int32_t r11_12 = arg3[0xf]
    int32_t rdx_49 = arg3[0xe]
    arg3[0x37] = (r11_11 << 2).d | r9_62.d u>> 0x1e
    int32_t rax_217 = arg3[0xc]
    arg3[0x36] = (rsi_8 << 2).d | r11_11.d u>> 0x1e
    int32_t rcx_59 = arg3[0xd]
    int32_t r9_65 = rdx_49 u>> 0x11 | rcx_59 << 0xf
    int32_t rbx_17 = rcx_59 u>> 0x11 | rax_217 << 0xf
    int32_t r10_52 = r11_12 u>> 0x11 | rdx_49 << 0xf
    arg3[0xc] = rbx_17
    int32_t rbx_19 = rbx_17 << 0x1e | r9_65 u>> 2
    int32_t r11_14 = r11_12 << 0xf | rax_217 u>> 0x11
    arg3[0xd] = r9_65
    arg3[0xf] = r11_14
    int32_t r9_67 = r9_65 << 0x1e | r10_52 u>> 2
    arg3[0xe] = r10_52
    int32_t r10_54 = r10_52 << 0x1e | r11_14 u>> 2
    int32_t r11_16 = r11_14 << 0x1e | rbx_17 u>> 2
    arg3[0x1d] = r9_67
    arg3[0x1f] = r11_16
    arg3[0x32] = r11_16
    arg3[0x30] = r9_67
    arg3[0x1c] = rbx_19
    arg3[0x38] = r10_54 u>> 0xf | r9_67 << 0x11
    arg3[0x33] = rbx_19
    arg3[0x1e] = r10_54
    arg3[0x31] = r10_54
    arg3[0x39] = r11_16 u>> 0xf | r10_54 << 0x11
    arg3[0x3a] = r11_16 << 0x11 | rbx_19 u>> 0xf
    uint32_t rdx_53 = arg_10 u>> 0x13 | arg_18 << 0xd
    arg3[0x3b] = rbx_19 << 0x11 | r9_67 u>> 0xf
    uint32_t r8_56 = arg_20 u>> 0x13 | arg_10 << 0xd
    uint32_t r11_21 = arg_20 << 0xd | var_58 u>> 0x13
    arg3[0x18] = rdx_53
    uint32_t rbx_24 = var_58 << 0xd | arg_18 u>> 0x13
    arg3[0x1a] = r11_21
    arg3[0x19] = r8_56
    arg3[0x1b] = rbx_24
    uint32_t rbx_26 = rbx_24 << 0xf | rdx_53 u>> 0x11
    uint32_t r9_73 = r8_56 u>> 0x11 | rdx_53 << 0xf
    arg3[0x23] = rbx_26
    arg3[0x20] = r9_73
    uint32_t rdx_57 = r11_21 u>> 0x11 | r8_56 << 0xf
    uint32_t r11_23 = r11_21 << 0xf | rbx_24 u>> 0x11
    arg3[0x21] = rdx_57
    uint64_t r8_60 = zx.q(r11_23 u>> 0xf) | zx.q(rdx_57 << 0x11)
    arg3[0x22] = r11_23
    uint64_t r11_25 = zx.q(r11_23 << 0x11) | zx.q(rbx_26 u>> 0xf)
    rbx_12 = zx.q(rbx_26 << 0x11) | zx.q(r9_73 u>> 0xf)
    uint64_t r10_58 = zx.q(rdx_57 u>> 0xf) | zx.q(r9_73 << 0x11)
    arg3[0x2c] = r10_58.d
    arg3[0x2d] = r8_60.d
    arg3[0x3c] = r11_25.d u>> 0x1e | (r8_60 << 2).d
    arg3[0x2e] = r11_25.d
    arg3[0x3d] = (r11_25 << 2).d | rbx_12.d u>> 0x1e
    arg3[0x3e] = r10_58.d u>> 0x1e | (rbx_12 << 2).d
    arg3[0x3f] = (r10_58 << 2).d | r8_60.d u>> 0x1e
    result = 4
else
    arg3[7] = rbp_16
    int32_t rbp_18 = rbp_16 << 0xf | r12_15 u>> 0x11
    arg3[0xf] = rbp_18
    arg3[6] = r14_16
    int32_t r8_17 = rbp_16 u>> 0x11 | r14_16 << 0xf
    arg3[5] = r13_15
    arg3[0xe] = r8_17
    int32_t r11_3 = rbp_18 u>> 0x11 | r8_17 << 0xf
    int32_t rdx_10 = r14_16 u>> 0x11 | r13_15 << 0xf
    arg3[4] = r12_15
    arg3[0xd] = rdx_10
    int32_t r10_22 = r8_17 u>> 0x11 | rdx_10 << 0xf
    arg3[0x11] = r10_22
    int32_t rcx_10 = r13_15 u>> 0x11 | r12_15 << 0xf
    arg3[0x12] = r11_3
    arg3[0xc] = rcx_10
    int32_t r9_24 = rdx_10 u>> 0x11 | rcx_10 << 0xf
    int32_t rbp_20 = rbp_18 << 0xf | rcx_10 u>> 0x11
    arg3[0x10] = r9_24
    arg3[0x13] = rbp_20
    int32_t rdx_14 = r11_3 u>> 0x11 | r10_22 << 0xf
    arg3[0x19] = rdx_14
    int32_t rcx_14 = r10_22 u>> 0x11 | r9_24 << 0xf
    int32_t r9_28 = rbp_20 u>> 0x11 | r11_3 << 0xf
    int32_t rbp_22 = rbp_20 << 0xf | r9_24 u>> 0x11
    arg3[0x18] = rcx_14
    uint64_t r8_21 = zx.q(r9_28 u>> 0x11) | zx.q(rdx_14 << 0xf)
    uint64_t r10_26 = zx.q(rdx_14 u>> 0x11) | zx.q(rcx_14 << 0xf)
    uint64_t rdx_18 = zx.q(rbp_22 u>> 0x11) | zx.q(r9_28 << 0xf)
    uint64_t rbp_24 = zx.q(rbp_22 << 0xf) | zx.q(rcx_14 u>> 0x11)
    arg3[0x1e] = rdx_18.d
    arg3[0x1c] = r10_26.d
    arg3[0x1d] = r8_21.d
    arg3[0x1f] = rbp_24.d
    uint32_t r9_32 = rdx_18.d u>> 0x1e | (r8_21 << 2).d
    uint32_t r8_24 = rbp_24.d u>> 0x1e | (rdx_18 << 2).d
    arg3[0x28] = r9_32
    arg3[0x29] = r8_24
    uint32_t r10_28 = (r10_26 << 2).d | r8_21.d u>> 0x1e
    uint32_t rdx_20 = (rbp_24 << 2).d | r10_26.d u>> 0x1e
    arg3[0x2b] = r10_28
    arg3[0x2a] = rdx_20
    arg3[0x30] = r8_24 u>> 0xf | r9_32 << 0x11
    arg3[0x31] = rdx_20 u>> 0xf | r8_24 << 0x11
    arg3[0x32] = rdx_20 << 0x11 | r10_28 u>> 0xf
    uint32_t rbx_2 = rbx << 0xf | rdi u>> 0x11
    uint32_t r8_28 = arg_10 u>> 0x11 | rsi << 0xf
    uint32_t r9_36 = rbx u>> 0x11 | arg_10 << 0xf
    uint32_t rdx_25 = rsi u>> 0x11 | rdi << 0xf
    arg3[9] = r8_28
    arg3[8] = rdx_25
    uint32_t rdx_27 = rdx_25 << 0x1e | r8_28 u>> 2
    arg3[0xa] = r9_36
    uint32_t r8_30 = r8_28 << 0x1e | r9_36 u>> 2
    arg3[0xb] = rbx_2
    uint32_t r9_38 = r9_36 << 0x1e | rbx_2 u>> 2
    uint32_t rbx_4 = rbx_2 << 0x1e | rdx_25 u>> 2
    arg3[0x16] = r9_38
    arg3[0x33] = r10_28 << 0x11 | r9_32 u>> 0xf
    arg3[0x14] = rdx_27
    arg3[0x15] = r8_30
    arg3[0x17] = rbx_4
    uint32_t rcx_26 = r8_30 u>> 0x11 | rdx_27 << 0xf
    uint32_t rdx_31 = r9_38 u>> 0x11 | r8_30 << 0xf
    uint32_t r8_34 = rbx_4 u>> 0x11 | r9_38 << 0xf
    uint32_t rbx_6 = rbx_4 << 0xf | rdx_27 u>> 0x11
    arg3[0x1a] = r8_34
    arg3[0x1b] = rbx_6
    uint32_t r9_42 = rdx_31 u>> 0xf | rcx_26 << 0x11
    uint32_t rcx_30 = r8_34 u>> 0xf | rdx_31 << 0x11
    arg3[0x20] = r9_42
    uint32_t rdx_35 = rbx_6 u>> 0xf | r8_34 << 0x11
    uint32_t rbx_8 = rbx_6 << 0x11 | rcx_26 u>> 0xf
    arg3[0x21] = rcx_30
    arg3[0x23] = rbx_8
    uint32_t r8_38 = rcx_30 u>> 0xf | r9_42 << 0x11
    arg3[0x22] = rdx_35
    uint32_t r10_33 = rbx_8 u>> 0xf | rdx_35 << 0x11
    uint32_t r9_46 = rdx_35 u>> 0xf | rcx_30 << 0x11
    uint32_t rbx_10 = rbx_8 << 0x11 | r9_42 u>> 0xf
    arg3[0x25] = r9_46
    arg3[0x27] = rbx_10
    arg3[0x2d] = r10_33 u>> 0xf | r9_46 << 0x11
    arg3[0x26] = r10_33
    arg3[0x24] = r8_38
    arg3[0x2e] = rbx_10 u>> 0xf | r10_33 << 0x11
    rbx_12 = zx.q(rbx_10 << 0x11) | zx.q(r8_38 u>> 0xf)
    result = 3
    arg3[0x2c] = r9_46 u>> 0xf | r8_38 << 0x11

arg3[0x2f] = rbx_12.d
return result
