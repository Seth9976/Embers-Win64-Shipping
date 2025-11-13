// 函数: sub_141f41770
// 地址: 0x141f41770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
uint64_t var_58 = *arg2
uint128_t zmm0 = zx.o(arg1[0x25])
int32_t var_50 = rax
int32_t rax_1 = arg1[0x26].d
uint64_t var_68 = zmm0.q
float zmm7[0x4]
float zmm8[0x4]

if (zmm0.d f!= arg1[0x36].d || var_68:4.d.d f!= *(arg1 + 0x1b4) || not(rax_1.d f== arg1[0x37].d))
    uint128_t zmm4 = zx.o(arg1[0x25])
    uint32_t zmm5[0x4] = data_143f3b3e0
    uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
    uint128_t zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_1[0].q), zmm2.q)
    zmm2 = data_143f3b420
    float var_28_1[0x4] = zmm7
    zmm7 = data_143f3b410
    uint128_t zmm3 = _mm_div_ps(zmm6, zmm7)
    float var_38_1[0x4] = zmm8
    uint32_t temp0_6[0x4] = _mm_and_ps(zmm5, zmm7)
    zmm0 = _mm_cvttps_epi32(zmm3)
    var_68 = zmm4.q
    zmm4 = _mm_cvtepi32_ps(zmm0)
    zmm6 = _mm_sub_ps(zmm6, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3b3e0), 2), 
                zmm4 ^ zmm3) ^ zmm4, 
            zmm7))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(zmm6, temp0_6))
    float temp0_17[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
    float temp0_18[0x4] = _mm_add_ps(zmm2, zmm7)
    zmm8 = _mm_and_ps(temp0_17, temp0_18 ^ zmm2) ^ temp0_18
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm8, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_60_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg1[0x37].d = var_60_2
    zmm8 = var_38_1
    zmm7 = var_28_1
    float var_48[0x4]
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_48)

int64_t rcx_1 = 0
var_68.o = *(arg1 + 0x1a0)

if (arg3 != 0)
    rcx_1 = arg4

float zmm9[0x4]
float zmm10[0x4]
return sub_141f48240(arg1, &var_58, &var_68, arg3, zmm7, zmm8, zmm9, zmm10, rcx_1, arg5)
