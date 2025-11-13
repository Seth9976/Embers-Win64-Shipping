// 函数: sub_142546210
// 地址: 0x142546210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x40)
int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rsi << 3)) = 0
int64_t rsi_1 = sx.q(arg1[5].d)
int32_t rax_2 = (rsi_1 + 1).d
arg1[5].d = rax_2

if (rax_2 s> *(arg1 + 0x2c))
    sub_140679a80(&arg1[4])

*(rsi_1 + arg1[4]) = 1
return arg1
