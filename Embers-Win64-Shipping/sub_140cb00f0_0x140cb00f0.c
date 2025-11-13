// 函数: sub_140cb00f0
// 地址: 0x140cb00f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x38))(arg2, arg1 + 0x80, 0, 0)
uint128_t zmm0 = *(arg1 + 0x10)
uint128_t var_18 = zmm0
char rcx_1 = _mm_bsrli_si128(zmm0, 8).b
void* const result

if (rcx_1 != 0)
label_140cb0153:
    result = var_18.q
else
    while (true)
        result = var_18.q
        
        if (result == 0)
            if (rcx_1 == 0)
                result = nullptr
            
            break
        
        zmm0 = *(result + 0x10)
        var_18 = zmm0
        char rax_1 = _mm_bsrli_si128(zmm0, 8).b
        rcx_1 = rax_1
        
        if (rax_1 != 0)
            goto label_140cb0153

void* const result_1 = result

if (result == 0)
    return result

return (*(*arg2 + 0x38))(arg2, &result_1, 0, 0, var_18)
