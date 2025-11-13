// 函数: png_get_cHRM
// 地址: 0x1403cea50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0 && (*(arg2 + 8) & 4) != 0)
    if (arg3 != 0)
        *arg3 = float.d(*(arg2 + 0xa8)) * 1.0000000000000001e-05
    
    if (arg4 != 0)
        *arg4 = float.d(*(arg2 + 0xac)) * 1.0000000000000001e-05
    
    if (arg5 != 0)
        *arg5 = float.d(*(arg2 + 0xb0)) * 1.0000000000000001e-05
    
    if (arg6 != 0)
        *arg6 = float.d(*(arg2 + 0xb4)) * 1.0000000000000001e-05
    
    if (arg7 != 0)
        *arg7 = float.d(*(arg2 + 0xb8)) * 1.0000000000000001e-05
    
    if (arg8 != 0)
        *arg8 = float.d(*(arg2 + 0xbc)) * 1.0000000000000001e-05
    
    if (arg9 != 0)
        *arg9 = float.d(*(arg2 + 0xc0)) * 1.0000000000000001e-05
    
    result = 4
    
    if (arg10 != 0)
        *arg10 = float.d(*(arg2 + 0xc4)) * 1.0000000000000001e-05

return result
