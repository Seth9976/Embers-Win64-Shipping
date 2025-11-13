// 函数: sub_1407ca350
// 地址: 0x1407ca350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = arg2[3]
float zmm2[0x4] = arg2[5]
float zmm5 = zmm1[0]
float zmm0 = arg2[1]
float zmm6[0x4] = *arg2
float zmm7[0x4] = zmm2
zmm7[0] = zmm7[0] + zmm2[0]
zmm6[0] = zmm6[0] * zmm6[0]
float zmm10[0x4] = arg2[0xb]
zmm6[0] = zmm6[0] + zmm0 * zmm0
zmm0 = arg2[4]
float zmm11[0x4] = arg2[2]
zmm5 = zmm5 * zmm1[0]
zmm1 = arg2[6]
zmm11[0] = zmm11[0] + zmm11[0]
zmm5 = zmm5 + zmm0 * zmm0
zmm7[0] = zmm7[0] * zmm2[0]
zmm0 = arg2[7]
float zmm4[0x4] = zmm1
float zmm12[0x4] = arg2[0xa]
zmm2 = zx.o(0)
int128_t zmm13 = arg2[9]
zmm4[0] = zmm4[0] * zmm1[0]
zmm7[0] = zmm7[0] + zmm5
zmm1 = arg2[8]
zmm11[0] = zmm11[0] * zmm11[0]
zmm7[0] = zmm7[0] + zmm5
zmm4[0] = zmm4[0] + zmm0 * zmm0
zmm12[0] = zmm12[0] * zmm12[0]
zmm11[0] = zmm11[0] + zmm6[0]
zmm11[0] = zmm11[0] + zmm6[0]
zmm1[0] = zmm1[0] + zmm1[0]
zmm12[0] = zmm12[0] + zmm13.d f* zmm13.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm1[0] = zmm1[0] + zmm4[0]
zmm1[0] = zmm1[0] + zmm4[0]
zmm10[0] = zmm10[0] + zmm10[0]
zmm10[0] = zmm10[0] * zmm10[0]
zmm10[0] = zmm10[0] + zmm12[0]
zmm10[0] = zmm10[0] + zmm12[0]

if (zmm10[0] >= 0f)
    zmm4 = _mm_min_ss(zmm10[0], 0x3f800000)
else
    zmm4 = zx.o(0)

if (zmm1[0] >= 0f)
    zmm6 = _mm_min_ss(zmm1[0], 0x3f800000)
else
    zmm6 = zx.o(0)

if (zmm7[0] >= 0f)
    zmm7 = _mm_min_ss(zmm7[0], 0x3f800000)
else
    zmm7 = zx.o(0)

if (not(zmm11[0] < 0f))
    zmm2 = _mm_min_ss(zmm11[0], 0x3f800000)

float zmm8[0x4] = 0x4283126e
float zmm3[0x4] = 0x4283126e
zmm8[0] = 65.5359955f - zmm2[0] * 32.7679977f
zmm0 = zmm7[0] * 32.7679977f
zmm8[0] = zmm8[0] * zmm2[0]
zmm3[0] = 65.5359955f - zmm0
zmm2 = 0x4283126e
zmm0 = zmm6[0] * 32.7679977f
zmm8[0] = zmm8[0] - 32.7679977f
zmm3[0] = zmm3[0] * zmm7[0]
zmm2[0] = 65.5359955f - zmm0
zmm0 = zmm4[0] * 32.7679977f
zmm3[0] = zmm3[0] - 32.7679977f
zmm8[0] = zmm8[0] * zmm11[0]
zmm5 = 65.5359955f - zmm0
zmm2[0] = zmm2[0] * zmm6[0]
float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
zmm3[0] = zmm3[0] f* arg2[5]
zmm0 = zmm3[0]
zmm3[0] = zmm3[0] f* arg2[3]
zmm2[0] = zmm2[0] - 32.7679977f
zmm0 = zmm0 f* arg2[4]
temp0_5[0] = zmm3[0]
zmm5 = zmm5 * zmm4[0]
zmm2[0] = zmm2[0] f* arg2[8]
zmm8[0] = zmm8[0] f* *arg2
zmm5 = zmm5 - 32.7679977f
zmm8[0] = zmm8[0] f* arg2[1]
zmm2[0] = zmm2[0] f* arg2[6]
zmm2[0] = zmm2[0] f* arg2[7]
float temp0_6[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xe1)
temp0_6[0] = zmm3[0]
temp0_7[0] = zmm0
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xc6)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_8[0] = zmm2[0]
temp0_9[0] = zmm2[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc6)
temp0_10[0] = zmm2[0]
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x27)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
zmm10[0] = zmm10[0] * zmm5
zmm13.d = zmm13.d f* zmm5
temp0_12[0] = zmm10[0]
zmm12[0] = zmm12[0] * zmm5
temp0_11[0] = zmm13.d
float temp0_13[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x27)
temp0_13[0] = zmm12[0]
float temp0_14[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x39)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x39)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x39)
*arg1 = temp0_14
arg1[2] = temp0_15
arg1[1] = temp0_16
return arg1
