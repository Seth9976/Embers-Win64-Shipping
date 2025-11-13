// 函数: sub_1424256a0
// 地址: 0x1424256a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
*(r8 + 0x28)
*(r8 + 0x2c)
*(r8 + 0x30)
*(r8 + 0x34)
*(r8 + 0x38)
*(r8 + 0x3c)
float var_138[0x4] = arg2[1]
float zmm1[0x4] = arg2[3]
uint128_t zmm15 = zx.o(*(r8 + 0x28))
int32_t rax = *(r8 + 0x30)
float var_148[0x4] = *arg2
float zmm0[0x4] = arg2[2]
float var_118[0x4] = zmm1
float zmm6_1[0x4]
uint128_t zmm7_1
float zmm8_1[0x4]
float zmm9_1[0x4]
float zmm10_1[0x4]
float zmm11_1[0x4]
float zmm15_1[0x4]
zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm15_1 = sub_1407740e0(&var_148, 0x322bcc77)
float zmm1_1[0x4] = var_148
zmm10_1[0] = zmm10_1[0] f- zmm7_1.d
zmm9_1[0] = zmm9_1[0] - zmm6_1[0]
zmm11_1[0] = zmm11_1[0] - zmm8_1[0]
float zmm13[0x4] = data_142d4cc00
float zmm12[0x4] = data_142d4cc20
float zmm14[0x4] = data_142d4cc30
zmm6_1 = data_142d3f660
*(arg1 + 0x30) = zmm1_1
var_148[1].q = 0
*(arg1 + 0x40) = var_138
var_148[3].q = 0
float zmm2[0x4] = var_148
zmm2[0] = zmm9_1[0]
_mm_shuffle_ps(zmm15, zmm15, 0xe1)
*(arg1 + 0x50) = zmm0
float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
*(arg1 + 0x60) = 0
var_138[2].q = 0
float temp0_2[0x4] = _mm_mul_ps(temp0_1, zmm12)
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_5[0x4] = _mm_mul_ps(temp0_3, zmm13)
zmm7_1.d = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)[0]
float temp0_7[0x4] = _mm_mul_ps(temp0_4, zmm14)
float temp0_8[0x4] = _mm_add_ps(temp0_2, temp0_5)
_mm_shuffle_ps(zmm7_1, zmm7_1, 0xc6)
float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
zmm7_1.d = rax[0]
float temp0_11[0x4] = _mm_add_ps(temp0_8, temp0_7)
zmm8_1 = arg2[3]
_mm_shuffle_ps(zmm7_1, zmm7_1, 0x27)
zmm7_1.d = 0x3f800000
float zmm5[0x4] = *arg2
zmm7_1 = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x39)
uint128_t var_b8 = zmm7_1
float temp0_15[0x4] = _mm_add_ps(temp0_11, _mm_mul_ps(temp0_10, zmm7_1))
float temp0_16[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
temp0_16[0] = zmm10_1[0]
float temp0_17[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xe1)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm13)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm14)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xff), zmm7_1)
float temp0_25[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0)
float temp0_26[0x4] = _mm_mul_ps(temp0_21, zmm12)
float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm5)
float temp0_30[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_26, temp0_20), temp0_22), temp0_24)
float temp0_31[0x4] = _mm_shuffle_ps(0, 0, 0xd2)
temp0_31[0] = zmm11_1[0]
float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
float temp0_33[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x55)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0), zmm13)
float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xaa), zmm14)
float temp0_39[0x4] = _mm_mul_ps(temp0_34, zmm12)
float temp0_40[0x4] = _mm_mul_ps(temp0_33, zmm12)
float temp0_41[0x4] = _mm_shuffle_ps(temp0_30, temp0_30, 0)
float temp0_42[0x4] = _mm_add_ps(temp0_39, temp0_36)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xff), zmm7_1)
float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0), zmm13)
float temp0_47[0x4] = _mm_add_ps(temp0_42, temp0_38)
float temp0_48[0x4] = _mm_mul_ps(temp0_41, zmm5)
float temp0_49[0x4] = _mm_add_ps(temp0_40, temp0_46)
float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm14)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0x55)
float temp0_53[0x4] = _mm_add_ps(temp0_47, temp0_44)
float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xff), zmm7_1)
zmm7_1 = arg2[2]
float temp0_56[0x4] = _mm_add_ps(temp0_49, temp0_51)
float temp0_58[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0xaa), zmm7_1)
float temp0_59[0x4] = _mm_add_ps(temp0_56, temp0_55)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xff)
zmm6_1 = arg2[1]
float temp0_61[0x4] = _mm_mul_ps(temp0_52, zmm6_1)
float temp0_62[0x4] = _mm_mul_ps(temp0_60, zmm8_1)
float temp0_63[0x4] = _mm_add_ps(temp0_27, temp0_61)
float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x55), zmm6_1)
float temp0_66[0x4] = _mm_add_ps(temp0_63, temp0_58)
float temp0_67[0x4] = _mm_add_ps(temp0_48, temp0_65)
float temp0_68[0x4] = _mm_add_ps(temp0_66, temp0_62)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xaa), zmm7_1)
float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xff), zmm8_1)
float temp0_73[0x4] = _mm_add_ps(temp0_67, temp0_70)
float temp0_74[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
float temp0_75[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
float temp0_76[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
float temp0_77[0x4] = _mm_mul_ps(temp0_74, zmm6_1)
float temp0_78[0x4] = _mm_add_ps(temp0_73, temp0_72)
float temp0_79[0x4] = _mm_mul_ps(temp0_76, zmm7_1)
float temp0_80[0x4] = _mm_mul_ps(temp0_75, zmm5)
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0), zmm5)
*(arg1 + 0xb0) = temp0_68
*(arg1 + 0xc0) = temp0_78
float temp0_83[0x4] = _mm_add_ps(temp0_82, temp0_77)
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), zmm8_1)
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), zmm6_1)
float temp0_88[0x4] = _mm_add_ps(temp0_83, temp0_79)
float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), zmm7_1)
float temp0_91[0x4] = _mm_add_ps(temp0_80, temp0_87)
float temp0_92[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
float temp0_93[0x4] = _mm_add_ps(temp0_88, temp0_85)
float temp0_94[0x4] = _mm_mul_ps(temp0_92, zmm8_1)
float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_90)
*(arg1 + 0xd0) = temp0_93
*(arg1 + 0xe0) = _mm_add_ps(temp0_95, temp0_94)
uint32_t var_e8[0x3][0x4]
uint32_t (* result)[0x4] = sub_140631b10(&arg1[0x16], &var_e8)
*(arg1 + 0x70) = *result
*(arg1 + 0x80) = result[1]
*(arg1 + 0x90) = result[2]
*(arg1 + 0xa0) = result[3]
return result
