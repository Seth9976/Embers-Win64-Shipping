// 函数: sub_141e32e10
// 地址: 0x141e32e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_e8
sub_141e1b6d0(&var_e8, arg2, arg3, arg4)
float zmm0[0x4] = var_e8
float zmm6 = arg5 * 0.5f
int32_t var_e0
float zmm15[0x4] = var_e0
int32_t var_dc
float zmm14[0x4] = var_dc
float var_b8[0x4] = zmm0
zmm0[0] = zmm0[0] * zmm6
zmm0[0] = zmm0[0] f+ *arg2
float var_d8 = zmm0[0]
int32_t var_e4
zmm0 = var_e4
zmm0[0] = zmm0[0] * zmm6
zmm0[0] = zmm0[0] f+ *(arg2 + 4)
float var_d4 = zmm0[0]
zmm15[0] = zmm15[0] * zmm6
zmm15[0] = zmm15[0] f+ *(arg2 + 8)
float var_d0 = zmm15[0]
zmm14[0] = zmm14[0] * zmm6
zmm14[0] = zmm14[0] f+ *(arg2 + 0xc)
float var_cc = zmm14[0]
float var_c8
float zmm6_1 = sub_141e1b6d0(&var_c8, &var_d8, arg3, arg4)
float var_c4
float zmm1 = var_c4 * zmm6_1 f+ *(arg2 + 4)
var_d8 = var_c8 * zmm6_1 f+ *arg2
float var_d4_1 = zmm1
float var_c0
float var_d0_1 = var_c0 * zmm6_1 f+ *(arg2 + 8)
float var_bc
float var_cc_1 = var_bc * zmm6_1 f+ *(arg2 + 0xc)
sub_141e1b6d0(&var_c8, &var_d8, arg3, arg4)
float zmm1_1 = var_c4 * arg5 f+ *(arg2 + 4)
var_d8 = var_c8 * arg5 f+ *arg2
float var_d4_2 = zmm1_1
float var_d0_2 = var_c0 * arg5 f+ *(arg2 + 8)
float var_cc_2 = var_bc * arg5 f+ *(arg2 + 0xc)
float zmm6_3
float zmm7_1
float zmm8_1
float zmm9_1
float zmm10_1
float zmm11_1
float zmm12_1
float zmm13_1
float zmm14_1
float zmm15_1
zmm6_3, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
    sub_141e1b6d0(&var_c8, &var_d8, arg3, arg4)
float zmm3[0x4] = arg5
zmm3[0] = zmm3[0] * 0.166666672f
zmm3[0] = zmm3[0] * 0.333333343f
float zmm2_1[0x4] = var_e4
float zmm0_3[0x4] = var_c8
var_b8[0] = var_b8[0] * zmm3[0]
zmm0_3[0] = zmm0_3[0] * zmm3[0]
var_b8[0] = var_b8[0] f+ *arg2
zmm2_1[0] = zmm2_1[0] * zmm3[0]
zmm15_1 = zmm15_1 * zmm3[0]
zmm2_1[0] = zmm2_1[0] f+ *(arg2 + 4)
zmm15_1 = zmm15_1 f+ *(arg2 + 8)
zmm14_1 = zmm14_1 * zmm3[0] f+ *(arg2 + 0xc)
zmm6_3 = zmm6_3 * zmm3[0]
var_b8[0] = var_b8[0] + zmm9_1 * zmm3[0]
zmm7_1 = zmm7_1 * zmm3[0]
zmm2_1[0] = zmm2_1[0] + zmm11_1 * zmm3[0]
zmm12_1 = zmm12_1 * zmm3[0]
var_b8[0] = var_b8[0] + zmm6_3
zmm8_1 = zmm8_1 * zmm3[0]
zmm13_1 = zmm13_1 * zmm3[0]
zmm10_1 = zmm10_1 * zmm3[0]
zmm2_1[0] = zmm2_1[0] + zmm7_1
var_b8[0] = var_b8[0] + zmm0_3[0]
zmm0_3 = var_c4
zmm0_3[0] = zmm0_3[0] * zmm3[0]
zmm2_1[0] = zmm2_1[0] + zmm0_3[0]
float temp0[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xe1)
zmm0_3 = var_c0
zmm0_3[0] = zmm0_3[0] * zmm3[0]
temp0[0] = zmm2_1[0]
zmm15_1 = zmm15_1 + zmm12_1 + zmm8_1 + zmm0_3[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
zmm0_3 = var_bc
zmm0_3[0] = zmm0_3[0] * zmm3[0]
temp0_1[0] = zmm15_1
zmm14_1 = zmm14_1 + zmm13_1 + zmm10_1 + zmm0_3[0]
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm14_1
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*arg1 = temp0_3
uint32_t zmm5[0x4] = data_143f39690
float temp0_4[0x4] = _mm_mul_ps(temp0_3, temp0_3)
float temp0_6[0x4] = _mm_add_ps(temp0_4, _mm_shuffle_ps(temp0_4, temp0_4, 0x4e))
float temp0_8[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x39), temp0_6)
float temp0_9[0x4] = _mm_rsqrt_ps(temp0_8)
float temp0_10[0x4] = _mm_mul_ps(temp0_8, zmm5)
float temp0_15[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_9, temp0_9), temp0_10)), temp0_9), 
    temp0_9)
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_15, temp0_15), temp0_10))
float temp0_20[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_8, 2)
*arg1 = _mm_and_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(zmm5, temp0_15), temp0_15), temp0_3)
        ^ data_143f39680, 
    temp0_20) ^ data_143f39680
return arg1
