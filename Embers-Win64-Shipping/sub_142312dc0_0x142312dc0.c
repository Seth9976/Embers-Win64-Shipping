// 函数: sub_142312dc0
// 地址: 0x142312dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void* rax_2 = arg3

if (*(arg1 + 0x715) != 0)
    *arg2 = *(arg1 + 0x1c0)
    arg2[1] = *(arg1 + 0x1d0)
    arg2[2] = *(arg1 + 0x1e0)
else
    arg3.b = 1
    float var_e8[0x4]
    sub_142218ad0(rax_2, &var_e8, arg3.b, 0)
    float zmm1_1[0x4] = data_143f57810
    arg2[1] = zx.o(0)
    zmm1_1[0].q = zx.o(0) u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
    arg2[2] = __andps_xmmxud_memxud(data_143f57810, data_143f57820)
    float zmm13[0x4] = *(arg1 + 0x7d0)
    float var_c8[0x4]
    float var_d8[0x4]
    float zmm5_1[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, var_c8), data_143f578e0, 1)) == 0)
        float zmm6[0x4] = var_e8
        float zmm2[0x4] = *(arg1 + 0x7b0)
        zmm5_1 = *(arg1 + 0x7c0)
        float temp0_135[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
        float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_135)
        float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_139[0x4] = _mm_mul_ps(var_c8, zmm5_1)
        float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f578d0)
        float temp0_141[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_142[0x4] = _mm_mul_ps(zmm13, var_c8)
        float temp0_143[0x4] = _mm_mul_ps(temp0_141, zmm2)
        arg2[2] = temp0_142
        float temp0_144[0x4] = _mm_add_ps(temp0_140, temp0_143)
        float temp0_146[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
        float temp0_149[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f578c0)
        float temp0_151[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f578b0)
        float temp0_153[0x4] = _mm_add_ps(temp0_144, temp0_150)
        float temp0_154[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_155[0x4] = _mm_add_ps(temp0_153, temp0_152)
        float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xc9), temp0_151)
        *arg2 = temp0_155
        float temp0_160[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_139, temp0_139, 0xd2), temp0_154), temp0_157)
        float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
        float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
        float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
        float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_154)
        float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_151)
        float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_141)
        arg2[1] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_139)), var_d8)
    else
        float zmm3[0x4] = var_e8
        float temp0_6[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_7[0x4] = _mm_shuffle_ps(var_c8, var_c8, 0xc9)
        float zmm10[0x4] = data_143f57810
        float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_10[0x4] = _mm_mul_ps(zmm3, temp0_6)
        float temp0_12[0x4] = _mm_mul_ps(temp0_8, _mm_shuffle_ps(temp0_6, temp0_6, 0x29))
        float temp0_14[0x4] = _mm_mul_ps(temp0_9, _mm_shuffle_ps(temp0_6, temp0_6, 0x12))
        float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
            _mm_shuffle_ps(temp0_10, temp0_10, 1))
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_12)
        _mm_mul_ps(var_c8, zmm13)
        float temp0_20[0x4] = _mm_sub_ps(temp0_12, temp0_14)
        float temp0_21[0x4] = _mm_sub_ps(zmm10, temp0_17)
        float temp0_22[0x4] = _mm_mul_ps(temp0_18, var_c8)
        float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_21, var_c8), data_143f57820)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, zmm1_1, 0x32)
        float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0), temp0_26, 0x82)
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_22, zmm1_1, 0x31)
        float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1_1, 0x10), temp0_29, 0x88)
        float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), zmm1_1, 0xe8)
        zmm1_1 = *(arg1 + 0x7b0)
        zmm10[0].q = var_d8 u>> 0x40
        float temp0_34[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
        float temp0_35[0x4] = _mm_shuffle_ps(var_d8, zmm10, 0xc4)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
        float temp0_38[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
        float temp0_39[0x4] = _mm_mul_ps(zmm1_1, temp0_34)
        float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x29), temp0_37)
        float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0x12), temp0_38)
        float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
            _mm_shuffle_ps(temp0_39, temp0_39, 1))
        float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_41)
        float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
        float temp0_49[0x4] = _mm_sub_ps(zmm10, temp0_46)
        float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm13)
        float temp0_51[0x4] = _mm_mul_ps(temp0_36, temp0_48)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_49, zmm13), data_143f57820)
        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_51, zmm1_1, 0x32), 0x82)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x31)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
        float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, zmm1_1, 0x10), temp0_57, 0x88)
        float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_31)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_50, temp0_51, 0x12)
        zmm5_1 = *(arg1 + 0x7c0)
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, zmm1_1, 0xe8)
        float temp0_65[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_33)
        zmm10[0].q = zmm5_1 u>> 0x40
        float temp0_66[0x4] = _mm_shuffle_ps(zmm5_1, zmm10, 0xc4)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
        float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_35)
        float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_28))
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_28)
        float temp0_74[0x4] = _mm_add_ps(temp0_71, temp0_65)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
        float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
        float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
        float var_138[0x4] = temp0_77
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
        float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_35)
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
        float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
        float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_33)
        float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
        float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
        float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
        int96_t var_128_1 = temp0_90[0].12
        float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
        float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
        float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_33)
        float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
        float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_35)
        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
        int96_t var_118_1 = temp0_101[0].12
        int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
        int128_t zmm10_1
        float zmm12_1[0x4]
        float zmm14_1[0x4]
        zmm10_1, zmm12_1, zmm14_1 = sub_1407740e0(&var_138, 0x322bcc77)
        zmm14_1 =
            _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm12_1, 2), data_143f57830 ^ zmm10_1) ^ data_143f57830
        float zmm2_1[0x4] = var_138[0]
        float zmm1_2 = var_138[1]
        uint32_t zmm0_2[0x4] = var_138[2]
        zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
        zmm1_2 = zmm1_2 * zmm14_1[0]
        zmm0_2[0] = zmm0_2[0] f* zmm14_1[0]
        var_138[0] = zmm2_1[0]
        float temp0_109[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
        var_138[1] = zmm1_2
        zmm1_2 = var_128_1:4.d * temp0_109[0]
        var_138[2] = zmm0_2[0]
        zmm0_2 = var_128_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_109[0]
        float zmm3_1 = var_128_1.d * temp0_109[0]
        zmm2_1 = var_118_1.d
        var_128_1:4.d = zmm1_2
        var_128_1:8.d = zmm0_2[0]
        zmm0_2 = var_118_1:8.d
        float temp0_110[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
        zmm1_2 = var_118_1:4.d * temp0_110[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_110[0]
        zmm2_1[0] = zmm2_1[0] * temp0_110[0]
        var_118_1:4.d = zmm1_2
        var_118_1:8.d = zmm0_2[0]
        var_128_1.d = zmm3_1
        var_118_1.d = zmm2_1[0]
        uint32_t var_f8[0x4]
        sub_14077e4a0(&var_f8, &var_138)
        uint32_t zmm6_1[0x4] = var_f8
        float zmm5_2[0x4] = data_143f57790
        uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
        uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
        zmm1_3 = _mm_rsqrt_ps(zmm4_2)
        float temp0_117[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
        float temp0_122[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_117)), 
                zmm1_3), 
            zmm1_3)
        float temp0_125[0x4] =
            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
        uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        float temp0_129[0x4] = _mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122)
        float temp0_130[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(temp0_129, zmm6_1) ^ data_143f57780, zmm0_3) ^ data_143f57780
        float temp0_134[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_130[0].q)
        arg2[2] = zmm12_1
        arg2[1] = temp0_134
        *arg2 = zmm5_2

__security_check_cookie(rax_1 ^ &var_168)
return arg2
