// 函数: sub_142042220
// 地址: 0x142042220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = *(arg1 + 0x50)
uint64_t r9 = sx.q(*(arg1 + 0x58))
int64_t* result = result_1
void* r8 = &result_1[r9]

if (result_1 != r8)
    while (*result != arg2)
        result = &result[1]
        
        if (result == r8)
            return result
    
    result = (result - result_1) s>> 3
    
    if (result.d != 0xffffffff)
        int32_t rdx_2 = r9.d - result.d - 1
        
        if (rdx_2 s>= 1)
            rdx_2 = 1
        
        if (rdx_2 != 0)
            memcpy(&result_1[sx.q(result.d)], &result_1[sx.q(r9.d - rdx_2)], rdx_2 << 3)
            r9 = zx.q(*(arg1 + 0x58))
        
        *(arg1 + 0x58) = (r9 - 1).d
        return sub_1405c53d0(arg1 + 0x50) __tailcall

return result
