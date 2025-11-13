// 函数: png_get_sCAL_s
// 地址: 0x1403cf070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 9) & 0x40) == 0)
    return 0

*arg3 = zx.d(*(arg2 + 0x124))
*arg4 = *(arg2 + 0x128)
*arg5 = *(arg2 + 0x130)
return 0x4000
