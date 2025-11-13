// 函数: sub_140ae1530
// 地址: 0x140ae1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
void var_38
uint32_t zmm6_2[0x4] =
    sub_140ae0c80(&var_48, arg3, arg5, sub_140ae0e60(&var_38, arg2, arg4, arg6)[0])
float zmm0 = 1f f- zmm6_2[0]
zmm6_2[0] = zmm6_2[0] f+ zmm6_2[0]
zmm6_2[0] = zmm6_2[0] f* zmm0
uint32_t var_28[0x4]
uint32_t zmm6_3[0x4] = *sub_140ae0c80(&var_28, &var_38, &var_48, zmm6_2[0])
*arg1 = zmm6_3
float zmm5[0x4] = data_143dbb130
uint32_t zmm1[0x4] = _mm_mul_ps(zmm6_3, zmm6_3)
zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
uint32_t zmm4[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
zmm1 = _mm_rsqrt_ps(zmm4)
uint32_t zmm3[0x4] = _mm_mul_ps(zmm5, zmm4)
float temp0_11[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), zmm1), zmm1)
float temp0_14[0x4] = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), zmm3))
float temp0_16[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm6_3) ^ data_143dbb120, 
    temp0_16) ^ data_143dbb120
return arg1
