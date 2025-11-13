// 函数: sub_141c3cb60
// 地址: 0x141c3cb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r10)[0x4] = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
void* r9 = *arg1
float zmm2[0x4] = *arg3
float zmm3[0x4] = arg3[1]
uint64_t result = zx.q((temp1 + (temp0 & 3)) s>> 2)

if (result.d s> 0)
    uint64_t i
    
    do
        float zmm1[0x4] = *(r9 + 4)
        float zmm0[0x4] = *r9
        r9 += 8
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0)
        zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0)
        *r10 = _mm_add_ps(_mm_mul_ps(zmm1, zmm3), _mm_mul_ps(zmm0, zmm2))
        r10 = &r10[1]
        i = result
        result -= 1
    while (i != 1)

return result
