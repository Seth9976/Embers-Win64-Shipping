// 函数: sub_141e296c0
// 地址: 0x141e296c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x144) == 0
uint128_t zmm8 = arg1
int128_t zmm9 = 0x3f333333
arg2[0x2c] = *arg2
arg2[0x2d].d = arg2[1].d
*(arg2 + 0x170) = *(arg2 + 0x10)
uint128_t zmm1

if (cond:0)
    zmm1 = 0x3f333333
else
    zmm1 = arg2[0x29].d

if (*(arg2 + 0x13c) != 0)
    zmm9 = arg2[0x28].d

arg1.d = 1f f- zmm1.d
uint128_t zmm7 = powf(arg1.d, zmm8.d)
uint128_t zmm6
zmm6.d = 1f f- zmm9.d
uint128_t zmm0_1 = powf(zmm6.d, zmm8.d)
uint128_t zmm3 = zmm0_1
zmm1.d = zmm7.d f* arg2[4].d
uint128_t zmm2
zmm2.d = zmm7.d f* *(arg2 + 0x24)
zmm7.d = zmm7.d f* arg2[5].d
arg2[4].d = zmm1.d
*(arg2 + 0x24) = zmm2.d
arg2[5].d = zmm7.d
zmm1.d = zmm3.d f* arg2[6].d
zmm0_1.d = zmm0_1.d f* *(arg2 + 0x2c)
zmm3.d = zmm3.d f* *(arg2 + 0x34)
arg2[6].d = zmm1.d
*(arg2 + 0x2c) = zmm0_1.d
*(arg2 + 0x34) = zmm3.d
int32_t var_140
uint128_t zmm4_1

if (arg2[0x2a].b == 0)
    int64_t* rax_1 = sub_142565030()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx = *rax_1
        (*(rdx + 0x390))(rax_1, rdx)
        rax_2 = rax_1[0x23]
    
    zmm4_1 = __andps_xmmxud_memxud(*(rax_2 + 0x38), data_142d3f770)
    zmm2 = arg2[7].d
    zmm0_1 = zmm4_1
    zmm3 = *(arg2 + 0x14c)
    zmm1 = zmm4_1
    zmm4_1.d = zmm4_1.d f* arg3[2]
    zmm0_1.d = zmm0_1.d f* *arg3
    zmm1.d = zmm1.d f* arg3[1]
    zmm4_1.d = zmm4_1.d f* zmm2.d
    zmm0_1.d = zmm0_1.d f* zmm2.d
    zmm4_1.d = zmm4_1.d f* zmm3.d
    zmm1.d = zmm1.d f* zmm2.d
    var_140 = zmm4_1.d
    zmm0_1.d = zmm0_1.d f* zmm3.d
    zmm1.d = zmm1.d f* zmm3.d
else
    zmm2 = arg2[7].d
    zmm0_1 = zmm2
    zmm1 = zmm2
    zmm2.d = zmm2.d f* *(arg2 + 0x15c)
    zmm0_1.d = zmm0_1.d f* *(arg2 + 0x154)
    zmm1.d = zmm1.d f* arg2[0x2b].d
    var_140 = zmm2.d

int32_t var_144 = zmm1.d
uint64_t var_158 = zmm0_1.d.q
uint128_t zmm5_1

if (arg2[0x24].b != 0)
    zmm3 = arg2[0x25].d
    zmm1 = *(arg2 + 0x124)
    zmm4_1.d = zmm3.d f* *(arg2 + 0x12c)
    zmm5_1.d = zmm3.d f* arg2[0x26].d
    zmm3.d = zmm3.d f* *(arg2 + 0x134)
    zmm5_1.d = zmm5_1.d f* 250f
    zmm3.d = zmm3.d f* 250f
    zmm5_1.d = zmm5_1.d f* zmm1.d
    zmm4_1.d = zmm4_1.d f* 250f
    zmm3.d = zmm3.d f* zmm1.d
    zmm4_1.d = zmm4_1.d f* zmm1.d
    zmm2.d = zmm5_1.d f* zmm5_1.d
    zmm1.d = zmm3.d f* zmm3.d
    zmm0_1.d = zmm4_1.d f* zmm4_1.d
    zmm2.d = zmm2.d f+ zmm0_1.d
    zmm2.d = zmm2.d f+ zmm1.d

if (arg2[0x24].b == 0 || zmm2.d f<= 9.99999994e-09f)
    zmm4_1 = var_140
    zmm2 = var_158:4.d
    zmm1 = var_158.d
else
    zmm0_1 = arg2[0x27].d
    zmm4_1.d = zmm4_1.d f* zmm0_1.d
    zmm5_1.d = zmm5_1.d f* zmm0_1.d
    zmm1.d = var_158.d.d f+ zmm4_1.d
    zmm3.d = zmm3.d f* zmm0_1.d
    zmm2.d = var_158:4.d.d f+ zmm5_1.d
    zmm4_1.d = var_140.d f+ zmm3.d

zmm1.d = zmm1.d f* zmm8.d
zmm2.d = zmm2.d f* zmm8.d
zmm1.d = zmm1.d f+ arg2[4].d
zmm4_1.d = zmm4_1.d f* zmm8.d
zmm2.d = zmm2.d f+ *(arg2 + 0x24)
zmm4_1.d = zmm4_1.d f+ arg2[5].d
arg2[4].d = zmm1.d
*(arg2 + 0x24) = zmm2.d
arg2[5].d = zmm4_1.d
int32_t var_138
sub_140ad9d00(&var_138, &arg2[2])
float zmm2_1[0x4] = *(arg2 + 0x3c)
float var_f8 = var_138[0]
void* rax_4 = arg2 + 0x44
int32_t var_128
float var_f4 = var_128[0]
int32_t var_118
float var_f0 = var_118[0]
int64_t i_1 = 4
int32_t var_108
float var_ec = var_108[0]
int32_t var_134
float var_e8 = var_134[0]
int32_t var_124
float var_e4 = var_124[0]
int32_t var_114
float var_e0 = var_114[0]
int32_t var_104
float var_dc = var_104[0]
int32_t var_130
float var_d8 = var_130[0]
int32_t var_120
float var_d4 = var_120[0]
int32_t var_110
float var_d0 = var_110[0]
int32_t var_100
float var_cc = var_100[0]
int32_t var_12c
float var_c8 = var_12c[0]
int32_t var_11c
float var_c4 = var_11c[0]
int32_t var_10c
float var_c0 = var_10c[0]
int32_t var_fc
float var_bc = var_fc[0]
float var_b8[0x4]
int64_t i

do
    rax_4 += 0x10
    zmm2_1[0] = zmm2_1[0] f* *(rax_4 - 0x14)
    zmm2_1[0] = zmm2_1[0] f* *(rax_4 - 0x10)
    *(&var_b8 - arg2 + rax_4 - 0x54) = zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* *(rax_4 - 0xc)
    *(&var_b8[1] - arg2 + rax_4 - 0x54) = zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* *(rax_4 - 8)
    void var_b0
    *(&var_b0 - arg2 + rax_4 - 0x54) = zmm2_1[0]
    void var_ac
    *(&var_ac - arg2 + rax_4 - 0x54) = zmm2_1[0]
    i = i_1
    i_1 -= 1
while (i != 1)
zmm2_1 = var_138.o
float zmm5_2[0x4] = var_b8
float zmm8_1[0x4] = var_e8.o
float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_5[0x4] = _mm_mul_ps(temp0_2, zmm5_2)
float var_98[0x4]
float temp0_6[0x4] = _mm_mul_ps(temp0_3, var_98)
float var_88[0x4]
float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_88)
float var_a8[0x4]
float temp0_12[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_4, var_a8), temp0_5), temp0_6), temp0_8)
zmm2_1 = var_128.o
float temp0_13[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_14[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_15[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm5_2)
float temp0_17[0x4] = _mm_mul_ps(temp0_14, var_98)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_88)
float temp0_20[0x4] = _mm_mul_ps(temp0_15, var_a8)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x55), zmm8_1)
float temp0_25[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_20, temp0_16), temp0_17), temp0_19)
zmm2_1 = var_118.o
float temp0_26[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_27[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_28[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm5_2)
float temp0_30[0x4] = _mm_mul_ps(temp0_27, var_98)
float temp0_31[0x4] = _mm_mul_ps(temp0_28, var_a8)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_88)
float temp0_36[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_31, temp0_29), temp0_30), temp0_33)
zmm2_1 = var_108.o
float temp0_37[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
float temp0_38[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0)
float temp0_39[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm5_2)
zmm5_2 = var_c8.o
float temp0_41[0x4] = _mm_mul_ps(temp0_39, var_98)
float zmm4_2[0x4] = var_f8.o
float temp0_42[0x4] = _mm_mul_ps(temp0_37, var_a8)
float zmm6_1[0x4] = var_d8.o
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), var_88)
float temp0_45[0x4] = _mm_add_ps(temp0_42, temp0_40)
float temp0_47[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0), zmm4_2)
float temp0_48[0x4] = _mm_add_ps(temp0_45, temp0_41)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa)
float temp0_50[0x4] = _mm_add_ps(temp0_22, temp0_47)
float temp0_51[0x4] = _mm_mul_ps(temp0_49, zmm6_1)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xff)
float temp0_53[0x4] = _mm_add_ps(temp0_48, temp0_44)
float temp0_54[0x4] = _mm_mul_ps(temp0_52, zmm5_2)
float temp0_56[0x4] = _mm_add_ps(_mm_add_ps(temp0_50, temp0_51), temp0_54)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0), zmm4_2)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xaa), zmm6_1)
float temp0_62[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
float temp0_63[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
float temp0_64[0x4] = _mm_mul_ps(temp0_59, zmm8_1)
float temp0_65[0x4] = _mm_mul_ps(temp0_62, zmm8_1)
*(arg2 + 0x80) = temp0_56
float temp0_66[0x4] = _mm_add_ps(temp0_64, temp0_58)
float temp0_67[0x4] = _mm_mul_ps(temp0_63, zmm4_2)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0), zmm4_2)
float temp0_70[0x4] = _mm_add_ps(temp0_66, temp0_61)
float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_25, temp0_25, 0xff), zmm5_2)
float temp0_73[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)
float temp0_74[0x4] = _mm_add_ps(temp0_65, temp0_69)
float temp0_75[0x4] = _mm_mul_ps(temp0_73, zmm6_1)
float temp0_76[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
float temp0_77[0x4] = _mm_add_ps(temp0_70, temp0_72)
float result[0x4] = _mm_mul_ps(temp0_76, zmm8_1)
float temp0_78[0x4] = _mm_add_ps(temp0_74, temp0_75)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xff)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
*(arg2 + 0x90) = temp0_77
float temp0_81[0x4] = _mm_add_ps(temp0_67, result)
float temp0_82[0x4] = _mm_mul_ps(temp0_80, zmm6_1)
float temp0_83[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xff)
float temp0_84[0x4] = _mm_mul_ps(temp0_79, zmm5_2)
float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm5_2)
float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_82)
float temp0_87[0x4] = _mm_add_ps(temp0_78, temp0_84)
float temp0_88[0x4] = _mm_add_ps(temp0_86, temp0_85)
*(arg2 + 0xa0) = temp0_87
*(arg2 + 0xb0) = temp0_88
return result
