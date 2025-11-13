// 函数: sub_14121e9a0
// 地址: 0x14121e9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = arg2[3]
float zmm5 = *(arg1 + 0x348)
float zmm6[0x4] = *(arg1 + 0x358)
float zmm3 = zmm5 * zmm0[0]
int32_t var_9c = 0x3f800000
zmm6[0] = zmm6[0] * zmm0[0]
int32_t var_90 = 0
zmm3 = zmm3 f+ *arg2
zmm6[0] = zmm6[0] f+ arg2[1]
float zmm7[0x4] = *(arg1 + 0x368)
float zmm8[0x4] = *(arg1 + 0x3f0)
float var_a8[0x4]
var_a8[0] = zmm3
zmm7[0] = zmm7[0] * zmm0[0]
zmm7[0] = zmm7[0] f+ arg2[2]
float zmm11[0x4] = *(arg1 + 0x3c0)
float zmm10[0x4] = *(arg1 + 0x3d0)
float zmm9[0x4] = *(arg1 + 0x3e0)
float temp0[0x4] = _mm_shuffle_ps(var_a8, var_a8, 0xe1)
temp0[0] = zmm6[0]
int32_t var_8c = 0x3f800000
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm7[0]
int32_t var_90_1 = 0
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xff)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xaa)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0), zmm11)
int32_t var_9c_1 = 0x3f800000
float temp0_8[0x4] = _mm_mul_ps(temp0_4, zmm9)
int32_t var_8c_1 = 0x3f800000
float temp0_9[0x4] = _mm_mul_ps(temp0_3, zmm8)
float temp0_10[0x4] = _mm_mul_ps(temp0_5, zmm10)
float temp0_13[0x4] = _mm_add_ps(_mm_add_ps(temp0_9, temp0_8), _mm_add_ps(temp0_10, temp0_7))
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xaa)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xff)
temp0_14[0] = temp0_14[0] / temp0_15[0]
*arg4 = temp0_14[0]
float zmm1[0x4] = arg2[3]
zmm0 = arg2[1]
float zmm2[0x4] = arg2[2]
zmm3 = *arg2
zmm5 = zmm5 * zmm1[0]
zmm6[0] = zmm6[0] * zmm1[0]
zmm7[0] = zmm7[0] * zmm1[0]
zmm0[0] = zmm0[0] - zmm6[0]
zmm2[0] = zmm2[0] - zmm7[0]
temp0_2[0] = zmm3 - zmm5
float temp0_16[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xe1)
temp0_16[0] = zmm0[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xc6)
temp0_17[0] = zmm2[0]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xff), zmm8)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xaa), zmm9)
float temp0_23[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0x55)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0), zmm11)
float temp0_29[0x4] =
    _mm_add_ps(_mm_add_ps(temp0_20, temp0_22), _mm_add_ps(_mm_mul_ps(temp0_23, zmm10), temp0_25))
zmm0 = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xff)
bool cond:0 = temp0_31[0] >= 0f
zmm0[0] = zmm0[0] / temp0_31[0]
*arg3 = zmm0[0]

if (not(cond:0))
    zmm0 = 0x3f800000
    *arg3 = 1f

if (not(temp0_15[0] >= 0f))
    *arg4 = 1f
    zmm0 = *arg3

if (zmm0[0] >= 0f)
    zmm0 = __minss_xmmss_memss(zmm0[0], 0x3f800000)
else
    zmm0 = zx.o(0)

*arg3 = zmm0[0]
zmm1 = *arg4

if (zmm1[0] >= 0f)
    *arg4 = __minss_xmmss_memss(zmm1[0], 0x3f800000)[0]
else
    *arg4 = 0f
