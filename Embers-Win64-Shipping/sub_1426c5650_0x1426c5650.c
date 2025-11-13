// 函数: sub_1426c5650
// 地址: 0x1426c5650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = 0
uint32_t count = arg2[3].d
int64_t rbp = arg2[2]
arg1[3].d = count

if (count != 0)
    sub_1405da9e0(&arg1[2], count, 0)
    memcpy(arg1[2], rbp, count)
else
    *(arg1 + 0x1c) = 0

return arg1
