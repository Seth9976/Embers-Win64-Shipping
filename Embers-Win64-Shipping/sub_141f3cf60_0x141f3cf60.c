// 函数: sub_141f3cf60
// 地址: 0x141f3cf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x13c)
uint64_t var_4c = *(arg1 + 0x134)
int32_t rax_1 = *(arg1 + 0x124)
uint64_t var_58 = *(arg1 + 0x11c)
uint128_t zmm0 = zx.o(*(arg1 + 0x128))
int32_t rax_2 = *(arg1 + 0x130)
uint64_t var_68 = zmm0.q

if (zmm0.d f!= *(arg1 + 0x1b0) || var_68:4.d.d f!= *(arg1 + 0x1b4)
        || not(rax_2.d f== *(arg1 + 0x1b8)))
    uint128_t zmm4 = zx.o(*(arg1 + 0x128))
    float zmm5[0x4] = data_143f3b3e0
    uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
    uint128_t zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_2.q), zmm2.q)
    zmm2 = data_143f3b420
    float zmm7[0x4] = data_143f3b410
    float temp0_5[0x4] = _mm_div_ps(zmm6, zmm7)
    zmm5 = _mm_and_ps(zmm5, zmm7)
    zmm0 = _mm_cvttps_epi32(temp0_5)
    var_68 = zmm4.q
    zmm4 = _mm_cvtepi32_ps(zmm0)
    zmm6 = _mm_sub_ps(zmm6, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_5, data_143f3b3e0), 2), 
                zmm4 ^ temp0_5) ^ zmm4, 
            zmm7))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(zmm6, zmm5))
    uint128_t zmm1 = _mm_add_ps(zmm7, zmm2)
    float zmm8[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm2, 2), zmm1 ^ zmm2) ^ zmm1
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm8, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_60_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    *(arg1 + 0x1b0) = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
    *(arg1 + 0x1b8) = var_60_2
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_68)

zmm0 = *(arg1 + 0x1a0)
float temp0_26[0x4] = _mm_unpacklo_ps(var_58.d, rax_1.q)
*arg2 = zmm0
arg2[1] = _mm_unpacklo_ps(temp0_26, _mm_unpacklo_ps(var_58:4.d, zx.o(0).q).q)
arg2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_4c.d, rax.q), _mm_unpacklo_ps(var_4c:4.d, 0).q)
return arg2
