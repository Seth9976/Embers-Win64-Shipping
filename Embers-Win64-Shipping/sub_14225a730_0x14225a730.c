// 函数: sub_14225a730
// 地址: 0x14225a730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1c) = 0
arg1[4].q = 0
*(arg1 + 0x48) = 0
*(arg1 + 0x4c) = 0x3f800000
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0x3f800000
__builtin_memset(&arg1[0x10], 0, 0x20)
arg1[0x15].q = 0
*(arg1 + 0x158) = 0
int32_t zmm4 = *(arg2 + 0x2ac)
float temp0[0x4] = _mm_max_ss((*(arg2 + 0x2b0))[0], 0)
int32_t temp0_1 = _mm_max_ss(zmm4, 0)
float zmm6[0x4] = 0x3dcccccd
float zmm8[0x4] = 0x3f800000
*(arg1 + 0x3c) = temp0[0]
float zmm3[0x4] = 0x3f800000
int32_t zmm0 = *(arg2 + 0x290)
temp0[0] = temp0[0] f- temp0_1
zmm3[0] = 1f / __maxss_xmmss_memss(temp0[0], 0x3727c5ac)[0]
zmm3[0] = zmm3[0] f* temp0_1
arg1[6].q = (_mm_unpacklo_ps(zmm3, (zmm3 ^ data_142d3f780)[0].q)).q
*(arg1 + 0x68) = zmm0
zmm0 = *(arg2 + 0x2b4)

if (zmm0 f>= 0.100000001f)
    zmm0 = __minss_xmmss_memss(zmm0, 0x42b3cccd)
else
    zmm0 = 0x3dcccccd

float zmm0_1[0x4] = cosf(zmm0 f* 0.0174532924f)
float zmm1[0x4] = *(arg2 + 0x2b8)

if (not(zmm1[0] < 0.100000001f))
    zmm6 = __minss_xmmss_memss(zmm1[0], 0x42b3cccd)

zmm6[0] = zmm6[0] * 0.0174532924f
float zmm0_2[0x4] = cosf(zmm6[0])
zmm0_1[0] = zmm0_1[0] - zmm0_2[0]
zmm8[0] = 1f / __maxss_xmmss_memss(zmm0_1[0], 0x3727c5ac)[0]
*(arg1 + 0x6c) = zmm8[0]
zmm8[0] = zmm8[0] * zmm0_2[0]
arg1[7].d = (zmm8 ^ data_142d3f780)[0]
arg1[8] = *(arg2 + 0x2e0)
arg1[9] = *(arg2 + 0x2f0)
arg1[0xa] = *(arg2 + 0x300)
arg1[0xb] = *(arg2 + 0x310)
arg1[0xc] = *(arg2 + 0x320)
arg1[0xd] = *(arg2 + 0x330)
arg1[0xe] = *(arg2 + 0x340)
arg1[0xf] = *(arg2 + 0x350)
__builtin_memset(&arg1[0x10], 0xff, 0x20)
void* rax_1 = *(arg2 + 0xa0)
int64_t rcx

if (rax_1 == 0)
    int64_t arg_8 = 0
    rcx = 0
else
    rcx = *(rax_1 + 0x18)

arg1[0x15].q = rcx
zmm1 = *(arg2 + 0x1c0)
float temp0_7[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
float temp0_10[0x4] = _mm_mul_ps(zmm1, temp0_7)
float temp0_12[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x29), temp0_8)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x12), temp0_9)
zmm1 = *(arg2 + 0x1e0)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x1a)
float temp0_16[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
float temp0_18[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_10, temp0_10, 1))
float zmm4_1[0x4] = data_143f522c0
float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_12)
float temp0_20[0x4] = _mm_sub_ps(temp0_12, temp0_14)
float temp0_21[0x4] = _mm_sub_ps(zmm4_1, temp0_18)
float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm1)
float temp0_23[0x4] = _mm_mul_ps(temp0_16, temp0_20)
zmm3 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_21, zmm1), data_143f522d0)
float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, zmm3, 0x32)
float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm3, 0), temp0_26, 0x82)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_22, zmm3, 0x31)
float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm3, 0x10), temp0_29, 0x88)
zmm0_2 = *(arg2 + 0x1d0)
zmm4_1[0].q = zmm0_2 u>> 0x40
float temp0_32[0x4] = _mm_shuffle_ps(temp0_22, temp0_23, 0x12)
float temp0_33[0x4] = _mm_shuffle_ps(zmm0_2, zmm4_1, 0xc4)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, zmm3, 0xe8)
float var_48[0x4] = temp0_33
float var_78[0x4] = temp0_28
float var_68[0x4] = temp0_31
float var_58[0x4] = temp0_34
sub_1412e83d0(arg1, &var_78)
*(arg1 + 0x74) = *(arg2 + 0x360)
*(arg1 + 0x78) = *(arg2 + 0x294)
*(arg1 + 0x7c) = *(arg2 + 0x298)
return arg1
