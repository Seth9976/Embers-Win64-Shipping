// 函数: sub_141f1cf70
// 地址: 0x141f1cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 2) = 0
*(arg2 + 0xa) = 0
*(arg2 + 0xe) = 0
*(arg2 + 2) |= 1
arg2[1].d |= 0x80
char rax = sub_1422a6b20(arg1, arg3)
arg2[1].d &= 0xfffffffb
arg2[1].d |= zx.d(rax) << 2 | 2
char rax_4 = sub_1422a69b0(arg1, arg3)
arg2[1].d &= 0xfffffff7
arg2[1].d |= zx.d(rax_4) << 3
sub_142131b60(arg1 + 0x268, arg2)
return arg2
