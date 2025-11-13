// 函数: sub_1413ce290
// 地址: 0x1413ce290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void arg_8
int32_t* result = sub_141113900(arg1 + 0x64c8, &arg_8, &arg_10, nullptr)

if (arg3[3].b == 0)
    return result

float zmm1_1[0x4] = *arg3
float temp0_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
float temp0_4[0x4] = _mm_mul_ps(zmm1_1, temp0_1)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
zmm1_1 = arg3[2]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
float temp0_10[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
float temp0_12[0x4] = _mm_add_ps(temp0_9, _mm_shuffle_ps(temp0_4, temp0_4, 1))
float zmm4_1[0x4] = data_143eca1e0
float temp0_13[0x4] = _mm_add_ps(temp0_8, temp0_6)
float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_8)
float temp0_15[0x4] = _mm_sub_ps(zmm4_1, temp0_12)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm1_1)
float temp0_17[0x4] = _mm_mul_ps(temp0_10, temp0_14)
float zmm3[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_15, zmm1_1), data_143eca1f0)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, zmm3, 0x32)
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm3, 0), temp0_20, 0x82)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_16, zmm3, 0x31)
float temp0_25[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_17, zmm3, 0x10), temp0_23, 0x88)
float zmm0_1[0x4] = arg3[1]
zmm4_1[0].q = zmm0_1 u>> 0x40
float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_17, 0x12)
float temp0_27[0x4] = _mm_shuffle_ps(zmm0_1, zmm4_1, 0xc4)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_26, zmm3, 0xe8)
float var_28_1[0x4] = temp0_27
float var_58[0x4] = temp0_22
float var_48_1[0x4] = temp0_25
float var_38_1[0x4] = temp0_28
return sub_1413b8160(arg1 + 0x6478, &arg_10, &var_58)
