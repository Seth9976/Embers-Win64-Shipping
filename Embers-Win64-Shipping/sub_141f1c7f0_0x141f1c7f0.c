// 函数: sub_141f1c7f0
// 地址: 0x141f1c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = arg3 == 0xffffffff
int32_t var_1d0
sub_141f18030(arg1, &var_1d0, arg2, arg3, arg4, &arg5[0x16])
int32_t rax_1 = sub_141f16380(arg1, *(arg2 + 0x278), arg4)
int32_t rcx_1 = arg3
int32_t var_1c4
float zmm0[0x4] = var_1c4
float zmm1[0x4] = var_1d0 ^ 0x80000000
zmm0[0] = zmm0[0] * 0.577350259f

if (arg3 == 0xffffffff)
    rcx_1 = rax_1

*(arg5 + 0x214) = rcx_1
int32_t var_1cc
*arg5 = (_mm_unpacklo_ps(zmm1, (var_1cc ^ 0x80000000)[0].q)).q
float var_1dc = zmm0[0]
float var_1d8 = zmm0[0]
float var_1d4 = zmm0[0]
int32_t var_1c8
arg5[1].d = (var_1c8 ^ 0x80000000)[0]
float zmm6[0x4] = arg1[8].d
float zmm7[0x4] = arg1[0xa].d
float zmm8[0x4] = arg1[0xc].d
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]

if (zmm7[0] == 1f)
    goto label_141f1c9eb

float var_1e8
float arg_18

if (zmm7[0] >= 9.99999994e-09f)
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    float zmm2[0x4] = 0x3f000000
    zmm7[0] = zmm7[0] * 0.5f
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm2[0] = 0.5f - zmm7[0]
    temp0_1[0] = temp0_1[0] * zmm2[0]
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    temp0_1[0] = temp0_1[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    temp0_1[0] = temp0_1[0] * (0.5f - zmm7[0])
    temp0_1[0] = temp0_1[0] + temp0_1[0]
    arg_18 = temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
label_141f1c9eb:
    float var_1e0_2 = zmm8[0]
    float var_1e4_1 = zmm7[0]
    var_1e8 = zmm6[0]
else
    zmm1 = data_143dbb1fc
    var_1e8 = data_143dbb1f8[0]
    float var_1e0_1 = data_143dbb200[0]
    float var_1e4 = zmm1[0]

void var_d8
int32_t* rax_3 = sub_140adf3c0(&var_1e8, &var_d8)
float zmm1_1[0x4] = rax_3[2]
zmm1_1[0] = zmm1_1[0] * 0.0174532924f
float zmm0_2[0x4]
int32_t zmm6_1
int128_t zmm10
zmm0_2, zmm6_1, zmm10 = __libm_sse2_sincosf_(zmm1_1)
float zmm1_2[0x4] = *rax_3
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_108 = 0
arg_18 = (zmm0_2 ^ zmm10)[0]
int64_t var_fc = 0
int32_t var_ec = 0
float zmm0_3[0x4]
int32_t zmm6_2
int512_t zmm8_1
int128_t zmm10_1
int512_t zmm12
int512_t zmm13
zmm0_3, zmm6_2, zmm8_1, zmm10_1, zmm12, zmm13 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = rax_3[1]
zmm12.o = data_142d4cc20
zmm13.o = data_142d3f660
zmm8_1.o = zmm0_3
zmm1_3[0] = zmm1_3[0] f* zmm6_2
int32_t var_194 = 0
_mm_shuffle_ps(zmm0_3, zmm0_3, 1)
int32_t var_18c = 0
int32_t var_174 = 0
int32_t var_16c = 0
float zmm0_4[0x4]
float zmm7_2[0x4]
float zmm8_2[0x4]
float zmm9_1[0x4]
float zmm10_2[0x4]
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_4, zmm7_2, zmm8_2, zmm9_1, zmm10_2, zmm12_1, zmm13_1, zmm15_1 = __libm_sse2_sincosf_(zmm1_3)
float zmm1_4[0x4] = zmm0_4 ^ zmm10_2
zmm10_2 = data_142d4cc30
int64_t var_150 = 0
float var_198[0x4]
var_198[0] = zmm9_1[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
float var_178[0x4]
var_178[0] = zmm8_2[0]
float var_158[0x4]
var_158[0] = temp0_4[0]
float temp0_5[0x4] = _mm_shuffle_ps(var_198, var_198, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
temp0_5[0] = zmm7_2[0]
temp0_6[0] = zmm1_4[0]
float temp0_7[0x4] = _mm_shuffle_ps(var_178, var_178, 0xd2)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
temp0_7[0] = zmm9_1[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm13_1)
int64_t var_140 = 0
float temp0_15[0x4] = _mm_mul_ps(temp0_10, zmm12_1)
float temp0_16[0x4] = _mm_mul_ps(temp0_11, temp0_9)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_17)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_15, temp0_16), temp0_18), temp0_14)
float var_148[0x4]
var_148[0] = zmm0_4[0]
float temp0_22[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
temp0_22[0] = temp0_4[0]
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
zmm9_1 = data_142d4cc00
float temp0_24[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, temp0_9)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, temp0_17)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm13_1)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
float temp0_32[0x4] = _mm_mul_ps(temp0_28, zmm12_1)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55), zmm12_1)
float temp0_35[0x4] = _mm_add_ps(temp0_32, temp0_26)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm13_1)
float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0), temp0_9)
float temp0_40[0x4] = _mm_add_ps(temp0_35, temp0_27)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0xaa), temp0_17)
float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_30)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0x55), zmm12_1)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0xff), zmm13_1)
float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_39)
float temp0_50[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0), temp0_9)
float zmm6_3[0x4] = var_108.o
float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_42)
float temp0_52[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xe1)
temp0_52[0] = temp0_2[0]
float temp0_53[0x4] = _mm_add_ps(temp0_34, temp0_50)
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa), temp0_17)
float zmm5_2[0x4] = var_fc:4.o
float temp0_56[0x4] = _mm_add_ps(temp0_51, temp0_47)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0), zmm9_1)
float temp0_59[0x4] = _mm_add_ps(temp0_53, temp0_55)
float temp0_60[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
temp0_61[0] = zmm15_1
float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
float temp0_64[0x4] = _mm_mul_ps(temp0_31, temp0_63)
float temp0_65[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xff)
float temp0_66[0x4] = _mm_add_ps(temp0_59, temp0_37)
float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm13_1)
float temp0_68[0x4] = _mm_add_ps(temp0_64, temp0_58)
temp0_60[0] = arg_18[0]
float temp0_69[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
temp0_69[0] = temp0_2[0]
float temp0_70[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
float temp0_72[0x4] = _mm_mul_ps(temp0_62, temp0_71)
float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0x55), temp0_63)
float temp0_75[0x4] = _mm_add_ps(temp0_68, temp0_72)
float temp0_76[0x4] = _mm_mul_ps(temp0_70, zmm9_1)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xaa), temp0_71)
float temp0_79[0x4] = _mm_add_ps(temp0_75, temp0_67)
float temp0_80[0x4] = _mm_add_ps(temp0_74, temp0_76)
float temp0_81[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xff)
float temp0_82[0x4] = _mm_add_ps(temp0_80, temp0_78)
float temp0_83[0x4] = _mm_mul_ps(temp0_81, zmm13_1)
float temp0_84[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
float temp0_86[0x4] = _mm_mul_ps(temp0_84, zmm9_1)
float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_71)
float temp0_88[0x4] = _mm_add_ps(temp0_82, temp0_83)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), zmm13_1)
float temp0_92[0x4] = _mm_mul_ps(temp0_89, temp0_63)
*(arg5 + 0x10) = temp0_79
*(arg5 + 0x20) = temp0_88
float temp0_93[0x4] = _mm_add_ps(temp0_92, temp0_86)
float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0), zmm9_1)
float temp0_96[0x4] = _mm_add_ps(temp0_93, temp0_87)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_71)
float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_91)
float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_63)
float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), zmm13_1)
float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_95)
*(arg5 + 0x30) = temp0_99
zmm1_4 = 0x3f800000
*(arg5 + 0x40) = _mm_add_ps(_mm_add_ps(temp0_104, temp0_98), temp0_103)
float zmm2_1[0x4] = var_1c4
float var_1a0 = zmm2_1[0]
zmm1_4[0] = 1f / zmm2_1[0]
arg5[0xa] = (_mm_unpacklo_ps(0x3f800000, zmm1_4[0].q)).q
float var_1e0_3 = zmm1_4[0]
*(arg5 + 0x5c) = (_mm_unpacklo_ps(0x3f800000, 0)).q
arg5[0xb].d = var_1e0_3
temp0_2[3].q = var_1dc.q
int32_t var_1e0_4 = 0
*(arg5 + 0x64) = 0
zmm1_4 = zx.o(data_143dbb1f8.q)
temp0_2[2] = data_143dbb200
float var_1a4 = var_1d4
arg5[0x14].d = 0xc9800000
*(arg5 + 0xa4) = 0x47000000
*(arg5 + 0x221) = r12.b
temp0_2[0].q = zmm1_4.q
*(arg5 + 0x68) = temp0_2
int64_t var_1a8
arg5[0xf] = var_1a8
arg5[0x10].d = var_1a0
*(arg5 + 0x90) = zmm13_1

if (arg3 == 0xffffffff || *(arg5 + 0x214) s< rax_1)
    arg5[0x42].b = 0
else
    arg5[0x42].b = 1

float result
result.b = 1
return result
