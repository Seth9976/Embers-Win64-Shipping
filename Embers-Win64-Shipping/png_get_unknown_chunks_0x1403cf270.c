// 函数: png_get_unknown_chunks
// 地址: 0x1403cf270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg3 == 0)
    return 0

*arg3 = *(arg2 + 0xf0)
return zx.q(*(arg2 + 0xf8))
