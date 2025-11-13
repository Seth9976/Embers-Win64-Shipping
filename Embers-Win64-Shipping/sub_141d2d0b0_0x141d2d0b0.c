// 函数: sub_141d2d0b0
// 地址: 0x141d2d0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
*(arg1 + 8) = 0
int64_t rbp = sx.q(arg2[4])
int64_t r14 = *(arg2 + 8)
arg1[4] = rbp.d

if (rbp.d != 0)
    sub_1405c4a90(&arg1[2], rbp.d, 0)
    memcpy(*(arg1 + 8), r14, (rbp << 2).d)
else
    arg1[5] = 0

arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8] = arg2[8]
return arg1
