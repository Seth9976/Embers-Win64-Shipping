// 函数: sub_1425f45b0
// 地址: 0x1425f45b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x28) = 0
uint32_t count = arg2[0xc]
int64_t r14 = *(arg2 + 0x28)
arg1[0xc] = count

if (count != 0)
    sub_1405da9e0(&arg1[0xa], count, 0)
    memcpy(*(arg1 + 0x28), r14, count)
else
    arg1[0xd] = 0

*(arg1 + 0x38) = *(arg2 + 0x38)
arg1[0x12] = arg2[0x12]
return arg1
