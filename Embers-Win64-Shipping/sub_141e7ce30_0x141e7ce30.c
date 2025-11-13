// 函数: sub_141e7ce30
// 地址: 0x141e7ce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = data_142d4cc00
float zmm6[0x4] = *(arg2 + 0x20)
float temp0[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_3[0x4] = _mm_mul_ps(temp0, temp0_2)
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xd2), temp0_1)
float temp0_6[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_7[0x4] = _mm_sub_ps(temp0_5, temp0_3)
float temp0_8[0x4] = _mm_add_ps(temp0_7, temp0_7)
float temp0_9[0x4] = _mm_mul_ps(temp0_6, temp0_8)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xd2)
float temp0_12[0x4] = _mm_mul_ps(temp0_10, temp0_2)
float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_1)
float temp0_14[0x4] = _mm_add_ps(temp0_9, zmm5)
float temp0_16[0x4] = _mm_add_ps(_mm_sub_ps(temp0_13, temp0_12), temp0_14)
temp0_16[0] = temp0_16[0] f* *arg2
float zmm7[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
zmm7[0] = zmm7[0] f* arg2[1]
float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
temp0_18[0] = temp0_18[0] f* arg2[2]
zmm7[0] = zmm7[0] + temp0_16[0]
float zmm0[0x4] = 0xbf800000
zmm7[0] = zmm7[0] + temp0_18[0]

if (not(zmm7[0] < -1f))
    zmm0 = __minss_xmmss_memss(zmm7[0], 0x3f800000)

float result[0x4] = acosf(zmm0[0])
result[0] = result[0] * 57.2957764f
float zmm5_1[0x4] = data_142d4cc20
*arg3 = result[0]
zmm6 = *(arg2 + 0x20)
float temp0_20[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float temp0_21[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
float temp0_22[0x4] = _mm_mul_ps(temp0_20, temp0_21)
float temp0_23[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
float temp0_24[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
float temp0_27[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), temp0_23), temp0_22)
float temp0_28[0x4] = _mm_add_ps(temp0_27, temp0_27)
float temp0_29[0x4] = _mm_mul_ps(temp0_24, temp0_28)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_21)
float temp0_32[0x4] = _mm_add_ps(temp0_29, zmm5_1)
float temp0_36[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_23), temp0_31), temp0_32)
temp0_36[0] = temp0_36[0] f* *arg2
float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
temp0_37[0] = temp0_37[0] f* arg2[1]
float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)
temp0_38[0] = temp0_38[0] f* arg2[2]
temp0_37[0] = temp0_37[0] + temp0_36[0]
zmm7[0] = zmm7[0] * zmm7[0]
temp0_37[0] = temp0_37[0] + temp0_38[0]
temp0_37[0] = temp0_37[0] * temp0_37[0]
temp0_37[0] = temp0_37[0] + zmm7[0]

if (not(temp0_37[0] <= 9.99999994e-09f))
    float zmm4_1[0x4] = 0x3f000000
    float zmm3[0x4] = zx.o(0)
    float zmm2[0x4] = 0x3f000000
    zmm3[0] = temp0_37[0]
    float temp0_39[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    zmm3[0] = zmm3[0] * temp0_39[0]
    zmm2[0] = 0.5f - zmm3[0]
    temp0_39[0] = temp0_39[0] * zmm2[0]
    temp0_39[0] = temp0_39[0] + temp0_39[0]
    temp0_39[0] = temp0_39[0] * temp0_39[0]
    zmm3[0] = zmm3[0] * temp0_39[0]
    zmm4_1[0] = 0.5f - zmm3[0]
    temp0_39[0] = temp0_39[0] * zmm4_1[0]
    temp0_39[0] = temp0_39[0] + temp0_39[0]
    temp0_37[0] = temp0_37[0] * temp0_39[0]
    temp0_39[0] = temp0_39[0] * zmm7[0]
    zmm7 = temp0_39

float zmm1[0x4]

if (__andps_xmmxud_memxud(zmm7, data_142d3f770)[0] > 9.99999994e-09f)
    temp0_37[0] = temp0_37[0] / zmm7[0]
    zmm1 = atanf(temp0_37[0])
else
    zmm1 = 0x3fc90fdb

zmm1[0] = zmm1[0] * 57.2957764f
result = zx.o(0)
zmm7[0] - result[0]
bool cond:0 = zmm7[0] >= result[0]
bool cond:1 = zmm7[0] <= result[0]
zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f770)
*arg4 = zmm1[0]

if (cond:1)
    goto label_141e7d04a

if (temp0_37[0] >= result[0])
    cond:0 = zmm7[0] >= result[0]
label_141e7d04a:
    
    if (not(cond:0))
        temp0_37[0] - result[0]
        
        if (not(temp0_37[0] >= result[0]))
            zmm1[0] = zmm1[0] + 180f
            *arg4 = zmm1[0]
        else if (not(temp0_37[0] <= result[0]))
            result = 0x43340000
            result[0] = result[0] - zmm1[0]
            *arg4 = result[0]
else
    result = 0x43b40000
    result[0] = result[0] - zmm1[0]
    *arg4 = result[0]

return result
