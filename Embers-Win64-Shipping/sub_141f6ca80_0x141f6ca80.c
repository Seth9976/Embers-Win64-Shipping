// 函数: sub_141f6ca80
// 地址: 0x141f6ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20400(arg1)
sub_141df0440(arg1)
char result = (*(*arg1 + 0x3e0))(arg1)
*(arg1 + 0x8a) &= 0xfb
result = (result & 1) << 2
*(arg1 + 0x8a) |= result
return result
