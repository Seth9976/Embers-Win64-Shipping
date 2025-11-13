// 函数: sub_141f6ca40
// 地址: 0x141f6ca40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20210(arg1)
char rax_1 = (*(*arg1 + 0x3e0))(arg1)
*(arg1 + 0x8a) &= 0xfb
*(arg1 + 0x8a) |= (rax_1 & 1) << 2
return sub_141df0440(arg1) __tailcall
