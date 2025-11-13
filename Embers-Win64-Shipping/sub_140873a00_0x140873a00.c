// 函数: sub_140873a00
// 地址: 0x140873a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = 0
int64_t rbp = sx.q(arg2[4])
int64_t r14 = *(arg2 + 8)
arg1[4] = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[2], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp << 4).d)
else
    arg1[5] = 0

arg1[6] = arg2[6]
arg1[7].b = arg2[7].b
return arg1
