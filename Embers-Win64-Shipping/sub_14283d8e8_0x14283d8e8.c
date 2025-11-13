// 函数: sub_14283d8e8
// 地址: 0x14283d8e8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg2 - 1
int32_t r9 = 0
int64_t result_1 = sx.q(result)

if (result s>= 0)
    int64_t r11_1 = 0
    int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(arg2))
    int64_t temp0_2 = _mm_cvtepi32_pd(zx.q(arg3))
    
    do
        double zmm0 = zx.q(r9)
        r9 += 1
        zmm0 = _mm_cvtepi32_pd(zmm0)
        result = int.d((zmm0 + zmm0) f/ temp0_1 f* temp0_2 * 128.0 + 0.5) - 0xc0000
        *(arg1 + (r11_1 << 2)) = result
        r11_1 += 1
        *(arg1 + (result_1 << 2)) = result
        result_1 -= 1
    while (r11_1 s<= result_1)

return result
