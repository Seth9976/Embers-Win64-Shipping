// 函数: sub_140b2f8e0
// 地址: 0x140b2f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
arg1[2] = 0
uint32_t count = arg2[3].d
int64_t r14 = arg2[2]
arg1[3].d = count

if (count != 0)
    sub_1405da9e0(&arg1[2], count, 0)
    memcpy(arg1[2], r14, count)
else
    *(arg1 + 0x1c) = 0

arg1[4].b = arg2[4].b
*(arg1 + 0x21) = *(arg2 + 0x21)
return arg1
