// 函数: sub_140b04980
// 地址: 0x140b04980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)
uint64_t rsi_8 =
    ((zx.q(((zx.q(arg3[0xc]) << 8 ^ zx.q(arg3[0xd])) << 8).d) ^ zx.q(arg3[0xe])) & 0xffffff) << 8
    ^ zx.q(arg1[3]) ^ zx.q(arg3[0xf])
uint64_t rdi_8 =
    ((zx.q(((zx.q(arg3[8]) << 8 ^ zx.q(arg3[9])) << 8).d) ^ zx.q(arg3[0xa])) & 0xffffff) << 8
    ^ zx.q(arg1[2]) ^ zx.q(arg3[0xb])
uint64_t r11_8 =
    ((zx.q(((zx.q(arg3[4]) << 8 ^ zx.q(arg3[5])) << 8).d) ^ zx.q(arg3[6])) & 0xffffff) << 8
    ^ zx.q(arg1[1]) ^ zx.q(arg3[7])
uint64_t r10_8 =
    ((zx.q(((zx.q(*arg3) << 8 ^ zx.q(arg3[1])) << 8).d) ^ zx.q(arg3[2])) & 0xffffff) << 8
    ^ zx.q(arg3[3]) ^ zx.q(*arg1)
int32_t rbx_4 = *((zx.q((rsi_8 u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((rdi_8 u>> 8).b) << 2) + 0x142e6fea0) ^ *((r10_8 u>> 0x18 << 2) + 0x142e6f6a0)
    ^ *((zx.q(r11_8.b) << 2) + 0x142e702a0) ^ arg1[4]
int32_t r9_4 = *((zx.q((rsi_8 u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((r10_8 u>> 0x10).b) << 2) + 0x142e6faa0) ^ *((r11_8 u>> 0x18 << 2) + 0x142e6f6a0)
    ^ *((zx.q(rdi_8.b) << 2) + 0x142e702a0) ^ arg1[5]
int32_t r8_4 = *((zx.q((r11_8 u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((r10_8 u>> 8).b) << 2) + 0x142e6fea0) ^ *((rdi_8 u>> 0x18 << 2) + 0x142e6f6a0)
    ^ *((zx.q(rsi_8.b) << 2) + 0x142e702a0) ^ arg1[6]
uint64_t r11_10 = zx.q(r8_4)
uint64_t r10_9 = zx.q(r9_4)
int32_t rdx_7 = *((zx.q((rdi_8 u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((r11_8 u>> 8).b) << 2) + 0x142e6fea0) ^ *((rsi_8 u>> 0x18 << 2) + 0x142e6f6a0)
    ^ *((zx.q(r10_8.b) << 2) + 0x142e702a0) ^ arg1[7]
uint64_t rsi_10 = zx.q(rdx_7)
int32_t rbx_7 = *((zx.q((zx.q(rdx_7) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(r8_4) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(rbx_4) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_9 = rbx_7 ^ *((zx.q(r9_4.b) << 2) + 0x142e702a0) ^ arg1[8]
int32_t r9_7 = *((zx.q((zx.q(rsi_10.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rbx_4) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r10_9.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_9 = r9_7 ^ *((zx.q(r8_4.b) << 2) + 0x142e702a0) ^ arg1[9]
int32_t r8_7 = *((zx.q((zx.q(rbx_4) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_9.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_10.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r8_9 = r8_7 ^ *((zx.q(rsi_10.b) << 2) + 0x142e702a0) ^ arg1[0xa]
uint64_t r10_11 = zx.q(r9_9)
uint64_t r11_12 = zx.q(r8_9)
uint64_t rsi_12 = zx.q(*((zx.q((r10_9 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_10 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_10 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_4.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0xb])
int32_t rbx_12 = *((zx.q((zx.q(r8_9) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_12.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_9) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_14 = rbx_12 ^ *((zx.q(r9_9.b) << 2) + 0x142e702a0) ^ arg1[0xc]
int32_t r9_12 = *((zx.q((zx.q(rbx_9) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_12.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_11.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_14 = r9_12 ^ *((zx.q(r8_9.b) << 2) + 0x142e702a0) ^ arg1[0xd]
int32_t r8_12 = *((zx.q((zx.q(rbx_9) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_11.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_12.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r8_14 = r8_12 ^ *((zx.q(rsi_12.b) << 2) + 0x142e702a0) ^ arg1[0xe]
uint64_t r11_14 = zx.q(r8_14)
uint64_t r10_13 = zx.q(r9_14)
uint64_t rsi_14 = zx.q(*((zx.q((r10_11 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_12 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_12 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_9.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0xf])
int32_t rbx_17 = *((zx.q((zx.q(r8_14) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_14.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_14) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_19 = rbx_17 ^ *((zx.q(r9_14.b) << 2) + 0x142e702a0) ^ arg1[0x10]
int32_t r9_17 = *((zx.q((zx.q(rbx_14) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_14.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_13.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_19 = r9_17 ^ *((zx.q(r8_14.b) << 2) + 0x142e702a0) ^ arg1[0x11]
int32_t r8_17 = *((zx.q((zx.q(rbx_14) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_13.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_14.d) u>> 0x18 << 2) + 0x142e6f6a0)
uint64_t r10_15 = zx.q(r9_19)
int32_t r8_19 = r8_17 ^ *((zx.q(rsi_14.b) << 2) + 0x142e702a0) ^ arg1[0x12]
uint64_t r11_16 = zx.q(r8_19)
uint64_t rsi_16 = zx.q(*((zx.q((r10_13 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_14 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_14 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_14.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x13])
int32_t rbx_22 = *((zx.q((zx.q(r8_19) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_16.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_19) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_24 = rbx_22 ^ *((zx.q(r9_19.b) << 2) + 0x142e702a0) ^ arg1[0x14]
int32_t r9_22 = *((zx.q((zx.q(rbx_19) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_16.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_15.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_24 = r9_22 ^ *((zx.q(r8_19.b) << 2) + 0x142e702a0) ^ arg1[0x15]
int32_t r8_22 = *((zx.q((zx.q(rbx_19) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_15.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_16.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r8_24 = r8_22 ^ *((zx.q(rsi_16.b) << 2) + 0x142e702a0) ^ arg1[0x16]
uint64_t r10_17 = zx.q(r9_24)
uint64_t r11_18 = zx.q(r8_24)
uint64_t rsi_18 = zx.q(*((zx.q((r10_15 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_16 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_16 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_19.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x17])
int32_t rbx_27 = *((zx.q((zx.q(r8_24) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_18.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_24) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_29 = rbx_27 ^ *((zx.q(r9_24.b) << 2) + 0x142e702a0) ^ arg1[0x18]
int32_t r9_27 = *((zx.q((zx.q(rbx_24) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_18.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_17.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_29 = r9_27 ^ *((zx.q(r8_24.b) << 2) + 0x142e702a0) ^ arg1[0x19]
int32_t r8_27 = *((zx.q((zx.q(rbx_24) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_17.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_18.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r8_29 = r8_27 ^ *((zx.q(rsi_18.b) << 2) + 0x142e702a0) ^ arg1[0x1a]
uint64_t r11_20 = zx.q(r8_29)
uint64_t r10_19 = zx.q(r9_29)
uint64_t rsi_20 = zx.q(*((zx.q((r10_17 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_18 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_18 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_24.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x1b])
int32_t rbx_32 = *((zx.q((zx.q(r8_29) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_20.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_29) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_34 = rbx_32 ^ *((zx.q(r9_29.b) << 2) + 0x142e702a0) ^ arg1[0x1c]
int32_t r9_32 = *((zx.q((zx.q(rbx_29) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_20.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_19.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r9_34 = r9_32 ^ *((zx.q(r8_29.b) << 2) + 0x142e702a0) ^ arg1[0x1d]
int32_t r8_32 = *((zx.q((zx.q(rbx_29) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_19.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_20.d) u>> 0x18 << 2) + 0x142e6f6a0)
uint64_t r10_21 = zx.q(r9_34)
int32_t r8_34 = r8_32 ^ *((zx.q(rsi_20.b) << 2) + 0x142e702a0) ^ arg1[0x1e]
uint64_t r11_22 = zx.q(r8_34)
uint64_t rsi_22 = zx.q(*((zx.q((r10_19 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_20 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_20 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_29.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x1f])
int32_t rbx_37 = *((zx.q((zx.q(r8_34) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(rsi_22.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_34) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t rbx_39 = rbx_37 ^ *((zx.q(r9_34.b) << 2) + 0x142e702a0) ^ arg1[0x20]
int32_t r9_37 = *((zx.q((zx.q(rbx_34) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(rsi_22.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r10_21.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r8_37 = *((zx.q((zx.q(rbx_34) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r10_21.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r11_22.d) u>> 0x18 << 2) + 0x142e6f6a0)
uint64_t r10_23 = zx.q(r8_37) ^ zx.q(*((zx.q(rsi_22.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x22])
uint64_t r8_40 = zx.q(r9_37) ^ zx.q(*((zx.q(r8_34.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x21])
uint64_t r11_28 = zx.q(*((zx.q((r10_21 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r11_22 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((rsi_22 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_34.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x23])
int32_t r14_2 = *((zx.q((zx.q(r10_23.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r11_28.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(rbx_39) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r14_4 = r14_2 ^ *((zx.q(r8_40.b) << 2) + 0x142e702a0) ^ arg1[0x24]
int32_t r15_2 = *((zx.q((zx.q(rbx_39) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q((zx.q(r11_28.d) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q(r8_40.d) u>> 0x18 << 2) + 0x142e6f6a0)
int32_t r15_4 = r15_2 ^ *((zx.q(r10_23.b) << 2) + 0x142e702a0) ^ arg1[0x25]
int32_t rdx_64 = *((zx.q((zx.q(rbx_39) u>> 8).b) << 2) + 0x142e6fea0)
    ^ *((zx.q((zx.q(r8_40.d) u>> 0x10).b) << 2) + 0x142e6faa0)
    ^ *((zx.q(r10_23.d) u>> 0x18 << 2) + 0x142e6f6a0)
uint64_t rdx_66 = zx.q(rdx_64) ^ zx.q(*((zx.q(r11_28.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x26])
uint64_t r8_46 = zx.q(*((zx.q((r8_40 u>> 8).b) << 2) + 0x142e6fea0))
    ^ zx.q(*((zx.q((r10_23 u>> 0x10).b) << 2) + 0x142e6faa0))
    ^ zx.q(*((r11_28 u>> 0x18 << 2) + 0x142e6f6a0)) ^ zx.q(*((zx.q(rbx_39.b) << 2) + 0x142e702a0))
    ^ zx.q(arg1[0x27])

if (r13.d s> 0xa)
    uint64_t rsi_26 = zx.q(*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q((zx.q(rdx_66.d) u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((zx.q(r8_46.d) u>> 0x18 << 2) + 0x142e6f6a0))
    uint64_t rsi_28 = rsi_26 ^ zx.q(*((zx.q(r14_4.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x2b])
    uint64_t rdi_19 = zx.q(*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((zx.q(rdx_66.d) u>> 0x18 << 2) + 0x142e6f6a0))
    uint64_t rdi_21 = rdi_19 ^ zx.q(*((zx.q(r8_46.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x2a])
    uint64_t rbx_42 = zx.q(*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((zx.q((zx.q(r8_46.d) u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q(r15_4) u>> 0x18 << 2) + 0x142e6f6a0))
    uint64_t rbx_44 = rbx_42 ^ zx.q(*((zx.q(rdx_66.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x29])
    uint64_t r11_32 = zx.q(*((zx.q((rdx_66 u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q((r8_46 u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((zx.q(r14_4) u>> 0x18 << 2) + 0x142e6f6a0))
    uint64_t r11_34 = r11_32 ^ zx.q(*((zx.q(r15_4.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x28])
    r14_4 = *((zx.q((rdi_21 u>> 8).b) << 2) + 0x142e6fea0)
        ^ *((zx.q((rsi_28 u>> 0x10).b) << 2) + 0x142e6faa0)
        ^ *((r11_34 u>> 0x18 << 2) + 0x142e6f6a0) ^ *((zx.q(rbx_44.b) << 2) + 0x142e702a0)
        ^ arg1[0x2c]
    r15_4 = *((zx.q((r11_34 u>> 0x10).b) << 2) + 0x142e6faa0)
        ^ *((zx.q((rsi_28 u>> 8).b) << 2) + 0x142e6fea0) ^ *((rbx_44 u>> 0x18 << 2) + 0x142e6f6a0)
        ^ *((zx.q(rdi_21.b) << 2) + 0x142e702a0) ^ arg1[0x2d]
    rdx_66 = zx.q(*((zx.q((r11_34 u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q((rbx_44 u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((rdi_21 u>> 0x18 << 2) + 0x142e6f6a0))
        ^ zx.q(*((zx.q(rsi_28.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x2e])
    r8_46 = zx.q(*((zx.q((rbx_44 u>> 8).b) << 2) + 0x142e6fea0))
        ^ zx.q(*((zx.q((rdi_21 u>> 0x10).b) << 2) + 0x142e6faa0))
        ^ zx.q(*((rsi_28 u>> 0x18 << 2) + 0x142e6f6a0))
        ^ zx.q(*((zx.q(r11_34.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x2f])
    
    if (r13.d s> 0xc)
        uint64_t rsi_32 = zx.q(*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q((zx.q(rdx_66.d) u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((zx.q(r8_46.d) u>> 0x18 << 2) + 0x142e6f6a0))
        uint64_t rsi_34 = rsi_32 ^ zx.q(*((zx.q(r14_4.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x33])
        uint64_t rdi_25 = zx.q(*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((zx.q(rdx_66.d) u>> 0x18 << 2) + 0x142e6f6a0))
        uint64_t rdi_27 = rdi_25 ^ zx.q(*((zx.q(r8_46.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x32])
        uint64_t rbx_48 = zx.q(*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((zx.q((zx.q(r8_46.d) u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q(r15_4) u>> 0x18 << 2) + 0x142e6f6a0))
        uint64_t rbx_50 = rbx_48 ^ zx.q(*((zx.q(rdx_66.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x31])
        uint64_t r11_37 = zx.q(*((zx.q((rdx_66 u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q((r8_46 u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((zx.q(r14_4) u>> 0x18 << 2) + 0x142e6f6a0))
        uint64_t r11_39 = r11_37 ^ zx.q(*((zx.q(r15_4.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x30])
        r14_4 = *((zx.q((rdi_27 u>> 8).b) << 2) + 0x142e6fea0)
            ^ *((zx.q((rsi_34 u>> 0x10).b) << 2) + 0x142e6faa0)
            ^ *((r11_39 u>> 0x18 << 2) + 0x142e6f6a0) ^ *((zx.q(rbx_50.b) << 2) + 0x142e702a0)
            ^ arg1[0x34]
        r15_4 = *((zx.q((r11_39 u>> 0x10).b) << 2) + 0x142e6faa0)
            ^ *((zx.q((rsi_34 u>> 8).b) << 2) + 0x142e6fea0)
            ^ *((rbx_50 u>> 0x18 << 2) + 0x142e6f6a0) ^ *((zx.q(rdi_27.b) << 2) + 0x142e702a0)
            ^ arg1[0x35]
        rdx_66 = zx.q(*((zx.q((r11_39 u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q((rbx_50 u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((rdi_27 u>> 0x18 << 2) + 0x142e6f6a0))
            ^ zx.q(*((zx.q(rsi_34.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x36])
        r8_46 = zx.q(*((zx.q((rbx_50 u>> 8).b) << 2) + 0x142e6fea0))
            ^ zx.q(*((zx.q((rdi_27 u>> 0x10).b) << 2) + 0x142e6faa0))
            ^ zx.q(*((rsi_34 u>> 0x18 << 2) + 0x142e6f6a0))
            ^ zx.q(*((zx.q(r11_39.b) << 2) + 0x142e702a0)) ^ zx.q(arg1[0x37])

uint64_t r10_25 = zx.q(r8_46.d)
void* rbp_1 = &arg1[r13 * 4]
uint64_t r8_57 = zx.q(rdx_66.d)
int32_t rdx_88 = (*((zx.q((zx.q(r10_25.d) u>> 0x10).b) << 2) + 0x142e706a0) & 0xff0000)
    ^ (*((zx.q((zx.q(r8_57.d) u>> 8).b) << 2) + 0x142e706a0) & 0xff00)
    ^ (*((zx.q(r14_4) u>> 0x18 << 2) + 0x142e706a0) & 0xff000000)
    ^ zx.d(*((zx.q(r15_4.b) << 2) + 0x142e706a0)) ^ *rbp_1
arg4[3] = rdx_88.b
*arg4 = (rdx_88 u>> 0x18).b
arg4[1] = (rdx_88 u>> 0x10).b
arg4[2] = (rdx_88 u>> 8).b
int32_t rdx_94 = (*((zx.q((zx.q(r14_4) u>> 0x10).b) << 2) + 0x142e706a0) & 0xff0000)
    ^ (*((zx.q((zx.q(r10_25.d) u>> 8).b) << 2) + 0x142e706a0) & 0xff00)
    ^ (*((zx.q(r15_4) u>> 0x18 << 2) + 0x142e706a0) & 0xff000000)
    ^ zx.d(*((zx.q(r8_57.b) << 2) + 0x142e706a0)) ^ *(rbp_1 + 4)
arg4[7] = rdx_94.b
arg4[4] = (rdx_94 u>> 0x18).b
arg4[5] = (rdx_94 u>> 0x10).b
arg4[6] = (rdx_94 u>> 8).b
int32_t rdx_100 = (*((zx.q((zx.q(r15_4) u>> 0x10).b) << 2) + 0x142e706a0) & 0xff0000)
    ^ (*((zx.q((zx.q(r14_4) u>> 8).b) << 2) + 0x142e706a0) & 0xff00)
    ^ (*((zx.q(r8_57.d) u>> 0x18 << 2) + 0x142e706a0) & 0xff000000)
    ^ zx.d(*((zx.q(r10_25.b) << 2) + 0x142e706a0)) ^ *(rbp_1 + 8)
arg4[0xb] = rdx_100.b
arg4[8] = (rdx_100 u>> 0x18).b
arg4[9] = (rdx_100 u>> 0x10).b
arg4[0xa] = (rdx_100 u>> 8).b
int32_t rdx_104 = (*((zx.q((r8_57 u>> 0x10).b) << 2) + 0x142e706a0) & 0xff0000)
    ^ (*((zx.q((zx.q(r15_4) u>> 8).b) << 2) + 0x142e706a0) & 0xff00)
    ^ (*((r10_25 u>> 0x18 << 2) + 0x142e706a0) & 0xff000000)
int32_t rdx_106 = rdx_104 ^ zx.d(*((zx.q(r14_4.b) << 2) + 0x142e706a0)) ^ *(rbp_1 + 0xc)
arg4[0xc] = (rdx_106 u>> 0x18).b
arg4[0xd] = (rdx_106 u>> 0x10).b
uint8_t result = (rdx_106 u>> 8).b
arg4[0xe] = result
arg4[0xf] = rdx_106.b
return result
