// 函数: png_handle_as_unknown
// 地址: 0x1403bef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg2 != 0)
    int64_t r8_1 = sx.q(*(arg1 + 0x400))
    
    if (r8_1 s> 0)
        int32_t* r9_3 = *(arg1 + 0x408) + r8_1 * 5 - 5
        
        do
            if (*arg2 == *r9_3)
                return zx.q(r9_3[1].b)
            
            r8_1 = zx.q(r8_1.d - 1)
            r9_3 -= 5
        while (r8_1.d != 0)

return 0
