// 函数: sub_140e52b70
// 地址: 0x140e52b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e50940(arg1, arg2)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x148) = *(arg2 + 0x148)
__builtin_memset(&arg2[0x140], 0, 0x20)
*(arg1 + 0x150) = 0
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x158) = *(arg2 + 0x158)
*(arg1 + 0x15c) = *(arg2 + 0x15c)
return arg1
