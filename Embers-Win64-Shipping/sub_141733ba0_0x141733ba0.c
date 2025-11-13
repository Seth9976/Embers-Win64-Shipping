// 函数: sub_141733ba0
// 地址: 0x141733ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg3
float zmm5[0x4] = *arg2
float zmm9[0x4] = *(arg2 + 4)
float zmm2 = zmm5[0] * zmm4[0]
float zmm10[0x4] = *(arg2 + 8)
float zmm11[0x4] = *(arg2 + 0xc)
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
zmm9[0] = zmm9[0] * temp0[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
zmm2 = zmm2 + zmm9[0]
zmm10[0] = zmm10[0] * temp0_1[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
zmm11[0] = zmm11[0] * temp0_2[0]
float zmm1[0x4]

if (zmm2 + zmm10[0] + zmm11[0] < 0f)
    zmm1 = 0xbf800000
else
    zmm1 = 0x3f800000

zmm4[0] = zmm4[0] * zmm1[0]
temp0[0] = temp0[0] * zmm1[0]
zmm4[0] = zmm4[0] - zmm5[0]
temp0_1[0] = temp0_1[0] * zmm1[0]
zmm5 ^= 0x80000000
zmm1[0] = zmm1[0] * temp0_2[0]
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0[0] = temp0[0] - zmm9[0]
temp0_1[0] = temp0_1[0] - zmm10[0]
zmm1[0] = zmm1[0] - zmm11[0]
temp0_3[0] = (zmm9 ^ 0x80000000)[0]
int128_t zmm8
zmm8.d = 1f / arg4[0]
zmm4[0] = zmm4[0] f* zmm8.d
zmm1[0] = zmm1[0] f* zmm8.d
float temp0_4[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
temp0_5[0] = (zmm10 ^ 0x80000000)[0]
temp0[0] = temp0[0] f* zmm8.d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_4[0] = temp0[0]
temp0_1[0] = temp0_1[0] f* zmm8.d
temp0_6[0] = zmm11[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x1b)
temp0_8[0] = temp0_1[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
temp0_10[0] = zmm1[0]
float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x4e)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)
float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_12, temp0_12, 0))
float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xff), temp0_7)
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143ef72e0)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xb1)
float temp0_19[0x4] = _mm_add_ps(temp0_17, temp0_16)
float temp0_21[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_12, temp0_12, 0x55))
float temp0_23[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(temp0_12, temp0_12, 0xaa))
float temp0_24[0x4] = __mulps_xmmps_memps(temp0_21, data_143ef72d0)
float temp0_25[0x4] = __mulps_xmmps_memps(temp0_23, data_143ef72c0)
float temp0_27[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_24), temp0_25)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0x55)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xaa)
temp0_29[0] = temp0_29[0] * 2f
temp0_27[0] = temp0_27[0] * 2f
temp0_28[0] = temp0_28[0] * 2f
arg1[2] = temp0_29[0]
*arg1 = temp0_27[0]
arg1[1] = temp0_28[0]
return arg1
