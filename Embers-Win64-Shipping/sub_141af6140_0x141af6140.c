// 函数: sub_141af6140
// 地址: 0x141af6140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
sub_140596d10(&arg1[2], &arg2[2])
arg1[4] = 0
uint32_t count = arg2[5].d
int64_t rbx_1 = arg2[4]
arg1[5].d = count

if (count != 0)
    sub_1405da9e0(&arg1[4], count, 0)
    memcpy(arg1[4], rbx_1, count)
else
    *(arg1 + 0x2c) = 0

return arg1
