// 函数: sub_1405c6ac0
// 地址: 0x1405c6ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg1[0x25])
int32_t rax = arg1[0x26].d
uint64_t var_58 = zmm0.q
float zmm8[0x4]

if (zmm0.d f!= arg1[0x36].d || var_58:4.d.d f!= *(arg1 + 0x1b4) || not(rax.d f== arg1[0x37].d))
    uint128_t zmm4 = zx.o(arg1[0x25])
    uint32_t zmm5[0x4] = data_143cd60e0
    uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
    float temp0_4[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax[0].q), zmm2.q)
    zmm2 = data_143cd60f0
    float zmm7[0x4] = data_143cd60d0
    float temp0_5[0x4] = _mm_div_ps(temp0_4, zmm7)
    float var_38_1[0x4] = zmm8
    uint32_t temp0_6[0x4] = _mm_and_ps(zmm5, zmm7)
    zmm0 = _mm_cvttps_epi32(temp0_5)
    var_58 = zmm4.q
    zmm4 = _mm_cvtepi32_ps(zmm0)
    float temp0_13[0x4] = _mm_sub_ps(temp0_4, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_5, data_143cd60e0), 2), 
                zmm4 ^ temp0_5) ^ zmm4, 
            zmm7))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(temp0_13, temp0_6))
    float temp0_17[0x4] = _mm_add_ps(zmm7, zmm2)
    zmm8 = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm2, 2), temp0_17 ^ zmm2) ^ temp0_17
    zmm0 = _mm_cmpeq_ps(data_143cd60c0, zmm8, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_50_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg1[0x37].d = var_50_2
    zmm8 = var_38_1
    float var_48[0x4]
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_48)

var_58.o = *(arg1 + 0x1a0)
float zmm6[0x4]
float zmm9[0x4]
float zmm11[0x4]
uint128_t zmm12
uint128_t zmm15
return sub_141f4d380(arg1, arg1[0x18], arg1[0x19], arg2, zmm6, zmm8, zmm9, zmm11, zmm12, zmm15, 
    &var_58, arg3)
