// 函数: sub_141f57fa0
// 地址: 0x141f57fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm5 = arg3
int128_t zmm0
int128_t zmm1

if ((*(arg1 + 0x524) & 2) != 0 && zmm5.d f>= 0f && zmm5.d f< 1f)
    zmm0.d = zmm5.d f+ zmm5.d
    zmm1.d = zmm5.d f* zmm5.d
    int128_t zmm9
    zmm9.d = 3f f- zmm0.d
    zmm9.d = zmm9.d f* zmm1.d

zmm1.d = zmm5.d f* zmm5.d
int128_t zmm6
zmm6.d = zmm1.d f* zmm5.d
zmm0.d = zmm1.d f* 3f
int128_t zmm3
zmm3.d = zmm6.d f+ zmm6.d
arg3.d = zmm6.d f- zmm1.d
zmm1.d = zmm1.d f+ zmm1.d
int128_t zmm4
zmm4.d = zmm0.d f- zmm3.d
zmm3.d = zmm3.d f- zmm0.d
zmm6.d = zmm6.d f- zmm1.d
zmm1.d = arg3.d f* *(arg1 + 0x4e0)
zmm3.d = zmm3.d f+ 1f
zmm6.d = zmm6.d f+ zmm5.d
int128_t zmm7
zmm7.d = zmm3.d f* *(arg1 + 0x4a0)
zmm0.d = zmm6.d f* *(arg1 + 0x4ac)
zmm7.d = zmm7.d f+ zmm0.d
zmm0.d = zmm4.d f* *(arg1 + 0x4cc)
zmm7.d = zmm7.d f+ zmm1.d
zmm1.d = arg3.d f* *(arg1 + 0x4e4)
arg3.d = arg3.d f* *(arg1 + 0x4e8)
zmm7.d = zmm7.d f+ zmm0.d
zmm0.d = zmm3.d f* *(arg1 + 0x4a4)
zmm3.d = zmm3.d f* *(arg1 + 0x4a8)
float arg_18 = zmm7.d
zmm7.d = zmm6.d f* *(arg1 + 0x4b0)
zmm6.d = zmm6.d f* *(arg1 + 0x4b4)
zmm7.d = zmm7.d f+ zmm0.d
zmm0.d = zmm4.d f* *(arg1 + 0x4d0)
zmm4.d = zmm4.d f* *(arg1 + 0x4d4)
zmm6.d = zmm6.d f+ zmm3.d
zmm7.d = zmm7.d f+ zmm1.d
zmm6.d = zmm6.d f+ arg3.d
zmm7.d = zmm7.d f+ zmm0.d
zmm6.d = zmm6.d f+ zmm4.d
int32_t var_138
int32_t zmm9_1
int32_t zmm12
zmm9_1, zmm12 =
    sub_141f743b0(&var_138, arg1 + 0x4a0, arg1 + 0x4ac, arg1 + 0x4cc, arg1 + 0x4e0, zmm5.d)
float zmm2[0x4] = *(arg1 + 0x500)
int32_t var_134
float zmm4_1[0x4] = var_134
int32_t var_130
float zmm15[0x4] = var_130
float zmm3_1[0x4] = *(arg1 + 0x4fc)
float zmm11[0x4] = zmm15
float zmm7_1[0x4] = var_138
float zmm13 = zmm4_1[0]
float zmm1_1 = *(arg1 + 0x4f8)
float zmm10[0x4] = zmm7_1
zmm4_1[0] = zmm4_1[0] * zmm2[0]
zmm10[0] = zmm10[0] * zmm2[0]
zmm11[0] = zmm11[0] * zmm3_1[0]
zmm11[0] = zmm11[0] - zmm4_1[0]
zmm15[0] = zmm15[0] * zmm1_1
zmm10[0] = zmm10[0] - zmm15[0]
zmm11[0] = zmm11[0] * zmm11[0]
zmm7_1[0] = zmm7_1[0] * zmm3_1[0]
zmm13 = zmm13 * zmm1_1 - zmm7_1[0]
zmm3_1 = data_143dbb200
float zmm5_1[0x4] = data_143dbb1fc
zmm10[0] = zmm10[0] * zmm10[0]
zmm11[0] = zmm11[0] + zmm10[0]
zmm11[0] = zmm11[0] + zmm13 * zmm13
float arg_8

if (not(zmm11[0] f== zmm12))
    if (zmm11[0] >= 9.99999994e-09f)
        zmm4_1 = 0x3f000000
        float temp0_1[0x4] = _mm_rsqrt_ss(zmm11[0], zmm11[0])
        zmm2 = 0x3f000000
        zmm11[0] = zmm11[0] * 0.5f
        temp0_1[0] = temp0_1[0] * temp0_1[0]
        zmm2[0] = 0.5f - zmm11[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm2[0]
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        zmm11[0] = zmm11[0] * temp0_1[0] * temp0_1[0]
        zmm4_1[0] = 0.5f - zmm11[0]
        zmm3_1 = data_143dbb200
        temp0_1[0] = temp0_1[0] * zmm4_1[0]
        zmm4_1 = var_134
        temp0_1[0] = temp0_1[0] + temp0_1[0]
        arg_8 = temp0_1[0]
        zmm11[0] = zmm11[0] * temp0_1[0]
        temp0_1[0] = temp0_1[0] * zmm13
        temp0_1[0] = temp0_1[0] * zmm10[0]
        zmm13 = temp0_1[0]
        zmm5_1 = data_143dbb1fc
        zmm10 = temp0_1
    else
        zmm11 = data_143dbb1f8
        zmm10 = zmm5_1
        zmm13 = zmm3_1[0]

float zmm6_1[0x4] = zmm4_1
zmm15[0] = zmm15[0] * zmm10[0]
float zmm8[0x4] = zmm15
zmm6_1[0] = zmm6_1[0] * zmm13
zmm8[0] = zmm8[0] * zmm11[0]
zmm6_1[0] = zmm6_1[0] - zmm15[0]
zmm7_1[0] = zmm7_1[0] * zmm13
zmm7_1[0] = zmm7_1[0] * zmm10[0]
zmm8[0] = zmm8[0] - zmm7_1[0]
zmm4_1[0] = zmm4_1[0] * zmm11[0]
zmm7_1[0] = zmm7_1[0] - zmm4_1[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
zmm1_1 = zmm7_1[0] * zmm7_1[0]
zmm8[0] = zmm8[0] + zmm6_1[0]
zmm8[0] = zmm8[0] + zmm1_1

if (not(zmm8[0] f== zmm12))
    if (zmm8[0] >= 9.99999994e-09f)
        zmm4_1 = 0x3f000000
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm8[0], zmm8[0])
        zmm2 = 0x3f000000
        zmm8[0] = zmm8[0] * 0.5f
        temp0_2[0] = temp0_2[0] * temp0_2[0]
        zmm2[0] = 0.5f - zmm8[0] * temp0_2[0]
        temp0_2[0] = temp0_2[0] * zmm2[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0] * temp0_2[0]
        zmm4_1[0] = 0.5f - zmm8[0]
        temp0_2[0] = temp0_2[0] * zmm4_1[0]
        temp0_2[0] = temp0_2[0] + temp0_2[0]
        arg_8 = temp0_2[0]
        zmm6_1[0] = zmm6_1[0] * temp0_2[0]
        zmm8[0] = zmm8[0] * temp0_2[0]
        zmm7_1[0] = zmm7_1[0] * temp0_2[0]
    else
        zmm6_1 = data_143dbb1f8
        zmm8 = zmm5_1
        zmm7_1 = zmm3_1

zmm1_1 = *(arg1 + 0x4c8)
float zmm0_1[0x4] = *(arg1 + 0x4c4)
zmm2 = *(arg1 + 0x4f4)
zmm3_1 = *(arg1 + 0x4f0)
zmm2[0] = zmm2[0] - zmm1_1
zmm3_1[0] = zmm3_1[0] - zmm0_1[0]
zmm2[0] = zmm2[0] f* zmm9_1
zmm3_1[0] = zmm3_1[0] f* zmm9_1
zmm2[0] = zmm2[0] + zmm1_1
zmm1_1 = zmm11[0]
zmm3_1[0] = zmm3_1[0] + zmm0_1[0]
zmm6_1[0] = zmm6_1[0] * zmm2[0]
zmm1_1 = zmm1_1 * zmm3_1[0] + arg_18 + zmm6_1[0]
zmm8[0] = zmm8[0] * zmm2[0]
arg_8 = zmm1_1
zmm1_1 = zmm10[0] * zmm3_1[0] + zmm7.d + zmm8[0]
zmm7_1[0] = zmm7_1[0] * zmm2[0]
zmm2 = *(arg1 + 0x4ec)
float arg_10 = zmm1_1
float arg_20 = zmm13 * zmm3_1[0] + zmm6.d + zmm7_1[0]
zmm1_1 = *(arg1 + 0x4c0)
zmm2[0] = zmm2[0] - zmm1_1
zmm2[0] = zmm2[0] f* zmm9_1
zmm2[0] = zmm2[0] + zmm1_1
float zmm0_2[0x4]
float zmm6_2[0x4]
float zmm7_2[0x4]
float zmm8_1[0x4]
float zmm9_2
float zmm10_1
float zmm11_1
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_2, zmm6_2, zmm7_2, zmm8_1, zmm9_2, zmm10_1, zmm11_1, zmm13_1, zmm15_1 =
    __libm_sse2_sincosf_(zmm2)
uint32_t zmm3_2[0x4] = zmm0_2
float temp0_3[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
float zmm4_2 = zmm11_1
zmm11_1 = zmm11_1 f* zmm3_2[0]
zmm8_1[0] = zmm8_1[0] f* zmm3_2[0]
zmm6_2[0] = zmm6_2[0] f* zmm3_2[0]
zmm8_1[0] = zmm8_1[0] * temp0_3[0]
float zmm5_2 = zmm10_1 * temp0_3[0]
zmm4_2 = zmm4_2 * temp0_3[0] - zmm6_2[0]
zmm6_2[0] = zmm6_2[0] * temp0_3[0]
zmm10_1 = zmm10_1 f* zmm3_2[0]
zmm13_1[0] = zmm13_1[0] * temp0_3[0]
zmm5_2 = zmm5_2 - zmm8_1[0]
zmm13_1[0] = zmm13_1[0] f* zmm3_2[0]
zmm7_2[0] = zmm7_2[0] f* zmm3_2[0]
zmm6_2[0] = zmm6_2[0] + zmm11_1
*(arg1 + 0x4dc)
zmm10_1 = zmm10_1 + zmm8_1[0]
zmm8_1 = *(arg1 + 0x4d8)
zmm3_2 = data_143f3b870
zmm13_1[0] = zmm13_1[0] - zmm7_2[0]
zmm0_2 = *(arg1 + 0x4b8)
zmm8_1[0] = zmm8_1[0] - zmm0_2[0]
zmm7_2[0] = zmm7_2[0] * temp0_3[0]
arg_18 = zmm13_1[0]
float zmm1_2[0x4] = *(arg1 + 0x4bc)
zmm7_2[0] = zmm7_2[0] + zmm13_1[0]
zmm1_2[0]
zmm8_1[0] = zmm8_1[0] * zmm9_2
zmm8_1[0] = zmm8_1[0] + zmm0_2[0]
zmm1_2[0]
zmm1_2 = zmm3_2
zmm1_2[0].q = zx.o(0) u>> 0x40
uint32_t rcx_1 = zx.d(*(arg1 + 0x525))
uint32_t temp0_4[0x4] = __andps_xmmxud_memxud(zmm3_2, data_143f3b880)
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1_2, 0xc4)
arg2[1] = zx.o(0)
arg2[2] = temp0_4
float var_128[0x4]
float var_118[0x4]
float var_f8

if (rcx_1 == 0)
    var_f8 = var_138[0]
    float var_f4_3 = var_134[0]
    float var_e0_3 = arg_18[0]
    float var_c8_3 = arg_8[0]
    int32_t var_f0_3 = zmm15_1
    float var_e8_3 = zmm4_2
    float var_e4_3 = zmm5_2
    float var_d8_3 = zmm6_2[0]
    float var_d4_3 = zmm10_1
    float var_d0_3 = zmm7_2[0]
    float var_c4_3 = arg_10[0]
    float var_c0_3 = arg_20[0]
    int32_t var_ec_3 = 0
    int32_t var_dc_3 = 0
    int32_t var_cc_3 = 0
    int32_t var_bc_3 = 0x3f800000
    float zmm8_4[0x4]
    int64_t zmm11_4
    float zmm12_2[0x4]
    zmm8_4, zmm11_4, zmm12_2 = sub_1407c8dd0(&var_128, &var_f8)
    arg2[1] = var_118
    arg2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm12_2, zmm11_4), 
        _mm_unpacklo_ps(zmm8_4, (zx.o(0)).q)[0].q)
    *arg2 = var_128
else if (rcx_1 == 1)
    float var_e8_2 = var_138[0]
    float var_e4_2 = var_134[0]
    float var_d0_2 = arg_18[0]
    float var_c8_2 = arg_8[0]
    var_f8 = zmm6_2[0]
    float var_f4_2 = zmm10_1
    float var_f0_2 = zmm7_2[0]
    int32_t var_e0_2 = zmm15_1
    float var_d8_2 = zmm4_2
    float var_d4_2 = zmm5_2
    float var_c4_2 = arg_10[0]
    float var_c0_2 = arg_20[0]
    int32_t var_ec_2 = 0
    int32_t var_dc_2 = 0
    int32_t var_cc_2 = 0
    int32_t var_bc_2 = 0x3f800000
    int64_t zmm8_3
    float zmm11_3[0x4]
    zmm8_3, zmm11_3 = sub_1407c8dd0(&var_128, &var_f8)
    arg2[2] = __unpcklps_xmmps_memdq(_mm_unpacklo_ps(zmm11_3, zmm8_3), data_142d4cc00)
    arg2[1] = var_118
    *arg2 = var_128
else if (rcx_1 == 2)
    float var_f0_1 = arg_18[0]
    float var_d8_1 = var_138[0]
    float var_d4_1 = var_134[0]
    float var_c8_1 = arg_8[0]
    var_f8 = zmm4_2
    float var_f4_1 = zmm5_2
    float var_e8_1 = zmm6_2[0]
    float var_e4_1 = zmm10_1
    float var_e0_1 = zmm7_2[0]
    int32_t var_d0_1 = zmm15_1
    float var_c4_1 = arg_10[0]
    float var_c0_1 = arg_20[0]
    int32_t var_ec_1 = 0
    int32_t var_dc_1 = 0
    int32_t var_cc_1 = 0
    int32_t var_bc_1 = 0x3f800000
    float zmm8_2[0x4]
    float zmm11_2[0x4]
    int64_t zmm12_1
    zmm8_2, zmm11_2, zmm12_1 = sub_1407c8dd0(&var_128, &var_f8)
    arg2[1] = var_118
    arg2[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8_2, zmm12_1), 
        _mm_unpacklo_ps(zmm11_2, (zx.o(0)).q)[0].q)
    *arg2 = var_128
return arg2
