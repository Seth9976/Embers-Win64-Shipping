// 函数: png_get_pHYs_dpi
// 地址: 0x1403ce940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0

if (arg1 != 0 && arg2 != 0 && *(arg2 + 8) s< 0)
    if (arg3 == 0)
        result = 0
    else
        *arg3 = *(arg2 + 0x90)
        result = 0x80
    
    if (arg4 != 0)
        *arg4 = *(arg2 + 0x94)
        result = 0x80
    
    if (arg5 != 0)
        uint32_t rdx = zx.d(*(arg2 + 0x98))
        *arg5 = rdx
        result = 0x80
        
        if (rdx == 1)
            if (arg3 != 0)
                *arg3 = (int.q(float.d(zx.q(*arg3)) * 0.025399999999999999 + 0.5)).d
            
            if (arg4 != 0)
                *arg4 = (int.q(float.d(zx.q(*arg4)) * 0.025399999999999999 + 0.5)).d
                return 0x80

return result
