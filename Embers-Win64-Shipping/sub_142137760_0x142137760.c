// 函数: sub_142137760
// 地址: 0x142137760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c1f0(arg1, arg2)
*arg1 = &data_142e79680
arg1[0x12] = 0
uint32_t count = *(arg2 + 0x98)
int64_t r14 = *(arg2 + 0x90)
arg1[0x13].d = count

if (count != 0)
    sub_1405da9e0(&arg1[0x12], count, 0)
    memcpy(arg1[0x12], r14, count)
else
    *(arg1 + 0x9c) = 0

arg1[0x14] = *(arg2 + 0xa0)
arg1[0x15] = *(arg2 + 0xa8)
return arg1
