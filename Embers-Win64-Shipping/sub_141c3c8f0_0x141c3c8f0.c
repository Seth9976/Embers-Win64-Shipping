// 函数: sub_141c3c8f0
// 地址: 0x141c3c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* r10)[0x4] = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
int64_t r9 = *arg1
uint128_t zmm8 = zx.o(*arg3)
uint128_t zmm9 = zx.o(arg3[1])
int32_t result = (temp1 - temp0) s>> 1
zmm8 = _mm_shuffle_pd(zmm8, zmm8, 0)
zmm9 = _mm_shuffle_pd(zmm9, zmm9, 0)

if (result s> 0)
    float zmm6[0x4]
    float var_18_1[0x4] = zmm6
    int128_t* rcx = nullptr
    uint64_t i_1 = zx.q(((result - 1) u>> 1) + 1)
    float zmm7[0x4]
    float var_28_1[0x4] = zmm7
    uint64_t i
    
    do
        float zmm2[0x4] = *(rcx + r9)
        zmm6 = *(rcx + r9 + 4)
        float zmm4[0x4] = zmm2
        int64_t zmm5 = *(rcx + r9 + 0xc)
        int64_t zmm0 = *(rcx + r9 + 8)
        zmm7 = _mm_unpacklo_ps(zmm2, zmm0)
        float zmm3[0x4] = _mm_unpacklo_ps(zmm6, zmm5)
        rcx = &rcx[1]
        zmm2 = _mm_unpacklo_ps(zmm6, zmm5)
        zmm7 = _mm_unpacklo_ps(zmm7, _mm_unpacklo_ps(zmm4, zmm0)[0].q)
        zmm3 = _mm_mul_ps(_mm_unpacklo_ps(zmm3, zmm2[0].q), zmm9)
        *r10 = _mm_add_ps(_mm_mul_ps(zmm7, zmm8), zmm3)
        r10 = &r10[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
