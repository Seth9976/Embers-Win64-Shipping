// 函数: sub_142689c40
// 地址: 0x142689c40
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
sub_1422a6b20(arg1, arg3)
*(arg2 + 2) &= 0xaf
return arg2
