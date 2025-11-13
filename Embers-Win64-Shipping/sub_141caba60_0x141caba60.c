// 函数: sub_141caba60
// 地址: 0x141caba60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = *(arg1 + 0x70)
uint64_t r10 = sx.q(*(arg1 + 0x78))
uint64_t result = result_1
uint64_t r9 = result_1 + (r10 << 3)

if (result_1 != r9)
    while (*result != arg2)
        result += 8
        
        if (result == r9)
            return result
    
    result = (result - result_1) s>> 3
    
    if (result.d != 0xffffffff)
        int32_t rcx_2 = r10.d - result.d - 1
        
        if (rcx_2 s>= 1)
            rcx_2 = 1
        
        if (rcx_2 != 0)
            memcpy(result_1 + (sx.q(result.d) << 3), result_1 + (sx.q(r10.d - rcx_2) << 3), 
                rcx_2 << 3)
            r10 = zx.q(*(arg1 + 0x78))
        
        result = zx.q((r10 - 1).d)
        *(arg1 + 0x78) = result.d

return result
