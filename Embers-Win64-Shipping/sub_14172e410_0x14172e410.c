// 函数: sub_14172e410
// 地址: 0x14172e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
float zmm14[0x4] = *(arg1 + 0x40)
float zmm8[0x4] = arg3[2]
int32_t var_158
float zmm0[0x4]
float zmm1[0x4]
float zmm6[0x4]
float zmm7[0x4]
float zmm13[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143ef7530, 1)) == 0)
    float zmm4[0x4] = *arg3
    float zmm2[0x4] = *(arg1 + 0x20)
    float zmm3[0x4] = *(arg1 + 0x30)
    float temp0_132[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    float temp0_134[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_132)
    float temp0_135[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
    float temp0_136[0x4] = _mm_mul_ps(zmm3, zmm8)
    float temp0_137[0x4] = __mulps_xmmps_memps(temp0_134, data_143ef72e0)
    float temp0_138[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
    zmm13 = _mm_mul_ps(zmm14, zmm8)
    float temp0_141[0x4] = _mm_add_ps(temp0_137, _mm_mul_ps(temp0_138, zmm2))
    float temp0_143[0x4] = _mm_mul_ps(temp0_135, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_146[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_147[0x4] = __mulps_xmmps_memps(temp0_143, data_143ef72d0)
    float temp0_148[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_146, data_143ef72c0)
    float temp0_150[0x4] = _mm_add_ps(temp0_141, temp0_147)
    float temp0_151[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
    float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xd2), temp0_151)
    zmm6 = _mm_add_ps(temp0_150, temp0_149)
    float temp0_157[0x4] =
        _mm_sub_ps(temp0_153, _mm_mul_ps(_mm_shuffle_ps(temp0_136, temp0_136, 0xc9), temp0_148))
    zmm1 = _mm_add_ps(temp0_157, temp0_157)
    float temp0_159[0x4] = _mm_mul_ps(temp0_138, zmm1)
    float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0xd2), temp0_151)
    float temp0_162[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
    float temp0_163[0x4] = _mm_add_ps(temp0_159, temp0_136)
    zmm0 = _mm_mul_ps(temp0_162, temp0_148)
    zmm7 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(temp0_161, zmm0), temp0_163), arg3[1])
else
    zmm1 = *arg3
    float temp0_3[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
    float temp0_4[0x4] = _mm_add_ps(zmm1, zmm1)
    float zmm9[0x4] = arg3[1]
    float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_6[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_7[0x4] = _mm_mul_ps(zmm1, temp0_4)
    float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), temp0_6)
    float temp0_14[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), _mm_shuffle_ps(temp0_7, temp0_7, 1))
    _mm_mul_ps(zmm14, zmm8)
    float zmm11[0x4] = data_143ef72f0
    float temp0_16[0x4] = _mm_sub_ps(zmm11, temp0_14)
    float temp0_17[0x4] = _mm_add_ps(temp0_11, temp0_9)
    float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_11)
    float temp0_19[0x4] = _mm_mul_ps(temp0_16, zmm8)
    float temp0_20[0x4] = _mm_mul_ps(temp0_3, temp0_18)
    float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm8)
    zmm1 = __andps_xmmxud_memxud(temp0_19, data_143ef7300)
    float temp0_23[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x32)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x10)
    float temp0_26[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), temp0_23, 0x82)
    float temp0_28[0x4] = _mm_shuffle_ps(temp0_24, _mm_shuffle_ps(temp0_21, zmm1, 0x31), 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_20, 0x12), zmm1, 0xe8)
    zmm1 = *(arg1 + 0x20)
    zmm11[0].q = zmm9 u>> 0x40
    float temp0_31[0x4] = _mm_add_ps(zmm1, zmm1)
    float temp0_32[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
    float temp0_33[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    float temp0_34[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
    float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
    float temp0_36[0x4] = _mm_mul_ps(zmm1, temp0_31)
    float temp0_38[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x29), temp0_34)
    float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0x12), temp0_35)
    float temp0_43[0x4] =
        _mm_add_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0x1a), _mm_shuffle_ps(temp0_36, temp0_36, 1))
    float temp0_44[0x4] = _mm_add_ps(temp0_40, temp0_38)
    float temp0_45[0x4] = _mm_sub_ps(temp0_38, temp0_40)
    float temp0_46[0x4] = _mm_sub_ps(zmm11, temp0_43)
    float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm14)
    float temp0_48[0x4] = _mm_mul_ps(temp0_33, temp0_45)
    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_46, zmm14), data_143ef7300)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), 
        _mm_shuffle_ps(temp0_48, zmm1, 0x32), 0x82)
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
    float temp0_55[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0x55)
    float temp0_57[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_54, 0x88)
    float temp0_58[0x4] = _mm_mul_ps(temp0_55, temp0_28)
    float temp0_59[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
    float zmm5[0x4] = *(arg1 + 0x30)
    float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, zmm1, 0xe8)
    float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xaa), temp0_30)
    zmm11[0].q = zmm5 u>> 0x40
    float temp0_63[0x4] = _mm_shuffle_ps(zmm5, zmm11, 0xc4)
    float temp0_64[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0)
    float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_53, temp0_53, 0xff), temp0_32)
    float temp0_68[0x4] = _mm_add_ps(temp0_58, _mm_mul_ps(temp0_64, temp0_26))
    float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_26)
    float temp0_71[0x4] = _mm_add_ps(temp0_68, temp0_62)
    float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_30)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_28)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
    float var_148[0x4] = temp0_74
    float temp0_78[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_79[0x4] = _mm_add_ps(temp0_76, temp0_70)
    float temp0_80[0x4] = _mm_mul_ps(temp0_78, temp0_28)
    float temp0_81[0x4] = _mm_mul_ps(temp0_77, temp0_32)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
    float temp0_83[0x4] = _mm_add_ps(temp0_79, temp0_73)
    float temp0_84[0x4] = _mm_mul_ps(temp0_82, temp0_26)
    float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_30)
    float temp0_87[0x4] = _mm_add_ps(temp0_83, temp0_81)
    float temp0_88[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
    float temp0_89[0x4] = _mm_add_ps(temp0_80, temp0_84)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
    float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
    int96_t var_138_1 = temp0_87[0].12
    float temp0_92[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
    float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_86)
    float temp0_94[0x4] = _mm_mul_ps(temp0_92, temp0_28)
    float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_30)
    float temp0_97[0x4] = _mm_mul_ps(temp0_91, temp0_26)
    float temp0_98[0x4] = _mm_add_ps(temp0_93, temp0_90)
    float temp0_100[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xff), temp0_32)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_97)
    int96_t var_128_1 = temp0_98[0].12
    int96_t var_118_1 = _mm_add_ps(_mm_add_ps(temp0_101, temp0_96), temp0_100)[0].12
    int128_t zmm11_1
    float zmm15_1[0x4]
    zmm11_1, zmm13, zmm15_1 = sub_1407740e0(&var_148, 0x322bcc77)
    zmm15_1 = _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm13, 2), data_143ef7520 ^ zmm11_1) ^ data_143ef7520
    float zmm2_1[0x4] = var_148[0]
    float zmm1_1 = var_148[1]
    uint32_t zmm0_1[0x4] = var_148[2]
    zmm2_1[0] = zmm2_1[0] * zmm15_1[0]
    zmm1_1 = zmm1_1 * zmm15_1[0]
    zmm0_1[0] = zmm0_1[0] f* zmm15_1[0]
    var_148[0] = zmm2_1[0]
    float temp0_106[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
    var_148[1] = zmm1_1
    zmm1_1 = var_138_1:4.d * temp0_106[0]
    var_148[2] = zmm0_1[0]
    zmm0_1 = var_138_1:8.d
    zmm0_1[0] = zmm0_1[0] f* temp0_106[0]
    float zmm3_1 = var_138_1.d * temp0_106[0]
    zmm2_1 = var_128_1.d
    var_138_1:4.d = zmm1_1
    var_138_1:8.d = zmm0_1[0]
    zmm0_1 = var_128_1:8.d
    float temp0_107[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
    zmm1_1 = var_128_1:4.d * temp0_107[0]
    zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
    zmm2_1[0] = zmm2_1[0] * temp0_107[0]
    var_128_1:4.d = zmm1_1
    var_128_1:8.d = zmm0_1[0]
    var_138_1.d = zmm3_1
    var_128_1.d = zmm2_1[0]
    uint32_t var_108[0x4]
    sub_14077e4a0(&var_108, &var_148)
    uint32_t zmm5_1[0x4] = var_108
    zmm6 = data_143ef72b0
    float temp0_108[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
    var_158 = 0x322bcc77
    float temp0_110[0x4] = _mm_add_ps(temp0_108, _mm_shuffle_ps(temp0_108, temp0_108, 0x4e))
    float temp0_112[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x39), temp0_110)
    float temp0_113[0x4] = _mm_rsqrt_ps(temp0_112)
    float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm6)
    float temp0_119[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_113, temp0_113), temp0_114)), 
            temp0_113), 
        temp0_113)
    zmm1 = zx.o(0)
    float temp0_122[0x4] = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_114))
    float temp0_124[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_112, 2)
    float temp0_126[0x4] = _mm_add_ps(_mm_mul_ps(temp0_122, temp0_119), temp0_119)
    float temp0_127[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
    zmm0 = var_118_1:8.d
    zmm6 = _mm_and_ps(_mm_mul_ps(temp0_126, zmm5_1) ^ data_143ef72a0, temp0_124) ^ data_143ef72a0
    zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, zmm0[0].q), temp0_127[0].q)

int64_t* rcx_2 = *(arg1 + 0x10)
float var_f8[0x4] = zmm6
float var_e8[0x4] = zmm7
float var_d8[0x4] = zmm13
int64_t result = (*(*rcx_2 + 0x70))(zmm0, zmm1, &var_f8, rcx_2, var_158)
__security_check_cookie(rax_1 ^ &var_178)
return result
