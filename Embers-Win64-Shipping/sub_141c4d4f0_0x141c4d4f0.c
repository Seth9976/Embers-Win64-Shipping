// 函数: sub_141c4d4f0
// 地址: 0x141c4d4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].d = arg2[1].d
arg1[2] = 0
int64_t rbp = sx.q(arg2[3].d)
int64_t r14 = arg2[2]
arg1[3].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[2], rbp.d, 0)
    memcpy(arg1[2], r14, (rbp << 4).d)
else
    *(arg1 + 0x1c) = 0

arg1[4].b = arg2[4].b
return arg1
