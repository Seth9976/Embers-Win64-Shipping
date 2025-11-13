// 函数: sub_1420f38a0
// 地址: 0x1420f38a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
*(arg1 + 0x10) = 0
uint32_t count = arg2[6]
int64_t r14 = *(arg2 + 0x10)
arg1[6] = count

if (count != 0)
    sub_1405da9e0(&arg1[4], count, 0)
    memcpy(*(arg1 + 0x10), r14, count)
else
    arg1[7] = 0

*(arg1 + 0x20) = 0
uint32_t count_1 = arg2[0xa]
int64_t r14_1 = *(arg2 + 0x20)
arg1[0xa] = count_1

if (count_1 != 0)
    sub_1405da9e0(&arg1[8], count_1, 0)
    memcpy(*(arg1 + 0x20), r14_1, count_1)
else
    arg1[0xb] = 0

arg1[0xc].b = arg2[0xc].b
*(arg1 + 0x38) = *(arg2 + 0x38)
return arg1
