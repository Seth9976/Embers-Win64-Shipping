// 函数: sub_140b05ab0
// 地址: 0x140b05ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)
uint64_t rsi_8 =
    ((zx.q(((zx.q(arg3[8]) << 8 ^ zx.q(arg3[9])) << 8).d) ^ zx.q(arg3[0xa])) & 0xffffff) << 8
    ^ zx.q(arg1[2]) ^ zx.q(arg3[0xb])
uint64_t rdi_8 =
    ((zx.q(((zx.q(arg3[4]) << 8 ^ zx.q(arg3[5])) << 8).d) ^ zx.q(arg3[6])) & 0xffffff) << 8
    ^ zx.q(arg1[1]) ^ zx.q(arg3[7])
uint64_t rbx_8 =
    ((zx.q(((zx.q(arg3[0xc]) << 8 ^ zx.q(arg3[0xd])) << 8).d) ^ zx.q(arg3[0xe])) & 0xffffff) << 8
    ^ zx.q(arg1[3]) ^ zx.q(arg3[0xf])
uint64_t r11_8 =
    ((zx.q(((zx.q(*arg3) << 8 ^ zx.q(arg3[1])) << 8).d) ^ zx.q(arg3[2])) & 0xffffff) << 8
    ^ zx.q(arg3[3]) ^ zx.q(*arg1)
uint64_t r10_4 = zx.q(*((zx.q((rsi_8 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((zx.q((rdi_8 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((r11_8 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(rbx_8.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[4])
int32_t r9_4 = *((zx.q((rsi_8 u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((rbx_8 u>> 8).b) << 2) + 0x142e6eaa0) ^ *((rdi_8 u>> 0x18 << 2) + 0x142e6e2a0)
    ^ *((zx.q(r11_8.b) << 2) + 0x142e6eea0) ^ arg1[5]
int32_t r8_4 = *((zx.q((rbx_8 u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((r11_8 u>> 8).b) << 2) + 0x142e6eaa0) ^ *((rsi_8 u>> 0x18 << 2) + 0x142e6e2a0)
    ^ *((zx.q(rdi_8.b) << 2) + 0x142e6eea0) ^ arg1[6]
uint64_t r11_10 = zx.q(r9_4)
uint64_t rdi_14 = zx.q(*((zx.q((rdi_8 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((zx.q((r11_8 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((rbx_8 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(rsi_8.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[7])
int32_t rbx_12 = *((zx.q((zx.q(r9_4) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_4) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_4.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_7 = *((zx.q((zx.q(rdi_14.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_4) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_10.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_9 = r9_7 ^ *((zx.q(r10_4.b) << 2) + 0x142e6eea0) ^ arg1[9]
int32_t r8_7 = *((zx.q((zx.q(r10_4.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_14.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_4) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r8_9 = r8_7 ^ *((zx.q(r11_10.b) << 2) + 0x142e6eea0) ^ arg1[0xa]
uint64_t rdi_16 = zx.q(*((zx.q((r10_4 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_10 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_14 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_4.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0xb])
uint64_t r10_6 = zx.q(rbx_12) ^ zx.q(*((zx.q(rdi_14.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[8])
uint64_t r11_12 = zx.q(r9_9)
int32_t rbx_17 = *((zx.q((zx.q(r9_9) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_9) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_6.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_12 = *((zx.q((zx.q(rdi_16.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_9) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_12.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_14 = r9_12 ^ *((zx.q(r10_6.b) << 2) + 0x142e6eea0) ^ arg1[0xd]
int32_t r8_12 = *((zx.q((zx.q(r10_6.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_16.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_9) u>> 0x18 << 2) + 0x142e6e2a0)
uint64_t r10_8 = zx.q(rbx_17) ^ zx.q(*((zx.q(rdi_16.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0xc])
int32_t r8_14 = r8_12 ^ *((zx.q(r11_12.b) << 2) + 0x142e6eea0) ^ arg1[0xe]
uint64_t r11_14 = zx.q(r9_14)
uint64_t rdi_18 = zx.q(*((zx.q((r10_6 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_12 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_16 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_9.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0xf])
int32_t rbx_22 = *((zx.q((zx.q(r9_14) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_14) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_8.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_17 = *((zx.q((zx.q(rdi_18.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_14) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_14.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_19 = r9_17 ^ *((zx.q(r10_8.b) << 2) + 0x142e6eea0) ^ arg1[0x11]
int32_t r8_17 = *((zx.q((zx.q(r10_8.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_18.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_14) u>> 0x18 << 2) + 0x142e6e2a0)
uint64_t r10_10 = zx.q(rbx_22) ^ zx.q(*((zx.q(rdi_18.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x10])
int32_t r8_19 = r8_17 ^ *((zx.q(r11_14.b) << 2) + 0x142e6eea0) ^ arg1[0x12]
uint64_t r11_16 = zx.q(r9_19)
uint64_t rdi_20 = zx.q(*((zx.q((r10_8 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_14 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_18 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_14.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x13])
int32_t rbx_27 = *((zx.q((zx.q(r9_19) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_19) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_10.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_22 = *((zx.q((zx.q(rdi_20.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_19) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_16.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_24 = r9_22 ^ *((zx.q(r10_10.b) << 2) + 0x142e6eea0) ^ arg1[0x15]
int32_t r8_22 = *((zx.q((zx.q(r10_10.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_20.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_19) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r8_24 = r8_22 ^ *((zx.q(r11_16.b) << 2) + 0x142e6eea0) ^ arg1[0x16]
uint64_t r10_12 = zx.q(rbx_27) ^ zx.q(*((zx.q(rdi_20.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x14])
uint64_t r11_18 = zx.q(r9_24)
uint64_t rdi_22 = zx.q(*((zx.q((r10_10 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_16 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_20 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_19.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x17])
int32_t rbx_32 = *((zx.q((zx.q(r9_24) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_24) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_12.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_27 = *((zx.q((zx.q(rdi_22.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_24) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_18.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_29 = r9_27 ^ *((zx.q(r10_12.b) << 2) + 0x142e6eea0) ^ arg1[0x19]
int32_t r8_27 = *((zx.q((zx.q(r10_12.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_22.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_24) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r8_29 = r8_27 ^ *((zx.q(r11_18.b) << 2) + 0x142e6eea0) ^ arg1[0x1a]
uint64_t r10_14 = zx.q(rbx_32) ^ zx.q(*((zx.q(rdi_22.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x18])
uint64_t r11_20 = zx.q(r9_29)
uint64_t rdi_24 = zx.q(*((zx.q((r10_12 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_18 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_22 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_24.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x1b])
int32_t rbx_37 = *((zx.q((zx.q(r9_29) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_29) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_14.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_32 = *((zx.q((zx.q(rdi_24.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_29) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_20.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r9_34 = r9_32 ^ *((zx.q(r10_14.b) << 2) + 0x142e6eea0) ^ arg1[0x1d]
int32_t r8_32 = *((zx.q((zx.q(r10_14.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_24.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_29) u>> 0x18 << 2) + 0x142e6e2a0)
uint64_t r10_16 = zx.q(rbx_37) ^ zx.q(*((zx.q(rdi_24.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x1c])
int32_t r8_34 = r8_32 ^ *((zx.q(r11_20.b) << 2) + 0x142e6eea0) ^ arg1[0x1e]
uint64_t r11_22 = zx.q(r9_34)
uint64_t rdi_26 = zx.q(*((zx.q((r10_14 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_20 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_24 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_29.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x1f])
int32_t rbx_42 = *((zx.q((zx.q(r9_34) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_34) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(r10_16.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t rbx_44 = rbx_42 ^ *((zx.q(rdi_26.b) << 2) + 0x142e6eea0) ^ arg1[0x20]
int32_t r9_37 = *((zx.q((zx.q(rdi_26.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_34) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r11_22.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r8_37 = *((zx.q((zx.q(r10_16.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(rdi_26.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_34) u>> 0x18 << 2) + 0x142e6e2a0)
uint64_t r10_18 = zx.q(r9_37) ^ zx.q(*((zx.q(r10_16.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x21])
int32_t r8_39 = r8_37 ^ *((zx.q(r11_22.b) << 2) + 0x142e6eea0) ^ arg1[0x22]
uint64_t r8_40 = zx.q(rbx_44)
uint64_t r9_40 = zx.q(*((zx.q((r10_16 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r11_22 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((rdi_26 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_34.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x23])
int32_t r14_2 = *((zx.q((zx.q(r10_18.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q((zx.q(r8_39) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q(rbx_44) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r14_4 = r14_2 ^ *((zx.q(r9_40.b) << 2) + 0x142e6eea0) ^ arg1[0x24]
int32_t r15_2 = *((zx.q((zx.q(r9_40.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r8_39) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r10_18.d) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t r15_4 = r15_2 ^ *((zx.q(r8_40.b) << 2) + 0x142e6eea0) ^ arg1[0x25]
int32_t rdx_64 = *((zx.q((zx.q(r8_40.d) u>> 8).b) << 2) + 0x142e6eaa0)
    ^ *((zx.q((zx.q(r9_40.d) u>> 0x10).b) << 2) + 0x142e6e6a0)
    ^ *((zx.q(r8_39) u>> 0x18 << 2) + 0x142e6e2a0)
int32_t rdx_66 = rdx_64 ^ *((zx.q(r10_18.b) << 2) + 0x142e6eea0) ^ arg1[0x26]
uint64_t r10_24 = zx.q(*((zx.q((r8_40 u>> 0x10).b) << 2) + 0x142e6e6a0))
    ^ zx.q(*((zx.q((r10_18 u>> 8).b) << 2) + 0x142e6eaa0))
    ^ zx.q(*((r9_40 u>> 0x18 << 2) + 0x142e6e2a0)) ^ zx.q(*((zx.q(r8_39.b) << 2) + 0x142e6eea0))
    ^ zx.q(arg1[0x27])

if (r13.d s> 0xa)
    uint64_t r8_42 = zx.q(rdx_66)
    int32_t r11_25 = r10_24.d
    uint64_t rsi_18 = zx.q(*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + 0x142e6eaa0))
        ^ zx.q(*((zx.q((zx.q(r10_24.d) u>> 0x10).b) << 2) + 0x142e6e6a0))
        ^ zx.q(*((zx.q(r8_42.d) u>> 0x18 << 2) + 0x142e6e2a0))
    uint64_t rsi_20 = rsi_18 ^ zx.q(*((zx.q(r15_4.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x2a])
    uint64_t rdi_32 = zx.q(*((zx.q((zx.q(r10_24.d) u>> 8).b) << 2) + 0x142e6eaa0))
        ^ zx.q(*((zx.q((zx.q(r8_42.d) u>> 0x10).b) << 2) + 0x142e6e6a0))
        ^ zx.q(*((zx.q(r15_4) u>> 0x18 << 2) + 0x142e6e2a0))
        ^ zx.q(*((zx.q(r14_4.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x29])
    uint64_t rbx_47 = zx.q(*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + 0x142e6e6a0))
        ^ zx.q(*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + 0x142e6eaa0))
        ^ zx.q(*((zx.q(r11_25) u>> 0x18 << 2) + 0x142e6e2a0))
    uint64_t rbx_49 = rbx_47 ^ zx.q(*((zx.q(r8_42.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x2b])
    uint64_t r10_27 = zx.q(*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + 0x142e6e6a0))
        ^ zx.q(*((zx.q((r8_42 u>> 8).b) << 2) + 0x142e6eaa0))
        ^ zx.q(*((zx.q(r14_4) u>> 0x18 << 2) + 0x142e6e2a0))
    uint64_t r10_29 = r10_27 ^ zx.q(*((zx.q(r11_25.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x28])
    r14_4 = *((zx.q((rdi_32 u>> 0x10).b) << 2) + 0x142e6e6a0)
        ^ *((zx.q((rsi_20 u>> 8).b) << 2) + 0x142e6eaa0) ^ *((r10_29 u>> 0x18 << 2) + 0x142e6e2a0)
        ^ *((zx.q(rbx_49.b) << 2) + 0x142e6eea0) ^ arg1[0x2c]
    r15_4 = *((zx.q((rbx_49 u>> 8).b) << 2) + 0x142e6eaa0)
        ^ *((zx.q((rsi_20 u>> 0x10).b) << 2) + 0x142e6e6a0)
        ^ *((rdi_32 u>> 0x18 << 2) + 0x142e6e2a0) ^ *((zx.q(r10_29.b) << 2) + 0x142e6eea0)
        ^ arg1[0x2d]
    rdx_66 = *((zx.q((r10_29 u>> 8).b) << 2) + 0x142e6eaa0)
        ^ *((zx.q((rbx_49 u>> 0x10).b) << 2) + 0x142e6e6a0)
        ^ *((rsi_20 u>> 0x18 << 2) + 0x142e6e2a0) ^ *((zx.q(rdi_32.b) << 2) + 0x142e6eea0)
        ^ arg1[0x2e]
    r10_24 = zx.q(*((zx.q((r10_29 u>> 0x10).b) << 2) + 0x142e6e6a0))
        ^ zx.q(*((zx.q((rdi_32 u>> 8).b) << 2) + 0x142e6eaa0))
        ^ zx.q(*((rbx_49 u>> 0x18 << 2) + 0x142e6e2a0))
        ^ zx.q(*((zx.q(rsi_20.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x2f])
    
    if (r13.d s> 0xc)
        uint64_t r8_44 = zx.q(rdx_66)
        int32_t r11_26 = r10_24.d
        uint64_t rsi_23 = zx.q(*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + 0x142e6eaa0))
            ^ zx.q(*((zx.q((zx.q(r10_24.d) u>> 0x10).b) << 2) + 0x142e6e6a0))
            ^ zx.q(*((zx.q(r8_44.d) u>> 0x18 << 2) + 0x142e6e2a0))
        uint64_t rsi_25 = rsi_23 ^ zx.q(*((zx.q(r15_4.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x32])
        uint64_t rdi_38 = zx.q(*((zx.q((zx.q(r10_24.d) u>> 8).b) << 2) + 0x142e6eaa0))
            ^ zx.q(*((zx.q((zx.q(r8_44.d) u>> 0x10).b) << 2) + 0x142e6e6a0))
            ^ zx.q(*((zx.q(r15_4) u>> 0x18 << 2) + 0x142e6e2a0))
            ^ zx.q(*((zx.q(r14_4.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x31])
        uint64_t rbx_53 = zx.q(*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + 0x142e6e6a0))
            ^ zx.q(*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + 0x142e6eaa0))
            ^ zx.q(*((zx.q(r11_26) u>> 0x18 << 2) + 0x142e6e2a0))
        uint64_t rbx_55 = rbx_53 ^ zx.q(*((zx.q(r8_44.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x33])
        uint64_t r10_37 = zx.q(*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + 0x142e6e6a0))
            ^ zx.q(*((zx.q((r8_44 u>> 8).b) << 2) + 0x142e6eaa0))
            ^ zx.q(*((zx.q(r14_4) u>> 0x18 << 2) + 0x142e6e2a0))
        uint64_t r10_39 = r10_37 ^ zx.q(*((zx.q(r11_26.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x30])
        r14_4 = *((zx.q((rdi_38 u>> 0x10).b) << 2) + 0x142e6e6a0)
            ^ *((zx.q((rsi_25 u>> 8).b) << 2) + 0x142e6eaa0)
            ^ *((r10_39 u>> 0x18 << 2) + 0x142e6e2a0) ^ *((zx.q(rbx_55.b) << 2) + 0x142e6eea0)
            ^ arg1[0x34]
        r15_4 = *((zx.q((rbx_55 u>> 8).b) << 2) + 0x142e6eaa0)
            ^ *((zx.q((rsi_25 u>> 0x10).b) << 2) + 0x142e6e6a0)
            ^ *((rdi_38 u>> 0x18 << 2) + 0x142e6e2a0) ^ *((zx.q(r10_39.b) << 2) + 0x142e6eea0)
            ^ arg1[0x35]
        rdx_66 = *((zx.q((r10_39 u>> 8).b) << 2) + 0x142e6eaa0)
            ^ *((zx.q((rbx_55 u>> 0x10).b) << 2) + 0x142e6e6a0)
            ^ *((rsi_25 u>> 0x18 << 2) + 0x142e6e2a0) ^ *((zx.q(rdi_38.b) << 2) + 0x142e6eea0)
            ^ arg1[0x36]
        r10_24 = zx.q(*((zx.q((r10_39 u>> 0x10).b) << 2) + 0x142e6e6a0))
            ^ zx.q(*((zx.q((rdi_38 u>> 8).b) << 2) + 0x142e6eaa0))
            ^ zx.q(*((rbx_55 u>> 0x18 << 2) + 0x142e6e2a0))
            ^ zx.q(*((zx.q(rsi_25.b) << 2) + 0x142e6eea0)) ^ zx.q(arg1[0x37])

void* rbp_1 = &arg1[r13 * 4]
int32_t rdx_90 = (*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + "cccc||||wwww{{{{") & 0xff0000)
    ^ (*((zx.q((zx.q(rdx_66) u>> 8).b) << 2) + "cccc||||wwww{{{{") & 0xff00)
    ^ (*((zx.q(r14_4) u>> 0x18 << 2) + "cccc||||wwww{{{{") & 0xff000000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r10_24.b) << 2]) ^ *rbp_1
arg4[3] = rdx_90.b
*arg4 = (rdx_90 u>> 0x18).b
arg4[1] = (rdx_90 u>> 0x10).b
arg4[2] = (rdx_90 u>> 8).b
int32_t rdx_94 = (*((zx.q((zx.q(rdx_66) u>> 0x10).b) << 2) + "cccc||||wwww{{{{") & 0xff0000)
    ^ (*((zx.q((r10_24 u>> 8).b) << 2) + "cccc||||wwww{{{{") & 0xff00)
    ^ (*((zx.q(r15_4) u>> 0x18 << 2) + "cccc||||wwww{{{{") & 0xff000000)
int32_t rdx_96 = rdx_94 ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r14_4.b) << 2]) ^ *(rbp_1 + 4)
arg4[7] = rdx_96.b
arg4[4] = (rdx_96 u>> 0x18).b
arg4[5] = (rdx_96 u>> 0x10).b
arg4[6] = (rdx_96 u>> 8).b
int32_t rdx_100 = (*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + "cccc||||wwww{{{{") & 0xff00)
    ^ (*((zx.q((r10_24 u>> 0x10).b) << 2) + "cccc||||wwww{{{{") & 0xff0000)
    ^ (*((zx.q(rdx_66) u>> 0x18 << 2) + "cccc||||wwww{{{{") & 0xff000000)
int32_t rdx_102 = rdx_100 ^ zx.d((*"cccc||||wwww{{{{")[zx.q(r15_4.b) << 2]) ^ *(rbp_1 + 8)
arg4[0xb] = rdx_102.b
arg4[8] = (rdx_102 u>> 0x18).b
arg4[9] = (rdx_102 u>> 0x10).b
arg4[0xa] = (rdx_102 u>> 8).b
int32_t rdx_108 = (*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + "cccc||||wwww{{{{") & 0xff0000)
    ^ (*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + "cccc||||wwww{{{{") & 0xff00)
    ^ (*((r10_24 u>> 0x18 << 2) + "cccc||||wwww{{{{") & 0xff000000)
    ^ zx.d((*"cccc||||wwww{{{{")[zx.q(rdx_66.b) << 2]) ^ *(rbp_1 + 0xc)
arg4[0xc] = (rdx_108 u>> 0x18).b
arg4[0xd] = (rdx_108 u>> 0x10).b
uint8_t result = (rdx_108 u>> 8).b
arg4[0xe] = result
arg4[0xf] = rdx_108.b
return result
