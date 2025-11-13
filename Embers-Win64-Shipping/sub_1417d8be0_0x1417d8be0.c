// 函数: sub_1417d8be0
// 地址: 0x1417d8be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4]
sub_1417dbd20(arg1, &var_58)
void arg_20
float zmm7_1[0x4] = sub_140ae16d0(arg3, &arg_20, 0)
float zmm6[0x4] = var_58
float zmm2[0x4] = *(arg1 + 0xf0)
int64_t rax = *(arg1 + 0xe0)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0xec), (*(arg1 + 0xf4))[0].q)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float var_38[0x4]
float temp0_4[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0, temp0_1[0].q), var_38)
int64_t arg_8 = rax
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xc9), temp0_5)
float temp0_10[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0xd2), temp0_2), temp0_7)
float temp0_11[0x4] = _mm_add_ps(temp0_10, temp0_10)
float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd2), temp0_2)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc9), temp0_5)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), temp0_11)
float var_48[0x4]
float temp0_21[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(temp0_13, temp0_15), _mm_add_ps(temp0_17, temp0_4)), var_48)
float var_88 = temp0_21[0]
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float var_80 = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)[0]
float var_84 = temp0_22[0]
int64_t var_78
int32_t* r9 = sub_140b63b70(&arg_8, &var_78)
zmm7_1[0] = zmm7_1[0] * 0.25f
char var_98 = 1
int64_t* result = sub_1417d9930(arg2, &var_88, &var_78, r9, &arg_20, arg4)
int64_t rcx_3 = var_78

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
