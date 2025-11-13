// 函数: png_get_iCCP
// 地址: 0x1403cecc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || arg6 == 0 || arg5 == 0 || arg3 == 0 || (0x1000 & *(arg2 + 8)) == 0)
    return 0

*arg3 = *(arg2 + 0x100)
*arg5 = *(arg2 + 0x108)
*arg6 = *(arg2 + 0x110)
*arg4 = zx.d(*(arg2 + 0x114))
return 0x1000
