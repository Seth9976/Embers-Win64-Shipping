// 函数: sub_1426a64a0
// 地址: 0x1426a64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = 0
int32_t rbp = arg2[3].d
int64_t r14 = arg2[2]
arg1[3].d = rbp

if (rbp != 0)
    sub_1405a4c70(&arg1[2], rbp, 0)
    memcpy(arg1[2], r14, rbp * 2)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
uint32_t count = arg2[5].d
int64_t r14_1 = arg2[4]
arg1[5].d = count

if (count != 0)
    sub_1405da9e0(&arg1[4], count, 0)
    memcpy(arg1[4], r14_1, count)
else
    *(arg1 + 0x2c) = 0

arg1[6].d = arg2[6].d
return arg1
