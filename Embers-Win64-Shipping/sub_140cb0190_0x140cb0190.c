// 函数: sub_140cb0190
// 地址: 0x140cb0190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *(arg1 + 0x10)
uint128_t var_18 = zmm0
char rcx = _mm_bsrli_si128(zmm0, 8).b
void* const result

if (rcx != 0)
label_140cb01d3:
    result = var_18.q
else
    while (true)
        result = var_18.q
        
        if (result == 0)
            if (rcx == 0)
                result = nullptr
            
            break
        
        zmm0 = *(result + 0x10)
        var_18 = zmm0
        char rax_1 = _mm_bsrli_si128(zmm0, 8).b
        rcx = rax_1
        
        if (rax_1 != 0)
            goto label_140cb01d3

void* const result_1 = result

if (result == 0)
    return result

return (*(*arg2 + 0x38))(arg2, &result_1, 0, 0, var_18)
