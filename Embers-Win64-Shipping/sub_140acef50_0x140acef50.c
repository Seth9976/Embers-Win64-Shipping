// 函数: sub_140acef50
// 地址: 0x140acef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *arg1
float zmm1[0x4] = *(arg2 + 4) ^ 0x80000000
float zmm3[0x4] = *(arg2 + 0xc)
float zmm2[0x4] = *(arg2 + 8) ^ 0x80000000
float zmm6
float var_18 = zmm6
float zmm8[0x4] = 0xbf800000
float zmm11[0x4] = *arg2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xe1)
temp0[0] = zmm1[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm2[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x1b)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_3[0] = zmm3[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float var_c8[0x4] = temp0_4
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0)
float temp0_6[0x4] = _mm_mul_ps(temp0_2, temp0_5)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_8[0x4] = _mm_mul_ps(temp0_7, zmm4)
float temp0_9[0x4] = __mulps_xmmps_memps(temp0_6, data_143dbb110)
float temp0_10[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x4e)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_8)
float temp0_13[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xb1)
float temp0_14[0x4] = _mm_mul_ps(temp0_10, temp0_11)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, temp0_15)
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143dbb100)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143dbb0f0)
float temp0_20[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
int96_t var_c8_1 = temp0_20[0].12
float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
float zmm0[0x4]
float zmm7[0x4]
float zmm9[0x4]
int128_t zmm10

if (_mm_and_ps(temp0_21, 0x7fffffff)[0] >= 1f)
label_140acf0d7:
    zmm7 = var_c8_1.d
    zmm9 = var_c8_1:4.d
    zmm10 = var_c8_1:8.d
else
    if (temp0_21[0] >= -1f)
        zmm2 = _mm_min_ss(temp0_21[0], 0x3f800000)
    else
        zmm2 = 0xbf800000
    
    float _X = acosf(zmm2[0])
    zmm0 = sinf(_X)
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] < 9.99999994e-09f)
        goto label_140acf0d7
    
    zmm7 = var_c8_1.d
    zmm9 = var_c8_1:4.d
    zmm6 = _X / zmm0[0]
    zmm7[0] = zmm7[0] * zmm6
    zmm9[0] = zmm9[0] * zmm6
    zmm10.d = var_c8_1:8.d.d f* zmm6

zmm2 = *arg3
float temp0_26[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_5)
float temp0_27[0x4] = __mulps_xmmps_memps(zmm2, temp0_7)
float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
float temp0_29[0x4] = __mulps_xmmps_memps(temp0_26, data_143dbb110)
float temp0_30[0x4] = __mulps_xmmps_memps(temp0_28, temp0_11)
float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
float temp0_32[0x4] = _mm_add_ps(temp0_29, temp0_27)
float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_15)
float temp0_34[0x4] = __mulps_xmmps_memps(temp0_30, data_143dbb100)
float temp0_35[0x4] = _mm_mul_ps(temp0_33, data_143dbb0f0)
float temp0_37[0x4] = _mm_add_ps(_mm_add_ps(temp0_32, temp0_34), temp0_35)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xff)

if (_mm_and_ps(temp0_38, 0x7fffffff)[0] >= 1f)
label_140acf1a3:
    zmm0 = temp0_37[0]
    zmm1 = temp0_37[1]
    zmm2 = temp0_37[2]
else
    if (not(temp0_38[0] < -1f))
        zmm8 = _mm_min_ss(temp0_38[0], 0x3f800000)
    
    float _X_1 = acosf(zmm8[0])
    zmm0 = sinf(_X_1)
    
    if (_mm_and_ps(zmm0, 0x7fffffff)[0] < 9.99999994e-09f)
        goto label_140acf1a3
    
    zmm1 = temp0_37[1]
    zmm2 = temp0_37[2]
    zmm6 = _X_1 / zmm0[0]
    zmm0 = temp0_37[0]
    zmm0[0] = zmm0[0] * zmm6
    zmm1[0] = zmm1[0] * zmm6
    zmm2[0] = zmm2[0] * zmm6

zmm1[0] = zmm1[0] + zmm9[0]
zmm7[0] = zmm7[0] + zmm0[0]
zmm2[0] = zmm2[0] f+ zmm10.d
zmm1[0] = zmm1[0] * zmm1[0]
zmm7[0]
zmm1[0] = zmm1[0] * -0.5f
zmm7[0] = zmm7[0] * zmm7[0]
zmm2[0] = zmm2[0] * zmm2[0]
zmm1[0] = zmm1[0] + zmm7[0]
zmm2[0] = zmm2[0] * -0.5f
zmm1[0] = zmm1[0] + zmm2[0]
zmm1[0] = zmm1[0] * 0.25f
float zmm0_1[0x4]
float zmm6_1
int32_t zmm7_1
float zmm8_1
float zmm9_1
float zmm11_1[0x4]
uint32_t zmm12[0x4]
zmm0_1, zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12 =
    __libm_sse2_sincosf_(_mm_sqrt_ss(0, zmm1[0]))
temp0_37[3] = _mm_shuffle_ps(zmm0_1, zmm0_1, 1)[0]

if (not(_mm_and_ps(zmm0_1, zmm12)[0] < 9.99999994e-09f))
    zmm0_1[0] = zmm0_1[0] f/ zmm7_1
    zmm6_1 = zmm6_1 * zmm0_1[0]
    zmm8_1 = zmm8_1 * zmm0_1[0]
    zmm9_1 = zmm9_1 * zmm0_1[0]

float zmm2_1[0x4] = *arg2
float temp0_45[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
temp0_37[2] = zmm9_1
temp0_37[1] = zmm8_1
temp0_37[0] = zmm6_1
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1b), temp0_45)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x4e)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), temp0_37)
float temp0_51[0x4] = __mulps_xmmps_memps(temp0_47, data_143dbb110)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xb1)
float temp0_53[0x4] = _mm_add_ps(temp0_51, temp0_50)
float result[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_54[0x4] = _mm_mul_ps(temp0_48, result)
float temp0_56[0x4] = _mm_mul_ps(temp0_52, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
float temp0_57[0x4] = __mulps_xmmps_memps(temp0_54, data_143dbb100)
float temp0_58[0x4] = _mm_mul_ps(temp0_56, zmm11_1)
*arg4 = _mm_add_ps(_mm_add_ps(temp0_53, temp0_57), temp0_58)
return result
