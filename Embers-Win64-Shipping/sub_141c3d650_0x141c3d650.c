// 函数: sub_141c3d650
// 地址: 0x141c3d650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2[1].d)
int128_t* r9 = *arg1
uint128_t zmm6 = zx.o(*arg3)
int32_t result = (temp1 - temp0) s>> 1
zmm6 = _mm_shuffle_pd(zmm6, zmm6, 0)

if (result s> 0)
    uint64_t i_1 = zx.q(((result - 1) u>> 1) + 1)
    uint64_t i
    
    do
        float zmm2[0x4] = *r9
        r10 += 0x10
        int64_t zmm0 = *(r9 + 4)
        float zmm4[0x4] = _mm_unpacklo_ps(zmm2, zmm0)
        r9 += 8
        *(r10 - 0x10) = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(zmm2, zmm0), zmm4[0].q), zmm6)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
