// 函数: sub_140ecd9b0
// 地址: 0x140ecd9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e19840(arg1, arg5) == 0)
    *arg2 = 0
else
    *(arg1 + 0x2f0) = sub_140eaf5c0(arg1, arg3, arg4, arg1 + 0x2f4)
    *arg2 = 1

*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
