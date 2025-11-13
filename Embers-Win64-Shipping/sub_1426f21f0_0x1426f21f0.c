// 函数: sub_1426f21f0
// 地址: 0x1426f21f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x18) = *(arg2 + 0x18)
arg1[8] = arg2[8]
*(arg1 + 0x24) = *(arg2 + 0x24)
arg1[0xb] = arg2[0xb]
*(arg1 + 0x30) = *(arg2 + 0x30)
arg1[0xe] = arg2[0xe]
*(arg1 + 0x3c) = *(arg2 + 0x3c)
*(arg1 + 0x48) = 0
uint32_t count = arg2[0x14]
int64_t r14 = *(arg2 + 0x48)
arg1[0x14] = count

if (count != 0)
    sub_1405da9e0(&arg1[0x12], count, 0)
    memcpy(*(arg1 + 0x48), r14, count)
else
    arg1[0x15] = 0

*(arg1 + 0x58) = 0
int64_t rbp = sx.q(arg2[0x18])
int64_t r14_1 = *(arg2 + 0x58)
arg1[0x18] = rbp.d

if (rbp.d != 0)
    sub_140638750(&arg1[0x16], rbp.d, 0)
    memcpy(*(arg1 + 0x58), r14_1, (rbp << 2).d)
else
    arg1[0x19] = 0

arg1[0x1a] = arg2[0x1a]
arg1[0x1b] = arg2[0x1b]
*(arg1 + 0x70) = *(arg2 + 0x70)
arg1[0x1e] = arg2[0x1e]
return arg1
