// 函数: sub_140d70490
// 地址: 0x140d70490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
uint32_t count = arg2[4]
int64_t rbp = *(arg2 + 8)
arg1[4] = count

if (count != 0)
    sub_1405da9e0(&arg1[2], count, 0)
    memcpy(*(arg1 + 8), rbp, count)
else
    arg1[5] = 0

return arg1
