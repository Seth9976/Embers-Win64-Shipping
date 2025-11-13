// 函数: sub_140ae3100
// 地址: 0x140ae3100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_e8[0x10]
float* rax = sub_14077e760(&var_e8, arg1)
float zmm1[0x4] = *arg3
float zmm2[0x4] = *(arg3 + 4)
float zmm3[0x4] = *(arg3 + 8)
float zmm0[0x4] = *rax
float zmm4[0x4] = rax[7]
float zmm11[0x4] = rax[2]
float zmm7[0x4] = rax[3]
int32_t zmm8 = rax[6]
int32_t zmm9 = rax[0xa]
int32_t zmm5 = rax[0xb]
int128_t zmm10 = rax[0xe]
int32_t zmm6 = rax[0xf]
float zmm15[0x4] = rax[1]
int128_t zmm12 = rax[5]
int128_t zmm13 = rax[9]
int128_t zmm14 = rax[0xd]
float temp0[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
temp0[0] = zmm4[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
temp0_1[0] = zmm8
float temp0_2[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xe1)
temp0_2[0] = zmm12.d
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = zmm5
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
temp0_4[0] = zmm9
temp0_5[0] = zmm13.d
float temp0_6[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
temp0_6[0] = zmm6
float temp0_8[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x27)
temp0_7[0] = zmm10.d
float temp0_9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
temp0_8[0] = zmm14.d
int32_t var_14c = 0
float var_158[0x4]
var_158[0] = zmm1[0]
int64_t var_148 = 0
float temp0_10[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
temp0_10[0] = zmm2[0]
int32_t var_140 = 0
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xc6)
temp0_11[0] = zmm3[0]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x39)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xc9)
var_148.o = temp0_13
float temp0_14[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xaa), temp0_14)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x55)
float temp0_19[0x4] = _mm_mul_ps(temp0_15, temp0_12)
float temp0_21[0x4] = _mm_mul_ps(temp0_18, _mm_shuffle_ps(temp0_8, temp0_8, 0x39))
float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_17)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0)
temp0_9[0] = rax[4][0]
zmm0 = rax[8]
float temp0_24[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc6)
temp0_24[0] = zmm0[0]
zmm0 = rax[0xc]
float temp0_25[0x4] = _mm_shuffle_ps(temp0_24, temp0_24, 0x27)
temp0_25[0] = zmm0[0]
float temp0_29[0x4] = _mm_add_ps(temp0_22, 
    _mm_add_ps(temp0_21, _mm_mul_ps(temp0_23, _mm_shuffle_ps(temp0_25, temp0_25, 0x39))))
*arg2 = temp0_29[0]
float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
arg2[2] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)[0]
arg2[1] = temp0_30[0]
return arg2
