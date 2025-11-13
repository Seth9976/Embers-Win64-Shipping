// 函数: sub_141f903b0
// 地址: 0x141f903b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8

if (sub_140cdd6a0(arg1) s< 0x140)
    uint32_t r14_1 = zx.d(*(arg1 + 0x431))
    int64_t* rax_3 = sub_140ac6680(&arg1[0x81])
    int16_t* rbx_1
    
    if (rax_3[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_3
    
    void* rsi_1 = arg1[0x85]
    int128_t zmm8 = *(arg1 + 0x44c)
    float zmm9[0x4] = arg1[0x89].d
    float zmm10[0x4] = *(arg1 + 0x43c)
    float zmm11[0x4] = arg1[0x87].d
    float var_1c8
    float var_168[0x4]
    int16_t* var_158
    float var_148[0x4]
    
    if (rsi_1 != 0)
        float zmm7[0x4] = zx.o(0)
        var_158 = rbx_1
        int16_t* var_150_1 = rbx_1
        
        if (*rbx_1 != 0)
            bool cond:1_1
            
            do
                int32_t var_1b8_1 = zmm8.d
                float var_1c0_1 = zmm9[0]
                var_1c8 = zmm10[0]
                var_148 = var_158.o
                float zmm6[0x4]
                zmm6, zmm7, zmm8, zmm9, zmm10, zmm11 =
                    sub_141f83e10(&var_168, &var_148, rsi_1, zmm11, var_1c8, var_1c0_1, var_1b8_1)
                float zmm0_1[0x4] = var_168[1]
                zmm6[0]
                int16_t i
                
                do
                    i = *rbx_1
                    
                    if (i == 0)
                        break
                    
                    if (i == 0x3c && rbx_1[1] == 0x62 && rbx_1[2] == 0x72 && rbx_1[3] == 0x3e)
                        rbx_1 = &rbx_1[4]
                        int16_t* var_150_3 = rbx_1
                        break
                    
                    rbx_1 = &rbx_1[1]
                    int16_t* var_150_2 = rbx_1
                while (i != 0xa)
                
                if (not(zmm0_1[0] > 0f))
                    zmm0_1, zmm6, zmm7, zmm8, zmm9 = sub_142005cc0(rsi_1)
                
                cond:1_1 = *rbx_1 != 0
                zmm7[0] = zmm7[0] + zmm0_1[0]
            while (cond:1_1)
        
        if (r14_1 != 0 && r14_1 == 1)
            zmm7[0] = zmm7[0] * -0.5f
    
    uint128_t var_f8
    float zmm6_1[0x4] = sub_141f3cf60(arg1, &var_f8)
    float zmm7_1[0x4] = data_143dbb0e0
    float zmm15[0x4] = data_143f3c4f0
    float zmm12[0x4] = data_143dbb0c0
    zmm9 = data_143f3c4b0
    zmm10 = data_143f3c4a0
    zmm11 = data_143f3c490
    float temp0_2[0x4] = _mm_unpacklo_ps(zx.o(0), (zmm6_1 ^ 0x80000000)[0].q)
    float var_d8[0x4]
    float temp0_3[0x4] = _mm_min_ps(zmm7_1, var_d8)
    float temp0_4[0x4] = _mm_unpacklo_ps(zx.o(0), zmm6_1[0].q)
    uint32_t temp0_6 = _mm_movemask_ps(_mm_cmpeq_ps(temp0_3, zmm15, 1))
    float zmm5_1[0x4] = _mm_unpacklo_ps(temp0_4, 0)
    var_148 = zmm7_1
    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_2, 0)
    var_158.o = zmm5_1
    var_168 = zmm15
    float var_1a8[0x4]
    uint32_t var_138[0x4]
    float zmm1_1[0x4]
    float zmm14[0x4]
    float var_e8[0x4]
    
    if (temp0_6 == 0)
        float zmm3_1[0x4] = var_f8
        float temp0_138[0x4] = _mm_mul_ps(temp0_8, var_d8)
        float temp0_139[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0)
        float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_139)
        float temp0_142[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xb1)
        float temp0_143[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x4e)
        float temp0_144[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_147[0x4] = _mm_add_ps(_mm_mul_ps(temp0_141, zmm9), _mm_mul_ps(temp0_144, zmm12))
        float temp0_149[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm3_1, zmm3_1, 0x55))
        float temp0_151[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm3_1, zmm3_1, 0xaa))
        float temp0_152[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xc9)
        float temp0_153[0x4] = _mm_mul_ps(temp0_149, zmm10)
        float temp0_154[0x4] = _mm_mul_ps(temp0_151, zmm11)
        float temp0_155[0x4] = _mm_add_ps(temp0_147, temp0_153)
        float temp0_156[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xd2)
        float temp0_157[0x4] = _mm_mul_ps(temp0_152, temp0_156)
        float temp0_158[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
        zmm6_1 = _mm_add_ps(temp0_155, temp0_154)
        float temp0_162[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_158), temp0_157)
        float temp0_163[0x4] = _mm_add_ps(temp0_162, temp0_162)
        float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xd2)
        float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
        float temp0_166[0x4] = _mm_mul_ps(temp0_164, temp0_158)
        float temp0_167[0x4] = _mm_mul_ps(temp0_165, temp0_156)
        zmm1_1 = data_143f3c4f0
        float temp0_168[0x4] = _mm_mul_ps(temp0_163, temp0_144)
        float temp0_169[0x4] = _mm_sub_ps(temp0_166, temp0_167)
        float temp0_170[0x4] = _mm_add_ps(temp0_168, temp0_138)
        zmm14 = _mm_mul_ps(zmm7_1, var_d8)
        zmm15 = __addps_xmmps_memps(_mm_add_ps(temp0_169, temp0_170), var_e8)
    else
        zmm1_1 = var_f8
        zmm10 = data_143f3c470
        float temp0_9[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
        float temp0_10[0x4] = _mm_mul_ps(zmm7_1, var_d8)
        float temp0_11[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc9)
        float temp0_12[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
        float temp0_13[0x4] = _mm_mul_ps(zmm1_1, temp0_9)
        float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x29), temp0_12)
        float temp0_16[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x1a)
        float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_9, temp0_9, 0x12), temp0_16)
        float temp0_21[0x4] = _mm_add_ps(temp0_17, _mm_shuffle_ps(temp0_13, temp0_13, 1))
        var_168 = temp0_10
        float temp0_22[0x4] = _mm_add_ps(temp0_19, temp0_15)
        float temp0_23[0x4] = _mm_sub_ps(temp0_15, temp0_19)
        float temp0_24[0x4] = _mm_sub_ps(zmm10, temp0_21)
        float temp0_25[0x4] = _mm_mul_ps(temp0_22, var_d8)
        float temp0_26[0x4] = _mm_mul_ps(temp0_11, temp0_23)
        float temp0_27[0x4] = _mm_mul_ps(temp0_24, var_d8)
        float temp0_28[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
        zmm1_1 = __andps_xmmxud_memxud(temp0_27, data_143f3c480)
        float temp0_30[0x4] = _mm_shuffle_ps(temp0_26, zmm1_1, 0x32)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_25, zmm1_1, 0), temp0_30, 0x82)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_25, zmm1_1, 0x31)
        float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1_1, 0x10), temp0_33, 0x88)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_25, temp0_26, 0x12)
        zmm5_1 = var_148
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, zmm1_1, 0xe8)
        zmm10[0].q = var_e8 u>> 0x40
        float temp0_38[0x4] = _mm_shuffle_ps(var_e8, zmm10, 0xc4)
        float temp0_39[0x4] = _mm_add_ps(zmm12, zmm12)
        float temp0_40[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_41[0x4] = _mm_mul_ps(zmm12, temp0_39)
        float temp0_43[0x4] = _mm_mul_ps(temp0_28, _mm_shuffle_ps(temp0_39, temp0_39, 0x29))
        float temp0_46[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), _mm_shuffle_ps(temp0_39, temp0_39, 0x12))
        float temp0_47[0x4] = _mm_add_ps(temp0_46, temp0_43)
        float temp0_48[0x4] = _mm_sub_ps(temp0_43, temp0_46)
        float temp0_51[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_41, temp0_41, 0x1a), 
            _mm_shuffle_ps(temp0_41, temp0_41, 1))
        float temp0_52[0x4] = _mm_mul_ps(temp0_47, zmm5_1)
        float temp0_53[0x4] = _mm_mul_ps(temp0_40, temp0_48)
        zmm1_1 =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_51), zmm5_1), data_143f3c480)
        float temp0_59[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, zmm1_1, 0), 
            _mm_shuffle_ps(temp0_53, zmm1_1, 0x32), 0x82)
        float temp0_60[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0x55)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_52, zmm1_1, 0x31)
        float temp0_63[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_53, zmm1_1, 0x10), temp0_61, 0x88)
        float temp0_64[0x4] = _mm_mul_ps(temp0_60, temp0_35)
        zmm10[0].q = temp0_8 u>> 0x40
        float temp0_65[0x4] = _mm_shuffle_ps(temp0_8, zmm10, 0xc4)
        float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_32)
        float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_52, temp0_53, 0x12), zmm1_1, 0xe8)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xaa)
        float temp0_71[0x4] = _mm_add_ps(temp0_64, temp0_67)
        float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xff), temp0_38)
        float temp0_74[0x4] = _mm_mul_ps(temp0_70, temp0_37)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_32)
        float temp0_77[0x4] = _mm_add_ps(temp0_71, temp0_74)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_37)
        float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_73)
        float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), temp0_35)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
        var_1a8 = temp0_80
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
        float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_35)
        float temp0_87[0x4] = _mm_mul_ps(temp0_83, temp0_38)
        float temp0_88[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
        float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_79)
        float temp0_90[0x4] = _mm_mul_ps(temp0_88, temp0_32)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_37)
        float temp0_93[0x4] = _mm_add_ps(temp0_89, temp0_87)
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0xff)
        float temp0_95[0x4] = _mm_add_ps(temp0_86, temp0_90)
        float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_38)
        float temp0_97[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
        int96_t var_198_1 = temp0_93[0].12
        float temp0_98[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        float temp0_99[0x4] = _mm_add_ps(temp0_95, temp0_92)
        float temp0_100[0x4] = _mm_mul_ps(temp0_98, temp0_35)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_37)
        float temp0_103[0x4] = _mm_mul_ps(temp0_97, temp0_32)
        float temp0_104[0x4] = _mm_add_ps(temp0_99, temp0_96)
        float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_38)
        float temp0_107[0x4] = _mm_add_ps(temp0_100, temp0_103)
        int96_t var_188_1 = temp0_104[0].12
        int96_t var_178_1 = _mm_add_ps(_mm_add_ps(temp0_107, temp0_102), temp0_106)[0].12
        int64_t zmm13_1
        zmm10, zmm12, zmm13_1, zmm15 = sub_1407740e0(&var_1a8, 0x322bcc77)
        zmm14 = var_168
        float zmm2_2[0x4] = var_1a8[0]
        zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm14, 2), data_143f3c4e0 ^ zmm10) ^ data_143f3c4e0
        zmm2_2[0] = zmm2_2[0] * zmm15[0]
        uint32_t zmm0_3[0x4] = var_1a8[2]
        float zmm1_2 = var_1a8[1] * zmm15[0]
        zmm0_3[0] = zmm0_3[0] f* zmm15[0]
        var_1a8[0] = zmm2_2[0]
        float temp0_112[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_1a8[1] = zmm1_2
        zmm1_2 = var_198_1:4.d * temp0_112[0]
        var_1a8[2] = zmm0_3[0]
        zmm0_3 = var_198_1:8.d
        zmm0_3[0] = zmm0_3[0] f* temp0_112[0]
        float zmm3_2 = var_198_1.d * temp0_112[0]
        zmm2_2 = var_188_1.d
        var_198_1:4.d = zmm1_2
        var_198_1:8.d = zmm0_3[0]
        zmm0_3 = var_188_1:8.d
        float temp0_113[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm1_2 = var_188_1:4.d * temp0_113[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_113[0]
        zmm2_2[0] = zmm2_2[0] * temp0_113[0]
        var_188_1:4.d = zmm1_2
        var_188_1:8.d = zmm0_3[0]
        var_198_1.d = zmm3_2
        var_188_1.d = zmm2_2[0]
        sub_14077e4a0(&var_138, &var_1a8)
        zmm5_1 = var_138
        zmm6_1 = data_143f3c4d0
        zmm7_1 = var_148
        zmm9 = data_143f3c4b0
        zmm10 = data_143f3c4a0
        zmm11 = data_143f3c490
        float temp0_114[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
        var_168[0] = 0x322bcc77
        float temp0_116[0x4] = _mm_add_ps(temp0_114, _mm_shuffle_ps(temp0_114, temp0_114, 0x4e))
        float temp0_118[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0x39), temp0_116)
        float temp0_119[0x4] = _mm_rsqrt_ps(temp0_118)
        float temp0_120[0x4] = _mm_mul_ps(temp0_118, zmm6_1)
        float temp0_125[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_119, temp0_119), temp0_120)), 
                temp0_119), 
            temp0_119)
        zmm1_1 = data_143f3c4f0
        float temp0_128[0x4] =
            _mm_sub_ps(zmm6_1, _mm_mul_ps(_mm_mul_ps(temp0_125, temp0_125), temp0_120))
        float zmm0_2[0x4] = var_168[0]
        float temp0_130[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), temp0_118, 2)
        var_168 = zmm1_1
        float temp0_132[0x4] = _mm_add_ps(_mm_mul_ps(temp0_128, temp0_125), temp0_125)
        float temp0_133[0x4] = _mm_unpacklo_ps(var_178_1:4.d, zmm13_1)
        float temp0_134[0x4] = _mm_mul_ps(temp0_132, zmm5_1)
        zmm5_1 = var_158.o
        zmm6_1 = _mm_and_ps(temp0_134 ^ data_143f3c4c0, temp0_130) ^ data_143f3c4c0
        zmm15 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_1.d, var_178_1:8.d[0].q), temp0_133[0].q)
    float var_128[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7_1), zmm1_1, 1)) == 0)
        float temp0_308[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), _mm_shuffle_ps(zmm6_1, zmm6_1, 0x1b))
        float temp0_309[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0x55)
        float temp0_310[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        float temp0_311[0x4] = _mm_mul_ps(zmm7_1, zmm15)
        float temp0_312[0x4] = _mm_mul_ps(temp0_310, zmm6_1)
        float temp0_313[0x4] = _mm_mul_ps(temp0_308, zmm9)
        float temp0_314[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xd2)
        float temp0_315[0x4] = _mm_mul_ps(zmm7_1, zmm14)
        float temp0_316[0x4] = _mm_add_ps(temp0_313, temp0_312)
        float temp0_318[0x4] = _mm_mul_ps(temp0_309, _mm_shuffle_ps(zmm6_1, zmm6_1, 0x4e))
        float temp0_319[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
        float temp0_320[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        float temp0_321[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xb1)
        float temp0_322[0x4] = _mm_mul_ps(temp0_318, zmm10)
        float temp0_323[0x4] = _mm_mul_ps(temp0_319, temp0_321)
        float var_108_2[0x4] = temp0_315
        float temp0_326[0x4] =
            _mm_add_ps(_mm_add_ps(temp0_316, temp0_322), _mm_mul_ps(temp0_323, zmm11))
        float temp0_328[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0xc9), temp0_314)
        var_128 = temp0_326
        float temp0_331[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0xd2), temp0_320), temp0_328)
        float temp0_332[0x4] = _mm_add_ps(temp0_331, temp0_331)
        float temp0_333[0x4] = _mm_mul_ps(temp0_310, temp0_332)
        float temp0_335[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_332, temp0_332, 0xd2), temp0_320)
        float temp0_336[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xc9)
        float temp0_337[0x4] = _mm_add_ps(temp0_333, temp0_311)
        float var_118_2[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_335, _mm_mul_ps(temp0_336, temp0_314)), temp0_337), 
            var_158.o)
    else
        zmm9 = data_143f3c470
        float temp0_177[0x4] = _mm_add_ps(zmm12, zmm12)
        float temp0_178[0x4] = _mm_shuffle_ps(zmm12, zmm12, 4)
        float temp0_179[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
        float temp0_180[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xff)
        _mm_mul_ps(zmm7_1, zmm14)
        float temp0_182[0x4] = _mm_mul_ps(zmm12, temp0_177)
        float temp0_184[0x4] = _mm_mul_ps(temp0_178, _mm_shuffle_ps(temp0_177, temp0_177, 0x29))
        float temp0_185[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x12)
        float temp0_186[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0x1a)
        float temp0_187[0x4] = _mm_mul_ps(temp0_180, temp0_185)
        float temp0_189[0x4] = _mm_add_ps(temp0_186, _mm_shuffle_ps(temp0_182, temp0_182, 1))
        float temp0_190[0x4] = _mm_add_ps(temp0_187, temp0_184)
        float temp0_191[0x4] = _mm_sub_ps(temp0_184, temp0_187)
        float temp0_192[0x4] = _mm_sub_ps(zmm9, temp0_189)
        float temp0_193[0x4] = _mm_mul_ps(temp0_190, zmm7_1)
        float temp0_194[0x4] = _mm_mul_ps(temp0_179, temp0_191)
        float temp0_195[0x4] = _mm_mul_ps(temp0_192, zmm7_1)
        float temp0_196[0x4] = _mm_add_ps(zmm6_1, zmm6_1)
        zmm1_1 = __andps_xmmxud_memxud(temp0_195, data_143f3c480)
        float temp0_198[0x4] = _mm_shuffle_ps(temp0_194, zmm1_1, 0x32)
        float temp0_200[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, zmm1_1, 0), temp0_198, 0x82)
        float temp0_201[0x4] = _mm_shuffle_ps(temp0_193, zmm1_1, 0x31)
        float temp0_203[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_194, zmm1_1, 0x10), temp0_201, 0x88)
        float temp0_204[0x4] = _mm_mul_ps(zmm6_1, temp0_196)
        zmm9[0].q = zmm5_1 u>> 0x40
        float temp0_205[0x4] = _mm_shuffle_ps(zmm5_1, zmm9, 0xc4)
        float temp0_206[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 4)
        float temp0_207[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
        float temp0_209[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, temp0_194, 0x12), zmm1_1, 0xe8)
        float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0x29), temp0_206)
        float temp0_214[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_204, temp0_204, 0x1a), 
            _mm_shuffle_ps(temp0_204, temp0_204, 1))
        var_158.o = temp0_205
        float temp0_216[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0x12), temp0_207)
        float temp0_217[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
        float temp0_218[0x4] = _mm_add_ps(temp0_216, temp0_211)
        float temp0_219[0x4] = _mm_sub_ps(temp0_211, temp0_216)
        float temp0_220[0x4] = _mm_mul_ps(temp0_218, zmm14)
        float temp0_221[0x4] = _mm_mul_ps(temp0_217, temp0_219)
        zmm1_1 =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_214), zmm14), data_143f3c480)
        float temp0_225[0x4] = _mm_shuffle_ps(temp0_221, zmm1_1, 0x32)
        float temp0_227[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_220, zmm1_1, 0), temp0_225, 0x82)
        float temp0_228[0x4] = _mm_shuffle_ps(temp0_220, zmm1_1, 0x31)
        float temp0_229[0x4] = _mm_shuffle_ps(temp0_221, zmm1_1, 0x10)
        float temp0_230[0x4] = _mm_shuffle_ps(temp0_220, temp0_221, 0x12)
        float temp0_231[0x4] = _mm_shuffle_ps(temp0_229, temp0_228, 0x88)
        float temp0_232[0x4] = _mm_shuffle_ps(temp0_230, zmm1_1, 0xe8)
        float zmm4_1[0x4] = var_158.o
        float temp0_233[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0x55)
        float temp0_234[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xaa)
        float temp0_235[0x4] = _mm_mul_ps(temp0_233, temp0_203)
        float temp0_236[0x4] = _mm_mul_ps(temp0_234, temp0_209)
        zmm9[0].q = zmm15 u>> 0x40
        float temp0_237[0x4] = _mm_shuffle_ps(zmm15, zmm9, 0xc4)
        float temp0_238[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0)
        float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xff), zmm4_1)
        float temp0_242[0x4] = _mm_add_ps(temp0_235, _mm_mul_ps(temp0_238, temp0_200))
        float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0), temp0_200)
        float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_236)
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xaa), temp0_209)
        float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_240)
        float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0x55), temp0_203)
        float temp0_251[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xff)
        var_1a8 = temp0_248
        float temp0_252[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
        float temp0_253[0x4] = _mm_add_ps(temp0_250, temp0_244)
        float temp0_254[0x4] = _mm_mul_ps(temp0_252, temp0_203)
        float temp0_255[0x4] = _mm_mul_ps(temp0_251, zmm4_1)
        float temp0_256[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
        float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_247)
        float temp0_258[0x4] = _mm_mul_ps(temp0_256, temp0_200)
        float temp0_260[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_209)
        float temp0_261[0x4] = _mm_add_ps(temp0_254, temp0_258)
        float temp0_262[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xff)
        float temp0_263[0x4] = _mm_add_ps(temp0_257, temp0_255)
        float temp0_264[0x4] = _mm_mul_ps(temp0_262, zmm4_1)
        float temp0_265[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0)
        float temp0_266[0x4] = _mm_add_ps(temp0_261, temp0_260)
        float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_200)
        int96_t var_198_2 = temp0_263[0].12
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_237, temp0_237, 0x55)
        float temp0_269[0x4] = _mm_add_ps(temp0_266, temp0_264)
        float temp0_270[0x4] = _mm_mul_ps(temp0_268, temp0_203)
        int96_t var_188_2 = temp0_269[0].12
        float temp0_271[0x4] = _mm_add_ps(temp0_270, temp0_267)
        float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xaa), temp0_209)
        float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_237, temp0_237, 0xff), zmm4_1)
        int96_t var_178_2 = _mm_add_ps(_mm_add_ps(temp0_271, temp0_273), temp0_275)[0].12
        int128_t zmm9_1
        float zmm11_1[0x4]
        int64_t zmm13_2
        zmm9_1, zmm11_1, zmm13_2 = sub_1407740e0(&var_1a8, 0x322bcc77)
        float zmm2_3[0x4] = var_1a8[0]
        float zmm0_4 = var_1a8[2]
        uint32_t temp0_279[0x4] =
            _mm_and_ps(data_143f3c4e0 ^ zmm9_1, _mm_cmpeq_ps(var_168, zmm11_1, 2))
        float zmm1_3[0x4] = var_1a8[1]
        uint32_t zmm4_2[0x4] = temp0_279 ^ data_143f3c4e0
        zmm2_3[0] = zmm2_3[0] f* zmm4_2[0]
        zmm1_3[0] = zmm1_3[0] f* zmm4_2[0]
        var_1a8[0] = zmm2_3[0]
        zmm0_4 = zmm0_4 f* zmm4_2[0]
        var_1a8[1] = zmm1_3[0]
        zmm1_3 = var_198_2:4.d
        var_1a8[2] = zmm0_4
        float temp0_280[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
        zmm1_3[0] = zmm1_3[0] * temp0_280[0]
        zmm0_4 = var_198_2:8.d * temp0_280[0]
        float zmm3_3 = var_198_2.d * temp0_280[0]
        zmm2_3 = var_188_2.d
        zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
        var_198_2:4.d = zmm1_3[0]
        zmm1_3 = var_188_2:4.d
        var_198_2:8.d = zmm0_4
        zmm1_3[0] = zmm1_3[0] f* zmm4_2[0]
        zmm0_4 = var_188_2:8.d f* zmm4_2[0]
        zmm2_3[0] = zmm2_3[0] f* zmm4_2[0]
        var_188_2:4.d = zmm1_3[0]
        var_188_2:8.d = zmm0_4
        var_198_2.d = zmm3_3
        var_188_2.d = zmm2_3[0]
        sub_14077e4a0(&var_138, &var_1a8)
        uint32_t zmm6_2[0x4] = var_138
        float zmm5_2[0x4] = data_143f3c4d0
        uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm6_2, zmm6_2)
        var_168[0] = 0x322bcc77
        float var_108_1[0x4] = zmm11_1
        zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
        uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
        zmm1_4 = _mm_rsqrt_ps(zmm4_3)
        float temp0_288[0x4] = _mm_mul_ps(zmm4_3, zmm5_2)
        float temp0_293[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), temp0_288)), 
                zmm1_4), 
            zmm1_4)
        float temp0_296[0x4] =
            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_293, temp0_293), temp0_288))
        uint32_t zmm0_5[0x4] = var_168[0]
        zmm0_5 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_5, zmm0_5, 0), zmm4_3, 2)
        float temp0_300[0x4] = _mm_add_ps(_mm_mul_ps(temp0_296, temp0_293), temp0_293)
        float temp0_301[0x4] = _mm_unpacklo_ps(var_178_2:4.d, zmm13_2)
        zmm5_2 = _mm_and_ps(_mm_mul_ps(temp0_300, zmm6_2) ^ data_143f3c4c0, zmm0_5) ^ data_143f3c4c0
        float var_118_1[0x4] =
            _mm_unpacklo_ps(_mm_unpacklo_ps(var_178_2.d, var_178_2:8.d[0].q), temp0_301[0].q)
        var_128 = zmm5_2
    
    var_1c8.b = 0
    sub_141f49090(arg1, &var_128, 0, 0, var_1c8.b)

if (sub_140cdd6a0(arg1) s< 0xf9)
    *(arg1 + 0x431) = 3

if (sub_140cdd6a0(arg1) s< 0x139)
    void* rcx_11 = arg1[0x85]
    
    if (rcx_11 == 0)
        arg1[0x88].d = 0x41f00000
        *(arg1 + 0x444) = 0x3d088889
    else
        float zmm0_6 = sub_142005cc0(rcx_11)
        arg1[0x88].d = zmm0_6
        *(arg1 + 0x444) = 1f / zmm0_6

void* result = sub_141f219e0(arg1)
__security_check_cookie(rax_1 ^ &var_1e8)
return result
