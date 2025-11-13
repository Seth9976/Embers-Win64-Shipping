// 函数: sub_141f41070
// 地址: 0x141f41070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm1 = zx.o(*(arg1 + 0x11c))
uint128_t zmm0 = zx.o(*arg2)
int32_t rax = arg2[1].d
uint128_t zmm3
zmm3.d = zmm1.d f+ zmm0.d
uint128_t zmm2 = zmm0
uint64_t var_58 = zmm0.q
int32_t rax_1 = *(arg1 + 0x124)
zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
uint64_t var_68 = zmm1.q
zmm2.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f+ zmm0.d
zmm0.d = rax_1.d f+ rax
zmm1 = _mm_unpacklo_ps(zmm3, zmm2.q)
int32_t var_60_1 = zmm0.d
zmm0 = zx.o(arg1[0x25])
int32_t var_50_1 = var_60_1
int32_t rax_3 = arg1[0x26].d
var_58 = zmm1.q
var_68 = zmm0.q
float zmm7[0x4]
float zmm8[0x4]

if (zmm0.d f!= arg1[0x36].d || var_68:4.d.d f!= *(arg1 + 0x1b4) || not(rax_3.d f== arg1[0x37].d))
    uint128_t zmm4 = zx.o(arg1[0x25])
    float zmm5[0x4] = data_143f3b3e0
    zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
    uint128_t zmm6 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax_3.q), zmm2.q)
    zmm2 = data_143f3b420
    float var_28_1[0x4] = zmm7
    zmm7 = data_143f3b410
    zmm3 = _mm_div_ps(zmm6, zmm7)
    float var_38_1[0x4] = zmm8
    zmm5 = _mm_and_ps(zmm5, zmm7)
    zmm0 = _mm_cvttps_epi32(zmm3)
    var_68 = zmm4.q
    zmm4 = _mm_cvtepi32_ps(zmm0)
    zmm6 = _mm_sub_ps(zmm6, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3b3e0), 2), 
                zmm4 ^ zmm3) ^ zmm4, 
            zmm7))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(zmm6, zmm5))
    float temp0_19[0x4] = _mm_cmpeq_ps(zx.o(0), zmm2, 2)
    zmm1 = _mm_add_ps(zmm2, zmm7)
    zmm8 = _mm_and_ps(temp0_19, zmm1 ^ zmm2) ^ zmm1
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm8, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_60_4 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
    arg1[0x37].d = var_60_4
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
