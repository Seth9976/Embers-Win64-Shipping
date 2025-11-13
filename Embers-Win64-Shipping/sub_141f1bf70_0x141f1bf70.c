// 函数: sub_141f1bf70
// 地址: 0x141f1bf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
float zmm2[0x4] = *arg3
float zmm0[0x4] = *(arg3 + 0xc)
int64_t zmm1
zmm1.d = zmm0[0].q.d f- zmm2[0]
zmm2[0] = zmm2[0] + zmm0[0]
zmm0 = *(arg3 + 0x14)
zmm0[0] = zmm0[0] f+ *(arg3 + 8)
int32_t var_1e4 = zmm1.d
zmm1.d = arg3[1].d.d f+ *(arg3 + 4)
zmm0[0] = zmm0[0] * -0.5f
zmm2[0] = zmm2[0] * -0.5f
float var_1f0 = zmm0[0]
zmm1.d = zmm1.d f* -0.5f
*arg4 = (_mm_unpacklo_ps(zmm2, zmm1)).q
arg4[1].d = var_1f0
float zmm6[0x4] = *(arg1 + 0x40)
float zmm7[0x4] = *(arg1 + 0x50)
int128_t zmm8 = *(arg1 + 0x60)
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm1.d = zmm8.q.d f* zmm8.d
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] f+ zmm1.d

if (zmm7[0] == 1f)
    goto label_141f1c123

float var_1f8

if (zmm7[0] >= 9.99999994e-09f)
    int64_t zmm3 = zmm7[0].q
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm3.d)
    zmm2 = 0x3f000000
    zmm3.d = zmm3.d f* 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm1.d = zmm3.d f* temp0_1[0]
    zmm2[0] = 0.5f f- zmm1.d
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    zmm1.d = temp0_1[0].q.d f* temp0_1[0]
    zmm3.d = zmm3.d f* zmm1.d
    temp0_1[0] = temp0_1[0] * (0.5f f- zmm3.d)
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    float var_1e8_1 = temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8.d = zmm8.d f* temp0_1[0]
label_141f1c123:
    int32_t var_1f0_2 = zmm8.d
    float var_1f4_1 = zmm7[0]
    var_1f8 = zmm6[0]
else
    zmm1 = data_143dbb1fc
    var_1f8 = data_143dbb1f8[0]
    float var_1f0_1 = data_143dbb200[0]
    int32_t var_1f4 = zmm1.d

void var_138
int32_t* rax_3 = sub_140adf3c0(&var_1f8, &var_138)
float zmm1_1[0x4] = rax_3[2]
zmm1_1[0] = zmm1_1[0] * 0.0174532924f
float zmm0_2[0x4]
int32_t zmm6_1
zmm0_2, zmm6_1 = __libm_sse2_sincosf_(zmm1_1)
float zmm1_2[0x4] = *rax_3
uint128_t var_1d8 = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_118 = 0
float var_1e8_2 = (zmm0_2 ^ 0x80000000)[0]
int64_t var_10c = 0
int32_t var_fc = 0
float zmm0_3[0x4]
int32_t zmm6_2
int512_t zmm8_1
int128_t zmm10
int512_t zmm12
int512_t zmm13
zmm0_3, zmm6_2, zmm8_1, zmm10, zmm12, zmm13 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = rax_3[1]
zmm12.o = data_142d4cc20
zmm13.o = data_142d3f660
zmm8_1.o = zmm0_3
zmm1_3[0] = zmm1_3[0] f* zmm6_2
int32_t var_1b4 = 0
_mm_shuffle_ps(zmm0_3, zmm0_3, 1)
int32_t var_1ac = 0
int32_t var_194 = 0
int32_t var_18c = 0
float zmm0_4[0x4]
float zmm7_2[0x4]
float zmm8_2[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_4, zmm7_2, zmm8_2, zmm9_1, zmm10_1, zmm12_1, zmm13_1, zmm15_1 = __libm_sse2_sincosf_(zmm1_3)
float zmm1_4[0x4] = zmm0_4 ^ zmm10_1
zmm10_1 = data_142d4cc30
float temp0_4[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
float var_1b8[0x4]
var_1b8[0] = zmm9_1[0]
int64_t var_170 = 0
float var_198[0x4]
var_198[0] = zmm8_2[0]
float var_178[0x4]
var_178[0] = temp0_4[0]
float temp0_5[0x4] = _mm_shuffle_ps(var_1b8, var_1b8, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(var_178, var_178, 0xe1)
temp0_5[0] = zmm7_2[0]
temp0_6[0] = zmm1_4[0]
float temp0_7[0x4] = _mm_shuffle_ps(var_198, var_198, 0xd2)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
temp0_7[0] = zmm9_1[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm13_1)
int64_t var_160 = 0
float temp0_15[0x4] = _mm_mul_ps(temp0_10, zmm12_1)
float temp0_16[0x4] = _mm_mul_ps(temp0_11, temp0_9)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_17)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_15, temp0_16), temp0_18), temp0_14)
float var_168[0x4]
var_168[0] = zmm0_4[0]
float temp0_22[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
temp0_22[0] = temp0_4[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
float zmm4_1[0x4] = var_1d8
zmm9_1 = data_142d4cc00
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0), temp0_9)
float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xaa), temp0_17)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm13_1)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_32[0x4] = _mm_mul_ps(temp0_28, zmm12_1)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55), zmm12_1)
float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_25)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm13_1)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0), temp0_9)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_27)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), temp0_17)
float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_30)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0x55), zmm12_1)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm13_1)
float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_39)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0), temp0_9)
float zmm6_3[0x4] = var_118.o
float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_42)
float temp0_52[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xe1)
temp0_52[0] = zmm4_1[0]
float temp0_53[0x4] = _mm_add_ps(temp0_34, temp0_50)
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa), temp0_17)
float zmm5_1[0x4] = var_10c:4.o
float temp0_56[0x4] = _mm_add_ps(temp0_51, temp0_47)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0), zmm9_1)
float temp0_59[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
float temp0_60[0x4] = _mm_add_ps(temp0_53, temp0_55)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
temp0_61[0] = zmm15_1
float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
float temp0_64[0x4] = _mm_mul_ps(temp0_31, temp0_63)
float temp0_65[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xff)
float temp0_66[0x4] = _mm_add_ps(temp0_60, temp0_37)
float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm13_1)
float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_58)
var_118.o = temp0_63
temp0_59[0] = var_1e8_2[0]
float temp0_69[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xc6)
temp0_69[0] = zmm4_1[0]
float temp0_70[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x55)
float temp0_73[0x4] = _mm_mul_ps(temp0_62, temp0_71)
float temp0_74[0x4] = _mm_mul_ps(temp0_72, temp0_63)
float temp0_75[0x4] = _mm_mul_ps(temp0_70, zmm9_1)
float temp0_76[0x4] = _mm_add_ps(temp0_68, temp0_73)
var_10c:4.o = temp0_71
float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_75)
float temp0_78[0x4] = _mm_add_ps(temp0_76, temp0_67)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xaa)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_71)
float temp0_82[0x4] = _mm_mul_ps(temp0_80, zmm9_1)
float temp0_83[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xff)
float temp0_84[0x4] = _mm_add_ps(temp0_77, temp0_81)
float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm13_1)
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_71)
float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_85)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
*(arg4 + 0x10) = temp0_78
float temp0_90[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
*(arg4 + 0x20) = temp0_88
zmm4_1 = var_1e4
float temp0_91[0x4] = _mm_mul_ps(temp0_90, zmm13_1)
float temp0_93[0x4] = _mm_add_ps(_mm_mul_ps(temp0_89, temp0_63), temp0_82)
float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0), zmm9_1)
float temp0_96[0x4] = _mm_add_ps(temp0_93, temp0_87)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_71)
float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_91)
float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_63)
float temp0_102[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
*(arg4 + 0x30) = temp0_99
float temp0_103[0x4] = _mm_add_ps(temp0_101, temp0_95)
float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm13_1)
float temp0_105[0x4] = _mm_add_ps(temp0_103, temp0_98)
zmm1_4 = 0x40000000
zmm1_4[0] = 2f / zmm4_1[0]
float temp0_106[0x4] = _mm_add_ps(temp0_105, temp0_104)
zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
arg4[0xa] = (_mm_unpacklo_ps(0x3f800000, zmm1_4[0].q)).q
zmm4_1[0] = zmm4_1[0] * 0.75f
float var_1f0_3 = zmm1_4[0]
*(arg4 + 0x5c) = (_mm_unpacklo_ps(0x3f800000, 0)).q
arg4[0xb].d = var_1f0_3
*(arg4 + 0x40) = temp0_106
int32_t var_1f0_4 = 0
*(arg4 + 0x64) = 0
zmm0_4 = *(arg3 + 0x14)
zmm0_4[0] = zmm0_4[0] f- *(arg3 + 8)
float zmm3_1[0x4] = *(arg3 + 0xc)
zmm3_1[0] = zmm3_1[0] f- *arg3
zmm1_4 = arg3[1].d
zmm1_4[0] = zmm1_4[0] f- *(arg3 + 4)
int32_t rax_5 = data_143dbb200
float zmm2_1[0x4] = zx.o(data_143dbb1f8.q)
zmm0_4[0] = zmm0_4[0] * 0.5f
var_1d8:8.d = rax_5
zmm1_4[0] = zmm1_4[0] * 0.5f
float var_1f0_5 = zmm0_4[0]
zmm3_1[0] = zmm3_1[0] * 0.5f
float var_1c4 = var_1f0_5
var_1d8:0xc.q = (_mm_unpacklo_ps(zmm3_1, zmm1_4[0].q)).q
zmm1_4 = var_1d8
float temp0_110[0x4] = _mm_sqrt_ss(0, zmm4_1[0])
zmm1_4[0].q = zmm2_1.q
float var_1c0 = temp0_110[0]
*(arg4 + 0x68) = zmm1_4
arg4[0x14].d = 0xc9800000
int64_t var_1c8
arg4[0xf] = var_1c8
*(arg4 + 0x90) = zmm13_1
arg4[0x10].d = var_1c0
*(arg4 + 0xa4) = 0x47000000
zmm10_1 = *(arg3 + 0xc)
zmm2_1 = *arg3
zmm0_4 = *(arg3 + 8)
zmm10_1[0] = zmm10_1[0] - zmm2_1[0]
zmm9_1 = arg3[1].d
zmm0_4[0] = zmm0_4[0] f+ *(arg3 + 0x14)
zmm4_1 = zmm2_1
zmm2_1 = *(arg3 + 0x14)
zmm4_1[0] = zmm4_1[0] f+ *(arg3 + 0xc)
zmm2_1[0] = zmm2_1[0] - zmm0_4[0]
zmm10_1[0] = zmm10_1[0] * 0.5f
var_1d8 = zmm1_4
zmm1_4 = *(arg3 + 4)
zmm10_1[0] = zmm10_1[0] + zmm4_1[0]
zmm0_4[0] = zmm0_4[0] * 0.5f
zmm4_1[0] = zmm4_1[0] * 0.5f
zmm9_1[0] = zmm9_1[0] - zmm1_4[0]
zmm10_1[0] = zmm10_1[0] * 0.5f
zmm1_4[0] = zmm1_4[0] f+ arg3[1].d
zmm2_1[0] = zmm2_1[0] * -0.5f
zmm4_1[0] = zmm4_1[0] - zmm10_1[0]
zmm2_1[0] = zmm2_1[0] * 0.5f
zmm9_1[0] = zmm9_1[0] * 0.5f
zmm9_1[0] = zmm9_1[0] + zmm1_4[0]
zmm2_1[0] = zmm2_1[0] + zmm0_4[0]
zmm2_1[0] = zmm2_1[0] + zmm0_4[0]
zmm1_4[0] = zmm1_4[0] * 0.5f
zmm2_1[0] = zmm2_1[0] + zmm0_4[0]
zmm9_1[0] = zmm9_1[0] * 0.5f
zmm1_4[0] = zmm1_4[0] - zmm9_1[0]
float var_120 = zmm2_1[0]
float var_1f0_7 = zmm2_1[0]
int64_t var_128 = (_mm_unpacklo_ps(zmm4_1, zmm1_4[0].q)).q
int64_t var_11c = (_mm_unpacklo_ps(zmm4_1, zmm1_4[0].q)).q
int64_t var_110 = (_mm_unpacklo_ps(zmm10_1, zmm1_4[0].q)).q
int64_t var_104 = (_mm_unpacklo_ps(zmm10_1, zmm1_4[0].q)).q
float var_114 = var_1f0_7
int64_t var_f8 = (_mm_unpacklo_ps(zmm4_1, zmm9_1[0].q)).q
var_10c:4.d = zmm2_1[0]
float var_1f0_10 = zmm2_1[0]
float var_fc_1 = zmm2_1[0]
int64_t var_ec = (_mm_unpacklo_ps(zmm4_1, zmm9_1[0].q)).q
float var_1f0_11 = zmm2_1[0]
float var_f0 = var_1f0_10
char rdx_1 = *(arg2 + 0xd34)
uint128_t* var_208 = &var_1d8
int64_t var_e0 = (_mm_unpacklo_ps(zmm10_1, zmm9_1[0].q)).q
int64_t var_d4 = (_mm_unpacklo_ps(zmm10_1, zmm9_1[0].q)).q
float var_e4 = var_1f0_11
float var_1f0_12 = zmm2_1[0]
float var_1f0_13 = zmm2_1[0]
zmm1_4 = *(arg1 + 0x50)
var_1f8 = (*(arg1 + 0x40) ^ 0x80000000)[0]
float var_d8 = var_1f0_12
float var_cc = var_1f0_13
float var_1f0_14 = (*(arg1 + 0x60) ^ 0x80000000)[0]
float var_1f4_2 = (zmm1_4 ^ 0x80000000)[0]
sub_141f0ae40(arg1, rdx_1, &var_128, &var_1f8, &arg4[0x1a], &var_138, var_208)
int64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_238)
return result
