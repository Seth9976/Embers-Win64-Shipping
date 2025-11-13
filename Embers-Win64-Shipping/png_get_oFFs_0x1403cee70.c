// 函数: png_get_oFFs
// 地址: 0x1403cee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg5 == 0 || arg4 == 0 || arg3 == 0 || (0x100 & *(arg2 + 8)) == 0)
    return 0

*arg3 = *(arg2 + 0x84)
*arg4 = *(arg2 + 0x88)
*arg5 = zx.d(*(arg2 + 0x8c))
return 0x100
