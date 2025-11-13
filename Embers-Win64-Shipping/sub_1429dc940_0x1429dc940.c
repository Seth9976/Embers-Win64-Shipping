// 函数: sub_1429dc940
// 地址: 0x1429dc940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8

if (*(arg2 + 0x70) == 0)
    int32_t r10_1 = *(arg2 + 0x6c)
    r8 = 0x18
    *arg1 = sbb.d(arg4, arg4, r10_1 != 0) + 0x106
    
    if (r10_1 != 0)
        r8 = 0x10
else if (*(arg2 + 0x6c) != 0)
    *arg1 = 0x102
    r8 = 0xc
else
    *arg1 = 0x107
    r8 = 0x10

arg1[1] = *(arg2 + 0x78)
arg1[2] = *(arg2 + 0x7c)
arg1[5] = 8
arg1[3] = *(arg2 + 0x10)
arg1[4] = (*(arg2 + 4) + 0x147) & 0xfffffff8
arg1[6] = *(arg2 + 8)
arg1[7] = *(arg2 + 0xc)
arg1[8] = *(arg2 + 0x80)
arg1[9] = *(arg2 + 0x84)
arg1[0xa] = *(arg2 + 0x6c)
arg1[0xb] = *(arg2 + 0x70)
*(arg1 + 0x30) = *(arg2 + 0x38)
*(arg1 + 0x38) = *(arg2 + 0x40)
*(arg1 + 0x40) = *(arg2 + 0x48)
*(arg1 + 0x48) = 0
arg1[0x14] = *(arg2 + 0x10)
arg1[0x15] = *(arg2 + 0x24)
arg1[0x16] = *(arg2 + 0x24)
arg1[0x17] = *(arg2 + 0x10)
arg1[0x18] = r8
*(arg1 + 0x68) = arg3
int64_t result = *(arg2 + 0x58)
*(arg1 + 0x70) = result
*(arg1 + 0x78) = 0
return result
