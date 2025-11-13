// 函数: sub_142220780
// 地址: 0x142220780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rcx = *(arg2 + 0xa0)
void* rax_2
void* rax_3

if (rcx != 0)
    rax_2 = sub_140d3c6e0(rcx + 0xf8)
    rax_3 = sub_140d3c6e0(arg2 + 0xf8)

if (rcx == 0 || rax_2 == 0 || rax_3 == 0)
    *arg1 = *arg3
    arg1[1] = arg3[1]
    arg1[2] = arg3[2]
else
    int128_t zmm1 = *(rax_2 + 0x1d0)
    float var_108[0x4] = *(rax_2 + 0x1c0)
    int128_t var_f8_1 = zmm1
    float var_e8_1[0x4] = *(rax_2 + 0x1e0)
    float zmm0[0x4] = *(rax_3 + 0x1d0)
    int128_t var_138 = *(rax_3 + 0x1c0)
    float var_128_1[0x4] = zmm0
    int128_t var_118_1 = *(rax_3 + 0x1e0)
    float var_168[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_140ad7d70(&var_108, &var_168, &var_138)
    float zmm13_1[0x4] = data_143f51110
    float zmm5_1[0x4] = *arg3
    float zmm15_1[0x4] = arg3[1]
    float var_198_1[0x4] = arg3[2]
    float temp0_3[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(arg2 + 0x10), (*(arg2 + 0x18))[0].q), 
        _mm_unpacklo_ps(*(arg2 + 0x14), 0)[0].q)
    float var_148[0x4]
    float zmm2_1[0x4]
    float zmm6_1[0x4]
    float zmm7_1[0x4]
    float var_158[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_148, temp0_3), zmm13_1, 1)) == 0)
        zmm2_1 = var_168
        float temp0_136[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
        float temp0_137[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
        float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_136)
        float temp0_140[0x4] = _mm_mul_ps(var_158, temp0_3)
        float temp0_141[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_142[0x4] = __mulps_xmmps_memps(temp0_139, data_143f51070)
        float temp0_143[0x4] = _mm_mul_ps(temp0_141, zmm2_1)
        float temp0_144[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
        float temp0_145[0x4] = _mm_add_ps(temp0_142, temp0_143)
        float temp0_147[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
        float temp0_149[0x4] = _mm_mul_ps(temp0_144, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f51060)
        float temp0_151[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc9)
        float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f51050)
        float temp0_153[0x4] = _mm_add_ps(temp0_145, temp0_150)
        float temp0_154[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xd2)
        zmm6_1 = _mm_add_ps(temp0_153, temp0_152)
        float temp0_156[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_157[0x4] = _mm_mul_ps(temp0_151, temp0_156)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_160[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_154, temp0_158), temp0_157)
        float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
        float temp0_162[0x4] = _mm_mul_ps(temp0_141, temp0_161)
        float temp0_164[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xd2), temp0_158)
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        float temp0_166[0x4] = _mm_add_ps(temp0_162, temp0_140)
        zmm7_1 = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_164, _mm_mul_ps(temp0_165, temp0_156)), temp0_166), zmm15_1)
    else
        float temp0_7[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
        float var_88_1[0x4] = zmm11_1
        zmm11_1 = data_143f51030
        float temp0_8[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
        float temp0_9[0x4] = _mm_mul_ps(zmm5_1, temp0_7)
        float temp0_11[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_7, temp0_7, 0x29))
        float temp0_12[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x12)
        float temp0_15[0x4] =
            _mm_add_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x1a), _mm_shuffle_ps(temp0_9, temp0_9, 1))
        float temp0_16[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), temp0_12)
        float temp0_19[0x4] = _mm_sub_ps(zmm11_1, temp0_15)
        float temp0_20[0x4] = _mm_add_ps(temp0_18, temp0_11)
        float temp0_21[0x4] = _mm_sub_ps(temp0_11, temp0_18)
        float temp0_22[0x4] = _mm_mul_ps(temp0_19, temp0_3)
        float temp0_23[0x4] = _mm_shuffle_ps(var_148, var_148, 0xc9)
        float temp0_24[0x4] = _mm_mul_ps(temp0_20, temp0_3)
        float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_22, data_143f51040)
        float temp0_26[0x4] = _mm_mul_ps(temp0_16, temp0_21)
        float temp0_29[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_26, zmm1_1, 0x32), 0x82)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_24, zmm1_1, 0x31)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0x10), temp0_30, 0x88)
        float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_24, temp0_26, 0x12), zmm1_1, 0xe8)
        zmm1_1 = var_168
        zmm11_1[0].q = zmm15_1 u>> 0x40
        float temp0_35[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm15_1, zmm11_1, 0xc4)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
        float temp0_39[0x4] = _mm_mul_ps(zmm1_1, temp0_35)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x29), temp0_37)
        float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_35, temp0_35, 0x12), temp0_38)
        float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
            _mm_shuffle_ps(temp0_39, temp0_39, 1))
        float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_41)
        float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
        float temp0_49[0x4] = _mm_sub_ps(zmm11_1, temp0_46)
        float temp0_50[0x4] = _mm_mul_ps(temp0_47, var_148)
        float temp0_51[0x4] = _mm_mul_ps(temp0_23, temp0_48)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, var_148), data_143f51040)
        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_51, zmm1_1, 0x32), 0x82)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_51, zmm1_1, 0x10)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x31)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_57, temp0_58, 0x88)
        float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_32)
        float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_51, 0x12), zmm1_1, 0xe8)
        float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_34)
        zmm11_1[0].q = var_158 u>> 0x40
        float temp0_66[0x4] = _mm_shuffle_ps(var_158, zmm11_1, 0xc4)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
        float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_36)
        float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_29)
        float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_34)
        float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_32)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
        float var_1b8[0x4] = temp0_77
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
        float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_36)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
        float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_34)
        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
        float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
        float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_36)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
        int96_t var_1a8_1 = temp0_90[0].12
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
        float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_32)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_34)
        float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
        float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_36)
        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
        int96_t var_198_2 = temp0_101[0].12
        int96_t var_188_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
        int512_t zmm8_2
        int512_t zmm9_2
        int512_t zmm10_2
        float zmm11_2[0x4]
        float zmm12_2[0x4]
        float zmm13_2[0x4]
        float zmm14_2[0x4]
        zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_2, zmm14_2 =
            sub_1407740e0(&var_1b8, 0x322bcc77)
        float zmm2_2[0x4] = var_1b8[0]
        zmm13_2 = _mm_and_ps(_mm_cmpeq_ps(zmm13_2, _mm_mul_ps(zmm14_2, zmm12_2), 2), 
            data_143f51100 ^ zmm11_2) ^ data_143f51100
        zmm2_2[0] = zmm2_2[0] * zmm13_2[0]
        uint32_t zmm0_2[0x4] = var_1b8[2]
        float zmm1_2 = var_1b8[1] * zmm13_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm13_2[0]
        var_1b8[0] = zmm2_2[0]
        float temp0_110[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0x55)
        var_1b8[1] = zmm1_2
        zmm1_2 = var_1a8_1:4.d * temp0_110[0]
        var_1b8[2] = zmm0_2[0]
        zmm0_2 = var_1a8_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_110[0]
        float zmm3_2 = var_1a8_1.d * temp0_110[0]
        zmm2_2 = var_198_2.d
        var_1a8_1:4.d = zmm1_2
        var_1a8_1:8.d = zmm0_2[0]
        zmm0_2 = var_198_2:8.d
        float temp0_111[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xaa)
        zmm1_2 = var_198_2:4.d * temp0_111[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_111[0]
        zmm2_2[0] = zmm2_2[0] * temp0_111[0]
        var_198_2:4.d = zmm1_2
        var_198_2:8.d = zmm0_2[0]
        var_1a8_1.d = zmm3_2
        var_198_2.d = zmm2_2[0]
        uint32_t var_178[0x4]
        sub_14077e4a0(&var_178, &var_1b8)
        uint32_t zmm5_2[0x4] = var_178
        zmm6_1 = data_143f50de0
        zmm10_2.o = zmm10_1
        zmm9_2.o = zmm9_1
        zmm8_2.o = zmm8_1
        float temp0_112[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
        float temp0_114[0x4] = _mm_add_ps(temp0_112, _mm_shuffle_ps(temp0_112, temp0_112, 0x4e))
        float temp0_116[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_114, temp0_114, 0x39), temp0_114)
        float temp0_117[0x4] = _mm_rsqrt_ps(temp0_116)
        float temp0_118[0x4] = _mm_mul_ps(temp0_116, zmm6_1)
        float temp0_123[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_117, temp0_117), temp0_118)), 
                temp0_117), 
            temp0_117)
        float temp0_126[0x4] =
            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_123, temp0_123), temp0_118))
        float temp0_128[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_116, 2)
        float temp0_130[0x4] = _mm_add_ps(_mm_mul_ps(temp0_126, temp0_123), temp0_123)
        float temp0_131[0x4] = _mm_unpacklo_ps(var_188_1:4.d, 0)
        zmm6_1 =
            _mm_and_ps(_mm_mul_ps(temp0_130, zmm5_2) ^ data_143f50dd0, temp0_128) ^ data_143f50dd0
        zmm7_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_188_1.d, var_188_1:8.d[0].q), temp0_131[0].q)
    float zmm0_1[0x4] = data_14399f670
    zmm2_1 = data_14399f66c
    float zmm3_1[0x4] = data_14399f668
    *arg1 = zmm6_1
    arg1[1] = zmm7_1
    arg1[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1[0].q), _mm_unpacklo_ps(zmm2_1, 0)[0].q)

__security_check_cookie(rax_1 ^ &var_1e8)
return arg1
