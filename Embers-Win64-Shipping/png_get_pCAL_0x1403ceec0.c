// 函数: png_get_pCAL
// 地址: 0x1403ceec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg9 == 0 || arg8 == 0 || arg7 == 0 || arg6 == 0 || arg5 == 0
        || arg4 == 0 || arg3 == 0 || (0x400 & *(arg2 + 8)) == 0)
    return 0

*arg3 = *(arg2 + 0xc8)
*arg4 = *(arg2 + 0xd0)
*arg5 = *(arg2 + 0xd4)
*arg6 = zx.d(*(arg2 + 0xe8))
*arg7 = zx.d(*(arg2 + 0xe9))
*arg8 = *(arg2 + 0xd8)
*arg9 = *(arg2 + 0xe0)
return 0x400
