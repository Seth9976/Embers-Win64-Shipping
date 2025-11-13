// 函数: sub_1420fa700
// 地址: 0x1420fa700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_1c8
(*(*arg1 + 0x120))(arg1, &var_1c8, arg2)
float zmm6[0x4] = *arg2
float zmm7[0x4] = *(arg2 + 4)
float zmm8[0x4] = *(arg2 + 8)
float zmm12[0x4] = var_1c8
int32_t var_1c4
int128_t zmm13 = var_1c4
zmm6[0] = zmm6[0] - zmm12[0]
int32_t var_1c0
int128_t zmm11 = var_1c0
zmm7[0] = zmm7[0] f- zmm13.d
float zmm2[0x4] = *(arg2 + 0xc)
zmm8[0] = zmm8[0] f- zmm11.d
zmm2[0] = zmm2[0] * zmm2[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]
float var_198 = 1f
float zmm0[0x4] = arg2[1].d
zmm0[0] = zmm0[0] * zmm0[0]
zmm7[0] = zmm7[0] + zmm8[0]
float zmm1[0x4] = *(arg2 + 0x14)
zmm1[0] = zmm1[0] * zmm1[0]
zmm2[0] = zmm2[0] + zmm0[0]
float zmm14[0x4] = _mm_sqrt_ss(0, zmm7[0])
zmm2[0] = zmm2[0] + zmm1[0]
zmm1 = 0x3f000000
float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2[0])
float arg_8

if (zmm14[0] <= temp0_1[0])
    zmm2 = 0x3f800000
else
    float zmm4_1[0x4] = 0x3f000000
    zmm14[0] = zmm14[0] - temp0_1[0]
    zmm2 = 0x3f000000
    temp0_1[0] = temp0_1[0] + zmm14[0]
    zmm14[0] = zmm14[0] * temp0_1[0]
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
    zmm14[0] = zmm14[0] * 0.5f
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm14[0] = zmm14[0] * temp0_2[0]
    zmm2[0] = 0.5f - zmm14[0]
    temp0_2[0] = temp0_2[0] * zmm2[0]
    zmm2 = 0x3f800000
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    zmm14[0] = zmm14[0] * temp0_2[0]
    zmm1 = 0x3f000000
    zmm4_1[0] = 0.5f - zmm14[0]
    temp0_2[0] = temp0_2[0] * zmm4_1[0]
    temp0_2[0] = temp0_2[0] + temp0_2[0]
    arg_8 = temp0_2[0]
    temp0_2[0] = temp0_2[0] * temp0_1[0]
    var_198.o = _mm_min_ss(temp0_2[0], 0x3f800000)

zmm0 = 0x3f8ccccd
temp0_1[0] = temp0_1[0] * 1.10000002f

if (not(zmm14[0] > temp0_1[0]))
    if (not(zmm7[0] == zmm2[0]))
        if (zmm7[0] >= 9.99999994e-09f)
            float temp0_4[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
            zmm7[0] = zmm7[0] * zmm1[0]
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm7[0] = zmm7[0] * temp0_4[0]
            zmm1[0] = zmm1[0] - zmm7[0]
            temp0_4[0] = temp0_4[0] * zmm1[0]
            zmm2 = 0x3f800000
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            temp0_4[0] = temp0_4[0] * temp0_4[0]
            zmm7[0] = zmm7[0] * temp0_4[0]
            zmm1[0] = zmm1[0] - zmm7[0]
            temp0_4[0] = temp0_4[0] * zmm1[0]
            temp0_4[0] = temp0_4[0] + temp0_4[0]
            zmm0 = 0x3f8ccccd
            arg_8 = temp0_4[0]
            zmm6[0] = zmm6[0] * temp0_4[0]
            zmm7[0] = zmm7[0] * temp0_4[0]
            zmm8[0] = zmm8[0] * temp0_4[0]
        else
            zmm6 = data_143dbb1f8
            zmm7 = data_143dbb1fc
            zmm8 = data_143dbb200
    
    zmm12 = *arg2
    zmm14 = temp0_1
    zmm13 = *(arg2 + 4)
    zmm11 = *(arg2 + 8)
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
    zmm6[0] = zmm6[0] * zmm0[0]
    zmm7[0] = zmm7[0] * zmm0[0]
    zmm8[0] = zmm8[0] * zmm0[0]
    zmm12[0] = zmm12[0] - zmm6[0]
    zmm13.d = zmm13.d f- zmm7[0]
    var_198 = zmm2[0]
    zmm11.d = zmm11.d f- zmm8[0]
    var_1c8 = zmm12[0]
    var_1c4 = zmm13.d
    var_1c0 = zmm11.d

*arg3 = (_mm_unpacklo_ps(zmm12 ^ 0x80000000, (zmm13 ^ 0x80000000).q)).q
zmm2[0] = zmm2[0] / zmm14[0]
int32_t var_1d0 = (zmm11 ^ 0x80000000).d
zmm6[0] = zmm6[0] * zmm2[0]
arg3[1].d = var_1d0
zmm7[0] = zmm7[0] * zmm2[0]
zmm8[0] = zmm8[0] * zmm2[0]
float var_1d8 = zmm6[0]
float var_1d4 = zmm7[0]
float var_1d0_1 = zmm8[0]
void var_c8
int32_t* rax_2 = sub_140adf3c0(&var_1d8, &var_c8)
float zmm1_1[0x4] = rax_2[2]
zmm1_1[0] = zmm1_1[0] * 0.0174532924f
float zmm0_2[0x4]
int32_t zmm6_1
int128_t zmm10_1
zmm0_2, zmm6_1, zmm10_1 = __libm_sse2_sincosf_(zmm1_1)
float zmm1_2[0x4] = *rax_2
float temp0_6[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_f8 = 0
arg_8 = (zmm0_2 ^ zmm10_1)[0]
int64_t var_ec = 0
int32_t var_dc = 0
float zmm0_3[0x4]
int32_t zmm6_2
int512_t zmm8_1
int128_t zmm10_2
int512_t zmm12_1
int512_t zmm13_1
zmm0_3, zmm6_2, zmm8_1, zmm10_2, zmm12_1, zmm13_1 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = rax_2[1]
zmm12_1.o = data_142d4cc20
zmm13_1.o = data_142d3f660
zmm8_1.o = zmm0_3
zmm1_3[0] = zmm1_3[0] f* zmm6_2
int32_t var_184 = 0
_mm_shuffle_ps(zmm0_3, zmm0_3, 1)
int32_t var_17c = 0
int32_t var_164 = 0
int32_t var_15c = 0
uint128_t zmm0_4
float zmm7_2[0x4]
float zmm8_2[0x4]
float zmm9_2[0x4]
uint128_t zmm10_3
float zmm12_2[0x4]
float zmm13_2[0x4]
int32_t zmm15_2
zmm0_4, zmm7_2, zmm8_2, zmm9_2, zmm10_3, zmm12_2, zmm13_2, zmm15_2 = __libm_sse2_sincosf_(zmm1_3)
uint128_t zmm4_2 = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
float var_188[0x4]
var_188[0] = zmm9_2[0]
int64_t var_140 = 0
float zmm3_1[0x4] = zmm0_4
float var_148[0x4]
var_148[0] = zmm4_2.d
float temp0_9[0x4] = _mm_shuffle_ps(var_188, var_188, 0xd2)
float temp0_10[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
float zmm1_4[0x4] = zmm0_4 ^ zmm10_3
zmm10_3 = data_142d4cc30
temp0_10[0] = zmm1_4[0]
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xe1)
temp0_9[0] = zmm7_2[0]
float temp0_12[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xc9)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x55)
zmm0_4 = _mm_shuffle_ps(temp0_11, temp0_11, 0)
int64_t var_130 = 0
float temp0_17[0x4] = _mm_add_ps(_mm_mul_ps(temp0_13, zmm12_2), _mm_mul_ps(zmm0_4, temp0_12))
float temp0_18[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0xaa)
float var_168[0x4]
var_168[0] = zmm8_2[0]
float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xff), zmm13_2)
float temp0_21[0x4] = _mm_shuffle_ps(var_168, var_168, 0xd2)
temp0_21[0] = zmm9_2[0]
float temp0_22[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
zmm9_2 = data_142d4cc00
float temp0_23[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xc9)
float temp0_24[0x4] = _mm_mul_ps(temp0_18, temp0_23)
float temp0_25[0x4] = _mm_mul_ps(temp0_22, zmm12_2)
float temp0_26[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xff)
float temp0_27[0x4] = _mm_add_ps(temp0_17, temp0_24)
float temp0_28[0x4] = _mm_mul_ps(temp0_26, zmm13_2)
float temp0_29[0x4] = _mm_add_ps(temp0_27, temp0_20)
float var_138[0x4]
var_138[0] = zmm3_1[0]
float temp0_30[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
temp0_30[0] = zmm4_2.d
zmm4_2 = temp0_6
float temp0_31[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0xe1)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0), temp0_12)
float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xaa), temp0_23)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x55)
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xff), zmm13_2)
float temp0_39[0x4] = _mm_mul_ps(temp0_36, zmm12_2)
float temp0_40[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0x55)
float temp0_41[0x4] = _mm_add_ps(temp0_39, zmm0_4)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0), temp0_12)
float temp0_44[0x4] = _mm_add_ps(temp0_41, temp0_35)
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0xaa), temp0_23)
float temp0_47[0x4] = _mm_add_ps(temp0_44, temp0_38)
float temp0_49[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0x55), zmm12_2)
zmm10_3 = _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0xff), zmm13_2)
float temp0_52[0x4] = _mm_add_ps(temp0_49, zmm0_4)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0), temp0_12)
float zmm6_3[0x4] = var_f8.o
float temp0_55[0x4] = _mm_add_ps(temp0_52, temp0_46)
float temp0_56[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xe1)
temp0_56[0] = zmm4_2.d
float temp0_57[0x4] = _mm_add_ps(temp0_25, zmm0_4)
float temp0_59[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa), temp0_23)
float zmm5_2[0x4] = var_ec:4.o
float temp0_60[0x4] = _mm_add_ps(temp0_55, zmm10_3)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc6)
zmm0_4 = _mm_shuffle_ps(temp0_29, temp0_29, 0)
temp0_61[0] = zmm15_2
float temp0_63[0x4] = _mm_add_ps(temp0_57, temp0_59)
zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_2)
float temp0_65[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xe1)
float temp0_66[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
float temp0_67[0x4] = _mm_mul_ps(temp0_40, temp0_66)
float temp0_68[0x4] = _mm_add_ps(temp0_63, temp0_28)
float temp0_69[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xaa)
float temp0_70[0x4] = _mm_add_ps(temp0_67, zmm0_4)
temp0_65[0] = arg_8.d
float temp0_71[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc6)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xff)
zmm0_4 = _mm_shuffle_ps(temp0_47, temp0_47, 0)
temp0_71[0] = zmm4_2.d
zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_2)
zmm4_2 = _mm_shuffle_ps(temp0_47, temp0_47, 0x55)
float temp0_76[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0xc9)
float temp0_77[0x4] = _mm_mul_ps(temp0_69, temp0_76)
zmm4_2 = _mm_mul_ps(zmm4_2, temp0_66)
float temp0_79[0x4] = _mm_mul_ps(temp0_72, zmm13_2)
float temp0_80[0x4] = _mm_add_ps(temp0_70, temp0_77)
float temp0_81[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)
zmm4_2 = _mm_add_ps(zmm4_2, zmm0_4)
float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_76)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), zmm9_2)
float temp0_86[0x4] = _mm_add_ps(temp0_80, temp0_79)
zmm4_2 = _mm_add_ps(zmm4_2, temp0_83)
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xff), zmm13_2)
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_76)
zmm4_2 = _mm_add_ps(zmm4_2, temp0_89)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), zmm13_2)
float temp0_96[0x4] = _mm_mul_ps(temp0_93, temp0_66)
*(arg3 + 0x10) = temp0_86
*(arg3 + 0x20) = zmm4_2
float temp0_97[0x4] = _mm_add_ps(temp0_96, zmm0_4)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0), zmm9_2)
float temp0_100[0x4] = _mm_add_ps(temp0_97, temp0_91)
float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_76)
float temp0_103[0x4] = _mm_add_ps(temp0_100, temp0_95)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0x55), temp0_66)
float temp0_106[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
*(arg3 + 0x30) = temp0_103
float temp0_107[0x4] = _mm_add_ps(temp0_105, zmm0_4)
float temp0_108[0x4] = _mm_mul_ps(temp0_106, zmm13_2)
*(arg3 + 0x40) = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_108)
zmm1_4 = 0x3f800000
zmm1_4[0] = 1f / var_198
arg3[0xa] = (_mm_unpacklo_ps(0x3f800000, zmm1_4[0].q)).q
float var_1d0_2 = zmm1_4[0]
zmm0_4 = _mm_unpacklo_ps(0x3f800000, 0)
arg3[0xb].d = var_1d0_2
*(arg3 + 0x5c) = zmm0_4.q
int32_t var_1d0_3 = 0
*(arg3 + 0x64) = 0
zmm1_4 = *arg2
zmm0_4 = *(arg2 + 8)
zmm1_4[0] = zmm1_4[0] - var_1c8
zmm0_4.d = zmm0_4.d f- var_1c0
float zmm2_1[0x4] = *(arg2 + 4)
zmm2_1[0] = zmm2_1[0] f- var_1c4
int32_t var_1d0_4 = zmm0_4.d
float temp0_113[0x4] = _mm_unpacklo_ps(zmm1_4, zmm2_1[0].q)
temp0_6[2] = var_1d0_4
temp0_6[3].q = *(arg2 + 0xc)
int32_t var_1a4 = *(arg2 + 0x14)
int32_t var_1a0 = (*(arg2 + 0x18)).d
temp0_6[0].q = temp0_113.q
*(arg3 + 0x68) = temp0_6
int64_t var_1a8
arg3[0xf] = var_1a8
arg3[0x10].d = var_1a0
__builtin_memcpy(&arg3[0x12], 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\xcd\xcc\xcc\x3d", 0x14)
*(arg3 + 0xa4) = arg1[0x2e].d
int32_t result
result.b = 1
return result
