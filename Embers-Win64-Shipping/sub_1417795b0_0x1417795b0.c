// 函数: sub_1417795b0
// 地址: 0x1417795b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg2
float zmm1[0x4] = *(arg1 + 4) ^ 0x80000000
int32_t zmm3 = *(arg1 + 0xc)
int128_t zmm2 = *(arg1 + 8) ^ 0x80000000
float zmm6[0x4] = *arg1 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xe1)
temp0_1[0] = zmm1[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
float temp0_3[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x4e)
temp0_2[0] = zmm2.d
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
temp0_4[0] = zmm3
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_b8[0x4] = temp0_5
float temp0_7[0x4] = _mm_mul_ps(temp0, _mm_shuffle_ps(temp0_5, temp0_5, 0))
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), zmm4)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_7, data_143ef7c70)
float temp0_11[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_3, _mm_shuffle_ps(temp0_5, temp0_5, 0x55))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_5, temp0_5, 0xaa))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef7c60)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143ef7c50)
float var_a8[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
float var_98[0x4]
sub_141780e40(&var_a8, &var_b8, &var_98)
uint32_t zmm0_1[0x4]

if (arg4 != 2)
    zmm0_1 = var_b8[1]
else
    zmm0_1 = var_b8[2]

uint32_t zmm1_1[0x4] = var_b8[3]
zmm1_1[0] = zmm1_1[0] f+ 1f
float zmm0_2[0x4] = sub_140a3f4a0(zmm0_1, zmm1_1)
zmm0_2[0] = zmm0_2[0] * 4f
*arg6 = zmm0_2[0]

if (arg4 != 2)
    var_b8[0] = 0
    var_b8[1].q = 0x3f800000
else
    var_b8[0].q = 0
    var_b8[2] = 0x3f800000

uint128_t zmm1_2 = zx.o(var_b8[0].q)
float zmm11[0x4] = *(arg1 + 4)
float zmm7[0x4] = *(arg1 + 8)
float zmm10[0x4] = *arg1
float rax_1 = var_b8[2]
var_b8[0].q = zmm1_2.q
float zmm5_1 = var_b8[0]
zmm7[0] = zmm7[0] * zmm5_1
var_b8[2] = rax_1
int128_t zmm13 = var_b8[2]
zmm11[0] = zmm11[0] f* zmm13.d
uint128_t zmm8 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x55)
zmm7[0] = zmm7[0] f* zmm8.d
zmm10[0] = zmm10[0] f* zmm8.d
zmm11[0] = zmm11[0] - zmm7[0]
zmm10[0] = zmm10[0] f* zmm13.d
zmm7[0] = zmm7[0] - zmm10[0]
zmm11[0] = zmm11[0] * zmm5_1
zmm11[0] = zmm11[0] + zmm11[0]
zmm10[0] = zmm10[0] - zmm11[0]
zmm0_2 = *(arg1 + 0xc)
zmm7[0] = zmm7[0] + zmm7[0]
zmm1_2.d = zmm11.d f* zmm0_2[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm5_1 = zmm5_1 f+ zmm1_2.d
float zmm2_1 = zmm7[0] * zmm0_2[0]
zmm1_2.d = zmm11.d f* zmm7[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm10[0] = zmm10[0] * zmm11[0]
zmm8.d = zmm8.d f+ zmm2_1
float zmm3_1 = zmm10[0] * zmm0_2[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm13.d = zmm13.d f+ zmm3_1
zmm7[0] = zmm7[0] * zmm10[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm10[0] = zmm10[0] - zmm7[0]
zmm7[0] = zmm7[0] - zmm11[0]
zmm1_2.d = zmm1_2.d f- zmm10[0]
zmm10[0] = zmm10[0] + zmm5_1
zmm7[0] = zmm7[0] f+ zmm13.d
zmm1_2.d = zmm1_2.d f+ zmm8.d
var_b8[2] = zmm7[0]
float result = var_b8[2]
*arg5 = (_mm_unpacklo_ps(zmm10, zmm1_2.q)).q
arg5[1].d = result
return result
