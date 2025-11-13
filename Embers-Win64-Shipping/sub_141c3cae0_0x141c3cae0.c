// 函数: sub_141c3cae0
// 地址: 0x141c3cae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r11)[0x4] = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
float zmm2[0x4] = *arg3
float zmm3[0x4] = arg3[1]
float zmm4[0x4] = _mm_sub_ps(*arg4, zmm2)
void* r10 = *arg1
float zmm5[0x4] = _mm_sub_ps(arg4[1], zmm3)
uint64_t result = zx.q((temp1 + (temp0 & 3)) s>> 2)
float zmm0[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm4 = _mm_div_ps(zmm4, zmm0)
zmm5 = _mm_div_ps(zmm5, zmm0)

if (result.d s> 0)
    uint64_t i
    
    do
        float zmm1[0x4] = *(r10 + 4)
        zmm0 = *r10
        r10 += 8
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
        zmm3 = _mm_add_ps(zmm3, zmm5)
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2)
        zmm2 = _mm_add_ps(zmm2, zmm4)
        *r11 = _mm_add_ps(zmm1, zmm0)
        r11 = &r11[1]
        i = result
        result -= 1
    while (i != 1)

return result
