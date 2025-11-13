// 函数: sub_141227fb0
// 地址: 0x141227fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = *(arg2 + 0x548)
int32_t arg_c = *(arg2 + 0x54c)
float var_78[0x4][0x4]
float (* rax_2)[0x4] = sub_14148d370(arg2, &var_78, arg3, &arg_8)
arg3[1] = *rax_2
arg3[2] = rax_2[1]
arg3[3] = rax_2[2]
arg3[4] = rax_2[3]
float (* rax_3)[0x4] = sub_1408041d0(&arg3[1], &var_78)
float zmm2[0x4] = data_142d4cc00
int64_t var_88 = 0
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
arg3[5] = *rax_3
int32_t var_80 = 0
arg3[6] = rax_3[1]
int64_t var_88_1 = 0
arg3[7] = rax_3[2]
int32_t var_80_1 = 0
float zmm7[0x4] = rax_3[3]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
arg3[8] = zmm7
float temp0_3[0x4] = __mulps_xmmps_memps(temp0_1, arg3[7])
float temp0_4[0x4] = __mulps_xmmps_memps(temp0_2, arg3[6])
float temp0_5[0x4] = __mulps_xmmps_memps(temp0, arg3[5])
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm7)
float temp0_8[0x4] = _mm_add_ps(temp0_5, temp0_4)
float temp0_9[0x4] = _mm_add_ps(temp0_3, temp0_7)
zmm2 = data_142d4cc20
float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0), arg3[5])
float temp0_12[0x4] = _mm_add_ps(temp0_8, temp0_9)
float temp0_14[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x55), arg3[6])
float temp0_16[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), arg3[7])
float temp0_17[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_21[0x4] =
    _mm_add_ps(_mm_add_ps(temp0_11, temp0_14), _mm_add_ps(temp0_16, _mm_mul_ps(temp0_17, zmm7)))
float zmm3[0x4] = *(arg1 + 0x160)
float temp0_22[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
temp0_21[0] = temp0_21[0] * temp0_21[0]
uint128_t zmm4 = zx.o(data_143ec501c)
temp0_22[0] = temp0_22[0] * temp0_22[0]
zmm4 = _mm_cvtepi32_ps(zmm4)
float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
temp0_22[0] = temp0_22[0] + temp0_21[0]
zmm4.d = zmm4.d f* 0.001953125f
temp0_24[0] = temp0_24[0] * temp0_24[0]
temp0_22[0] = temp0_22[0] + temp0_24[0]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55)
temp0_25[0] = temp0_25[0] * temp0_25[0]
temp0_12[0] = temp0_12[0] * temp0_12[0]
float temp0_26[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
temp0_26[0] = temp0_26[0] * temp0_26[0]
temp0_25[0] = temp0_25[0] + temp0_12[0]
float result[0x4] = 0x3f800000
temp0_25[0] = temp0_25[0] + temp0_26[0]
temp0_22[0] = temp0_22[0] * temp0_25[0]
zmm3[0] = zmm3[0] f* zmm4.d
float temp0_27[0x4] = _mm_sqrt_ss(temp0_22[0], temp0_22[0])
zmm3[0] = zmm3[0] * zmm3[0]
zmm3[0] = zmm3[0] f* zmm4.d
result[0] = 1f / zmm3[0]
temp0_27[0] = temp0_27[0] * result[0]
arg3[9][0] = temp0_27[0]
return result
