// 函数: sub_141f1dbe0
// 地址: 0x141f1dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = *(arg1 + 0x2d0)
arg3[1] = *(arg1 + 0x2e0)
sub_141eb8b70(arg2, arg1 + 0x278)
sub_141eb8d30(arg2, arg1 + 0x288)
*(arg2 + 0x10) = *(arg1 + 0x209) u>> 2 & 1
*(arg2 + 0x13) = *(arg1 + 0x209) u>> 3 & 1
char result = *(arg1 + 0x210)
*(arg2 + 0x1c) = result
return result
