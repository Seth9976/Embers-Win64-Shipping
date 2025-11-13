// 函数: sub_140ecb690
// 地址: 0x140ecb690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140e7af60(arg1[0x98], arg4, arg5) == 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
else
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

return arg2
