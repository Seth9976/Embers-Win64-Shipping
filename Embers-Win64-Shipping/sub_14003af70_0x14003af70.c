// 函数: sub_14003af70
// 地址: 0x14003af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg3
float zmm10[0x4] = *(arg3 + 8)
uint128_t zmm12 = _mm_insert_ps(zx.o(*arg3), zmm10, 0x20)
float zmm0[0x4] = *arg2
float zmm1[0x4] = *(arg2 + 8)
uint128_t zmm13 = _mm_insert_ps(zx.o(*arg2), zmm1, 0x20)
uint128_t zmm9 = _mm_sub_ps(zmm12, zmm13)
float temp0_4[0x4] = _mm_insert_ps(__insertps_xmmps_memd_immb(zmm0, *(arg2 + 4), 0x10), zmm1, 0x20)
float zmm8[0x4] = arg1[2]
float temp0_5[0x4] = _mm_mul_ps(temp0_4, zmm8)
float zmm3[0x4] = *(arg1 + 0xc)
zmm1 = *(arg1 + 8)
float zmm6[0x4] = *arg1
uint128_t zmm14 = _mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 4)), zmm6, 0x20), zmm3, 0x30)
float temp0_10[0x4] = _mm_insert_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm1, zmm6, 0x10), *(arg1 + 4), 0x20), zmm3, 0x30)
float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xd2)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
float temp0_16[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_12, zmm14), _mm_mul_ps(temp0_13, temp0_10))
float temp0_17[0x4] = _mm_add_ps(temp0_16, temp0_16)
float temp0_19[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_17), temp0_5)
float temp0_20[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xd2)
float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, temp0_17, 0xc9)
float temp0_25[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_20, zmm14), _mm_mul_ps(temp0_21, temp0_10)), temp0_19)
float zmm11[0x4] = arg1[1]
float temp0_26[0x4] = _mm_add_ps(temp0_25, zmm11)
float temp0_29[0x4] = _mm_mul_ps(
    _mm_insert_ps(__insertps_xmmps_memd_immb(zmm5, *(arg3 + 4), 0x10), zmm10, 0x20), zmm8)
float temp0_30[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xd2)
float temp0_31[0x4] = _mm_shuffle_ps(temp0_29, temp0_29, 0xc9)
float temp0_34[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_30, zmm14), _mm_mul_ps(temp0_31, temp0_10))
float temp0_35[0x4] = _mm_add_ps(temp0_34, temp0_34)
float temp0_37[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_35), temp0_29)
float temp0_38[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xd2)
float temp0_39[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
float temp0_44[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_38, zmm14), _mm_mul_ps(temp0_39, temp0_10)), temp0_37), 
    zmm11)
float temp0_45[0x4] = _mm_min_ps(temp0_26, temp0_44)
float temp0_46[0x4] = _mm_max_ps(temp0_26, temp0_44)
float temp0_47[0x4] = _mm_mul_ps(0x3f800000, zmm9)
float temp0_50[0x4] = _mm_mul_ps(_mm_blend_ps(_mm_add_ps(zmm13, temp0_47), zx.o(0), 8), zmm8)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xd2)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc9)
float temp0_55[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_51, zmm14), _mm_mul_ps(temp0_52, temp0_10))
float temp0_56[0x4] = _mm_add_ps(temp0_55, temp0_55)
float temp0_58[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_56), temp0_50)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xd2)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xc9)
float temp0_65[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_59, zmm14), _mm_mul_ps(temp0_60, temp0_10)), temp0_58), 
    zmm11)
float temp0_66[0x4] = _mm_min_ps(temp0_45, temp0_65)
float temp0_67[0x4] = _mm_max_ps(temp0_46, temp0_65)
float temp0_70[0x4] = _mm_mul_ps(_mm_blend_ps(_mm_sub_ps(zmm12, temp0_47), zx.o(0), 8), zmm8)
float temp0_71[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xd2)
float temp0_72[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0xc9)
float temp0_75[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_71, zmm14), _mm_mul_ps(temp0_72, temp0_10))
float temp0_76[0x4] = _mm_add_ps(temp0_75, temp0_75)
float temp0_78[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_76), temp0_70)
float temp0_79[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xd2)
float temp0_80[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 0xc9)
float temp0_85[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_79, zmm14), _mm_mul_ps(temp0_80, temp0_10)), temp0_78), 
    zmm11)
float temp0_86[0x4] = _mm_min_ps(temp0_66, temp0_85)
float temp0_87[0x4] = _mm_max_ps(temp0_67, temp0_85)
float temp0_88[0x4] = _mm_mul_ps(data_142d4cc20, zmm9)
float temp0_91[0x4] = _mm_mul_ps(_mm_blend_ps(_mm_add_ps(zmm13, temp0_88), zx.o(0), 8), zmm8)
float temp0_92[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xd2)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_91, temp0_91, 0xc9)
float temp0_96[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_92, zmm14), _mm_mul_ps(temp0_93, temp0_10))
float temp0_97[0x4] = _mm_add_ps(temp0_96, temp0_96)
float temp0_99[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_97), temp0_91)
float temp0_100[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xd2)
float temp0_101[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xc9)
float temp0_106[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_100, zmm14), _mm_mul_ps(temp0_101, temp0_10)), 
        temp0_99), 
    zmm11)
float temp0_107[0x4] = _mm_min_ps(temp0_86, temp0_106)
float temp0_108[0x4] = _mm_max_ps(temp0_87, temp0_106)
float temp0_111[0x4] = _mm_mul_ps(_mm_blend_ps(_mm_sub_ps(zmm12, temp0_88), zx.o(0), 8), zmm8)
float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xd2)
float temp0_113[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xc9)
float temp0_116[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_112, zmm14), _mm_mul_ps(temp0_113, temp0_10))
float temp0_117[0x4] = _mm_add_ps(temp0_116, temp0_116)
float temp0_119[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_117), temp0_111)
float temp0_120[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xd2)
float temp0_121[0x4] = _mm_shuffle_ps(temp0_117, temp0_117, 0xc9)
float temp0_126[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_120, zmm14), _mm_mul_ps(temp0_121, temp0_10)), 
        temp0_119), 
    zmm11)
float temp0_127[0x4] = _mm_min_ps(temp0_107, temp0_126)
zmm9 = __mulps_xmmps_memps(zmm9, data_142d4cc30)
zmm13 = _mm_mul_ps(_mm_blend_ps(_mm_add_ps(zmm13, zmm9), zx.o(0), 8), zmm8)
float temp0_132[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
float temp0_133[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
float temp0_136[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_132, zmm14), _mm_mul_ps(temp0_133, temp0_10))
float temp0_137[0x4] = _mm_add_ps(temp0_136, temp0_136)
float temp0_139[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_137), zmm13)
float temp0_140[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
float temp0_146[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_140, zmm14), _mm_mul_ps(temp0_141, temp0_10)), 
        temp0_139), 
    zmm11)
float temp0_147[0x4] = _mm_min_ps(temp0_127, temp0_146)
zmm12 = _mm_mul_ps(_mm_blend_ps(_mm_sub_ps(zmm12, zmm9), zx.o(0), 8), zmm8)
float temp0_151[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
float temp0_152[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_155[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_151, zmm14), _mm_mul_ps(temp0_152, temp0_10))
float temp0_156[0x4] = _mm_add_ps(temp0_155, temp0_155)
float temp0_158[0x4] = _mm_add_ps(_mm_mul_ps(temp0_11, temp0_156), zmm12)
float temp0_159[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xd2)
float temp0_160[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc9)
float temp0_161[0x4] = _mm_mul_ps(temp0_159, zmm14)
float result[0x4] = _mm_mul_ps(temp0_160, temp0_10)
float temp0_164[0x4] = _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_161, result), temp0_158), zmm11)
float temp0_165[0x4] = _mm_min_ps(temp0_147, temp0_164)
*arg4 = __extractps_memd_xmmps_immb(temp0_165, 0)
float temp0_167[0x4] = _mm_max_ps(temp0_108, temp0_126)
arg4[1] = __extractps_memd_xmmps_immb(temp0_165, 1)
float temp0_169[0x4] = _mm_max_ps(temp0_167, temp0_146)
arg4[2] = __extractps_memd_xmmps_immb(temp0_165, 2)
float temp0_171[0x4] = _mm_max_ps(temp0_169, temp0_164)
*arg5 = __extractps_memd_xmmps_immb(temp0_171, 0)
arg5[1] = __extractps_memd_xmmps_immb(temp0_171, 1)
arg5[2] = __extractps_memd_xmmps_immb(temp0_171, 2)
return result
