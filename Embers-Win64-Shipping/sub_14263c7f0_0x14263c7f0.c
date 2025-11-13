// 函数: sub_14263c7f0
// 地址: 0x14263c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = *(arg1 + 0xd0)
uint64_t r11 = sx.q(*(arg1 + 0xd8))
uint64_t result = result_1
uint64_t r9 = result_1 + (r11 << 3)

if (result_1 != r9)
    while (*result != arg2)
        result += 8
        
        if (result == r9)
            return result
    
    result = (result - result_1) s>> 3
    
    if (result.d != 0xffffffff)
        int32_t rcx_1 = r11.d - result.d
        
        if (rcx_1 != 1)
            memmove(result_1 + (sx.q(result.d) << 3), result_1 + (sx.q((result + 1).d) << 3), 
                (rcx_1 - 1) << 3)
            r11 = zx.q(*(arg1 + 0xd8))
        
        result = zx.q((r11 - 1).d)
        *(arg1 + 0xd8) = result.d

return result
