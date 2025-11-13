// 函数: sub_142096f00
// 地址: 0x142096f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int32_t* result = __security_cookie ^ &var_198
int32_t* result_1 = result
int64_t rsi = sx.q(arg2)

if (arg1[0x88] != 0)
    int64_t rax_2 = (*(*arg1 + 0x690))()
    float var_168[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    zmm8_1, zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
        sub_1407c8dd0(&var_168, (rsi << 6) + arg1[0x93])
    float zmm7_1[0x4] = *(arg1 + 0x1e0)
    float zmm6_1[0x4] = *(arg1 + 0x1c0)
    float var_148[0x4]
    uint32_t var_118[0x4]
    float var_108[0x4]
    float var_158[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_148, zmm7_1), data_143f47880, 1)) == 0)
        float zmm2_1[0x4] = var_168
        float temp0_135[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
        float temp0_136[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
        float temp0_137[0x4] = _mm_mul_ps(var_158, zmm7_1)
        float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f47840)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
        float temp0_140[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_141[0x4] = _mm_mul_ps(zmm2_1, temp0_140)
        float temp0_142[0x4] = _mm_mul_ps(var_148, zmm7_1)
        float temp0_143[0x4] = _mm_add_ps(temp0_138, temp0_141)
        float temp0_145[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
        float temp0_147[0x4] = _mm_mul_ps(temp0_139, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
        float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143f47830)
        float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
        float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f47820)
        float var_e8_2[0x4] = temp0_142
        float temp0_152[0x4] = _mm_add_ps(_mm_add_ps(temp0_143, temp0_148), temp0_150)
        float temp0_153[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
        float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
        float temp0_155[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
        var_108 = temp0_152
        float temp0_158[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), temp0_155), temp0_154)
        float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
        float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
        float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
        float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_155)
        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_153)
        float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_140)
        float var_f8_2[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
            *(arg1 + 0x1d0))
    else
        float temp0_4[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
        float temp0_5[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
        float var_68_1[0x4] = zmm9_1
        zmm9_1 = *(arg1 + 0x1d0)
        float var_88_1[0x4] = zmm11_1
        zmm11_1 = data_143f47560
        float temp0_7[0x4] = _mm_mul_ps(temp0_5, zmm6_1)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0x29), temp0_4)
        float temp0_12[0x4] =
            _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), _mm_shuffle_ps(temp0_7, temp0_7, 1))
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
        float zmm3_1[0x4] = var_168
        float temp0_15[0x4] = _mm_mul_ps(temp0_13, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff))
        float var_a8_1[0x4] = zmm13_1
        float temp0_16[0x4] = _mm_shuffle_ps(var_148, var_148, 0xc9)
        _mm_mul_ps(zmm7_1, var_148)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_9)
        float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_15)
        float temp0_20[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm7_1)
        float temp0_22[0x4] = _mm_mul_ps(temp0_6, temp0_19)
        float zmm1_1[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11_1, temp0_12), zmm7_1), data_143f47570)
        float temp0_26[0x4] = _mm_shuffle_ps(temp0_22, zmm1_1, 0x32)
        float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), temp0_26, 0x82)
        float temp0_29[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x31)
        float temp0_31[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1_1, 0x10), temp0_29, 0x88)
        float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_22, 0x12), zmm1_1, 0xe8)
        float temp0_34[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        zmm11_1[0].q = zmm9_1 u>> 0x40
        float temp0_35[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_37[0x4] = _mm_mul_ps(zmm3_1, temp0_34)
        float temp0_39[0x4] = _mm_mul_ps(temp0_20, _mm_shuffle_ps(temp0_34, temp0_34, 0x29))
        float temp0_41[0x4] = _mm_mul_ps(temp0_36, _mm_shuffle_ps(temp0_34, temp0_34, 0x12))
        float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
            _mm_shuffle_ps(temp0_37, temp0_37, 1))
        float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
        float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
        float temp0_47[0x4] = _mm_sub_ps(zmm11_1, temp0_44)
        float temp0_48[0x4] = _mm_mul_ps(temp0_45, var_148)
        float temp0_49[0x4] = _mm_mul_ps(temp0_16, temp0_46)
        zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, var_148), data_143f47570)
        float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
        float temp0_55[0x4] = _mm_shuffle_ps(temp0_48, zmm1_1, 0x31)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
        float temp0_58[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1_1, 0x10), temp0_55, 0x88)
        float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_31)
        float temp0_61[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1_1, 0xe8)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
        zmm11_1[0].q = var_158 u>> 0x40
        float temp0_64[0x4] = _mm_shuffle_ps(var_158, zmm11_1, 0xc4)
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
        float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_28))
        float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_28)
        float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_33)
        float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_31)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
        var_168 = temp0_75
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
        float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
        float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
        float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_33)
        float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
        float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
        int96_t var_158_1 = temp0_88[0].12
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
        float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
        float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
        float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
        int96_t var_148_1 = temp0_99[0].12
        int96_t var_138_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
        int512_t zmm8_2
        int512_t zmm9_2
        int512_t zmm10_2
        float zmm11_2[0x4]
        int512_t zmm12_2
        float zmm13_2[0x4]
        float zmm15_2[0x4]
        zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_2, zmm15_2 =
            sub_1407740e0(&var_168, 0x322bcc77)
        zmm15_2 =
            _mm_and_ps(_mm_cmpeq_ps(zmm15_2, zmm13_2, 2), data_143f47870 ^ zmm11_2) ^ data_143f47870
        float zmm2_2[0x4] = var_168[0]
        float zmm1_2 = var_168[1]
        uint32_t zmm0_2[0x4] = var_168[2]
        zmm2_2[0] = zmm2_2[0] * zmm15_2[0]
        zmm1_2 = zmm1_2 * zmm15_2[0]
        zmm0_2[0] = zmm0_2[0] f* zmm15_2[0]
        var_168[0] = zmm2_2[0]
        float temp0_107[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55)
        var_168[1] = zmm1_2
        zmm1_2 = var_158_1:4.d * temp0_107[0]
        var_168[2] = zmm0_2[0]
        zmm0_2 = var_158_1:8.d
        zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
        float zmm3_2 = var_158_1.d * temp0_107[0]
        zmm2_2 = var_148_1.d
        var_158_1:4.d = zmm1_2
        var_158_1:8.d = zmm0_2[0]
        zmm0_2 = var_148_1:8.d
        float temp0_108[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0xaa)
        zmm1_2 = var_148_1:4.d * temp0_108[0]
        zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
        zmm2_2[0] = zmm2_2[0] * temp0_108[0]
        var_148_1:4.d = zmm1_2
        var_148_1:8.d = zmm0_2[0]
        var_158_1.d = zmm3_2
        var_148_1.d = zmm2_2[0]
        sub_14077e4a0(&var_118, &var_168)
        uint32_t zmm6_2[0x4] = var_118
        float zmm5_2[0x4] = data_143f47860
        zmm12_2.o = zmm12_1
        uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
        float var_e8_1[0x4] = zmm13_2
        zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
        uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
        zmm1_3 = _mm_rsqrt_ps(zmm4_2)
        float temp0_115[0x4] = _mm_mul_ps(zmm4_2, zmm5_2)
        float temp0_120[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_115)), 
                zmm1_3), 
            zmm1_3)
        float temp0_123[0x4] =
            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
        uint32_t zmm0_3[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
        float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
        float temp0_128[0x4] = _mm_unpacklo_ps(var_138_1:4.d, 0)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(temp0_127, zmm6_2) ^ data_143f47850, zmm0_3) ^ data_143f47850
        float var_f8_1[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_138_1.d, var_138_1:8.d[0].q), temp0_128[0].q)
        var_108 = zmm5_2
        zmm10_2.o = zmm10_1
        zmm9_2.o = var_68_1
        zmm8_2.o = zmm8_1
    j_sub_14220baf0(arg3, &arg1[0x55])
    arg3[3].b &= 0x6f
    *arg3 = rsi.d
    sub_14220af60(&var_118, nullptr)
    void* rax_4 = arg1[0x15]
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
    
    result = sub_142219250(arg3, rax_2, &var_108, arg1, *(rax_4 + 0x1f8), &var_118)

__security_check_cookie(result_1 ^ &var_198)
return result
