// 函数: sub_141f302d0
// 地址: 0x141f302d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(arg1[0x25])
float var_38[0x4] = arg7
int32_t rax = arg1[0x26].d
uint64_t var_b8 = zmm0.q
float var_98[0x4]
uint128_t zmm2
float zmm4[0x4]
uint32_t zmm5[0x4]

if (zmm0.d f!= arg1[0x36].d || var_b8:4.d.d f!= *(arg1 + 0x1b4) || not(rax.d f== arg1[0x37].d))
    arg7 = data_143f3b410
    zmm4 = zx.o(arg1[0x25])
    zmm5 = data_143f3b3e0
    zmm0 = zmm4
    zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    uint32_t temp0_2[0x4] = _mm_and_ps(zmm5, arg7)
    zmm2 = _mm_unpacklo_ps(zmm0, 0)
    float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, rax[0].q), zmm2.q)
    zmm2 = data_143f3b420
    float temp0_6[0x4] = _mm_div_ps(temp0_5, arg7)
    var_b8 = zmm4.q
    float temp0_8[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_6))
    zmm2 = _mm_and_ps(_mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_6, data_143f3b3e0), 2), 
        temp0_8 ^ temp0_6) ^ temp0_8
    float temp0_16[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), temp0_2), 
        _mm_min_ps(_mm_sub_ps(temp0_5, _mm_mul_ps(zmm2, arg7)), temp0_2))
    zmm0 = _mm_add_ps(arg7, temp0_16)
    zmm2 = _mm_and_ps(zmm0 ^ temp0_16, _mm_cmpeq_ps(zx.o(0), temp0_16, 2)) ^ zmm0
    zmm0 = _mm_cmpeq_ps(data_143f3b400, zmm2, 1)
    float zmm3[0x4] = _mm_and_ps(_mm_sub_ps(zmm2, arg7) ^ zmm2, zmm0) ^ zmm2
    int32_t var_b0_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa).d
    arg1[0x36] = (_mm_unpacklo_ps(zmm3, _mm_shuffle_ps(zmm3, zmm3, 0x55)[0].q)).q
    arg1[0x37].d = var_b0_2
    *(arg1 + 0x1a0) = *sub_140ade170(arg1 + 0x1b0, &var_98)

float zmm12[0x4] = *(arg1 + 0x1a0)
int32_t rax_3 = arg2[1].d
zmm0 = zx.o(*arg2)
arg7 = zmm0
var_b8 = zmm0.q
zmm4 = var_b8.d
float zmm13[0x4] = rax_3
int32_t rax_4 = *(arg1 + 0x124)
float temp0_26[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
zmm13[0] = zmm13[0] * temp0_26[0]
float temp0_27[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
zmm4[0] = zmm4[0] * temp0_27[0]
float temp0_28[0x4] = _mm_shuffle_ps(arg7, arg7, 0x55)
var_98 = zmm12
temp0_28[0] = temp0_28[0] * zmm12[0]
zmm0.d = temp0_28.d f* temp0_27[0]
zmm13[0] = zmm13[0] f- zmm0.d
zmm0.d = zmm13.d f* zmm12[0]
zmm4[0] = zmm4[0] f- zmm0.d
zmm0.d = zmm4.d f* temp0_26[0]
zmm13[0] = zmm13[0] + zmm13[0]
temp0_28[0] = temp0_28[0] f- zmm0.d
zmm0 = _mm_shuffle_ps(zmm12, zmm12, 0xff)
zmm4[0] = zmm4[0] + zmm4[0]
zmm13[0] = zmm13[0] f* zmm0.d
temp0_28[0] = temp0_28[0] + temp0_28[0]
zmm2.d = zmm4.d f* zmm0.d
zmm4[0] = zmm4[0] + zmm13[0]
zmm5 = temp0_28
temp0_28[0] = temp0_28[0] f* zmm0.d
temp0_28[0] = temp0_28[0] f+ zmm2.d
zmm5[0] = zmm5[0] f* temp0_26[0]
zmm0.d = zmm4.d f* temp0_27[0]
zmm13[0] = zmm13[0] + temp0_28[0]
zmm4[0] = zmm4[0] * zmm12[0]
zmm5[0] = zmm5[0] f- zmm0.d
temp0_28[0] = temp0_28[0] * zmm12[0]
zmm0 = zx.o(*(arg1 + 0x11c))
float zmm1[0x4] = zmm0
var_b8 = zmm0.q
zmm5[0] = zmm5[0] f+ zmm4[0]
zmm2 = _mm_shuffle_ps(zmm0, zmm0, 0x55)
zmm13[0] = zmm13[0] * temp0_26[0]
zmm13[0] = zmm13[0] * temp0_27[0]
zmm4[0] = zmm4[0] - zmm13[0]
zmm1[0] = zmm1[0] f+ zmm5[0]
zmm13[0] = zmm13[0] - temp0_28[0]
zmm4[0] = zmm4[0] + zmm13[0]
zmm13[0] = zmm13[0] + temp0_28[0]
zmm0.d = rax_4.d f+ zmm4[0]
zmm2.d = zmm2.d f+ zmm13[0]
int32_t var_b0_5 = zmm0.d
var_b8 = (_mm_unpacklo_ps(zmm1, zmm2.q)).q
int64_t result
int512_t zmm6
int512_t zmm7
int512_t zmm8
result, zmm6, zmm7, zmm8 =
    sub_141f48240(arg1, &var_b8, &var_98, arg3, temp0_27, temp0_28, temp0_26, zmm13, arg4, arg8)
zmm6.o = arg5
zmm7.o = arg6
zmm8.o = var_38
return result
