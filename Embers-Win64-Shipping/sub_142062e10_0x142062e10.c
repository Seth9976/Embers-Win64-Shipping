// 函数: sub_142062e10
// 地址: 0x142062e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
float* result = __security_cookie ^ &var_1c8
float* result_1 = result
int64_t rdi = sx.q(arg2)

if (rdi.d == 0xffffffff)
    *(arg1 + 0x5f0) = data_143dbb1f8.q
    int32_t rax_1 = data_143dbb200
    *(arg1 + 0x5f8) = rax_1
    *(arg1 + 0x5e4) = *(arg1 + 0x5f0)
    *(arg1 + 0x5ec) = rax_1
    *(arg1 + 0x5fc) = 0
    result = sub_141df0440()
else if (*(arg1 + 0x440) != 0)
    result = sub_141decc80()
    
    if (result.b != 0)
        float var_138[0x4]
        float zmm9_1[0x4]
        float zmm10_1[0x4]
        float zmm11_1[0x4]
        float zmm12_1[0x4]
        float zmm13_1[0x4]
        zmm9_1, zmm10_1, zmm11_1, zmm12_1, zmm13_1 =
            sub_1407c8dd0(&var_138, (rdi << 6) + *(arg1 + 0x498))
        float zmm7_1[0x4] = *(arg1 + 0x1e0)
        float zmm6_1[0x4] = *(arg1 + 0x1c0)
        uint32_t var_198[0x4]
        float var_118[0x4]
        float var_e8[0x4]
        float var_128[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_118, zmm7_1), data_143f433d0, 1)) == 0)
            float zmm2_1[0x4] = var_138
            float temp0_135[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), _mm_shuffle_ps(zmm6_1, zmm6_1, 0))
            float temp0_136[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e)
            float temp0_137[0x4] = _mm_mul_ps(var_128, zmm7_1)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f433b0)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
            float temp0_141[0x4] = _mm_mul_ps(zmm2_1, temp0_140)
            float temp0_142[0x4] = _mm_mul_ps(var_118, zmm7_1)
            float temp0_143[0x4] = _mm_add_ps(temp0_138, temp0_141)
            float temp0_145[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55))
            float temp0_147[0x4] = _mm_mul_ps(temp0_139, _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143f433a0)
            float temp0_149[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xc9)
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_147, data_143f43390)
            float var_c8_2[0x4] = temp0_142
            float temp0_152[0x4] = _mm_add_ps(_mm_add_ps(temp0_143, temp0_148), temp0_150)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xd2)
            float temp0_154[0x4] = _mm_mul_ps(temp0_149, temp0_153)
            float temp0_155[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xc9)
            var_e8 = temp0_152
            float temp0_158[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xd2), temp0_155), temp0_154)
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xd2)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_162[0x4] = _mm_mul_ps(temp0_160, temp0_155)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_153)
            float temp0_164[0x4] = _mm_mul_ps(temp0_159, temp0_140)
            float var_d8_2[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, temp0_163), _mm_add_ps(temp0_164, temp0_137)), 
                *(arg1 + 0x1d0))
        else
            float temp0_4[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
            float temp0_5[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
            float temp0_6[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
            float var_48_1[0x4] = zmm9_1
            zmm9_1 = *(arg1 + 0x1d0)
            float var_68_1[0x4] = zmm11_1
            zmm11_1 = data_143f43310
            float temp0_7[0x4] = _mm_mul_ps(zmm6_1, temp0_6)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_4)
            float temp0_12[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_7, temp0_7, 0x1a), 
                _mm_shuffle_ps(temp0_7, temp0_7, 1))
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x12), 
                _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff))
            float var_88_1[0x4] = zmm13_1
            _mm_mul_ps(var_118, zmm7_1)
            float temp0_17[0x4] = _mm_shuffle_ps(var_118, var_118, 0xc9)
            float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_9)
            float temp0_19[0x4] = _mm_sub_ps(temp0_9, temp0_15)
            float temp0_20[0x4] = _mm_mul_ps(temp0_18, zmm7_1)
            float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_19)
            float zmm1_1[0x4] = __andps_xmmxud_memxud(
                _mm_mul_ps(_mm_sub_ps(zmm11_1, temp0_12), zmm7_1), data_143f43320)
            float temp0_25[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x32)
            float temp0_27[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1_1, 0), temp0_25, 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_20, zmm1_1, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0x10), temp0_28, 0x88)
            float temp0_32[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1_1, 0xe8)
            zmm1_1 = var_138
            zmm11_1[0].q = zmm9_1 u>> 0x40
            float temp0_33[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_37[0x4] = _mm_mul_ps(zmm1_1, temp0_33)
            float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_35)
            float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_36)
            float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                _mm_shuffle_ps(temp0_37, temp0_37, 1))
            float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
            float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
            float temp0_47[0x4] = _mm_sub_ps(zmm11_1, temp0_44)
            float temp0_48[0x4] = _mm_mul_ps(temp0_45, var_118)
            float temp0_49[0x4] = _mm_mul_ps(temp0_17, temp0_46)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, var_118), data_143f43320)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_49, zmm1_1, 0x32), 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x10)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_58[0x4] =
                _mm_shuffle_ps(temp0_55, _mm_shuffle_ps(temp0_48, zmm1_1, 0x31), 0x88)
            float temp0_59[0x4] = _mm_mul_ps(temp0_56, temp0_30)
            float temp0_61[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, temp0_49, 0x12), zmm1_1, 0xe8)
            float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_32)
            zmm11_1[0].q = var_128 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(var_128, zmm11_1, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_34)
            float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, temp0_27))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), temp0_27)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_32)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_30)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
            float var_178[0x4] = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_30)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_34)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_27)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_32)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_34)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_168_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_30)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_32)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_27)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_34)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_158_1 = temp0_99[0].12
            int96_t var_148_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            int512_t zmm9_2
            int512_t zmm10_2
            float zmm11_2[0x4]
            int512_t zmm12_2
            float zmm13_2[0x4]
            float zmm15_2[0x4]
            zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_2, zmm15_2 =
                sub_1407740e0(&var_178, 0x322bcc77)
            zmm15_2 = _mm_and_ps(_mm_cmpeq_ps(zmm15_2, zmm13_2, 2), data_143f433c0 ^ zmm11_2)
                ^ data_143f433c0
            float zmm2_2[0x4] = var_178[0]
            float zmm1_2 = var_178[1]
            uint32_t zmm0_2[0x4] = var_178[2]
            zmm2_2[0] = zmm2_2[0] * zmm15_2[0]
            zmm1_2 = zmm1_2 * zmm15_2[0]
            zmm0_2[0] = zmm0_2[0] f* zmm15_2[0]
            var_178[0] = zmm2_2[0]
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55)
            var_178[1] = zmm1_2
            zmm1_2 = var_168_1:4.d * temp0_107[0]
            var_178[2] = zmm0_2[0]
            zmm0_2 = var_168_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_107[0]
            float zmm3_2 = var_168_1.d * temp0_107[0]
            zmm2_2 = var_158_1.d
            var_168_1:4.d = zmm1_2
            var_168_1:8.d = zmm0_2[0]
            zmm0_2 = var_158_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0xaa)
            zmm1_2 = var_158_1:4.d * temp0_108[0]
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            zmm2_2[0] = zmm2_2[0] * temp0_108[0]
            var_158_1:4.d = zmm1_2
            var_158_1:8.d = zmm0_2[0]
            var_168_1.d = zmm3_2
            var_158_1.d = zmm2_2[0]
            sub_14077e4a0(&var_198, &var_178)
            uint32_t zmm6_2[0x4] = var_198
            float zmm5_2[0x4] = data_143f43360
            zmm12_2.o = zmm12_1
            zmm10_2.o = zmm10_1
            uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
            float var_c8_1[0x4] = zmm13_2
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
            uint32_t zmm0_3[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_148_1:4.d, 0)
            zmm5_2 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm6_2) ^ data_143f43350, zmm0_3) ^ data_143f43350
            float var_d8_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_148_1.d, var_148_1:8.d[0].q), temp0_128[0].q)
            var_e8 = zmm5_2
            zmm9_2.o = var_48_1
        void var_108
        result = sub_140ae2e90(sub_1423633d0(*(arg1 + 0x440), &var_108), &var_138, &var_e8)
        bool cond:0_1 = *(arg1 + 0x5fc) == 0
        float zmm3_4 = *result
        float zmm4_3[0x4] = result[1]
        float zmm7_2 = result[2]
        float zmm5_3 = zmm3_4 + result[3]
        zmm4_3[0] = zmm4_3[0] + result[4]
        zmm3_4 = zmm3_4 - result[3]
        zmm4_3[0] = zmm4_3[0] - result[4]
        char var_180_1 = 1
        float zmm6_3 = zmm7_2 + result[5]
        zmm7_2 = zmm7_2 - result[5]
        var_198[3] = zmm5_3
        float var_188_1 = zmm4_3[0]
        var_198[0] = zmm3_4
        float var_184_1 = zmm6_3
        var_198[1] = zmm4_3[0]
        var_198[2] = zmm7_2
        
        if (cond:0_1)
            result = zx.q(var_180_1.d)
            *(arg1 + 0x5e4) = var_198
            *(arg1 + 0x5f4) = var_188_1.q
            *(arg1 + 0x5fc) = result.d
        else
            float zmm0_4[0x4] = *(arg1 + 0x5ec)
            float temp0_169 = __minss_xmmss_memss(zmm3_4, *(arg1 + 0x5e4))
            float temp0_170[0x4] = __minss_xmmss_memss(zmm4_3[0], *(arg1 + 0x5e8))
            float temp0_171 = __maxss_xmmss_memss(zmm5_3, *(arg1 + 0x5f0))
            float temp0_172 = __maxss_xmmss_memss(zmm6_3, *(arg1 + 0x5f8))
            float temp0_173[0x4] = _mm_min_ss(zmm0_4[0], zmm7_2)
            *(arg1 + 0x5e4) = temp0_169
            *(arg1 + 0x5e8) = temp0_170[0]
            *(arg1 + 0x5f0) = temp0_171
            *(arg1 + 0x5f8) = temp0_172
            *(arg1 + 0x5ec) = temp0_173[0]
            *(arg1 + 0x5f4) = _mm_max_ss((*(arg1 + 0x5f4))[0], zmm4_3[0])[0]

__security_check_cookie(result_1 ^ &var_1c8)
return result
