// 函数: sub_141dd9f90
// 地址: 0x141dd9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (&arg1[0x1e] != arg1 + 0x5f)
    arg1[0x1e].b = *(arg1 + 0x5f)
    *(arg1 + 0x5f) = arg1[0x1e].b

return sub_141dc4c00(arg1) __tailcall
