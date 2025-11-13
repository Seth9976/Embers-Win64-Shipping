// 函数: sub_1422f4e60
// 地址: 0x1422f4e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *(arg1 + 0x21c)

if (zmm5 <= 0f)
    sub_141f8c8a0(arg1 + 0xbf0, arg1 + 0x3c0, 0)
else
    int64_t zmm1 = *(arg1 + 0x358)
    float zmm3[0x4] = *(arg1 + 0x348)
    int64_t zmm4 = *(arg1 + 0x368)
    int64_t var_48 = (_mm_unpacklo_ps(zmm3, zmm1)).q
    zmm3[0] = zmm3[0] * zmm5
    float zmm2 = zmm1.d * zmm5 f+ *(arg1 + 0x610)
    zmm3[0] = zmm3[0] f+ *(arg1 + 0x60c)
    int32_t var_40_1 = zmm4.d
    zmm2 = zmm2 f* zmm1.d
    zmm1.d = zmm4.d f* zmm5
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm1.d = zmm1.d f+ *(arg1 + 0x614)
    zmm1.d = zmm1.d f* zmm4.d
    float var_3c_1 = zmm2 + zmm3[0] f+ zmm1.d
    sub_141f8c0a0(arg1 + 0xbf0, arg1 + 0x3c0, &var_48, 1, 0)

float zmm7[0x4] = *(arg1 + 0x3dc)
float zmm8[0x4] = *(arg1 + 0x3cc)
zmm7[0] = zmm7[0] f- *(arg1 + 0x3d8)
zmm8[0] = zmm8[0] f- *(arg1 + 0x3c8)
float zmm6[0x4] = *(arg1 + 0x3ec)
zmm6[0] = zmm6[0] f- *(arg1 + 0x3e8)
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] + zmm7[0]
zmm8[0] = zmm8[0] + zmm6[0]
char result

if (zmm8[0] <= 9.99999944e-11f)
    result = 0
else
    result = 1
    float zmm4_1[0x4] = 0x3f000000
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
    float zmm2_1[0x4] = 0x3f000000
    zmm8[0] = zmm8[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm8[0] = zmm8[0] * temp0_2[0]
    zmm2_1[0] = 0.5f - zmm8[0]
    temp0_2[0] = temp0_2[0] * zmm2_1[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm8[0] = zmm8[0] * temp0_2[0]
    zmm4_1[0] = 0.5f - zmm8[0]
    float zmm3_1[0x4] = *(arg1 + 0x3fc)
    zmm3_1[0] = zmm3_1[0] f- *(arg1 + 0x3f8)
    temp0_2[0] = temp0_2[0] * zmm4_1[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm3_1[0] = zmm3_1[0] * temp0_2[0]
    temp0_2[0] = temp0_2[0] * zmm8[0]
    temp0_2[0] = temp0_2[0] * zmm7[0]
    zmm4_1 = temp0_2 ^ 0x80000000
    temp0_2[0] = temp0_2[0] * zmm6[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
    temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc6)
    temp0_4[0] = (temp0_2 ^ 0x80000000)[0]
    float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x27)
    temp0_5[0] = zmm3_1[0]
    *(arg1 + 0xd20) = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)

*(arg1 + 0xd10) = result
float zmm1_1[0x4] = *(arg1 + 0x2b8)

if (9.99999975e-06f f>= *(arg1 + 0x2ac))
    float zmm0_1[0x4] = 0x3f800000
    zmm0_1[0] = 1f - zmm1_1[0]
    zmm0_1[0] = zmm0_1[0] f/ *(arg1 + 0x2a8)
    *(arg1 + 0xd30) = zmm0_1[0]
else
    *(arg1 + 0xd30) = zmm1_1[0]

return result
