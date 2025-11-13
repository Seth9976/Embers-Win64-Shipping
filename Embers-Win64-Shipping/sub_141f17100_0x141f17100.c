// 函数: sub_141f17100
// 地址: 0x141f17100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = *(arg2 + 8)
*arg3 = (_mm_unpacklo_ps(*arg2 ^ 0x80000000, (*(arg2 + 4) ^ 0x80000000)[0].q)).q
arg3[1].d = (zmm0 ^ 0x80000000)[0]
float zmm6[0x4] = *(arg1 + 0x40)
float zmm7[0x4] = *(arg1 + 0x50)
float zmm8[0x4] = *(arg1 + 0x60)
zmm7[0] = zmm7[0] * zmm7[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm8[0] = zmm8[0] * zmm8[0]
zmm7[0] = zmm7[0] + zmm6[0]
zmm7[0] = zmm7[0] + zmm8[0]

if (zmm7[0] == 1f)
    goto label_141f17272

float var_1a8
float arg_8

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
    arg_8 = temp0_1[0]
    zmm6[0] = zmm6[0] * temp0_1[0]
    zmm7[0] = zmm7[0] * temp0_1[0]
    zmm8[0] = zmm8[0] * temp0_1[0]
label_141f17272:
    float var_1a0_2 = zmm8[0]
    float var_1a4_1 = zmm7[0]
    var_1a8 = zmm6[0]
else
    float zmm1[0x4] = data_143dbb1fc
    var_1a8 = data_143dbb1f8[0]
    float var_1a0_1 = data_143dbb200[0]
    float var_1a4 = zmm1[0]

void var_b8
int32_t* rax_1 = sub_140adf3c0(&var_1a8, &var_b8)
float zmm1_1[0x4] = rax_1[2]
zmm1_1[0] = zmm1_1[0] * 0.0174532924f
float zmm0_2[0x4]
int32_t zmm6_1
int128_t zmm10
zmm0_2, zmm6_1, zmm10 = __libm_sse2_sincosf_(zmm1_1)
float zmm1_2[0x4] = *rax_1
float temp0_2[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
zmm1_2[0] = zmm1_2[0] f* zmm6_1
int32_t var_e8 = 0
arg_8 = (zmm0_2 ^ zmm10)[0]
int64_t var_dc = 0
int32_t var_cc = 0
float zmm0_3[0x4]
int32_t zmm6_2
int512_t zmm8_1
int128_t zmm10_1
int512_t zmm12
int512_t zmm13
zmm0_3, zmm6_2, zmm8_1, zmm10_1, zmm12, zmm13 = __libm_sse2_sincosf_(zmm1_2)
float zmm1_3[0x4] = rax_1[1]
zmm12.o = data_142d4cc20
zmm13.o = data_142d3f660
zmm8_1.o = zmm0_3
zmm1_3[0] = zmm1_3[0] f* zmm6_2
int32_t var_174 = 0
_mm_shuffle_ps(zmm0_3, zmm0_3, 1)
int32_t var_16c = 0
int32_t var_154 = 0
int32_t var_14c = 0
uint128_t zmm0_4
float zmm7_2[0x4]
float zmm8_2[0x4]
float zmm9_1[0x4]
uint128_t zmm10_2
float zmm12_1[0x4]
float zmm13_1[0x4]
int32_t zmm15_1
zmm0_4, zmm7_2, zmm8_2, zmm9_1, zmm10_2, zmm12_1, zmm13_1, zmm15_1 = __libm_sse2_sincosf_(zmm1_3)
float zmm1_4[0x4] = zmm0_4 ^ zmm10_2
zmm10_2 = data_142d4cc30
uint128_t zmm3_1 = zmm0_4
int64_t var_130 = 0
float var_178[0x4]
var_178[0] = zmm9_1[0]
uint128_t zmm4_1 = _mm_shuffle_ps(zmm0_4, zmm0_4, 1)
float var_158[0x4]
var_158[0] = zmm8_2[0]
float var_138[0x4]
var_138[0] = zmm4_1.d
float temp0_5[0x4] = _mm_shuffle_ps(var_178, var_178, 0xd2)
float temp0_6[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
temp0_5[0] = zmm7_2[0]
temp0_6[0] = zmm1_4[0]
float temp0_7[0x4] = _mm_shuffle_ps(var_158, var_158, 0xd2)
float temp0_8[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0xe1)
temp0_7[0] = zmm9_1[0]
float temp0_9[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x55)
zmm0_4 = _mm_shuffle_ps(temp0_8, temp0_8, 0)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xaa)
float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_8, temp0_8, 0xff), zmm13_1)
int64_t var_120 = 0
float temp0_15[0x4] = _mm_mul_ps(temp0_10, zmm12_1)
zmm0_4 = _mm_mul_ps(zmm0_4, temp0_9)
float temp0_17[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
float temp0_18[0x4] = _mm_mul_ps(temp0_12, temp0_17)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_15, zmm0_4), temp0_18), temp0_14)
float var_128[0x4]
var_128[0] = zmm3_1.d
float temp0_22[0x4] = _mm_shuffle_ps(var_128, var_128, 0xe1)
temp0_22[0] = zmm4_1.d
float temp0_23[0x4] = _mm_shuffle_ps(temp0_22, temp0_22, 0xe1)
zmm4_1 = temp0_2
zmm9_1 = data_142d4cc00
zmm0_4 = _mm_shuffle_ps(temp0_23, temp0_23, 0)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
zmm0_4 = _mm_mul_ps(zmm0_4, temp0_9)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, temp0_17)
zmm3_1 = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
float temp0_30[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), zmm13_1)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0x55)
zmm3_1 = _mm_mul_ps(zmm3_1, zmm12_1)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0x55), zmm12_1)
zmm3_1 = _mm_add_ps(zmm3_1, zmm0_4)
float temp0_37[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xff), zmm13_1)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0), temp0_9)
zmm3_1 = _mm_add_ps(zmm3_1, temp0_27)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0xaa), temp0_17)
zmm3_1 = _mm_add_ps(zmm3_1, temp0_30)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0x55), zmm12_1)
zmm10_2 = _mm_mul_ps(_mm_shuffle_ps(zmm10_2, zmm10_2, 0xff), zmm13_1)
float temp0_48[0x4] = _mm_add_ps(temp0_45, zmm0_4)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0), temp0_9)
float zmm6_3[0x4] = var_e8.o
float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_42)
float temp0_52[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xe1)
temp0_52[0] = zmm4_1.d
float temp0_53[0x4] = _mm_add_ps(temp0_34, zmm0_4)
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13_1, zmm13_1, 0xaa), temp0_17)
float zmm5_1[0x4] = var_dc:4.o
float temp0_56[0x4] = _mm_add_ps(temp0_51, zmm10_2)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0), zmm9_1)
float temp0_59[0x4] = _mm_add_ps(temp0_53, temp0_55)
float temp0_60[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xe1)
float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xc6)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xaa)
temp0_61[0] = zmm15_1
float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xc9)
float temp0_64[0x4] = _mm_mul_ps(temp0_31, temp0_63)
float temp0_65[0x4] = _mm_shuffle_ps(temp0_21, temp0_21, 0xff)
float temp0_66[0x4] = _mm_add_ps(temp0_59, temp0_37)
float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm13_1)
float temp0_68[0x4] = _mm_add_ps(temp0_64, zmm0_4)
temp0_60[0] = arg_8.d
float temp0_69[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xc6)
temp0_69[0] = zmm4_1.d
zmm0_4 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xc9)
float temp0_72[0x4] = _mm_mul_ps(temp0_62, temp0_71)
zmm4_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x55), temp0_63)
float temp0_75[0x4] = _mm_add_ps(temp0_68, temp0_72)
zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_1)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa), temp0_71)
float temp0_79[0x4] = _mm_add_ps(temp0_75, temp0_67)
zmm4_1 = _mm_add_ps(_mm_add_ps(zmm4_1, zmm0_4), temp0_78)
zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
*(arg3 + 0x10) = temp0_79
zmm3_1 = _mm_mul_ps(zmm3_1, zmm13_1)
zmm0_4 = _mm_shuffle_ps(temp0_56, temp0_56, 0)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
zmm0_4 = _mm_mul_ps(zmm0_4, zmm9_1)
float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_71)
zmm4_1 = _mm_add_ps(zmm4_1, zmm3_1)
zmm3_1 = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
float temp0_90[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
*(arg3 + 0x20) = zmm4_1
float temp0_91[0x4] = _mm_mul_ps(temp0_90, zmm13_1)
zmm3_1 = _mm_add_ps(_mm_mul_ps(zmm3_1, temp0_63), zmm0_4)
zmm0_4 = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0), zmm9_1)
zmm3_1 = _mm_add_ps(zmm3_1, temp0_87)
float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_71)
zmm3_1 = _mm_add_ps(zmm3_1, temp0_91)
float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_63)
float temp0_102[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
*(arg3 + 0x30) = zmm3_1
float temp0_103[0x4] = _mm_add_ps(temp0_101, zmm0_4)
float temp0_104[0x4] = _mm_mul_ps(temp0_102, zmm13_1)
*(arg3 + 0x40) = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_104)
zmm1_4 = 0x3f800000
zmm1_4[0] = 1f f/ *(arg2 + 0x18)
arg3[0xa] = (_mm_unpacklo_ps(0x3f800000, zmm1_4[0].q)).q
arg3[0xb].d = zmm1_4[0]
*(arg3 + 0x5c) = (_mm_unpacklo_ps(0x3f800000, 0)).q
int32_t var_1a0_4 = 0
*(arg3 + 0x64) = 0
float zmm2_1[0x4] = zx.o(data_143dbb1f8.q)
temp0_2[3].q = *(arg2 + 0xc)
zmm0_4 = *(arg2 + 0x18)
temp0_2[2] = data_143dbb200
int32_t var_184 = *(arg2 + 0x14)
int32_t var_180 = zmm0_4.d
temp0_2[0].q = zmm2_1.q
*(arg3 + 0x68) = temp0_2
arg3[0x14].d = 0xc9800000
int64_t var_188
arg3[0xf] = var_188
arg3[0x10].d = var_180
*(arg3 + 0x90) = zmm13_1
zmm1_4 = *(data_143f3ae98 + 4)
void* result
result.b = 1
zmm0_4.d = (*(data_143f3ae80 + 4)).d f* *(arg2 + 0x18)

if (zmm0_4.d f>= zmm1_4[0])
    *(arg3 + 0xa4) = __minss_xmmss_memss(zmm0_4.d, 0x4a000000).d
else
    *(arg3 + 0xa4) = zmm1_4[0]

return result
