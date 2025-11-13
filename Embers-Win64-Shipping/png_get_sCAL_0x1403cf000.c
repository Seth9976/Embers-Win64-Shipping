// 函数: png_get_sCAL
// 地址: 0x1403cf000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || (*(arg2 + 9) & 0x40) == 0)
    return 0

*arg3 = zx.d(*(arg2 + 0x124))
atof(*(arg2 + 0x128))
*arg4 = arg5
atof(*(arg2 + 0x130))
*arg6 = arg5
return 0x4000
