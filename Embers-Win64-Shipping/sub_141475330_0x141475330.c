// 函数: sub_141475330
// 地址: 0x141475330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
arg1[3] = arg2[3]
arg1[4] = arg2[4]
arg1[5] = arg2[5]
arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
arg1[9] = arg2[9]
arg1[0xa] = arg2[0xa]
arg1[0xb].d = arg2[0xb].d
*(arg1 + 0xb4) = *(arg2 + 0xb4)
*(arg1 + 0xb8) = *(arg2 + 0xb8)
*(arg1 + 0xbc) = *(arg2 + 0xbc)
arg1[0xc].d = arg2[0xc].d
*(arg1 + 0xc4) = *(arg2 + 0xc4)
arg1[0x13].q = 0

if (arg2[0x13].q == 0)
    memmove(&arg1[0xd], &arg2[0xd], 0x60)

int64_t rcx_1 = arg1[0x13].q

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x13].q = arg2[0x13].q
arg2[0x13].q = 0
arg1[0x14].d = arg2[0x14].d
*(arg1 + 0x144) = *(arg2 + 0x144)
arg2[0x14].d = 0
*(arg2 + 0x144) = 6
arg1[0x1d].q = 0

if (arg2[0x1d].q == 0)
    memmove(&arg1[0x15], &arg2[0x15], 0x80)

int64_t rcx_3 = arg1[0x1d].q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg1[0x1d].q = arg2[0x1d].q
arg2[0x1d].q = 0
arg1[0x1e].d = arg2[0x1e].d
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
arg2[0x1e].d = 0
*(arg2 + 0x1e4) = 8
arg1[0x1f] = arg2[0x1f]
arg1[0x20] = arg2[0x20]
arg1[0x21].b = arg2[0x21].b
*(arg1 + 0x214) = *(arg2 + 0x214)
*(arg1 + 0x218) = *(arg2 + 0x218)
arg1[0x22].b = arg2[0x22].b
*(arg1 + 0x221) = *(arg2 + 0x221)
arg1[0x25].q = 0

if (arg2[0x25].q == 0)
    memmove(&arg1[0x23], &arg2[0x23], 0x20)

int64_t rcx_5 = arg1[0x25].q

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[0x25].q = arg2[0x25].q
arg2[0x25].q = 0
*(arg1 + 0x258) = *(arg2 + 0x258)
*(arg1 + 0x25c) = *(arg2 + 0x25c)
*(arg2 + 0x258) = 0
*(arg2 + 0x25c) = 4
arg1[0x26].q = arg2[0x26].q
arg2[0x26].q = 0
*(arg1 + 0x268) = *(arg2 + 0x268)
*(arg1 + 0x26c) = *(arg2 + 0x26c)
return arg1
