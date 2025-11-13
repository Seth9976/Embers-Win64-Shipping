// 函数: sub_142083c60
// 地址: 0x142083c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
float var_108[0x4]
(*(*arg1 + 0x380))(arg1, &var_108, arg2)
uint32_t var_178[0x4]
float zmm8[0x4] = sub_140ade170(arg4, &var_178)
float zmm2[0x4] = *(arg3 + 4)
float zmm3[0x4] = var_108
float zmm15[0x4] = data_14399f668
float zmm7[0x4] = var_178
float temp0[0x4] = _mm_unpacklo_ps(*arg3, (*(arg3 + 8))[0].q)
float zmm0[0x4] = data_14399f670
float temp0_1[0x4] = _mm_unpacklo_ps(zmm2, 0)
float temp0_2[0x4] = _mm_unpacklo_ps(zmm15, zmm0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(temp0, temp0_1[0].q)
float temp0_5[0x4] = _mm_unpacklo_ps(temp0_2, _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
float var_e8[0x4]
float zmm5[0x4]
float zmm6[0x4]
float var_f8[0x4]

if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_5, var_e8), data_143f47880, 1)) == 0)
    float temp0_138[0x4] = _mm_mul_ps(var_e8, temp0_3)
    float temp0_139[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x1b)
    float temp0_140[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x4e)
    float temp0_142[0x4] = _mm_mul_ps(temp0_139, _mm_shuffle_ps(zmm3, zmm3, 0))
    float temp0_143[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_144[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
    float temp0_145[0x4] = _mm_mul_ps(temp0_143, zmm7)
    float temp0_146[0x4] = __mulps_xmmps_memps(temp0_142, data_143f47840)
    float temp0_147[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xb1)
    float temp0_148[0x4] = _mm_add_ps(temp0_146, temp0_145)
    float temp0_150[0x4] = _mm_mul_ps(temp0_140, _mm_shuffle_ps(zmm3, zmm3, 0x55))
    float temp0_152[0x4] = _mm_mul_ps(temp0_147, _mm_shuffle_ps(zmm3, zmm3, 0xaa))
    float temp0_153[0x4] = __mulps_xmmps_memps(temp0_150, data_143f47830)
    float temp0_154[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc9)
    float temp0_155[0x4] = __mulps_xmmps_memps(temp0_152, data_143f47820)
    float temp0_156[0x4] = _mm_add_ps(temp0_148, temp0_153)
    float temp0_157[0x4] = _mm_mul_ps(temp0_154, temp0_144)
    float temp0_158[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
    float temp0_160[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_158)
    zmm6 = _mm_add_ps(temp0_156, temp0_155)
    float temp0_162[0x4] = _mm_sub_ps(temp0_160, temp0_157)
    float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
    float temp0_164[0x4] = _mm_mul_ps(temp0_143, temp0_163)
    float temp0_166[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_163, temp0_163, 0xd2), temp0_158)
    float temp0_167[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
    float temp0_168[0x4] = _mm_add_ps(temp0_164, temp0_138)
    zmm5 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_166, _mm_mul_ps(temp0_167, temp0_144)), temp0_168), var_f8)
else
    float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    float temp0_10[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    float temp0_12[0x4] = _mm_mul_ps(zmm3, temp0_10)
    float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_10, temp0_10, 0x29))
    float temp0_16[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_10, temp0_10, 0x12))
    float temp0_19[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0x1a), _mm_shuffle_ps(temp0_12, temp0_12, 1))
    float temp0_20[0x4] = _mm_shuffle_ps(var_e8, var_e8, 0xc9)
    float zmm12[0x4] = data_143f47560
    float temp0_21[0x4] = _mm_add_ps(temp0_16, temp0_14)
    float temp0_22[0x4] = _mm_sub_ps(temp0_14, temp0_16)
    float temp0_23[0x4] = _mm_sub_ps(zmm12, temp0_19)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
    float temp0_25[0x4] = _mm_mul_ps(temp0_21, var_e8)
    float temp0_26[0x4] = _mm_mul_ps(temp0_20, temp0_22)
    float temp0_27[0x4] = _mm_mul_ps(temp0_23, var_e8)
    float temp0_28[0x4] = _mm_add_ps(zmm7, zmm7)
    float zmm1[0x4] = __andps_xmmxud_memxud(temp0_27, data_143f47570)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0x32)
    float temp0_31[0x4] = _mm_mul_ps(temp0_28, zmm7)
    float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1, 0), temp0_30, 0x82)
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_25, zmm1, 0x31)
    float temp0_36[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1, 0x10), temp0_34, 0x88)
    float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, temp0_26, 0x12), zmm1, 0xe8)
    float temp0_39[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x29)
    zmm12[0].q = var_f8 u>> 0x40
    float temp0_40[0x4] = _mm_shuffle_ps(var_f8, zmm12, 0xc4)
    float temp0_42[0x4] = _mm_mul_ps(temp0_39, _mm_shuffle_ps(zmm7, zmm7, 4))
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0x1a)
    float temp0_44[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xff)
    float temp0_46[0x4] = _mm_add_ps(temp0_43, _mm_shuffle_ps(temp0_31, temp0_31, 1))
    float temp0_48[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0x12), temp0_44)
    float temp0_49[0x4] = _mm_add_ps(temp0_48, temp0_42)
    float temp0_50[0x4] = _mm_sub_ps(temp0_42, temp0_48)
    float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_5)
    float temp0_52[0x4] = _mm_mul_ps(temp0_24, temp0_50)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm12, temp0_46), temp0_5), data_143f47570)
    float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1, 0), 
        _mm_shuffle_ps(temp0_52, zmm1, 0x32), 0x82)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_52, zmm1, 0x10)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0x55)
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_59, _mm_shuffle_ps(temp0_51, zmm1, 0x31), 0x88)
    float temp0_63[0x4] = _mm_mul_ps(temp0_60, temp0_36)
    zmm12[0].q = temp0_3 u>> 0x40
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_3, zmm12, 0xc4)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_33)
    float temp0_68[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_52, 0x12), zmm1, 0xe8)
    float temp0_69[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xaa)
    float temp0_70[0x4] = _mm_add_ps(temp0_63, temp0_66)
    float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xff), temp0_40)
    float temp0_73[0x4] = _mm_mul_ps(temp0_69, temp0_38)
    float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_33)
    float temp0_76[0x4] = _mm_add_ps(temp0_70, temp0_73)
    float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_38)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_72)
    float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_36)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
    float var_158[0x4] = temp0_79
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
    float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_75)
    float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_36)
    float temp0_86[0x4] = _mm_mul_ps(temp0_82, temp0_40)
    float temp0_87[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
    float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_78)
    float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_33)
    float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_38)
    float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_86)
    float temp0_93[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xff)
    float temp0_94[0x4] = _mm_add_ps(temp0_85, temp0_89)
    float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_40)
    float temp0_96[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
    int96_t var_148_1 = temp0_92[0].12
    float temp0_97[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
    float temp0_98[0x4] = _mm_add_ps(temp0_94, temp0_91)
    float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_36)
    float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_38)
    float temp0_102[0x4] = _mm_mul_ps(temp0_96, temp0_33)
    float temp0_103[0x4] = _mm_add_ps(temp0_98, temp0_95)
    float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_40)
    float temp0_106[0x4] = _mm_add_ps(temp0_99, temp0_102)
    int96_t var_138_1 = temp0_103[0].12
    int96_t var_128_1 = _mm_add_ps(_mm_add_ps(temp0_106, temp0_101), temp0_105)[0].12
    int512_t zmm8_1
    int128_t zmm12_1
    float zmm13_1[0x4]
    float zmm15_1[0x4]
    zmm8_1, zmm12_1, zmm13_1, zmm15_1 = sub_1407740e0(&var_158, 0x322bcc77)
    float zmm2_1[0x4] = var_158[0]
    float zmm1_1 = var_158[1]
    float zmm4_1[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f47880, _mm_mul_ps(zmm13_1, zmm15_1), 2), 
        data_143f47870 ^ zmm12_1) ^ data_143f47870
    zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
    uint32_t zmm0_1[0x4] = var_158[2]
    zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
    zmm1_1 = zmm1_1 * zmm4_1[0]
    var_158[0] = zmm2_1[0]
    float temp0_112[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_158[2] = zmm0_1[0]
    zmm0_1 = var_148_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_112[0]
    var_158[1] = zmm1_1
    zmm1_1 = var_148_1:4.d * temp0_112[0]
    float zmm3_1 = var_148_1.d * temp0_112[0]
    zmm2_1 = var_138_1.d
    float temp0_113[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    var_148_1:8.d = zmm0_1[0]
    zmm0_1 = var_138_1:8.d
    var_148_1:4.d = zmm1_1
    zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
    zmm2_1[0] = zmm2_1[0] * temp0_113[0]
    zmm1_1 = var_138_1:4.d * temp0_113[0]
    var_138_1:8.d = zmm0_1[0]
    var_148_1.d = zmm3_1
    var_138_1.d = zmm2_1[0]
    var_138_1:4.d = zmm1_1
    sub_14077e4a0(&var_178, &var_158)
    zmm5 = var_178
    zmm6 = data_143f47860
    zmm8_1.o = zmm8
    float temp0_114[0x4] = _mm_mul_ps(zmm5, zmm5)
    float temp0_116[0x4] = _mm_add_ps(temp0_114, _mm_shuffle_ps(temp0_114, temp0_114, 0x4e))
    float temp0_118[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0x39), temp0_116)
    float temp0_119[0x4] = _mm_rsqrt_ps(temp0_118)
    float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm6)
    float temp0_125[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_120)), 
            temp0_119), 
        temp0_119)
    float temp0_128[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), temp0_120))
    float temp0_130[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_118, 2)
    float temp0_132[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, temp0_125), temp0_125)
    float temp0_133[0x4] = _mm_unpacklo_ps(var_128_1:4.d, 0)
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_132, zmm5) ^ data_143f47850, temp0_130) ^ data_143f47850
    zmm5 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_128_1.d, var_128_1:8.d[0].q), temp0_133[0].q)
float var_118[0x4] = zmm6
var_178[2] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)[0]
uint32_t rax_4 = var_178[2]
*arg5 = (_mm_unpacklo_ps(zmm5, _mm_shuffle_ps(zmm5, zmm5, 0x55)[0].q)).q
arg5[1].d = rax_4
sub_140adf5d0(&var_118, &var_178)
uint32_t result = var_178[2]
*arg6 = var_178[0].q
arg6[1].d = result
__security_check_cookie(rax_1 ^ &var_198)
return result
