// 函数: sub_1426a77d0
// 地址: 0x1426a77d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ed2eb0(arg1, arg2)
*arg1 = &data_143460f68
arg1[5] = &data_143461350
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
*(arg1 + 0x3a) |= 6
*(arg1 + 0x89) |= 0x80
arg1[0x1c].d &= 0xfffffffe
*(arg1 + 0xe4) = 0
int64_t rsi = sx.q(arg1[0x18].d)
int32_t rax = (rsi + 5).d
arg1[0x18].d = rax

if (rax s> *(arg1 + 0xc4))
    sub_1405a4d70(&arg1[0x17])

int64_t rax_1 = arg1[0x17]
*(rax_1 + (rsi << 3)) = 0
*(rax_1 + (rsi << 3) + 8) = 0
*(rax_1 + (rsi << 3) + 0x10) = 0
*(rax_1 + (rsi << 3) + 0x18) = 0
*(rax_1 + (rsi << 3) + 0x20) = 0
return arg1
