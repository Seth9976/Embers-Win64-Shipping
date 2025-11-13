// 函数: sub_141d939d0
// 地址: 0x141d939d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = arg2[2]
arg1[3].d = arg2[3].d
arg1[4] = 0
uint32_t count = arg2[5].d
int64_t rbp = arg2[4]
arg1[5].d = count

if (count != 0)
    sub_1405da9e0(&arg1[4], count, 0)
    memcpy(arg1[4], rbp, count)
else
    *(arg1 + 0x2c) = 0

return arg1
