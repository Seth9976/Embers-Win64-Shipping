// 函数: sub_14293a0b0
// 地址: 0x14293a0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx_8 =
    ((zx.d(*arg2) << 8 ^ zx.d(arg2[1])) << 8 ^ zx.d(arg2[2])) << 8 ^ zx.d(arg2[3]) ^ *arg3
uint64_t r14_7 = zx.q(((zx.d(arg2[4]) << 8 ^ zx.d(arg2[5])) << 8 ^ zx.d(arg2[6])) << 8)
    ^ zx.q(arg2[7]) ^ zx.q(*(arg3 + 4))
uint64_t r8_1 = zx.q(rcx_8) ^ zx.q(*(arg3 + 0x10))
uint64_t r8_3 = zx.q(*(arg3 + 0x14)) ^ r14_7
int32_t r11_3 = *((zx.q((r8_1 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_1 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_1 u>> 0x18 << 2))
    ^ *((zx.q(r8_1.b) << 2) + 0x14353afd0)
int32_t r10_4 = *((zx.q((r8_3 u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((r8_3 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_3 u>> 0x18 << 2) + 0x14353b3d0)
    ^ *(&data_14353abd0 + (zx.q(r8_3.b) << 2)) ^ r11_3
int32_t rdi_8 = ((zx.d(arg2[8]) << 8 ^ zx.d(arg2[9])) << 8 ^ zx.d(arg2[0xa])) << 8 ^ zx.d(arg2[0xb])
    ^ *(arg3 + 8) ^ r10_4
uint64_t r8_5 = zx.q(*(arg3 + 0x18)) ^ zx.q(rdi_8)
int32_t rsi_8 = ((zx.d(arg2[0xc]) << 8 ^ zx.d(arg2[0xd])) << 8 ^ zx.d(arg2[0xe])) << 8
    ^ zx.d(arg2[0xf]) ^ *(arg3 + 0xc) ^ ((r11_3 << 0x18) + (r11_3 u>> 8)) ^ r10_4
uint64_t r8_7 = zx.q(*(arg3 + 0x1c)) ^ zx.q(rsi_8)
int32_t r11_8 = *((zx.q((r8_5 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((r8_5 u>> 8).b) << 2) + 0x14353b7d0) ^ *(&data_14353abd0 + (r8_5 u>> 0x18 << 2))
    ^ *((zx.q(r8_5.b) << 2) + 0x14353afd0)
int32_t r10_10 = *((zx.q((r8_7 u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((r8_7 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_7 u>> 0x18 << 2) + 0x14353b3d0)
    ^ *(&data_14353abd0 + (zx.q(r8_7.b) << 2)) ^ r11_8
int32_t rbp_1 = rcx_8 ^ r10_10
int32_t r14_8 = r14_7.d ^ ((r11_8 << 0x18) + (r11_8 u>> 8)) ^ r10_10
uint64_t rax_51 = zx.q(*(arg3 + 0x20)) ^ zx.q(rbp_1)
int32_t r10_12 = *(arg3 + 0x24) ^ r14_8
int32_t r8_8 = rax_51.d
int32_t r11_13 = *((zx.q((rax_51 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((zx.q(r8_8) u>> 8).b) << 2) + 0x14353b7d0)
    ^ *(&data_14353abd0 + (zx.q(r8_8) u>> 0x18 << 2)) ^ *((zx.q(r8_8.b) << 2) + 0x14353afd0)
int32_t r10_15 = *((zx.q((zx.q(r10_12) u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((zx.q(r10_12) u>> 8).b) << 2) + 0x14353afd0)
    ^ *((zx.q(r10_12) u>> 0x18 << 2) + 0x14353b3d0)
int32_t r10_17 = r10_15 ^ *(&data_14353abd0 + (zx.q(r10_12.b) << 2)) ^ r11_13
int32_t rdi_9 = rdi_8 ^ r10_17
int32_t rsi_9 = rsi_8 ^ ((r11_13 << 0x18) + (r11_13 u>> 8)) ^ r10_17
uint64_t rax_70 = zx.q(*(arg3 + 0x28)) ^ zx.q(rdi_9)
int32_t r10_19 = *(arg3 + 0x2c) ^ rsi_9
int32_t r8_10 = rax_70.d
int32_t r11_18 = *((zx.q((rax_70 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((zx.q(r8_10) u>> 8).b) << 2) + 0x14353b7d0)
    ^ *(&data_14353abd0 + (zx.q(r8_10) u>> 0x18 << 2)) ^ *((zx.q(r8_10.b) << 2) + 0x14353afd0)
int32_t r10_22 = *((zx.q((zx.q(r10_19) u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((zx.q(r10_19) u>> 8).b) << 2) + 0x14353afd0)
    ^ *((zx.q(r10_19) u>> 0x18 << 2) + 0x14353b3d0)
int32_t r10_24 = r10_22 ^ *(&data_14353abd0 + (zx.q(r10_19.b) << 2)) ^ r11_18
int32_t rbp_2 = rbp_1 ^ r10_24
int32_t r14_9 = r14_8 ^ ((r11_18 << 0x18) + (r11_18 u>> 8)) ^ r10_24
uint64_t rax_89 = zx.q(*(arg3 + 0x30)) ^ zx.q(rbp_2)
int32_t r10_26 = *(arg3 + 0x34) ^ r14_9
int32_t r8_12 = rax_89.d
int32_t r11_23 = *((zx.q((rax_89 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((zx.q(r8_12) u>> 8).b) << 2) + 0x14353b7d0)
    ^ *(&data_14353abd0 + (zx.q(r8_12) u>> 0x18 << 2)) ^ *((zx.q(r8_12.b) << 2) + 0x14353afd0)
int32_t r10_29 = *((zx.q((zx.q(r10_26) u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((zx.q(r10_26) u>> 8).b) << 2) + 0x14353afd0)
    ^ *((zx.q(r10_26) u>> 0x18 << 2) + 0x14353b3d0)
int32_t r10_31 = r10_29 ^ *(&data_14353abd0 + (zx.q(r10_26.b) << 2)) ^ r11_23
int32_t rdi_10 = rdi_9 ^ r10_31
int32_t rsi_10 = rsi_9 ^ ((r11_23 << 0x18) + (r11_23 u>> 8)) ^ r10_31
uint64_t rax_108 = zx.q(*(arg3 + 0x38)) ^ zx.q(rdi_10)
int32_t r10_33 = *(arg3 + 0x3c) ^ rsi_10
int32_t r8_14 = rax_108.d
void* i = arg3 + 0x40
int32_t r11_28 = *((zx.q((rax_108 u>> 0x10).b) << 2) + 0x14353b3d0)
    ^ *((zx.q((zx.q(r8_14) u>> 8).b) << 2) + 0x14353b7d0)
    ^ *(&data_14353abd0 + (zx.q(r8_14) u>> 0x18 << 2)) ^ *((zx.q(r8_14.b) << 2) + 0x14353afd0)
int32_t r10_36 = *((zx.q((zx.q(r10_33) u>> 0x10).b) << 2) + 0x14353b7d0)
    ^ *((zx.q((zx.q(r10_33) u>> 8).b) << 2) + 0x14353afd0)
    ^ *((zx.q(r10_33) u>> 0x18 << 2) + 0x14353b3d0)
int32_t r10_38 = r10_36 ^ *(&data_14353abd0 + (zx.q(r10_33.b) << 2)) ^ r11_28
int32_t rbp_3 = rbp_2 ^ r10_38
int32_t r14_10 = r14_9 ^ ((r11_28 << 0x18) + (r11_28 u>> 8)) ^ r10_38

while (i != arg3 + (sx.q(arg1 << 4) << 2))
    uint64_t rcx_23 = zx.q(*i) & zx.q(rbp_3)
    int32_t r14_11 = r14_10 ^ ((rcx_23.d u>> 0x1f) + (rcx_23 << 1).d)
    int32_t rdi_11 = rdi_10 ^ (*(i + 0xc) | rsi_10)
    uint64_t rcx_25 = zx.q(*(i + 8)) & zx.q(rdi_11)
    int32_t rbp_4 = rbp_3 ^ (*(i + 4) | r14_11)
    uint64_t r8_17 = zx.q(*(i + 0x10)) ^ zx.q(rbp_4)
    uint64_t r8_19 = zx.q(*(i + 0x14)) ^ zx.q(r14_11)
    int32_t r11_33 = *((zx.q((r8_17 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((r8_17 u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (r8_17 u>> 0x18 << 2)) ^ *((zx.q(r8_17.b) << 2) + 0x14353afd0)
    int32_t r10_44 = *((zx.q((r8_19 u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((r8_19 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_19 u>> 0x18 << 2) + 0x14353b3d0)
        ^ *(&data_14353abd0 + (zx.q(r8_19.b) << 2)) ^ r11_33
    int32_t rdi_12 = rdi_11 ^ r10_44
    uint64_t r8_21 = zx.q(*(i + 0x18)) ^ zx.q(rdi_12)
    int32_t rsi_12 = rsi_10 ^ ((rcx_25.d u>> 0x1f) + (rcx_25 << 1).d)
        ^ ((r11_33 << 0x18) + (r11_33 u>> 8)) ^ r10_44
    uint64_t r8_23 = zx.q(*(i + 0x1c)) ^ zx.q(rsi_12)
    int32_t r11_38 = *((zx.q((r8_21 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((r8_21 u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (r8_21 u>> 0x18 << 2)) ^ *((zx.q(r8_21.b) << 2) + 0x14353afd0)
    int32_t r10_50 = *((zx.q((r8_23 u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((r8_23 u>> 8).b) << 2) + 0x14353afd0) ^ *((r8_23 u>> 0x18 << 2) + 0x14353b3d0)
        ^ *(&data_14353abd0 + (zx.q(r8_23.b) << 2)) ^ r11_38
    int32_t rbp_5 = rbp_4 ^ r10_50
    uint64_t r8_25 = zx.q(*(i + 0x20)) ^ zx.q(rbp_5)
    int32_t r14_12 = r14_11 ^ ((r11_38 << 0x18) + (r11_38 u>> 8)) ^ r10_50
    int32_t r10_52 = *(i + 0x24) ^ r14_12
    int32_t r11_43 = *((zx.q((r8_25 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((r8_25 u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (r8_25 u>> 0x18 << 2)) ^ *((zx.q(r8_25.b) << 2) + 0x14353afd0)
    int32_t r10_55 = *((zx.q((zx.q(r10_52) u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((zx.q(r10_52) u>> 8).b) << 2) + 0x14353afd0)
        ^ *((zx.q(r10_52) u>> 0x18 << 2) + 0x14353b3d0)
    int32_t r10_57 = r10_55 ^ *(&data_14353abd0 + (zx.q(r10_52.b) << 2)) ^ r11_43
    int32_t rdi_13 = rdi_12 ^ r10_57
    int32_t rsi_13 = rsi_12 ^ ((r11_43 << 0x18) + (r11_43 u>> 8)) ^ r10_57
    uint64_t rax_191 = zx.q(*(i + 0x28)) ^ zx.q(rdi_13)
    int32_t r10_59 = *(i + 0x2c) ^ rsi_13
    int32_t r8_27 = rax_191.d
    int32_t r11_48 = *((zx.q((rax_191 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((zx.q(r8_27) u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (zx.q(r8_27) u>> 0x18 << 2)) ^ *((zx.q(r8_27.b) << 2) + 0x14353afd0)
    int32_t r10_62 = *((zx.q((zx.q(r10_59) u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((zx.q(r10_59) u>> 8).b) << 2) + 0x14353afd0)
        ^ *((zx.q(r10_59) u>> 0x18 << 2) + 0x14353b3d0)
    int32_t r10_64 = r10_62 ^ *(&data_14353abd0 + (zx.q(r10_59.b) << 2)) ^ r11_48
    int32_t rbp_6 = rbp_5 ^ r10_64
    int32_t r14_13 = r14_12 ^ ((r11_48 << 0x18) + (r11_48 u>> 8)) ^ r10_64
    uint64_t rax_210 = zx.q(*(i + 0x30)) ^ zx.q(rbp_6)
    int32_t r10_66 = *(i + 0x34) ^ r14_13
    int32_t r8_29 = rax_210.d
    int32_t r11_53 = *((zx.q((rax_210 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((zx.q(r8_29) u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (zx.q(r8_29) u>> 0x18 << 2)) ^ *((zx.q(r8_29.b) << 2) + 0x14353afd0)
    int32_t r10_69 = *((zx.q((zx.q(r10_66) u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((zx.q(r10_66) u>> 8).b) << 2) + 0x14353afd0)
        ^ *((zx.q(r10_66) u>> 0x18 << 2) + 0x14353b3d0)
    int32_t r10_71 = r10_69 ^ *(&data_14353abd0 + (zx.q(r10_66.b) << 2)) ^ r11_53
    rdi_10 = rdi_13 ^ r10_71
    rsi_10 = rsi_13 ^ ((r11_53 << 0x18) + (r11_53 u>> 8)) ^ r10_71
    uint64_t rax_229 = zx.q(*(i + 0x38)) ^ zx.q(rdi_10)
    int32_t r10_73 = *(i + 0x3c) ^ rsi_10
    int32_t r8_31 = rax_229.d
    int32_t r11_58 = *((zx.q((rax_229 u>> 0x10).b) << 2) + 0x14353b3d0)
        ^ *((zx.q((zx.q(r8_31) u>> 8).b) << 2) + 0x14353b7d0)
        ^ *(&data_14353abd0 + (zx.q(r8_31) u>> 0x18 << 2)) ^ *((zx.q(r8_31.b) << 2) + 0x14353afd0)
    i += 0x40
    int32_t r10_76 = *((zx.q((zx.q(r10_73) u>> 0x10).b) << 2) + 0x14353b7d0)
        ^ *((zx.q((zx.q(r10_73) u>> 8).b) << 2) + 0x14353afd0)
        ^ *((zx.q(r10_73) u>> 0x18 << 2) + 0x14353b3d0)
    int32_t r10_78 = r10_76 ^ *(&data_14353abd0 + (zx.q(r10_73.b) << 2)) ^ r11_58
    rbp_3 = rbp_6 ^ r10_78
    r14_10 = r14_13 ^ ((r11_58 << 0x18) + (r11_58 u>> 8)) ^ r10_78

int32_t rdi_14 = rdi_10 ^ *i
int32_t rsi_14 = rsi_10 ^ *(i + 4)
int32_t rbp_7 = rbp_3 ^ *(i + 8)
int32_t r14_14 = r14_10 ^ *(i + 0xc)
*arg4 = (rdi_14 u>> 0x18).b
arg4[1] = (rdi_14 u>> 0x10).b
arg4[2] = (rdi_14 u>> 8).b
arg4[4] = (rsi_14 u>> 0x18).b
arg4[5] = (rsi_14 u>> 0x10).b
arg4[6] = (rsi_14 u>> 8).b
arg4[8] = (rbp_7 u>> 0x18).b
arg4[9] = (rbp_7 u>> 0x10).b
arg4[0xa] = (rbp_7 u>> 8).b
arg4[0xc] = (r14_14 u>> 0x18).b
arg4[0xd] = (r14_14 u>> 0x10).b
uint8_t result = (r14_14 u>> 8).b
arg4[3] = rdi_14.b
arg4[7] = rsi_14.b
arg4[0xb] = rbp_7.b
arg4[0xe] = result
arg4[0xf] = r14_14.b
return result
