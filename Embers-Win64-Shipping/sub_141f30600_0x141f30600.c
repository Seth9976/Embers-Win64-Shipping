// 函数: sub_141f30600
// 地址: 0x141f30600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg1[0x25])
int32_t rax = arg1[0x26].d
uint128_t var_18 = arg5
uint64_t var_58 = zmm0.q
float var_48[0x4]

if (zmm0.d f!= arg1[0x36].d || var_58:4.d.d f!= *(arg1 + 0x1b4) || not(rax.d f== arg1[0x37].d))
    uint128_t zmm4 = zx.o(arg1[0x25])
    uint32_t zmm5[0x4] = data_143f3b3e0
    uint128_t zmm2 = _mm_unpacklo_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), 0)
    arg5 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax.q), zmm2.q)
    zmm2 = data_143f3b420
    float zmm7[0x4] = data_143f3b410
    uint128_t zmm3 = _mm_div_ps(arg5, zmm7)
    uint32_t temp0_6[0x4] = _mm_and_ps(zmm5, zmm7)
    zmm0 = _mm_cvttps_epi32(zmm3)
    var_58 = zmm4.q
    zmm4 = _mm_cvtepi32_ps(zmm0)
    arg5 = _mm_sub_ps(arg5, 
        _mm_mul_ps(
            _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(zmm3, data_143f3b3e0), 2), 
                zmm4 ^ zmm3) ^ zmm4, 
            zmm7))
    zmm2 = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_6), _mm_min_ps(arg5, temp0_6))
    uint128_t zmm1 = _mm_add_ps(zmm7, zmm2)
    float zmm8[0x4] = _mm_and_ps(_mm_cmpeq_ps(zx.o(0), zmm2, 2), zmm1 ^ zmm2) ^ zmm1
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm8, 1)
    zmm2 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, zmm0) ^ zmm8
    int32_t var_50_2 = _mm_shuffle_ps(zmm2, zmm2, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55).q)).q
    arg1[0x37].d = var_50_2
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_48)

*(arg1 + 0x1a0)
float (* rax_3)[0x4]
float zmm6[0x4]
float zmm7_1[0x4]
float zmm8_1[0x4]
rax_3, zmm6, zmm7_1, zmm8_1 = sub_140ade170(arg2, &var_48)
float temp0_26[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float zmm2_1[0x4] = *rax_3
int32_t rax_4 = *(arg1 + 0x124)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b))
int32_t var_50_3 = rax_4
uint128_t zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), zmm2_1)
float temp0_31[0x4] = __mulps_xmmps_memps(temp0_28, data_143f3b3b0)
float temp0_32[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
float temp0_33[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
float temp0_34[0x4] = _mm_add_ps(temp0_31, zmm0_2)
float temp0_36[0x4] = _mm_mul_ps(temp0_32, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
zmm0_2 = zx.o(*(arg1 + 0x11c))
float temp0_38[0x4] = _mm_mul_ps(temp0_33, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
float temp0_39[0x4] = __mulps_xmmps_memps(temp0_36, data_143f3b3a0)
var_58 = zmm0_2.q
float temp0_40[0x4] = __mulps_xmmps_memps(temp0_38, data_143f3b390)
var_48 = _mm_add_ps(_mm_add_ps(temp0_34, temp0_39), temp0_40)
int64_t result
int512_t zmm6_1
float zmm9[0x4]
float zmm10[0x4]
result, zmm6_1 =
    sub_141f48240(arg1, &var_58, &var_48, arg3, zmm7_1, zmm8_1, zmm9, zmm10, arg4, arg6)
zmm6_1.o = var_18
return result
