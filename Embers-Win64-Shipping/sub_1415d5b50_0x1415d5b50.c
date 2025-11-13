// 函数: sub_1415d5b50
// 地址: 0x1415d5b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
*arg1 = 0x3f800000
arg1[1].d = 0
arg1[3].d = 0x7f7fffff
float var_a8[0x2][0x4]
float (* rax_3)[0x4] = sub_140ad7d70(arg3, &var_a8, arg5)
float temp0[0x4] = __mulps_xmmps_memps(data_143ef7590, *arg5)
int64_t var_fc = 0
float zmm2[0x4] = *(arg6 + 4)
float zmm6[0x4] = *arg6
float var_d8[0x4] = *rax_3
float var_c8[0x4] = rax_3[1]
float var_b8[0x4] = rax_3[2]
float temp0_3[0x4] =
    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6, (*(arg6 + 8))[0].q), _mm_unpacklo_ps(zmm2, 0)[0].q)
float temp0_4[0x4] = _mm_shuffle_ps(temp0, temp0, 0xd2)
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xc9), temp0_4)
int32_t var_130 = 0
float temp0_7[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0xd2), temp0_7)
float temp0_10[0x4] = _mm_shuffle_ps(temp0, temp0, 0xff)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_12[0x4] = _mm_add_ps(temp0_11, temp0_11)
float temp0_13[0x4] = _mm_mul_ps(temp0_10, temp0_12)
float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc9), temp0_4)
float temp0_16[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xd2)
float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_3)
float temp0_20[0x4] = _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_16, temp0_7), temp0_15), temp0_17)
float var_108 = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)[0]
float var_120 = var_108
int32_t var_100
int32_t* var_138 = &var_100
char var_140 = 1
char var_148 = 0
int32_t var_110
int32_t* var_150 = &var_110
int32_t var_f0
uint64_t* var_158 = &var_f0
int64_t var_128 = (_mm_unpacklo_ps(temp0_20, _mm_shuffle_ps(temp0_20, temp0_20, 0x55)[0].q)).q
float var_118
float* var_160 = &var_118
var_100 = 0x3f800000
char rax_5
int32_t zmm7_1
float zmm8
rax_5, zmm7_1, zmm8 =
    sub_141647780(arg4, arg2, &var_d8, &var_128, arg7, var_160, var_158, var_150, var_148, var_140)
int64_t* result

if (rax_5 == 0)
    result = arg1
else
    float zmm5_1[0x4] = *arg5
    int32_t var_e8
    float temp0_24[0x4] = _mm_unpacklo_ps(var_f0, var_e8[0].q)
    int32_t var_ec
    float temp0_25[0x4] = _mm_unpacklo_ps(var_ec, 0)
    float temp0_26[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_28[0x4] = __mulps_xmmps_memps(_mm_unpacklo_ps(temp0_24, temp0_25[0].q), arg5[2])
    float temp0_29[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc9), temp0_29)
    float temp0_35[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd2), temp0_26), temp0_32)
    float temp0_36[0x4] = _mm_add_ps(temp0_35, temp0_35)
    float temp0_37[0x4] = _mm_mul_ps(temp0_30, temp0_36)
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xd2)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0xc9), temp0_29)
    float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_28)
    float zmm6_1[0x4] = var_110
    float temp0_45[0x4] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_38, temp0_26), temp0_40), temp0_41), arg5[1])
    float var_120_1 = _mm_shuffle_ps(temp0_45, temp0_45, 0xaa)[0]
    *(arg1 + 0xc) = (_mm_unpacklo_ps(temp0_45, _mm_shuffle_ps(temp0_45, temp0_45, 0x55)[0].q)).q
    int32_t var_10c
    float temp0_51[0x4] =
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm6_1, var_108[0].q), _mm_unpacklo_ps(var_10c, 0)[0].q)
    *(arg1 + 0x14) = var_120_1
    zmm5_1 = *arg5
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
    float temp0_53[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
    float temp0_54[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
    float temp0_55[0x4] = _mm_mul_ps(temp0_52, temp0_54)
    float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd2), temp0_53)
    float temp0_58[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_59[0x4] = _mm_sub_ps(temp0_57, temp0_55)
    float temp0_60[0x4] = _mm_add_ps(temp0_59, temp0_59)
    float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_60)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xd2)
    float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xc9), temp0_54)
    float temp0_65[0x4] = _mm_mul_ps(temp0_62, temp0_53)
    float temp0_66[0x4] = _mm_add_ps(temp0_61, temp0_51)
    float temp0_68[0x4] = _mm_add_ps(_mm_sub_ps(temp0_65, temp0_64), temp0_66)
    float var_120_2 = _mm_shuffle_ps(temp0_68, temp0_68, 0xaa)[0]
    float temp0_71[0x4] = _mm_unpacklo_ps(temp0_68, _mm_shuffle_ps(temp0_68, temp0_68, 0x55)[0].q)
    float zmm3_1[0x4] = var_118
    bool cond:0_1 = zmm3_1[0] < zmm8
    *arg1 = temp0_71.q
    arg1[1].d = var_120_2
    result = arg1
    
    if (cond:0_1)
        arg1[3].d = zmm3_1[0]
        *arg8 = 0f
    else
        float zmm0_1[0x4] = *arg1
        zmm0_1[0] = zmm0_1[0] f* *arg6
        float zmm2_1[0x4] = *(arg1 + 4)
        zmm2_1[0] = zmm2_1[0] f* *(arg6 + 4)
        float zmm1_1[0x4] = *(arg6 + 8)
        zmm1_1[0] = zmm1_1[0] f* arg1[1].d
        zmm2_1[0] = zmm2_1[0] + zmm0_1[0]
        zmm3_1[0] = zmm3_1[0] f/ zmm7_1
        zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
        zmm3_1[0] = zmm3_1[0] f- zmm7_1
        zmm2_1 = __andps_xmmxud_memxud(zmm2_1, data_142d3f770)
        zmm2_1[0] = zmm2_1[0] * zmm3_1[0]
        arg1[3].d = zmm2_1[0]
        *arg8 = zmm3_1[0]

__security_check_cookie(rax_1 ^ &var_188)
return result
