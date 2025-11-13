// 函数: sub_140f59fc0
// 地址: 0x140f59fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140f4a4b0(arg1) != 0)
    *arg2 = 0
else
    sub_140f5be70(arg1)
    *(arg1 + 0x384) = *(arg4 + 0x18)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
