// 函数: sub_142292f10
// 地址: 0x142292f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4] = 0x3c23d70a

if (arg2 >= 0.00999999978f)
    arg2 = _mm_min_ss(arg2, 0x40486c04)
else
    arg2 = 0.00999999978f

if (not(arg3[0] < 0.00999999978f))
    zmm8 = _mm_min_ss(arg3[0], 0x40486c04)

float zmm0_1[0x4] = sinf(arg2 * 0.5f)
zmm8[0] = zmm8[0] * 0.5f
float zmm0_2[0x4] = sinf(zmm8[0])
float zmm6[0x4] = zmm0_2
zmm8 = zmm0_2
zmm0_2 = zx.o(0)
zmm8[0] = zmm8[0] * zmm6[0]
zmm0_2[0] = arg4.d
zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
float zmm0_3[0x4]
int32_t zmm6_1
int32_t zmm7_1
zmm0_3, zmm6_1, zmm7_1 = __libm_sse2_sincosf_(zmm0_2)
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
temp0_3[0] = temp0_3[0] f* zmm7_1
zmm0_3[0] = zmm0_3[0] f* zmm6_1
float zmm1_1[0x4] = zx.o(0)
zmm1_1[0] = sub_140a3f4a0(zmm0_3, temp0_3)[0]
float zmm0_5[0x4]
float zmm8_1
float zmm9_1
zmm0_5, zmm8_1, zmm9_1 = __libm_sse2_sincosf_(zmm1_1)
float zmm6_2 = zmm0_5[0]
float zmm1_2 = zmm0_5[0] * zmm6_2
float temp0_4[0x4] = _mm_shuffle_ps(zmm0_5, zmm0_5, 1)
zmm0_5 = 0x3f800000
float zmm4 = zmm8_1 * zmm9_1 / (temp0_4[0] * temp0_4[0] * zmm8_1 + zmm1_2 * zmm9_1)
zmm0_5[0] = 1f - zmm4
float temp0_5[0x4] = _mm_sqrt_ss(0, zmm4)
float temp0_6 = _mm_sqrt_ss(0, zmm0_5[0])
temp0_5[0] = temp0_5[0] * zmm6_2
float zmm2 = temp0_6 + temp0_6
temp0_5[0] = temp0_5[0] * temp0_4[0]
*arg1 = 1f - (zmm4 + zmm4)
temp0_5[0] = temp0_5[0] * zmm2
temp0_5[0] = temp0_5[0] * zmm2
arg1[1] = temp0_5[0]
arg1[2] = temp0_5[0]
return arg1
