// 函数: sub_1420d59d0
// 地址: 0x1420d59d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20 = arg4[0]
float zmm5[0x4] = *arg2
uint32_t zmm6[0x4] = *arg3
float temp0[0x4] = _mm_mul_ps(zmm5, zmm5)
float zmm7[0x4] = arg3[2]
float zmm8[0x4] = arg3[1]
float temp0_2[0x4] = _mm_add_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0x4e))
float zmm9[0x4] = arg2[1]
float zmm12[0x4] = arg2[2]
float temp0_4[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0x39), temp0_2)
float zmm14[0x4] = data_143f47ed0
float zmm15[0x4] = data_143f47ec0
float temp0_5[0x4] = _mm_rsqrt_ps(temp0_4)
float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm14)
float temp0_11[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_5, temp0_5), temp0_6)), temp0_5), 
    temp0_5)
float temp0_12[0x4] = _mm_mul_ps(zmm6, zmm6)
float temp0_15[0x4] = _mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_11, temp0_11), temp0_6))
float temp0_16[0x4] = _mm_cmpeq_ps(data_143f47f00, temp0_4, 2)
float zmm11[0x4] = _mm_and_ps(
    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_15, temp0_11), temp0_11), zmm5) ^ zmm15, temp0_16) ^ zmm15
float temp0_22[0x4] = _mm_add_ps(temp0_12, _mm_shuffle_ps(temp0_12, temp0_12, 0x4e))
float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_22, temp0_22, 0x39), temp0_22)
float temp0_25[0x4] = _mm_rsqrt_ps(temp0_24)
float temp0_26[0x4] = _mm_mul_ps(temp0_24, zmm14)
float temp0_31[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_25, temp0_25), temp0_26)), temp0_25), 
    temp0_25)
float temp0_37[0x4] = _mm_mul_ps(
    _mm_add_ps(
        _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_31, temp0_31), temp0_26)), 
            temp0_31), 
        temp0_31), 
    zmm6)
zmm6 = data_143f47f00
zmm5 = _mm_and_ps(temp0_37 ^ zmm15, _mm_cmpeq_ps(zmm6, temp0_24, 2)) ^ zmm15

if (arg5 == 0)
    bool cond:0_1 = _mm_and_ps(arg4, 0x7fffffff)[0] <= 9.99999975e-06f
    arg5.d = arg4[0]
    
    if (cond:0_1)
        goto label_1420d5c70
    
    arg4[0] = arg4[0] - 1f
    
    if (_mm_and_ps(arg4, 0x7fffffff)[0] > 9.99999975e-06f)
        arg4 = arg5.d
        float temp0_42[0x4] = _mm_sub_ps(zmm8, zmm9)
        float temp0_43[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
        float temp0_44[0x4] = _mm_sub_ps(zmm7, zmm12)
        float temp0_45[0x4] = _mm_mul_ps(zmm5, zmm11)
        float temp0_46[0x4] = _mm_sub_ps(zx.o(0), zmm11)
        float temp0_47[0x4] = _mm_mul_ps(zmm5, temp0_43)
        float temp0_48[0x4] = _mm_mul_ps(temp0_42, temp0_43)
        float temp0_49[0x4] = _mm_mul_ps(temp0_44, temp0_43)
        float temp0_51[0x4] = _mm_add_ps(temp0_45, _mm_shuffle_ps(temp0_45, temp0_45, 0x4e))
        zmm9 = _mm_add_ps(zmm9, temp0_48)
        zmm12 = _mm_add_ps(zmm12, temp0_49)
        float temp0_60[0x4] = _mm_add_ps(
            _mm_mul_ps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0x39), temp0_51), 2), 
                    temp0_46 ^ zmm11) ^ temp0_46, 
                _mm_sub_ps(data_143f47eb0, temp0_43)), 
            temp0_47)
        float temp0_61[0x4] = _mm_mul_ps(temp0_60, temp0_60)
        float temp0_63[0x4] = _mm_add_ps(temp0_61, _mm_shuffle_ps(temp0_61, temp0_61, 0x4e))
        float temp0_65[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x39), temp0_63)
        float temp0_66[0x4] = _mm_rsqrt_ps(temp0_65)
        float temp0_67[0x4] = _mm_mul_ps(temp0_65, zmm14)
        float temp0_68[0x4] = _mm_mul_ps(temp0_66, temp0_66)
        zmm6 = _mm_cmpeq_ps(zmm6, temp0_65, 2)
        float temp0_73[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm14, _mm_mul_ps(temp0_68, temp0_67)), temp0_66), temp0_66)
        zmm11 = _mm_and_ps(
            _mm_mul_ps(
                _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm14, _mm_mul_ps(_mm_mul_ps(temp0_73, temp0_73), temp0_67)), 
                        temp0_73), 
                    temp0_73), 
                temp0_60) ^ zmm15, 
            zmm6) ^ zmm15
    label_1420d5c70:
        *arg1 = zmm11
        arg1[1] = zmm9
        arg1[2] = zmm12
    else
        *arg1 = zmm5
        arg1[1] = zmm8
        arg1[2] = zmm7
else
    float var_158
    float var_138[0x4]
    
    if (arg5 != 1)
        float temp0_95[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x55)
        float temp0_96[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
        temp0_96[0] = temp0_96[0] * temp0_95[0]
        float temp0_97[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xaa)
        zmm5[0] = zmm5[0] * zmm11[0]
        float temp0_98[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
        temp0_98[0] = temp0_98[0] * temp0_97[0]
        zmm5[0] = zmm5[0] + temp0_96[0]
        float temp0_99[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xff)
        float temp0_100[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        temp0_100[0] = temp0_100[0] * temp0_99[0]
        zmm5[0] = zmm5[0] + temp0_98[0]
        zmm5[0] = zmm5[0] + temp0_100[0]
        
        if (not(zmm5[0] >= 0f))
            zmm5[0] = zmm5[0] * -1f
            float temp0_101[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            float temp0_102[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            float temp0_103[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
            temp0_101[0] = temp0_101[0] * -1f
            temp0_102[0] = temp0_102[0] * -1f
            temp0_103[0] = temp0_101[0]
            float temp0_104[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            float temp0_105[0x4] = _mm_shuffle_ps(temp0_103, temp0_103, 0xc6)
            temp0_105[0] = temp0_102[0]
            temp0_104[0] = temp0_104[0] * -1f
            float temp0_106[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x27)
            temp0_106[0] = temp0_104[0]
            zmm5 = _mm_shuffle_ps(temp0_106, temp0_106, 0x39)
            var_158.o = zmm5
        
        int32_t var_14c_1 = 0
        float zmm1[0x4] = var_158.o
        zmm7[0] = zmm7[0] - zmm12[0]
        float var_108[0x4] = zmm5
        float temp0_108[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        float temp0_109[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        float temp0_110[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float temp0_111[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        temp0_108[0] = temp0_108[0] - temp0_111[0]
        zmm8[0] = zmm8[0] * 0.5f
        temp0_110[0] = temp0_110[0] * 0.5f
        zmm1[0] = zmm8[0]
        zmm7[0] = zmm7[0] * arg4[0]
        float temp0_112[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe1)
        temp0_112[0] = temp0_110[0]
        temp0_108[0] = temp0_108[0] * arg4[0]
        float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc6)
        zmm7[0] = zmm7[0] + zmm12[0]
        float temp0_114[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        temp0_109[0] = temp0_109[0] - temp0_114[0]
        float temp0_115[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        temp0_108[0] = temp0_108[0] + temp0_111[0]
        temp0_115[0] = temp0_115[0] * 0.5f
        int128_t var_f8_1 = zx.o(0)
        float zmm0[0x4] = data_142d3f660
        temp0_113[0] = temp0_115[0]
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_113, temp0_113, 0xc9)
        temp0_109[0] = temp0_109[0] * arg4[0]
        float var_e8[0x4] = zmm0
        var_158.o = temp0_116
        temp0_109[0] = temp0_109[0] + temp0_114[0]
        float var_d8_1[0x4] = temp0_116
        var_138 = temp0_109
        float var_c8[0x2][0x4]
        float (* rax_2)[0x4]
        int512_t zmm7_3
        float zmm9_2[0x4]
        float zmm11_1[0x4]
        int512_t zmm12_1
        rax_2, zmm7_3, zmm9_2, zmm11_1, zmm12_1 = sub_1420b0760(&var_e8, &var_c8, &var_108)
        int32_t var_14c_2 = 0
        float zmm1_1[0x4] = var_158.o
        zmm7_3.o = *rax_2
        zmm12_1.o = rax_2[1]
        zmm1_1[0] = zmm9_2[0] * 0.5f
        float temp0_117[0x4] = _mm_shuffle_ps(zmm9_2, zmm9_2, 0x55)
        float temp0_118[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xe1)
        temp0_117[0] = temp0_117[0] * 0.5f
        int128_t var_d8_2 = zx.o(0)
        float zmm0_2[0x4] = data_142d3f660
        temp0_118[0] = temp0_117[0]
        float temp0_119[0x4] = _mm_shuffle_ps(zmm9_2, zmm9_2, 0xaa)
        float temp0_120[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xc6)
        temp0_119[0] = temp0_119[0] * 0.5f
        var_e8 = zmm11_1
        var_108 = zmm0_2
        temp0_120[0] = temp0_119[0]
        float temp0_121[0x4] = _mm_shuffle_ps(temp0_120, temp0_120, 0xc9)
        var_158.o = temp0_121
        float var_f8_2[0x4] = temp0_121
        float (* rax_3)[0x4]
        float zmm7_4[0x4]
        float zmm12_2[0x4]
        rax_3, zmm7_4, zmm12_2 = sub_1420b0760(&var_108, &var_158, &var_e8)
        zmm6 = 0x3f800000
        float zmm3_1[0x4] = arg_20
        float zmm10_1[0x4] = 0x3f800000
        zmm10_1[0] = 1f - arg4[0]
        float zmm2_2[0x4] = *rax_3
        float zmm5_1[0x4] = rax_3[1]
        zmm10_1[0] = zmm10_1[0] * zmm2_2[0]
        zmm7_4[0] = zmm7_4[0] * zmm3_1[0]
        float temp0_122[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0x55)
        temp0_122[0] = temp0_122[0] * zmm3_1[0]
        zmm10_1[0] = zmm10_1[0] + zmm7_4[0]
        float temp0_123[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
        zmm10_1[0] = zmm10_1[0] * temp0_123[0]
        float temp0_124[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
        zmm10_1[0] = zmm10_1[0] * temp0_124[0]
        zmm10_1[0] = zmm10_1[0] + temp0_122[0]
        float temp0_125[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
        zmm10_1[0] = zmm10_1[0] * temp0_125[0]
        float temp0_126[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xaa)
        temp0_126[0] = temp0_126[0] * zmm3_1[0]
        zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] + temp0_126[0]
        float temp0_127[0x4] = _mm_shuffle_ps(zmm7_4, zmm7_4, 0xff)
        temp0_127[0] = temp0_127[0] * zmm3_1[0]
        zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] + temp0_127[0]
        zmm10_1[0] = zmm10_1[0] * zmm5_1[0]
        zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
        float temp0_128[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0x55)
        temp0_128[0] = temp0_128[0] * arg_20
        zmm10_1[0] = zmm10_1[0] * zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] + zmm10_1[0]
        zmm6[0] = 1f / _mm_sqrt_ss(0, zmm10_1[0])[0]
        zmm12_2[0] = zmm12_2[0] * zmm3_1[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        zmm10_1[0] = zmm10_1[0] + zmm12_2[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        float temp0_130[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
        zmm10_1[0] = zmm10_1[0] * temp0_130[0]
        float temp0_131[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
        float temp0_132[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        zmm10_1[0] = zmm10_1[0] * temp0_132[0]
        zmm10_1[0] = zmm10_1[0] + temp0_128[0]
        zmm10_1[0] = zmm10_1[0] * temp0_131[0]
        float temp0_133[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xaa)
        temp0_133[0] = temp0_133[0] * arg_20
        float temp0_134[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xe1)
        temp0_134[0] = zmm10_1[0]
        float temp0_135[0x4] = _mm_shuffle_ps(zmm12_2, zmm12_2, 0xff)
        temp0_135[0] = temp0_135[0] * arg_20
        zmm10_1[0] = zmm10_1[0] + temp0_133[0]
        float temp0_136[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xc6)
        temp0_136[0] = zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, temp0_136, 0x27)
        zmm10_1[0] = zmm10_1[0] + temp0_135[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        temp0_137[0] = zmm10_1[0]
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0x39)
        zmm10_1[0] = zmm10_1[0] f* zmm6[0]
        float zmm13[0x4] = zmm10_1 ^ 0x80000000
        float temp0_139[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0xe1)
        temp0_139[0] = zmm10_1[0]
        float temp0_140[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xe1)
        float temp0_141[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc6)
        temp0_141[0] = zmm10_1[0]
        *arg1 = temp0_138
        float temp0_142[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0x27)
        temp0_140[0] = (zmm10_1 ^ 0x80000000)[0]
        temp0_142[0] = zmm10_1[0]
        float temp0_143[0x4] = _mm_shuffle_ps(temp0_140, temp0_140, 0xc6)
        float temp0_144[0x4] = _mm_shuffle_ps(temp0_142, temp0_142, 0x39)
        temp0_143[0] = (zmm10_1 ^ 0x80000000)[0]
        float temp0_145[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0x27)
        float temp0_146[0x4] = _mm_shuffle_ps(temp0_144, temp0_144, 0)
        temp0_145[0] = zmm10_1[0]
        float temp0_147[0x4] = _mm_shuffle_ps(temp0_145, temp0_145, 0x39)
        float temp0_149[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_147, temp0_147, 0x1b), temp0_146)
        float temp0_150[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0x4e)
        float temp0_152[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_144, temp0_144, 0xff), temp0_147)
        float temp0_153[0x4] = __mulps_xmmps_memps(temp0_149, data_143f47ea0)
        float temp0_154[0x4] = _mm_shuffle_ps(temp0_147, temp0_147, 0xb1)
        float temp0_155[0x4] = _mm_add_ps(temp0_153, temp0_152)
        float temp0_157[0x4] = _mm_mul_ps(temp0_150, _mm_shuffle_ps(temp0_144, temp0_144, 0x55))
        float zmm0_3[0x4] = var_138[0]
        float temp0_159[0x4] = _mm_mul_ps(temp0_154, _mm_shuffle_ps(temp0_144, temp0_144, 0xaa))
        float temp0_160[0x4] = __mulps_xmmps_memps(temp0_157, data_143f47e90)
        float temp0_161[0x4] = __mulps_xmmps_memps(temp0_159, data_143f47e80)
        float temp0_163[0x4] = _mm_add_ps(_mm_add_ps(temp0_155, temp0_160), temp0_161)
        temp0_163[0] = temp0_163[0] + temp0_163[0]
        float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0x55)
        temp0_164[0] = temp0_164[0] + temp0_164[0]
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xaa)
        temp0_165[0] = temp0_165[0] + temp0_165[0]
        float temp0_166[0x4] = _mm_unpacklo_ps(temp0_164, 0)
        arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(temp0_163, temp0_165[0].q), temp0_166[0].q)
        arg1[2] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, zmm0_3[0].q), _mm_unpacklo_ps(temp0_108, 0)[0].q)
    else
        var_138 = zmm5
        zmm8[0] = zmm8[0] - zmm9[0]
        float temp0_81[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
        float temp0_82[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
        float temp0_83[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
        temp0_81[0] = temp0_81[0] - temp0_83[0]
        zmm8[0] = zmm8[0] * arg4[0]
        zmm8[0] = zmm8[0] + zmm9[0]
        temp0_81[0] = temp0_81[0] * arg4[0]
        float temp0_84[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
        temp0_82[0] = temp0_82[0] - temp0_84[0]
        temp0_81[0] = temp0_81[0] + temp0_83[0]
        float temp0_85[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        zmm7[0] = zmm7[0] - zmm12[0]
        temp0_82[0] = temp0_82[0] * arg4[0]
        float temp0_86[0x4] = _mm_unpacklo_ps(temp0_81, 0)
        float temp0_87[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        temp0_82[0] = temp0_82[0] + temp0_84[0]
        zmm7[0] = zmm7[0] * arg4[0]
        zmm7[0] = zmm7[0] + zmm12[0]
        float temp0_89[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, temp0_82[0].q), temp0_86[0].q)
        float temp0_90[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x55)
        temp0_90[0] = temp0_90[0] - temp0_87[0]
        float temp0_91[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
        temp0_91[0] = temp0_91[0] - temp0_85[0]
        temp0_90[0] = temp0_90[0] * arg4[0]
        temp0_91[0] = temp0_91[0] * arg4[0]
        temp0_90[0] = temp0_90[0] + temp0_87[0]
        temp0_91[0] = temp0_91[0] + temp0_85[0]
        float temp0_92[0x4] = _mm_unpacklo_ps(temp0_90, 0)
        _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7, temp0_91[0].q), temp0_92[0].q)
        int32_t var_128
        int512_t zmm6_1
        int512_t zmm7_1
        int512_t zmm8_1
        zmm6_1, zmm7_1, zmm8_1 = sub_140adf5d0(&var_138, &var_128)
        zmm6_1.o = var_128
        int32_t var_124
        zmm7_1.o = var_124
        int32_t var_120
        zmm8_1.o = var_120
        var_138 = zmm11
        float var_11c
        float zmm6_2
        float zmm7_2
        float zmm8_2
        int128_t zmm9_1
        zmm6_2, zmm7_2, zmm8_2, zmm9_1 = sub_140adf5d0(&var_138, &var_11c)
        float var_118
        zmm7_2 = (zmm7_2 - var_118) * arg4[0] + var_118
        float var_114
        zmm8_2 = (zmm8_2 - var_114) * arg4[0] + var_114
        var_158 = (zmm6_2 - var_11c) * arg4[0] + var_11c
        float var_154_1 = zmm7_2
        float var_150_1 = zmm8_2
        *arg1 = *sub_140ade170(&var_158, &var_138)
        arg1[1] = temp0_89
        arg1[2] = zmm9_1

return arg1
