// 函数: sub_141acdd30
// 地址: 0x141acdd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm13[0x4] = arg2[2]
float zmm15[0x4] = arg1[2]
float zmm6[0x4]
float zmm7[0x4]
float zmm3[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm13), data_143f2b8d0, 1)) == 0)
    float zmm4[0x4] = *arg2
    float zmm2[0x4] = *arg1
    zmm3 = arg1[1]
    float temp0_132[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm13)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143f2b850)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    float temp0_140[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_138, zmm2))
    float temp0_142[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_145[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_146[0x4] = __mulps_xmmps_memps(temp0_142, data_143f2b840)
    float temp0_147[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0xd2)
    float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143f2b830)
    float temp0_149[0x4] = _mm_add_ps(temp0_140, temp0_146)
    float temp0_150[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_152[0x4] = _mm_mul_ps(temp0_147, temp0_151)
    zmm6 = _mm_add_ps(temp0_149, temp0_148)
    float temp0_156[0x4] =
        _mm_sub_ps(temp0_152, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_150))
    float temp0_157[0x4] = _mm_add_ps(temp0_156, temp0_156)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xd2)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xc9)
    float temp0_160[0x4] = _mm_mul_ps(temp0_158, temp0_151)
    float temp0_161[0x4] = _mm_mul_ps(temp0_159, temp0_150)
    float temp0_162[0x4] = _mm_mul_ps(temp0_157, temp0_138)
    zmm7 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_160, temp0_161), _mm_add_ps(temp0_162, temp0_136)), arg2[1])
else
    zmm3 = *arg2
    float temp0_3[0x4] = _mm_add_ps(zmm3, zmm3)
    float zmm9[0x4] = arg2[1]
    float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_6[0x4] = _mm_mul_ps(zmm3, temp0_3)
    float temp0_8[0x4] = _mm_mul_ps(temp0_4, _mm_shuffle_ps(temp0_3, temp0_3, 0x29))
    float temp0_10[0x4] = _mm_mul_ps(temp0_5, _mm_shuffle_ps(temp0_3, temp0_3, 0x12))
    float temp0_13[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x1a), _mm_shuffle_ps(temp0_6, temp0_6, 1))
    float temp0_14[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    float zmm12[0x4] = data_143f2b810
    float temp0_15[0x4] = _mm_add_ps(temp0_10, temp0_8)
    float temp0_16[0x4] = _mm_sub_ps(temp0_8, temp0_10)
    float temp0_17[0x4] = _mm_sub_ps(zmm12, temp0_13)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm13)
    float temp0_19[0x4] = _mm_mul_ps(temp0_14, temp0_16)
    float zmm1[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm13), data_143f2b820)
    float temp0_22[0x4] = _mm_shuffle_ps(temp0_19, zmm1, 0x32)
    float temp0_24[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, zmm1, 0), temp0_22, 0x82)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_18, zmm1, 0x31)
    float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_19, zmm1, 0x10), temp0_25, 0x88)
    float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_18, temp0_19, 0x12), zmm1, 0xe8)
    zmm1 = *arg1
    zmm12[0].q = zmm9 u>> 0x40
    float temp0_30[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_31[0x4] = _mm_shuffle_ps(zmm9, zmm12, 0xc4)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_35[0x4] = _mm_mul_ps(zmm1, temp0_30)
    float temp0_37[0x4] = _mm_mul_ps(temp0_33, _mm_shuffle_ps(temp0_30, temp0_30, 0x29))
    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x12), temp0_34)
    float temp0_42[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x1a), _mm_shuffle_ps(temp0_35, temp0_35, 1))
    float temp0_43[0x4] = _mm_add_ps(temp0_39, temp0_37)
    float temp0_44[0x4] = _mm_sub_ps(temp0_37, temp0_39)
    float temp0_45[0x4] = _mm_sub_ps(zmm12, temp0_42)
    float temp0_46[0x4] = _mm_mul_ps(temp0_43, zmm15)
    float temp0_47[0x4] = _mm_mul_ps(temp0_32, temp0_44)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_45, zmm15), data_143f2b820)
    float temp0_52[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_46, zmm1, 0), 
        _mm_shuffle_ps(temp0_47, zmm1, 0x32), 0x82)
    float temp0_53[0x4] = _mm_shuffle_ps(temp0_46, zmm1, 0x31)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0x55)
    float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0x10), temp0_53, 0x88)
    float temp0_57[0x4] = _mm_mul_ps(temp0_54, temp0_27)
    float temp0_58[0x4] = _mm_shuffle_ps(temp0_46, temp0_47, 0x12)
    float zmm5[0x4] = arg1[1]
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0xe8)
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xaa), temp0_29)
    zmm12[0].q = zmm5 u>> 0x40
    float temp0_62[0x4] = _mm_shuffle_ps(zmm5, zmm12, 0xc4)
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0)
    float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0xff), temp0_31)
    float temp0_67[0x4] = _mm_add_ps(temp0_57, _mm_mul_ps(temp0_63, temp0_24))
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0), temp0_24)
    float temp0_70[0x4] = _mm_add_ps(temp0_67, temp0_61)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_29)
    float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_65)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0x55), temp0_27)
    float temp0_76[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xff)
    float var_e8[0x4] = temp0_73
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
    float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_69)
    float temp0_79[0x4] = _mm_mul_ps(temp0_77, temp0_27)
    float temp0_80[0x4] = _mm_mul_ps(temp0_76, temp0_31)
    float temp0_81[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0)
    float temp0_82[0x4] = _mm_add_ps(temp0_78, temp0_72)
    float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_24)
    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_29)
    float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_80)
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
    float temp0_88[0x4] = _mm_add_ps(temp0_79, temp0_83)
    float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_31)
    float temp0_90[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
    int96_t var_d8_1 = temp0_86[0].12
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
    float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_85)
    float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_27)
    float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_29)
    float temp0_96[0x4] = _mm_mul_ps(temp0_90, temp0_24)
    float temp0_97[0x4] = _mm_add_ps(temp0_92, temp0_89)
    float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_31)
    float temp0_100[0x4] = _mm_add_ps(temp0_93, temp0_96)
    int96_t var_c8_1 = temp0_97[0].12
    int96_t var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_100, temp0_95), temp0_99)[0].12
    int128_t zmm12_1
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    zmm12_1, zmm13_1, zmm14_1, zmm15_1 = sub_1407740e0(&var_e8, 0x322bcc77)
    zmm14_1 =
        _mm_and_ps(_mm_cmpeq_ps(zmm14_1, _mm_mul_ps(zmm13_1, zmm15_1), 2), data_143f2b8c0 ^ zmm12_1)
        ^ data_143f2b8c0
    float zmm2_1[0x4] = var_e8[0]
    float zmm1_1 = var_e8[1]
    uint32_t zmm0_1[0x4] = var_e8[2]
    zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
    zmm1_1 = zmm1_1 * zmm14_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
    var_e8[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
    var_e8[1] = zmm1_1
    zmm1_1 = var_d8_1:4.d * temp0_106[0]
    var_e8[2] = zmm0_1[0]
    zmm0_1 = var_d8_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    float zmm3_1 = var_d8_1.d * temp0_106[0]
    zmm2_1 = var_c8_1.d
    var_d8_1:4.d = zmm1_1
    var_d8_1:8.d = zmm0_1[0]
    zmm0_1 = var_c8_1:8.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
    zmm1_1 = var_c8_1:4.d * temp0_107[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    var_c8_1:4.d = zmm1_1
    var_c8_1:8.d = zmm0_1[0]
    var_d8_1.d = zmm3_1
    var_c8_1.d = zmm2_1[0]
    uint32_t var_f8[0x4]
    sub_14077e4a0(&var_f8, &var_e8)
    uint32_t zmm5_1[0x4] = var_f8
    zmm6 = data_143f2b8b0
    float temp0_108[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    float temp0_110[0x4] = _mm_add_ps(temp0_108, _mm_shuffle_ps(temp0_108, temp0_108, 0x4e))
    float temp0_112[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x39), temp0_110)
    float temp0_113[0x4] = _mm_rsqrt_ps(temp0_112)
    float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm6)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_113, temp0_113), temp0_114)), 
            temp0_113), 
        temp0_113)
    float temp0_122[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    float temp0_124[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_112, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5_1) ^ data_143f2b8a0, temp0_124) ^ data_143f2b8a0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_127[0].q)
int64_t rax_1 = sx.q((*arg1)[0xe])
float temp0_167[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
void* result = arg1[3][0].q
int64_t rdx_2 = rax_1 * 0x60
float temp0_168[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
int64_t rcx_2 = *(result + 0x50)
*(rdx_2 + rcx_2 + 0x30) = zmm6[0]
*(rdx_2 + rcx_2 + 0x34) = temp0_167[0]
*(rdx_2 + rcx_2 + 0x38) = temp0_168[0]
float temp0_169[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
*(rdx_2 + rcx_2 + 0x3c) = _mm_shuffle_ps(zmm6, zmm6, 0xff)[0]
*(rdx_2 + rcx_2 + 0x40) = zmm7[0]
*(rdx_2 + rcx_2 + 0x48) = _mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]
*(rdx_2 + rcx_2 + 0x44) = temp0_169[0]
return result
