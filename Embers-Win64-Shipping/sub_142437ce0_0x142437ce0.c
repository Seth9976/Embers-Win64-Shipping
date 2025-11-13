// 函数: sub_142437ce0
// 地址: 0x142437ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48

if ((*(arg1 + 0x204) & 1) != 0)
    float zmm2[0x4] = *(arg1 + 0x1d0)
    char var_1c = 1
    float var_50 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    var_48 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    int64_t var_3c = data_143dbb1f8.q
    float var_40 = var_50
    float var_30[0x4] = *(arg1 + 0x1f0)
    int32_t var_34 = data_143dbb200
    float var_20 = (*(arg1 + 0x200))[0]
    return sub_142437b30(&var_48, arg2, arg3, arg4)

float zmm5[0x4] = data_142d4cc00
int32_t rax_3 = data_143dbb200
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float zmm6[0x4] = *(arg1 + 0x1c0)
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(temp0_3, temp0_6)
int32_t var_40_1 = rax_3
float temp0_8[0x4] = _mm_mul_ps(temp0_4, temp0_5)
char var_1c_1 = 0
float temp0_9[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_10[0x4] = _mm_sub_ps(temp0_8, temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_12[0x4] = _mm_mul_ps(temp0_9, temp0_11)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_6)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xd2)
float temp0_16[0x4] = _mm_add_ps(temp0_12, zmm5)
float temp0_19[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_15, temp0_5), temp0_14), temp0_16)
float var_50_1 = _mm_shuffle_ps(temp0_19, temp0_19, 0xaa)[0]
var_48 = data_143dbb1f8.q
int64_t var_3c_1 = (_mm_unpacklo_ps(temp0_19, _mm_shuffle_ps(temp0_19, temp0_19, 0x55)[0].q)).q
float var_34_1 = var_50_1
float var_30_1[0x4] = *(arg1 + 0x1f0)
int32_t var_20_1 = 0
return sub_142437b30(&var_48, arg2, arg3, arg4)
