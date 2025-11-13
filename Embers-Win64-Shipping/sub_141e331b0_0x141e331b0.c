// 函数: sub_141e331b0
// 地址: 0x141e331b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x1c] = *arg1
*(arg1 + 0xf0) = *(arg1 + 0x10)
int32_t rax = arg1[1].d
*arg1 = arg1[0x18]
arg1[0x1d].d = rax
arg1[1].d = arg1[0x19].d
*(arg1 + 0x10) = *(arg1 + 0xd0)
float var_118[0x4]
sub_140ad9d00(&var_118, &arg1[2])
float zmm2[0x4] = var_118
float zmm6[0x4] = *(arg1 + 0x50)
float zmm5[0x4] = *(arg1 + 0x40)
float zmm7[0x4] = *(arg1 + 0x60)
float zmm8[0x4] = *(arg1 + 0x70)
float var_d8 = var_118[0][0]
int32_t var_f8
float var_d0 = var_f8[0]
float var_c8 = var_118[1][0]
int32_t var_108
float var_d4 = var_108[0]
int32_t var_f4
float var_c0 = var_f4[0]
int32_t var_e8
float var_cc = var_e8[0]
float var_b8 = var_118[2][0]
int32_t var_104
float var_c4 = var_104[0]
int32_t var_f0
float var_b0 = var_f0[0]
int32_t var_e4
float var_bc = var_e4[0]
float var_a8 = var_118[3][0]
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
int32_t var_100
float var_b4 = var_100[0]
int32_t var_ec
float var_a0 = var_ec[0]
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
int32_t var_e0
float var_ac = var_e0[0]
int32_t var_fc
float var_a4 = var_fc[0]
float temp0_2[0x4] = _mm_mul_ps(temp0_1, zmm6)
float temp0_3[0x4] = _mm_mul_ps(temp0, zmm5)
int32_t var_dc
float var_9c = var_dc[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_5[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
float temp0_6[0x4] = _mm_add_ps(temp0_3, temp0_2)
float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm8)
float temp0_10[0x4] = _mm_add_ps(_mm_add_ps(temp0_6, _mm_mul_ps(temp0_4, zmm7)), temp0_7)
zmm2 = var_108.o
float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_12[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_13[0x4] = _mm_mul_ps(temp0_11, zmm5)
float temp0_14[0x4] = _mm_mul_ps(temp0_12, zmm6)
float var_98[0x4] = temp0_10
float temp0_15[0x4] = _mm_add_ps(temp0_13, temp0_14)
int64_t i = 0
float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xaa), zmm7)
float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_21[0x4] = _mm_add_ps(_mm_add_ps(temp0_15, temp0_17), temp0_19)
zmm2 = var_f8.o
float temp0_22[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_23[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_24[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm7)
float var_88[0x4] = temp0_21
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm6)
float temp0_28[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float temp0_32[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_22, zmm5), temp0_26), temp0_25), temp0_28)
zmm2 = var_e8.o
float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_34[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_35[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_36[0x4] = _mm_mul_ps(temp0_33, zmm5)
float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm7)
float temp0_38[0x4] = _mm_mul_ps(temp0_35, zmm6)
float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm8)
float var_78[0x4] = temp0_32
float temp0_42[0x4] = _mm_add_ps(_mm_add_ps(temp0_36, temp0_38), temp0_37)
float zmm1[0x4] = *(arg1 + 0x3c)
float temp0_43[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float var_68[0x4] = _mm_add_ps(temp0_42, temp0_40)

do
    *(&var_118 + i) = _mm_mul_ps(*(&var_98 + i), temp0_43)
    i += 0x10
while (i s< 0x40)

zmm2 = var_118
float zmm9[0x4] = var_c8.o
zmm7 = var_d8.o
zmm6 = var_b8.o
zmm5 = var_a8.o
float temp0_46[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_47[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_48[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm7)
float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm6)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
float temp0_56[0x4] =
    _mm_add_ps(_mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_48, zmm9), temp0_49), temp0_50), temp0_52)
zmm2 = var_108.o
float temp0_57[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_58[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_59[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_60[0x4] = _mm_mul_ps(temp0_57, zmm7)
float temp0_61[0x4] = _mm_mul_ps(temp0_58, zmm6)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
float temp0_64[0x4] = _mm_mul_ps(temp0_59, zmm9)
*(arg1 + 0x80) = temp0_56
float temp0_67[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_64, temp0_60), temp0_61), temp0_63)
zmm2 = var_f8.o
float temp0_68[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_69[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_70[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_71[0x4] = _mm_mul_ps(temp0_69, zmm7)
float temp0_72[0x4] = _mm_mul_ps(temp0_70, zmm6)
float temp0_73[0x4] = _mm_mul_ps(temp0_68, zmm9)
float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_71)
*(arg1 + 0x90) = temp0_67
float temp0_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_76, temp0_72), temp0_75)
zmm2 = var_e8.o
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm9)
float temp0_81[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_82[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float result[0x4] = _mm_mul_ps(temp0_81, zmm7)
float temp0_83[0x4] = _mm_mul_ps(temp0_82, zmm6)
float temp0_84[0x4] = _mm_add_ps(temp0_80, result)
*(arg1 + 0xa0) = temp0_78
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm5)
*(arg1 + 0xb0) = _mm_add_ps(_mm_add_ps(temp0_84, temp0_83), temp0_86)
return result
