// 函数: sub_1417fe920
// 地址: 0x1417fe920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe1538
arg1[1] = 0
uint32_t count = arg2[1].d
int64_t rbp = *arg2
arg1[2].d = count

if (count != 0)
    sub_1405da9e0(&arg1[1], count, 0)
    memcpy(arg1[1], rbp, count)
else
    *(arg1 + 0x14) = 0

return arg1
