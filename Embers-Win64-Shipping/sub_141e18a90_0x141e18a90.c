// 函数: sub_141e18a90
// 地址: 0x141e18a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_8 = arg1[0]
float zmm2[0x4] = *(arg4 + 0xc)
uint32_t rdi = zx.d(arg7)
float zmm3[0x4] = *arg6
float zmm4[0x4] = *arg4 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
arg1 = *arg8
arg1[0] = arg1[0] * 0.0174532924f
float var_114 = arg1[0]
arg1 = (*arg8)[1]
arg1[0] = arg1[0] * 0.0174532924f
float var_f8 = arg1[0]
arg1 = (*arg8)[2]
arg1[0] = arg1[0] * 0.0174532924f
float var_f0 = arg1[0]
arg1 = *arg9
arg1[0] = arg1[0] * 0.0174532924f
float var_110 = arg1[0]
arg1 = (*arg9)[1]
arg1[0] = arg1[0] * 0.0174532924f
float var_f4 = arg1[0]
arg1 = (*arg9)[2]
arg1[0] = arg1[0] * 0.0174532924f
float zmm1[0x4] = *(arg4 + 8) ^ 0x80000000
float var_ec = arg1[0]
temp0[0] = (*(arg4 + 4) ^ 0x80000000)[0]
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x1b)
temp0_1[0] = zmm1[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_3[0] = zmm2[0]
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
float var_128[0x4] = temp0_4
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0), temp0_2)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xff)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x55)
float temp0_9[0x4] = _mm_mul_ps(temp0_7, zmm3)
float temp0_10[0x4] = __mulps_xmmps_memps(temp0_6, data_143f39670)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xaa)
float temp0_12[0x4] = _mm_add_ps(temp0_10, temp0_9)
float temp0_14[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(zmm3, zmm3, 0xb1))
float temp0_17[0x4] = __mulps_xmmps_memps(temp0_14, data_143f39660)
float temp0_18[0x4] = __mulps_xmmps_memps(temp0_16, data_143f39650)
float temp0_20[0x4] = _mm_add_ps(_mm_add_ps(temp0_12, temp0_17), temp0_18)
float var_190
int64_t var_138
int64_t var_e8
int32_t var_130_1

if (rdi == 0)
    var_130_1 = 0
    var_e8 = (_mm_unpacklo_ps(0x3f800000, 0)).q
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
    float zmm5[0x4] = temp0_33 ^ 0x80000000
    temp0_34[0] = temp0_34[0] + temp0_34[0]
    zmm5[0] = zmm5[0] + zmm5[0]
    zmm5[0] = zmm5[0] * temp0_33[0]
    temp0_34[0] = temp0_34[0] * temp0_34[0]
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
    temp0_34[0] = temp0_34[0] * temp0_35[0]
    zmm5[0] = zmm5[0] - temp0_34[0]
    temp0_34[0] = temp0_34[0] * temp0_20[0]
    zmm5[0] = zmm5[0] * temp0_35[0]
    zmm5[0] = zmm5[0] * temp0_20[0]
    zmm5[0] = zmm5[0] + 1f
    zmm5[0] = zmm5[0] + temp0_34[0]
    temp0_34[0] = temp0_34[0] - zmm5[0]
    var_190 = zmm5[0]
    arg1 = _mm_unpacklo_ps(zmm5, temp0_34[0].q)
label_141e18dd9:
    int32_t var_e0_1 = var_130_1
    float var_130_2 = var_190
    var_138 = arg1.q
else
    float zmm7[0x4]
    
    if (rdi == 1)
        var_130_1 = 0
        var_e8 = (_mm_unpacklo_ps(zx.o(0), 0x3f800000)).q
        temp0_20[0] = temp0_20[0] + temp0_20[0]
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
        zmm7 = temp0_28 ^ 0x80000000
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        zmm7[0] = zmm7[0] + zmm7[0]
        temp0_20[0] = temp0_20[0] * temp0_30[0]
        zmm7[0] = zmm7[0] * temp0_29[0]
        zmm7[0] = zmm7[0] * temp0_28[0]
        zmm7[0] = zmm7[0] + temp0_20[0]
        zmm7[0] = zmm7[0] * temp0_30[0]
        temp0_20[0] = temp0_20[0] * temp0_29[0]
        temp0_20[0] = temp0_20[0] * temp0_20[0]
        temp0_20[0] = temp0_20[0] - zmm7[0]
        zmm7[0] = zmm7[0] - temp0_20[0]
        var_190 = temp0_20[0]
        zmm7[0] = zmm7[0] + 1f
        arg1 = _mm_unpacklo_ps(zmm7, zmm7[0].q)
        goto label_141e18dd9
    
    if (rdi == 2)
        var_130_1 = 0x3f800000
        zmm7 = temp0_20 ^ 0x80000000
        var_e8 = (_mm_unpacklo_ps(zx.o(0), 0)).q
        zmm7[0] = zmm7[0] + zmm7[0]
        float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0x55)
        float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xff)
        temp0_23[0] = temp0_23[0] + temp0_23[0]
        float temp0_25[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xaa)
        zmm7[0] = zmm7[0] * temp0_25[0]
        zmm7[0] = zmm7[0] * temp0_20[0]
        temp0_23[0] = temp0_23[0] * temp0_24[0]
        zmm7[0] = zmm7[0] * temp0_24[0]
        temp0_23[0] = temp0_23[0] - zmm7[0]
        temp0_23[0] = temp0_23[0] * temp0_25[0]
        temp0_23[0] = temp0_23[0] * temp0_23[0]
        zmm7[0] = zmm7[0] + temp0_23[0]
        zmm7[0] = zmm7[0] - temp0_23[0]
        arg1 = _mm_unpacklo_ps(temp0_23, zmm7[0].q)
        zmm7[0] = zmm7[0] + 1f
        var_190 = zmm7[0]
        goto label_141e18dd9
float zmm8_1[0x4]
float zmm9[0x4]
zmm8_1, zmm9 = sub_140ad6800(&var_128, &var_e8, &var_138)
float zmm4_1[0x4] = var_128[3]
float zmm0[0x4] = var_128[1] ^ 0x80000000
bool cond:0 = zmm4_1[0] >= zmm9[0]
float zmm6_1[0x4] = var_128[0]
float zmm5_1[0x4] = var_128[2]
float zmm3_1[0x4] = zmm6_1 ^ 0x80000000
float temp0_37[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x1b)
float temp0_38[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
temp0_38[0] = zmm0[0]
float temp0_39[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0xc6)
temp0_39[0] = (zmm5_1 ^ 0x80000000)[0]
float temp0_40[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0x4e)
float temp0_41[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x27)
temp0_41[0] = zmm4_1[0]
float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0x39)
float var_198[0x4] = temp0_42
float temp0_44[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(temp0_42, temp0_42, 0))
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xff), zmm8_1)
float temp0_47[0x4] = __mulps_xmmps_memps(temp0_44, data_143f39670)
float temp0_48[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xb1)
float temp0_49[0x4] = _mm_add_ps(temp0_47, temp0_46)
float temp0_51[0x4] = _mm_mul_ps(temp0_40, _mm_shuffle_ps(temp0_42, temp0_42, 0x55))
float temp0_53[0x4] = _mm_mul_ps(temp0_48, _mm_shuffle_ps(temp0_42, temp0_42, 0xaa))
float temp0_54[0x4] = __mulps_xmmps_memps(temp0_51, data_143f39660)
zmm3_1 = var_128[1]
float temp0_55[0x4] = __mulps_xmmps_memps(temp0_53, data_143f39650)
int64_t var_198_1 = _mm_add_ps(_mm_add_ps(temp0_49, temp0_54), temp0_55)[0].q

if (not(cond:0))
    zmm6_1[0] = zmm6_1[0] * -1f
    zmm3_1[0] = zmm3_1[0] * -1f
    zmm5_1[0] = zmm5_1[0] * -1f
    zmm4_1[0] = zmm4_1[0] * -1f
    var_128[0] = zmm6_1[0]
    var_128[1] = zmm3_1[0]
    var_128[2] = zmm5_1[0]
    var_128[3] = zmm4_1[0]

int32_t var_18c
float var_118
float var_108
float arg_20
float zmm2_1[0x4]

if (var_18c[0] >= zmm9[0])
    arg_20 = var_190[0]
    var_118 = var_198_1:4.d[0]
    var_108 = var_198_1.d[0]
else
    zmm2_1 = var_198_1.d
    zmm2_1[0] = zmm2_1[0] * -1f
    var_108 = zmm2_1[0]
    zmm2_1 = var_198_1:4.d
    zmm2_1[0] = zmm2_1[0] * -1f
    var_118 = zmm2_1[0]
    zmm2_1 = var_190
    zmm2_1[0] = zmm2_1[0] * -1f
    arg_20 = zmm2_1[0]

int64_t rsi = arg5
zmm8_1 = 0x3f000000
float zmm13[0x4] = zx.o(0)
arg8.d = 0
int32_t var_144 = 0
float zmm15[0x4] = zx.o(0)
float var_140 = 0f
float zmm11[0x4] = zx.o(0)
arg9.d = zmm9[0]
float zmm14[0x4] = zx.o(0)
arg7.d = zmm9[0]
int64_t var_158 = 0
float var_150 = 0f
float var_148 = 0f
var_198_1 = 0
float var_190_1 = 0f
float arg_10
float arg_18
float zmm1_1[0x4]
float zmm7_1[0x4]

if (rdi != 0)
    if (rdi == 1)
        zmm8_1 = *(arg6 + 4)
        zmm14 = zmm5_1
        zmm5_1 = *(arg6 + 8)
        zmm7_1 = *(arg6 + 0xc)
        zmm1_1 = zmm8_1 ^ 0x80000000
        zmm9 = var_114
        zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
        zmm11 = zmm6_1
        zmm6_1 = *arg6
        zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
        zmm13 = zmm6_1 ^ 0x80000000
        zmm13[0] = zmm13[0] + zmm13[0]
        zmm1_1[0] = zmm1_1[0] * zmm8_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm7_1[0]
        zmm1_1[0] = zmm1_1[0] - zmm5_1[0]
        zmm5_1[0] = zmm5_1[0] * zmm6_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
        zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
        zmm5_1[0] = zmm5_1[0] + zmm1_1[0]
        zmm1_1[0] = zmm1_1[0] + 1f
        zmm5_1[0] = zmm5_1[0] - zmm1_1[0]
        zmm13[0] = zmm13[0] * zmm5_1[0]
        zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
        arg_18 = zmm5_1[0]
        arg5.d = zmm1_1[0]
        var_158.d = zmm1_1[0]
        var_150 = zmm5_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm7_1[0]
        zmm13[0] = zmm13[0] * zmm7_1[0]
        zmm8_1[0] = zmm8_1[0] - zmm13[0]
        arg_10 = zmm5_1[0]
        var_158:4.d = zmm5_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm5_1[0]
        zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
        zmm4_1 = zmm5_1 ^ 0x80000000
        arg7.d = zmm8_1[0]
        zmm4_1[0] = zmm4_1[0] + zmm4_1[0]
        zmm13[0] = zmm13[0] + zmm8_1[0]
        var_148 = zmm8_1[0]
        zmm13[0] = zmm13[0] * zmm6_1[0]
        zmm13[0] = zmm13[0] - zmm8_1[0]
        arg8.d = zmm13[0]
        float var_144_2 = zmm13[0]
        zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
        zmm4_1[0] = zmm4_1[0] - zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm4_1[0]
        zmm4_1[0] = zmm4_1[0] * zmm8_1[0]
        zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
        zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
        zmm4_1[0] = zmm4_1[0] + 1f
        arg9.d = var_118[0]
        zmm7_1[0] = zmm7_1[0] - zmm4_1[0]
        var_198_1.d = zmm7_1[0]
        zmm0 = var_110
        var_198_1:4.d = zmm4_1[0]
        var_190_1 = zmm7_1[0]
        goto label_141e1942c
    
    if (rdi != 2)
        goto label_141e19460
    
    zmm7_1 = *(arg6 + 4)
    zmm14 = zmm3_1
    zmm8_1 = *(arg6 + 8)
    zmm5_1 = *(arg6 + 0xc)
    zmm1_1 = zmm7_1 ^ 0x80000000
    zmm9 = var_114
    zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
    zmm15 = var_f4
    zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
    zmm11 = zmm6_1
    zmm6_1 = *arg6
    zmm13 = zmm6_1
    zmm3_1 = zmm1_1
    zmm13[0] = zmm13[0] + zmm6_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm7_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm6_1[0]
    zmm3_1[0] = zmm3_1[0] - zmm8_1[0]
    zmm8_1[0] = zmm8_1[0] * zmm5_1[0]
    zmm0 = zmm1_1
    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
    zmm0[0] = zmm0[0] * zmm6_1[0]
    zmm8_1[0] = zmm8_1[0] + zmm1_1[0]
    zmm3_1[0] = zmm3_1[0] + 1f
    zmm1_1 = zmm8_1 ^ 0x80000000
    zmm8_1[0] = zmm8_1[0] - zmm0[0]
    zmm13[0] = zmm13[0] * zmm7_1[0]
    zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
    arg_18 = zmm8_1[0]
    var_150 = zmm8_1[0]
    arg5.d = zmm3_1[0]
    var_158.d = zmm3_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm8_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
    zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
    zmm1_1[0] = zmm1_1[0] + zmm13[0]
    arg_10 = zmm8_1[0]
    var_158:4.d = zmm8_1[0]
    zmm13[0] = zmm13[0] * zmm6_1[0]
    zmm4_1 = zmm7_1
    zmm4_1[0] = zmm4_1[0] + zmm7_1[0]
    zmm13[0] = zmm13[0] * zmm5_1[0]
    zmm1_1[0] = zmm1_1[0] - zmm13[0]
    arg7.d = zmm1_1[0]
    var_148 = zmm1_1[0]
    zmm3_1 = zmm6_1 ^ 0x80000000
    zmm13[0] = zmm13[0] - zmm1_1[0]
    zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm7_1[0]
    zmm7_1 = var_f8
    zmm1_1[0] = zmm1_1[0] + 1f
    zmm4_1[0] = zmm4_1[0] * zmm8_1[0]
    zmm4_1[0] = zmm4_1[0] * zmm5_1[0]
    arg8.d = zmm1_1[0]
    float var_144_1 = zmm1_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm6_1[0]
    zmm3_1[0] = zmm3_1[0] - zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
    zmm3_1[0] = zmm3_1[0] * zmm8_1[0]
    zmm3_1[0] = zmm3_1[0] + zmm4_1[0]
    zmm3_1[0] = zmm3_1[0] + 1f
    arg9.d = arg_20[0]
    zmm4_1[0] = zmm4_1[0] - zmm3_1[0]
    var_198_1:4.d = zmm3_1[0]
    var_190_1 = zmm3_1[0]
    var_198_1.d = zmm4_1[0]
    zmm0 = var_110
    goto label_141e19440

zmm6_1 = *(arg6 + 8)
zmm11 = zmm3_1
zmm8_1 = *arg6
zmm7_1 = *(arg6 + 0xc)
zmm1_1 = zmm6_1 ^ 0x80000000
zmm9 = var_f8
zmm1_1[0] = zmm1_1[0] + zmm1_1[0]
zmm8_1[0] = zmm8_1[0] + zmm8_1[0]
zmm13 = zmm8_1 ^ 0x80000000
zmm13[0] = zmm13[0] + zmm13[0]
zmm14 = zmm5_1
zmm5_1 = *(arg6 + 4)
zmm1_1[0] = zmm1_1[0] * zmm7_1[0]
zmm1_1[0] = zmm1_1[0] * zmm5_1[0]
zmm8_1[0] = zmm8_1[0] * zmm5_1[0]
zmm1_1[0] = zmm1_1[0] * zmm6_1[0]
zmm1_1[0] = zmm1_1[0] + zmm8_1[0]
zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
zmm8_1[0] = zmm8_1[0] * zmm7_1[0]
zmm1_1[0] = zmm1_1[0] - zmm8_1[0]
arg5.d = zmm1_1[0]
var_158.d = zmm1_1[0]
zmm8_1[0] = zmm8_1[0] - zmm1_1[0]
zmm13[0] = zmm13[0] * zmm6_1[0]
zmm1_1[0] = zmm1_1[0] + 1f
zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
arg_18 = zmm8_1[0]
var_150 = zmm8_1[0]
zmm13[0] = zmm13[0] * zmm7_1[0]
arg_10 = zmm1_1[0]
zmm5_1[0] = zmm5_1[0] * zmm7_1[0]
var_158:4.d = zmm1_1[0]
zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
zmm13[0] = zmm13[0] * zmm8_1[0]
zmm5_1[0] = zmm5_1[0] - zmm13[0]
zmm5_1[0] = zmm5_1[0] * zmm6_1[0]
zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
zmm13[0] = zmm13[0] + zmm5_1[0]
arg7.d = zmm5_1[0]
var_148 = zmm5_1[0]
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm13[0] = zmm13[0] - zmm5_1[0]
zmm3_1 = zmm5_1 ^ 0x80000000
arg8.d = zmm13[0]
float var_144_3 = zmm13[0]
zmm3_1[0] = zmm3_1[0] + zmm3_1[0]
zmm6_1[0] = zmm6_1[0] * zmm8_1[0]
zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
zmm3_1[0] = zmm3_1[0] - zmm6_1[0]
zmm3_1[0] = zmm3_1[0] * zmm7_1[0]
zmm3_1[0] = zmm3_1[0] * zmm8_1[0]
zmm3_1[0] = zmm3_1[0] + zmm6_1[0]
zmm3_1[0] = zmm3_1[0] + 1f
zmm6_1[0] = zmm6_1[0] - zmm3_1[0]
var_190_1 = zmm3_1[0]
arg9.d = var_108[0]
zmm0 = var_f4
var_198_1.d = zmm3_1[0]
var_198_1:4.d = zmm6_1[0]
label_141e1942c:
zmm15 = var_ec
zmm13[0] = zmm13[0] + 1f
zmm7_1 = var_f0
label_141e19440:
var_140 = zmm13[0]
int64_t var_188

if (zmm9[0] != zmm0[0])
    zmm2_1 = 0x40c90fdb
    zmm0[0] = zmm0[0] - zmm9[0]
    
    if (not(zmm0[0] >= 6.28318548f))
        zmm0[0] = zmm0[0] * 0.5f
        int64_t zmm0_2 = sinf(zmm0[0])
        zmm6_1 = 0x3f800000
        zmm6_1[0] = 1f / arg_8
        var_188 = arg3
        int64_t var_180_2 = rsi
        float var_170_2 = var_150
        int32_t var_16c_2 = 0
        zmm9[0] = zmm9[0] * 0.5f
        zmm11[0] = zmm11[0] f- zmm0_2.d
        zmm0_2 = zmm9[0].q
        zmm11[0] = zmm11[0] + zmm11[0]
        zmm11[0] = zmm11[0] * zmm6_1[0]
        float zmm0_3 = sinf(zmm0_2.d)
        int32_t var_164_2 = 0
        zmm11[0] = zmm11[0] + zmm11[0]
        int32_t var_160_2 = 0x7f7fffff
        zmm0_3 = (zmm0_3 + zmm0_3 - zmm11[0]) * zmm6_1[0]
        sub_141e32730(&var_188)
        int64_t rdi_3 = sx.q(arg2[1].d)
        int32_t rax_8 = (rdi_3 + 1).d
        arg2[1].d = rax_8
        
        if (rax_8 s> *(arg2 + 0xc))
            sub_1405c4f50(arg2)
        
        int64_t rax_9 = *arg2
        float zmm0_4[0x4] = var_188.o
        int64_t rcx_10 = rdi_3 * 6
        var_188 = arg3
        int64_t var_180_3 = rsi
        int32_t var_16c_3 = 0
        *(rax_9 + (rcx_10 << 3)) = zmm0_4
        int32_t var_164_3 = 0
        *(rax_9 + (rcx_10 << 3) + 0x10) = var_158.o
        int32_t var_160_3 = 0x7f7fffff
        *(rax_9 + (rcx_10 << 3) + 0x20) = zmm0_3.o
        float var_168_3 = zmm11[0]
        float var_150_1 = (arg_18 ^ 0x80000000)[0]
        int64_t var_178_3 = (_mm_unpacklo_ps(arg5.d ^ 0x80000000, (arg_10 ^ 0x80000000).q)).q
        float var_170_3 = var_150_1
        zmm7_1 = sub_141e32730(&var_188)
        int64_t rdi_4 = sx.q(arg2[1].d)
        int32_t rax_11 = (rdi_4 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405c4f50(arg2)
        
        int64_t rax_12 = *arg2
        int64_t rcx_14 = rdi_4 * 6
        zmm2_1 = 0x40c90fdb
        *(rax_12 + (rcx_14 << 3)) = var_188.o
        *(rax_12 + (rcx_14 << 3) + 0x10) = var_178_3.o
        *(rax_12 + (rcx_14 << 3) + 0x20) = var_168_3.o
    
    zmm9 = arg_8
    zmm8_1 = 0x3f000000
else
    zmm8_1 = 0x3f000000
label_141e19460:
    zmm9[0] = zmm9[0] * zmm8_1[0]
    var_188 = arg3
    int64_t var_180_1 = rsi
    float var_170_1 = var_150
    int32_t var_16c_1 = 0
    float zmm0_1 = sinf(zmm9[0])
    zmm9 = arg_8
    zmm11[0] = zmm11[0] + zmm11[0]
    int32_t var_164_1 = 0xff7fffff
    int32_t var_160_1 = 0x7f7fffff
    zmm0_1 = (zmm0_1 + zmm0_1 - zmm11[0]) / zmm9[0]
    zmm7_1 = sub_141e32730(&var_188)
    int64_t rdi_2 = sx.q(arg2[1].d)
    int32_t rax_5 = (rdi_2 + 1).d
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405c4f50(arg2)
    
    int64_t rax_6 = *arg2
    int64_t rcx_6 = rdi_2 * 6
    zmm2_1 = 0x40c90fdb
    *(rax_6 + (rcx_6 << 3)) = var_188.o
    *(rax_6 + (rcx_6 << 3) + 0x10) = var_158.o
    *(rax_6 + (rcx_6 << 3) + 0x20) = zmm0_1.o

zmm6_1 = arg10
int64_t var_178_4
float var_168_4

if (zmm7_1[0] != zmm15[0])
    zmm15[0] = zmm15[0] - zmm7_1[0]
    
    if (not(zmm15[0] >= zmm2_1[0]))
        zmm15[0] = zmm15[0] * zmm8_1[0]
        float _X = sinf(zmm15[0])
        zmm14[0] = zmm14[0] - _X
        zmm7_1[0] = zmm7_1[0] * 0.5f
        var_188 = arg3
        int128_t zmm12
        zmm12.d = 1f / zmm9[0]
        int64_t var_180_4 = rsi
        float var_170_4 = var_140
        int32_t var_16c_4 = 0
        zmm14[0] = zmm14[0] + zmm14[0]
        int64_t var_178_5 = var_148.q
        _X = zmm7_1[0]
        zmm14[0] = zmm14[0] f* zmm12.d
        float zmm0_5 = sinf(_X)
        int32_t var_164_5 = 0
        zmm14[0] = zmm14[0] + zmm14[0]
        int32_t var_160_4 = 0x7f7fffff
        zmm0_5 = (zmm0_5 + zmm0_5 - zmm14[0]) f* zmm12.d
        sub_141e32730(&var_188)
        int64_t rdi_5 = sx.q(arg2[1].d)
        int32_t rax_14 = (rdi_5 + 1).d
        arg2[1].d = rax_14
        
        if (rax_14 s> *(arg2 + 0xc))
            sub_1405c4f50(arg2)
        
        int64_t rax_15 = *arg2
        int64_t rcx_18 = rdi_5 * 6
        *(rax_15 + (rcx_18 << 3)) = var_188.o
        int32_t var_164_6 = 0
        *(rax_15 + (rcx_18 << 3) + 0x10) = var_178_5.o
        *(rax_15 + (rcx_18 << 3) + 0x20) = zmm0_5.o
        var_140 = (zmm13 ^ 0x80000000)[0]
        var_178_4 = (_mm_unpacklo_ps(arg7.d ^ 0x80000000, (arg8.d ^ 0x80000000).q)).q
        var_168_4 = zmm14[0]
        goto label_141e19833
else
    zmm7_1[0] = zmm7_1[0] - zmm14[0]
    var_178_4 = var_148.q
    zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
    int32_t var_164_4 = 0xff7fffff
    zmm7_1[0] = zmm7_1[0] * zmm6_1[0]
    zmm7_1[0] = zmm7_1[0] / zmm9[0]
    var_168_4 = zmm7_1[0]
label_141e19833:
    float var_170_5 = var_140
    var_188 = arg3
    int64_t var_180_5 = rsi
    int32_t var_16c_5 = 0
    int32_t var_160_5 = 0x7f7fffff
    zmm6_1 = sub_141e32730(&var_188)
    int64_t rdi_6 = sx.q(arg2[1].d)
    int32_t rax_17 = (rdi_6 + 1).d
    arg2[1].d = rax_17
    
    if (rax_17 s> *(arg2 + 0xc))
        sub_1405c4f50(arg2)
    
    int64_t rax_18 = *arg2
    int64_t rcx_22 = rdi_6 * 6
    *(rax_18 + (rcx_22 << 3)) = var_188.o
    *(rax_18 + (rcx_22 << 3) + 0x10) = var_178_4.o
    *(rax_18 + (rcx_22 << 3) + 0x20) = var_168_4.o
zmm6_1[0] = zmm6_1[0] * -2f
var_188 = arg3
zmm6_1[0] = zmm6_1[0] f* arg9.d
int64_t var_180_6 = rsi
float var_170_6 = var_190_1
zmm6_1[0] = zmm6_1[0] / zmm9[0]
int32_t var_16c_6 = 0
int32_t var_164_7 = 0xff7fffff
int32_t var_160_6 = 0x7f7fffff
float var_168_6 = zmm6_1[0]
sub_141e32730(&var_188)
int64_t rdi_7 = sx.q(arg2[1].d)
int32_t rax_20 = (rdi_7 + 1).d
arg2[1].d = rax_20

if (rax_20 s> *(arg2 + 0xc))
    sub_1405c4f50(arg2)

int64_t result = *arg2
int64_t rcx_26 = rdi_7 * 6
*(result + (rcx_26 << 3)) = var_188.o
*(result + (rcx_26 << 3) + 0x10) = var_198_1.o
*(result + (rcx_26 << 3) + 0x20) = var_168_6.o
return result
