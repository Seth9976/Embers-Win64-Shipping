// 函数: sub_14177a790
// 地址: 0x14177a790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm5[0x4] = *arg2
arg4[0] = arg4[0] * 0.5f
float zmm0[0x4] = *(arg3 + 4)
uint32_t zmm1[0x4] = *(arg3 + 8)
float zmm4[0x4] = *arg3
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0[0] = zmm0[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1[0]
uint32_t zmm7[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x1b)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x4e)
temp0_3[0] = 0
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
zmm7 = _mm_mul_ps(zmm7, _mm_shuffle_ps(temp0_5, temp0_5, 0))
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xff), zmm5)
zmm7 = __mulps_xmmps_memps(zmm7, data_143ef7c70)
zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xb1)
zmm7 = _mm_add_ps(zmm7, temp0_9)
zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(temp0_5, temp0_5, 0x55))
float temp0_15[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xaa)
zmm1 = __mulps_xmmps_memps(zmm1, data_143ef7c60)
zmm5 = _mm_mul_ps(zmm5, temp0_15)
zmm7 = _mm_add_ps(_mm_add_ps(zmm7, zmm1), __mulps_xmmps_memps(zmm5, data_143ef7c50))
zmm5 = data_143ef7c40
zmm7[0] = zmm7[0] f* arg4[0]
float temp0_21[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
zmm7[0] = zmm7[0] f+ *arg2
temp0_21[0] = temp0_21[0] * arg4[0]
zmm1[0] = zmm1[0] f* arg4[0]
temp0_21[0] = temp0_21[0] f+ *(arg2 + 4)
uint32_t zmm6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
zmm1[0] = zmm1[0] f+ *(arg2 + 8)
zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
zmm7[0] = zmm7[0] f* arg4[0]
zmm6[0] = temp0_21[0]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc6)
zmm7[0] = zmm7[0] f+ *(arg2 + 0xc)
zmm6[0] = zmm1[0]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x27)
zmm6[0] = zmm7[0]
zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0x39)
zmm1 = _mm_mul_ps(zmm6, zmm6)
zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
float temp0_32[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
zmm1 = _mm_rsqrt_ps(temp0_32)
float temp0_34[0x4] = _mm_mul_ps(temp0_32, zmm5)
float temp0_39[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), temp0_34)), zmm1), zmm1)
zmm5 = _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_39, temp0_39), temp0_34))
float temp0_44[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_32, 2)
*arg1 = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm5, temp0_39), temp0_39), zmm6) ^ data_143ef7c30, temp0_44)
    ^ data_143ef7c30
return arg1
