// 函数: sub_141f652d0
// 地址: 0x141f652d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_68
sub_141f64de0(arg1, &var_68, arg3, 0)
int32_t var_60
float zmm3[0x4] = var_60
float zmm4[0x4] = data_14399f6b8.d
float zmm5[0x4] = var_68
float zmm9[0x4] = data_14399f6c0
float zmm6[0x4] = data_14399f6b8:4.d
float zmm0[0x4] = data_14399f6b8:4.d
int32_t var_5c
float zmm2[0x4] = var_5c
zmm0[0] = zmm0[0] * zmm3[0]
zmm4[0] = zmm4[0] * zmm3[0]
zmm6[0] = zmm6[0] * zmm5[0]
int32_t var_64
zmm9[0] = zmm9[0] f* var_64
zmm9[0] = zmm9[0] - zmm0[0]
zmm0 = data_14399f6c0
zmm0[0] = zmm0[0] * zmm5[0]
zmm4[0] = zmm4[0] - zmm0[0]
zmm4[0] = zmm4[0] f* var_64
zmm9[0] = zmm9[0] + zmm9[0]
zmm6[0] = zmm6[0] - zmm4[0]
zmm4[0] = zmm4[0] + zmm4[0]
zmm9[0] = zmm9[0] * zmm2[0]
zmm6[0] = zmm6[0] + zmm6[0]
zmm9[0] = zmm9[0] + zmm4[0]
zmm4[0] = zmm4[0] * zmm3[0]
zmm9[0] = zmm9[0] * zmm3[0]
zmm9[0] = zmm9[0] f* var_64
zmm6[0] = zmm6[0] f* var_64
zmm6[0] = zmm6[0] - zmm4[0]
zmm6[0] = zmm6[0] * zmm5[0]
zmm6[0] = zmm6[0] * zmm2[0]
zmm6[0] = zmm6[0] + zmm9[0]
zmm4[0] = zmm4[0] * zmm5[0]
zmm9[0] = zmm9[0] - zmm6[0]
zmm4[0] = zmm4[0] * zmm2[0]
*arg2 = zmm6[0]
zmm4[0] = zmm4[0] - zmm9[0]
zmm6[0] = zmm6[0] f+ data_14399f6c0
zmm4[0] = zmm4[0] f+ data_14399f6b8:4.d
zmm4[0] = zmm4[0] + zmm6[0]
zmm9[0] = zmm9[0] + zmm4[0]
arg2[2] = zmm4[0]
arg2[1] = zmm9[0]

if (arg4 == 1)
    zmm5 = *(arg1 + 0x1c0)
    float temp0_1[0x4] = _mm_unpacklo_ps(zmm9, 0)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_6[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, zmm4[0].q), temp0_1[0].q)
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xc9), temp0_3)
    float temp0_11[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0xd2), temp0_2), temp0_8)
    float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
    float temp0_13[0x4] = _mm_mul_ps(temp0_4, temp0_12)
    float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_3)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
    float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_6)
    float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_2), temp0_15), temp0_17)
    float var_60_1 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
    *arg2 = (_mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)).q
    arg2[2] = var_60_1

return arg2
