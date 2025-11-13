// 函数: sub_141c3d7a0
// 地址: 0x141c3d7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg2
int32_t temp0
int32_t temp1
temp0:temp1 = muls.dp.d(0x2aaaaaab, arg2[1].d)
float result[0x4] = *arg3
void* r9 = *arg1
float zmm6[0x4] = *arg3
int32_t rdx_1 = temp0 + (temp0 u>> 0x1f)
float zmm5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(arg3[1].d, result[0].q), 
    _mm_unpacklo_ps(*(arg3 + 0x14), *(arg3 + 4))[0].q)
float zmm7[0x4] = *(arg3 + 8)

if (rdx_1 s> 0)
    void* rcx = r10 + 0x20
    int128_t* r8 = r9
    uint64_t i_1 = zx.q(((rdx_1 - 1) u>> 1) + 1)
    uint64_t i
    
    do
        float result_1[0x4] = *(r9 + 4)
        rcx += 0x30
        float zmm3[0x4] = *r9
        result_1[0]
        result = *r8
        r9 += 8
        float zmm4[0x4] = *(r8 + 4)
        r8 += 8
        result = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm6)
        zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm7)
        *(rcx - 0x50) = result
        result = result_1
        *(rcx - 0x40) = _mm_mul_ps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result[0].q), 
                _mm_unpacklo_ps(zmm3, result[0].q)[0].q), 
            zmm5)
        *(rcx - 0x30) = zmm4
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
