// 函数: sub_14003b380
// 地址: 0x14003b380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0[0x4] = _mm_shuffle_ps(*(arg3 + 4), *arg3, 0)
float zmm5[0x4] = *(arg3 + 8)
uint128_t zmm12 = *arg3 | zmm5[0].q << 0x40
float temp0_1[0x4] = _mm_shuffle_ps(*(arg2 + 4), *arg2, 0)
float zmm1[0x4] = *(arg2 + 8)
uint128_t zmm13 = *arg2 | zmm1[0].q << 0x40
uint128_t zmm9 = _mm_sub_ps(zmm12, zmm13)
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, _mm_shuffle_ps(zmm1, zx.o(0), 0x30), 0x82)
float zmm8[0x4] = arg1[2]
float temp0_5[0x4] = _mm_mul_ps(temp0_4, zmm8)
float zmm3[0x4] = *(arg1 + 0xc)
float zmm6[0x4] = *arg1
float zmm0[0x4] = *(arg1 + 4)
float temp0_6[0x4] = _mm_unpacklo_ps(*(arg1 + 8), zmm6[0].q)
float temp0_7[0x4] = _mm_unpacklo_ps(zmm6, zmm3[0].q)
float temp0_8[0x4] = _mm_unpacklo_ps(zmm0, zmm3[0].q)
float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
uint128_t zmm14 = *(arg1 + 4) | temp0_7[0].q << 0x40
float temp0_10[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xd2)
zmm1 = temp0_6[0].q | temp0_8[0].q << 0x40
float temp0_11[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float temp0_14[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_10, zmm14), _mm_mul_ps(temp0_11, zmm1))
float temp0_15[0x4] = _mm_add_ps(temp0_14, temp0_14)
float temp0_17[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_15), temp0_5)
float temp0_18[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xd2)
float temp0_19[0x4] = _mm_shuffle_ps(temp0_15, temp0_15, 0xc9)
float temp0_23[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_18, zmm14), _mm_mul_ps(temp0_19, zmm1)), temp0_17)
float zmm11[0x4] = arg1[1]
float temp0_24[0x4] = _mm_add_ps(temp0_23, zmm11)
float temp0_27[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0, _mm_shuffle_ps(zmm5, zx.o(0), 0x30), 0x82), zmm8)
float temp0_28[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xd2)
float temp0_29[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
float temp0_32[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_28, zmm14), _mm_mul_ps(temp0_29, zmm1))
float temp0_33[0x4] = _mm_add_ps(temp0_32, temp0_32)
float temp0_35[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_33), temp0_27)
float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xd2)
float temp0_37[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
float temp0_42[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_36, zmm14), _mm_mul_ps(temp0_37, zmm1)), temp0_35), 
    zmm11)
float temp0_43[0x4] = _mm_min_ps(temp0_24, temp0_42)
float temp0_44[0x4] = _mm_max_ps(temp0_24, temp0_42)
float temp0_45[0x4] = _mm_mul_ps(0x3f800000, zmm9)
float temp0_46[0x4] = _mm_add_ps(zmm13, temp0_45)
float temp0_49[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_46, _mm_shuffle_ps(zx.o(0), temp0_46, 0x20), 0x24), zmm8)
float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xd2)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
float temp0_54[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_50, zmm14), _mm_mul_ps(temp0_51, zmm1))
float temp0_55[0x4] = _mm_add_ps(temp0_54, temp0_54)
float temp0_57[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_55), temp0_49)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xd2)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0xc9)
float temp0_64[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_58, zmm14), _mm_mul_ps(temp0_59, zmm1)), temp0_57), 
    zmm11)
float temp0_65[0x4] = _mm_min_ps(temp0_43, temp0_64)
float temp0_66[0x4] = _mm_max_ps(temp0_44, temp0_64)
float temp0_67[0x4] = _mm_sub_ps(zmm12, temp0_45)
float temp0_70[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_67, _mm_shuffle_ps(zx.o(0), temp0_67, 0x20), 0x24), zmm8)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xd2)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc9)
float temp0_75[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_71, zmm14), _mm_mul_ps(temp0_72, zmm1))
float temp0_76[0x4] = _mm_add_ps(temp0_75, temp0_75)
float temp0_78[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_76), temp0_70)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xd2)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc9)
float temp0_85[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_79, zmm14), _mm_mul_ps(temp0_80, zmm1)), temp0_78), 
    zmm11)
float temp0_86[0x4] = _mm_min_ps(temp0_65, temp0_85)
float temp0_87[0x4] = _mm_max_ps(temp0_66, temp0_85)
float temp0_88[0x4] = _mm_mul_ps(data_142d4cc20, zmm9)
float temp0_89[0x4] = _mm_add_ps(zmm13, temp0_88)
float temp0_92[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_89, _mm_shuffle_ps(zx.o(0), temp0_89, 0x20), 0x24), zmm8)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xd2)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0xc9)
float temp0_97[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_93, zmm14), _mm_mul_ps(temp0_94, zmm1))
float temp0_98[0x4] = _mm_add_ps(temp0_97, temp0_97)
float temp0_100[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_98), temp0_92)
float temp0_101[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xd2)
float temp0_102[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xc9)
float temp0_107[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_101, zmm14), _mm_mul_ps(temp0_102, zmm1)), temp0_100), 
    zmm11)
float temp0_108[0x4] = _mm_min_ps(temp0_86, temp0_107)
float temp0_109[0x4] = _mm_max_ps(temp0_87, temp0_107)
float temp0_110[0x4] = _mm_sub_ps(zmm12, temp0_88)
float temp0_113[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(temp0_110, _mm_shuffle_ps(zx.o(0), temp0_110, 0x20), 0x24), zmm8)
float temp0_114[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xd2)
float temp0_115[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc9)
float temp0_118[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_114, zmm14), _mm_mul_ps(temp0_115, zmm1))
float temp0_119[0x4] = _mm_add_ps(temp0_118, temp0_118)
float temp0_121[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_119), temp0_113)
float temp0_122[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xd2)
float temp0_123[0x4] = _mm_shuffle_ps(temp0_119, temp0_119, 0xc9)
float temp0_128[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_122, zmm14), _mm_mul_ps(temp0_123, zmm1)), temp0_121), 
    zmm11)
float temp0_129[0x4] = _mm_min_ps(temp0_108, temp0_128)
float temp0_130[0x4] = _mm_max_ps(temp0_109, temp0_128)
zmm9 = __mulps_xmmps_memps(zmm9, data_142d4cc30)
zmm13 = _mm_add_ps(zmm13, zmm9)
zmm13 = _mm_mul_ps(_mm_shuffle_ps(zmm13, _mm_shuffle_ps(zx.o(0), zmm13, 0x20), 0x24), zmm8)
float temp0_136[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
float temp0_137[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
float temp0_140[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_136, zmm14), _mm_mul_ps(temp0_137, zmm1))
float temp0_141[0x4] = _mm_add_ps(temp0_140, temp0_140)
float temp0_143[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_141), zmm13)
float temp0_144[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xd2)
float temp0_145[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
float temp0_150[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_144, zmm14), _mm_mul_ps(temp0_145, zmm1)), temp0_143), 
    zmm11)
float temp0_151[0x4] = _mm_min_ps(temp0_129, temp0_150)
float temp0_152[0x4] = _mm_max_ps(temp0_130, temp0_150)
zmm12 = _mm_sub_ps(zmm12, zmm9)
zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, _mm_shuffle_ps(zx.o(0), zmm12, 0x20), 0x24), zmm8)
float temp0_157[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_158[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_161[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_157, zmm14), _mm_mul_ps(temp0_158, zmm1))
float temp0_162[0x4] = _mm_add_ps(temp0_161, temp0_161)
float temp0_164[0x4] = _mm_add_ps(_mm_mul_ps(temp0_9, temp0_162), zmm12)
float temp0_165[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xd2)
float temp0_166[0x4] = _mm_shuffle_ps(temp0_162, temp0_162, 0xc9)
float temp0_171[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_165, zmm14), _mm_mul_ps(temp0_166, zmm1)), temp0_164), 
    zmm11)
float temp0_172[0x4] = _mm_min_ps(temp0_151, temp0_171)
zmm0 = _mm_shuffle_epi32(temp0_172, 0x4e)
*arg4 = temp0_172[0]
float temp0_174[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0xe5)
float temp0_175[0x4] = _mm_max_ps(temp0_152, temp0_171)
zmm1 = _mm_shuffle_epi32(temp0_175, 0x4e)
*arg5 = temp0_175[0]
float temp0_177[0x4] = _mm_shuffle_ps(temp0_175, temp0_175, 0xe5)
arg4[1] = temp0_174[0]
arg4[2] = zmm0[0]
arg5[1] = temp0_177[0]
arg5[2] = zmm1[0]
return arg5
