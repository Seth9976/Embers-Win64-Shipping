// 函数: png_get_sPLT
// 地址: 0x1403ced20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    return 0

*arg3 = *(arg2 + 0x118)
return zx.q(*(arg2 + 0x120))
