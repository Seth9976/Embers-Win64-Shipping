// 函数: sub_1427abc80
// 地址: 0x1427abc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_78
float var_68
int64_t var_58
sub_1427af460(sub_1427b8600(arg1, &var_58, arg3), &var_68, &var_78)
int32_t var_64
float zmm6[0x4] = var_64
float zmm7[0x4] = var_68
float var_60
float zmm8[0x4] = var_60
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8[0]
float zmm2[0x4]
float zmm4_1[0x4]

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm4_1 = 0x3f000000
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
    zmm2 = 0x3f000000
    zmm6[0] = zmm6[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm6[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm4_1[0] = 0.5f - zmm6[0]
    temp0_1[0] = temp0_1[0] * zmm4_1[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    var_68 = zmm7[0]
    float var_64_1 = zmm6[0]
    var_60 = zmm8[0]

int32_t var_74
zmm6 = var_74
zmm7 = var_78
float var_70
zmm8 = var_70
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6[0] = zmm6[0] + zmm7[0]
zmm6[0] = zmm6[0] + zmm8[0]

if (not(zmm6[0] <= 9.99999994e-09f))
    zmm4_1 = 0x3f000000
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
    zmm2 = 0x3f000000
    zmm6[0] = zmm6[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm6[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm4_1[0] = 0.5f - zmm6[0]
    temp0_2[0] = temp0_2[0] * zmm4_1[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    zmm7[0] = zmm7[0] * temp0_2[0]
    zmm6[0] = zmm6[0] * temp0_2[0]
    zmm8[0] = zmm8[0] * temp0_2[0]
    var_78 = zmm7[0]
    float var_74_1 = zmm6[0]
    var_70 = zmm8[0]

float zmm5_1[0x4] = *(arg1 + 0xa0)
zmm2 = (*arg2)[1]
zmm6 = *arg2
int64_t* rcx_1 = *(arg1 + 0x40)
var_58 = var_78.q
var_78.q = var_68.q
float temp0_3[0x4] = _mm_unpacklo_ps(zmm6, (*arg2)[2][0].q)
float temp0_4[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
float var_50 = var_70
float temp0_7[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_3, temp0_4[0].q), *(arg1 + 0xc0))
float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
float var_70_1 = var_60
float temp0_9[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xc9), temp0_8)
float temp0_14[0x4] =
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0xd2), temp0_5), temp0_11)
float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_16[0x4] = _mm_mul_ps(temp0_9, temp0_15)
float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xd2), temp0_5)
float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_7)
float temp0_24[0x4] = __addps_xmmps_memps(
    _mm_add_ps(_mm_sub_ps(temp0_18, _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xc9), temp0_8)), 
        temp0_19), 
    *(arg1 + 0xb0))
var_68 = temp0_24[0]
float var_64_2 = _mm_shuffle_ps(temp0_24, temp0_24, 0x55)[0]
float var_90 = (*(arg1 + 0x38))[0]
float var_98 = arg7[0]
float var_60_1 = _mm_shuffle_ps(temp0_24, temp0_24, 0xaa)[0]
return sub_142298930(rcx_1, &var_68, &var_78, &var_58, arg6, arg4.d, arg5, arg8 ^ 1, var_98, 
    var_90, 1)
