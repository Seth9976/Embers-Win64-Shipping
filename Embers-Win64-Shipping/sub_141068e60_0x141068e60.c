// 函数: sub_141068e60
// 地址: 0x141068e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && arg2 u<= 0x10)
    arg2 = 0x10

if (arg2 == *(arg1 + 0x8c))
    return 

*(arg1 + 0x8c) = arg2
return sub_141068780(arg1, *(arg1 + 0x88), arg2, 8) __tailcall
