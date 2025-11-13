// 函数: sub_142accab0
// 地址: 0x142accab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = arg1
arg1.q = arg1.q f/ arg2.q
uint128_t zmm7 = arg2
uint128_t result_1 = sub_142a4b9b0(arg1.q)
uint128_t result = result_1
result_1.q = zmm6.q f- result_1.q f* zmm7.q
*arg3 = result_1.q

if (0.0 f> result_1.q || not(result_1.q f< zmm7.q))
    arg2 = result
    int32_t rax_1 = 1
    
    if (0.0 f> result_1.q)
        rax_1 = -1
    
    result.q = result.q f+ _mm_cvtepi32_pd(zx.q(rax_1)).q
    arg2.q f- result.q
    
    if (is_unordered.q(arg2.q, result.q) || arg2.q f!= result.q)
        result_1.q = result.q f* zmm7.q
        zmm6.q = zmm6.q f- result_1.q
        *arg3 = zmm6.q
    else
        *arg3 = 0

return result
