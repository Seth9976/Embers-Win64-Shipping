// 函数: sub_141fa4e70
// 地址: 0x141fa4e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = 0
int32_t rbp = arg2[2].d
int64_t r14 = arg2[1]
arg1[2].d = rbp

if (rbp != 0)
    sub_1405a4c70(&arg1[1], rbp, 0)
    memcpy(arg1[1], r14, rbp * 2)
else
    *(arg1 + 0x14) = 0

arg1[3].b = arg2[3].b
return arg1
