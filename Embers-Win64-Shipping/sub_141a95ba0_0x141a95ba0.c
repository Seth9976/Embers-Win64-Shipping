// 函数: sub_141a95ba0
// 地址: 0x141a95ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
int128_t zmm6 = data_143f2b8a0
float temp0[0x4] = _mm_mul_ps(zmm5, zmm5)
float zmm8[0x4] = data_143f2b8b0
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(zmm8, temp0_4)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_14[0x4] = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_16[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_4, 2)
float temp0_19[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_14, temp0_11), temp0_11), zmm5)
zmm5 = *arg1
float temp0_20[0x4] = _mm_mul_ps(zmm5, zmm5)
float zmm7[0x4] = _mm_and_ps(temp0_19 ^ zmm6, temp0_16) ^ zmm6
float temp0_23[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x4e))
float temp0_25[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0x39), temp0_23)
float temp0_26[0x4] = _mm_rsqrt_ps(temp0_25)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm8)
float temp0_32[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_26, temp0_26), temp0_27)), temp0_26), 
    temp0_26)
float temp0_35[0x4] = _mm_sub_ps(zmm8, _mm_mul_ps(_mm_mul_ps(temp0_32, temp0_32), temp0_27))
float temp0_37[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_25, 2)
float temp0_39[0x4] = _mm_add_ps(_mm_mul_ps(temp0_35, temp0_32), temp0_32)
float temp0_40[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
zmm8 = _mm_and_ps(_mm_mul_ps(temp0_39, zmm5) ^ zmm6, temp0_37) ^ zmm6
float temp0_43[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
temp0_40[0] = temp0_40[0] * temp0_43[0]
zmm7[0] = zmm7[0] * zmm8[0]
temp0_40[0] = temp0_40[0] + zmm7[0]
float temp0_44[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
float temp0_45[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
temp0_45[0] = temp0_45[0] * temp0_44[0]
float temp0_46[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
float temp0_47[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xff)
temp0_40[0] = temp0_40[0] + temp0_45[0]
temp0_46[0] = temp0_46[0] * temp0_47[0]
float zmm1[0x4] = 0xbf800000
temp0_40[0] = temp0_40[0] + temp0_46[0]
temp0_40[0] = temp0_40[0] + temp0_40[0]
temp0_40[0] = temp0_40[0] * temp0_40[0]
temp0_40[0] = temp0_40[0] - 1f

if (not(temp0_40[0] < -1f))
    zmm1 = _mm_min_ss(temp0_40[0], 0x3f800000)

return acosf(zmm1[0]) __tailcall
