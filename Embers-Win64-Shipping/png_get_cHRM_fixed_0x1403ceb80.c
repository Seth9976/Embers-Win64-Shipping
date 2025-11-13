// 函数: png_get_cHRM_fixed
// 地址: 0x1403ceb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0 && (*(arg2 + 8) & 4) != 0)
    if (arg3 != 0)
        *arg3 = *(arg2 + 0xa8)
    
    if (arg4 != 0)
        *arg4 = *(arg2 + 0xac)
    
    if (arg5 != 0)
        *arg5 = *(arg2 + 0xb0)
    
    if (arg6 != 0)
        *arg6 = *(arg2 + 0xb4)
    
    if (arg7 != 0)
        *arg7 = *(arg2 + 0xb8)
    
    if (arg8 != 0)
        *arg8 = *(arg2 + 0xbc)
    
    if (arg9 != 0)
        *arg9 = *(arg2 + 0xc0)
    
    result = 4
    
    if (arg10 != 0)
        *arg10 = *(arg2 + 0xc4)

return result
