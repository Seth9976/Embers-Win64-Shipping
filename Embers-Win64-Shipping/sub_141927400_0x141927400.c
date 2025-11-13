// 函数: sub_141927400
// 地址: 0x141927400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
uint32_t count = arg2[2].d
int64_t rbp = arg2[1]
arg1[2].d = count

if (count != 0)
    sub_1405da9e0(&arg1[1], count, 0)
    memcpy(arg1[1], rbp, count)
else
    *(arg1 + 0x14) = 0

return arg1
