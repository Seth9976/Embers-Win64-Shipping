// 函数: sub_141c3d6c0
// 地址: 0x141c3d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r10)[0x4] = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
float zmm1[0x4] = *arg3
float (* r11)[0x4] = *arg1
float zmm2[0x4] = _mm_sub_ps(*arg4, zmm1)
uint64_t result = zx.q((temp1 + (temp0 & 3)) s>> 2)
float zmm0[0x4] = _mm_cvtepi32_ps(zx.o(result.d))
zmm2 = _mm_div_ps(zmm2, _mm_shuffle_ps(zmm0, zmm0, 0))

if (result.d s> 0)
    uint64_t i
    
    do
        zmm0 = *r11
        r11 = &(*r11)[1]
        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1)
        zmm1 = _mm_add_ps(zmm1, zmm2)
        *r10 = zmm0
        r10 = &r10[1]
        i = result
        result -= 1
    while (i != 1)

return result
