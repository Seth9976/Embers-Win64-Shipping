// 函数: sub_142680550
// 地址: 0x142680550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
int64_t* result_1 = nullptr
int32_t var_284 = 0
int32_t var_294 = 0

if (result[5].d s> 0)
    float zmm0[0x4] = data_142dc1870
    float zmm1[0x4] = data_142dc1850
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
    void* r13_1 = nullptr
    float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm1 = data_142dc1860
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm0 = data_142dc1880
    float zmm14[0x4] = 0x3ec90fdb
    float temp0_9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    int32_t var_280_1 = 0
    int32_t var_22c_1 = 0x3f800000
    void* var_248_1 = nullptr
    bool cond:4_1
    
    do
        int64_t r12_1 = result[4]
        float zmm3[0x4] = *arg6
        zmm9 = arg6[1]
        float temp0_13[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_15[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_16[0x4] = _mm_mul_ps(zmm3, temp0_13)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x29), temp0_14)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x12)
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x1a)
        float temp0_21[0x4] = _mm_mul_ps(temp0_15, temp0_19)
        zmm1 = arg6[2]
        float temp0_23[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_16, temp0_16, 1))
        float temp0_24[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_18)
        float temp0_26[0x4] = _mm_sub_ps(temp0_18, temp0_21)
        zmm3 = data_143f717b0
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm1)
        float temp0_28[0x4] = _mm_mul_ps(temp0_24, temp0_26)
        float temp0_29[0x4] = _mm_sub_ps(zmm3, temp0_23)
        zmm3[0].q = zmm9 u>> 0x40
        float temp0_30[0x4] = _mm_shuffle_ps(zmm9, zmm3, 0xc4)
        float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_29, zmm1), data_143f717c0)
        float temp0_33[0x4] = _mm_shuffle_ps(temp0_28, zmm2, 0x32)
        float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm2, 0), temp0_33, 0x82)
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_27, zmm2, 0x31)
        float temp0_37[0x4] = _mm_shuffle_ps(temp0_28, zmm2, 0x10)
        float temp0_38[0x4] = _mm_shuffle_ps(temp0_27, temp0_28, 0x12)
        _mm_shuffle_ps(temp0_37, temp0_36, 0x88)
        float temp0_40[0x4] = _mm_shuffle_ps(temp0_38, zmm2, 0xe8)
        float var_1b8[0x4]
        float zmm8_1[0x4] = sub_140ade170(r13_1 + 0x3c + r12_1, &var_1b8)
        float zmm3_1[0x4] = var_1b8
        float zmm0_1[0x4] = *(r12_1 + r13_1 + 0x38)
        float zmm7_1[0x4] = *(r12_1 + r13_1 + 0x30)
        float zmm5_1[0x4] = data_14399f668
        float temp0_41[0x4] = _mm_unpacklo_ps(*(r12_1 + r13_1 + 0x34), 0)
        float temp0_42[0x4] = _mm_unpacklo_ps(zmm7_1, zmm0_1[0].q)
        zmm0_1 = data_14399f670
        float temp0_43[0x4] = _mm_unpacklo_ps(temp0_42, temp0_41[0].q)
        float temp0_44[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
        float temp0_46[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm5_1, zmm0_1[0].q), temp0_44[0].q)
        float temp0_47[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
        float temp0_48[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x29)
        float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm3_1)
        float temp0_51[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
        float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0x12), temp0_51)
        float temp0_54[0x4] = _mm_mul_ps(temp0_49, temp0_48)
        float temp0_56[0x4] = _mm_mul_ps(_mm_add_ps(temp0_53, temp0_54), temp0_46)
        float temp0_57[0x4] = _mm_sub_ps(temp0_54, temp0_53)
        float temp0_58[0x4] = _mm_shuffle_ps(temp0_46, temp0_46, 0xc9)
        float zmm2_1[0x4] = data_143f717b0
        float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0x1a), 
            _mm_shuffle_ps(temp0_50, temp0_50, 1))
        float temp0_62[0x4] = _mm_mul_ps(temp0_58, temp0_57)
        zmm2_1[0].q = temp0_43 u>> 0x40
        float temp0_63[0x4] = _mm_shuffle_ps(temp0_43, zmm2_1, 0xc4)
        zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm2_1, temp0_61), temp0_46), 
            data_143f717c0)
        float temp0_67[0x4] = _mm_shuffle_ps(temp0_62, zmm1, 0x32)
        float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, zmm1, 0), temp0_67, 0x82)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_56, zmm1, 0x31)
        float temp0_72[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_62, zmm1, 0x10), temp0_70, 0x88)
        float temp0_73[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x55), zmm8_1)
        float temp0_76[0x4] = _mm_mul_ps(temp0_73, temp0_35)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_69, temp0_69, 0x55)
        float temp0_79[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, temp0_62, 0x12), zmm1, 0xe8)
        float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xaa), temp0_40)
        float temp0_82[0x4] = _mm_mul_ps(temp0_77, zmm8_1)
        float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_69, temp0_69, 0xff), temp0_30)
        float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_76)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0), temp0_35)
        float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_81)
        float temp0_89[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xaa)
        float temp0_90[0x4] = _mm_add_ps(temp0_75, temp0_87)
        float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_40)
        float temp0_92[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xff)
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_79, temp0_79, 0)
        float temp0_94[0x4] = _mm_add_ps(temp0_88, temp0_84)
        float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_35)
        float temp0_96[0x4] = _mm_add_ps(temp0_90, temp0_91)
        float temp0_97[0x4] = _mm_mul_ps(temp0_92, temp0_30)
        float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xaa), temp0_40)
        float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_97)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0x55), zmm8_1)
        float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0xff), temp0_30)
        float temp0_105[0x4] = _mm_add_ps(temp0_102, temp0_95)
        float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_35)
        float temp0_108[0x4] = _mm_add_ps(temp0_105, temp0_99)
        float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_40)
        float temp0_111[0x4] = _mm_add_ps(temp0_108, temp0_104)
        float temp0_115[0x4] = _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), zmm8_1), temp0_107), 
            temp0_110)
        float temp0_116[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
        int32_t temp0_117
        int32_t temp1_1
        temp0_117:temp1_1 = muls.dp.d(0x55555556, arg2[1].d)
        float temp0_118[0x4] = _mm_mul_ps(temp0_116, temp0_30)
        int64_t r14_1 = sx.q(arg4[1].d)
        float temp0_119[0x4] = _mm_add_ps(temp0_115, temp0_118)
        int32_t r15_4 = (temp0_117 u>> 0x1f) + temp0_117 + arg7
        int32_t rax_1 = (r14_1 + 1).d
        arg4[1].d = rax_1
        
        if (rax_1 s> *(arg4 + 0xc))
            sub_1405a4cf0(arg4)
        
        *(*arg4 + (r14_1 << 2)) = r15_4
        int32_t r14_2 = 0
        
        if (var_284 s< 0)
            int32_t var_288_1 = 0
            
            if (var_284 != 0)
                sub_140638cc0(&result_1, 0)
                r14_2 = var_288_1
        
        int32_t var_288_2 = r14_2 + 0xa
        
        if (r14_2 + 0xa s> var_284)
            sub_140638a00(&result_1)
        
        int64_t* result_3 = result_1
        memset(result_3 + sx.q(r14_2) * 0xc, 0, 0x78)
        float zmm6_1[0x4]
        float zmm13[0x4]
        
        for (int32_t i = 0; i s< 0xa; )
            *(r12_1 + r13_1 + 0x4c)
            int32_t i_3 = i
            
            if (i s> 4)
                i_3 = i - 1
            
            float temp0_120[0x4] = _mm_cvtepi32_ps(zx.o(i_3))
            temp0_120[0] = temp0_120[0] * zmm14[0]
            float zmm12[0x4]
            zmm0, zmm6_1, zmm7_1, zmm12, zmm13, zmm14, zmm15 = __libm_sse2_sincosf_(temp0_120)
            zmm2 = zmm0
            zmm6_1[0] = zmm6_1[0] * zmm7_1[0]
            i += 1
            zmm2[0] = zmm2[0] f* *(r12_1 + r13_1 + 0x48)
            float temp0_121[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
            temp0_121[0] = temp0_121[0] f* *(r12_1 + r13_1 + 0x48)
            temp0_121[0] = temp0_121[0] + zmm6_1[0]
            float var_278_1 = temp0_121[0]
            zmm0 = zx.o(var_280_1.q)
            float temp0_122[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe1)
            temp0_122[0] = zmm2[0]
            float temp0_123[0x4] = _mm_shuffle_ps(temp0_122, temp0_122, 0xe1)
            *result_3 = temp0_123.q
            result_3[1].d = var_278_1
            result_3 += 0xc
            var_280_1.q = temp0_123.q
        
        int64_t* result_2 = result_1
        
        for (int32_t i_1 = 0; i_1 s< 0x11; i_1 += 1)
            zmm1 = zx.o(0)
            int32_t var_21c_1 = 0
            zmm1[0] = float.s(i_1)
            zmm1[0] = zmm1[0] * 22.5f
            float temp0_126[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, zx.o(0)[0].q)[0].q), data_143f718f0)
            zmm2 = data_143f718a0
            float temp0_131[0x4] = _mm_sub_ps(temp0_126, 
                __mulps_xmmps_memps(
                    _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_126, 
                        data_143f718e0))), 
                    data_143f718d0))
            float temp0_133[0x4] =
                _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_131, data_143f71820), 1)
            zmm0 = _mm_and_ps(
                _mm_sub_ps(
                    __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_131, data_143f718c0), 
                        data_143f718b0), 
                    temp0_131) ^ temp0_131, 
                temp0_133) ^ temp0_131
            float temp0_138[0x4] = _mm_mul_ps(zmm0, zmm0)
            float temp0_139[0x4] = _mm_mul_ps(temp0_7, temp0_138)
            float temp0_140[0x4] = __mulps_xmmps_memps(temp0_138, temp0_1)
            float temp0_141[0x4] = __addps_xmmps_memps(temp0_139, temp0_8)
            float temp0_142[0x4] = __addps_xmmps_memps(temp0_140, temp0_2)
            float temp0_143[0x4] = _mm_mul_ps(temp0_141, temp0_138)
            float temp0_144[0x4] = _mm_mul_ps(temp0_142, temp0_138)
            float temp0_145[0x4] = __addps_xmmps_memps(temp0_143, temp0_9)
            float temp0_146[0x4] = __addps_xmmps_memps(temp0_144, temp0_3)
            float temp0_147[0x4] = _mm_mul_ps(temp0_145, temp0_138)
            float temp0_148[0x4] = _mm_mul_ps(temp0_146, temp0_138)
            float temp0_149[0x4] = __addps_xmmps_memps(temp0_147, temp0_10)
            float temp0_150[0x4] = __addps_xmmps_memps(temp0_148, temp0_4)
            float temp0_151[0x4] = _mm_mul_ps(temp0_149, temp0_138)
            float temp0_152[0x4] = _mm_mul_ps(temp0_150, temp0_138)
            float temp0_153[0x4] = __addps_xmmps_memps(temp0_151, temp0_11)
            float temp0_154[0x4] = __addps_xmmps_memps(temp0_152, temp0_5)
            float temp0_155[0x4] = _mm_mul_ps(temp0_153, temp0_138)
            float temp0_156[0x4] = _mm_mul_ps(temp0_154, temp0_138)
            zmm1 = data_143f71880 ^ data_143f717b0
            float temp0_157[0x4] = __addps_xmmps_memps(temp0_155, temp0_12)
            float temp0_158[0x4] = __addps_xmmps_memps(temp0_156, temp0_6)
            float temp0_160[0x4] =
                _mm_mul_ps(temp0_157, _mm_and_ps(zmm1, temp0_133) ^ data_143f717b0)
            float temp0_161[0x4] = _mm_mul_ps(temp0_158, zmm0)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0x55)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xaa)
            float temp0_164[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xaa)
            temp0_164[0] = temp0_164[0] * temp0_161[0]
            float temp0_165[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0x55)
            temp0_163[0] = temp0_163[0] * temp0_165[0]
            temp0_162[0] = temp0_162[0] * temp0_160[0]
            temp0_164[0] = temp0_164[0] * temp0_162[0]
            temp0_164[0] = temp0_164[0] * temp0_165[0]
            temp0_164[0] = temp0_164[0] - temp0_163[0]
            temp0_160[0] = temp0_160[0] * temp0_165[0]
            temp0_163[0] = temp0_163[0] * temp0_162[0]
            temp0_164[0] = temp0_164[0] + temp0_163[0]
            zmm13 = data_143dbb200
            temp0_160[0] = temp0_160[0] * temp0_164[0]
            int32_t var_20c_1 = 0
            temp0_163[0] = temp0_163[0] * temp0_161[0]
            int32_t var_1fc_1 = 0
            zmm6_1 = temp0_160 ^ data_142d3f780
            temp0_164[0] = temp0_164[0] * temp0_165[0]
            int32_t var_1ec_1 = 0x3f800000
            temp0_163[0] = temp0_163[0] * temp0_160[0]
            zmm9 = data_143dbb1fc
            temp0_163[0] = temp0_163[0] * temp0_165[0]
            zmm3 = data_143dbb1f8
            temp0_163[0] = temp0_163[0] * temp0_162[0]
            temp0_162[0] = temp0_162[0] * temp0_164[0]
            temp0_163[0] = temp0_163[0] + temp0_164[0]
            float var_228[0x4]
            var_228[0] = temp0_162[0]
            float temp0_166[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
            temp0_162[0] = temp0_162[0] - temp0_163[0]
            temp0_166[0] = temp0_160[0]
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_166, temp0_166, 0xc6)
            zmm10 = temp0_163 ^ data_142d3f780
            temp0_167[0] = temp0_161[0]
            float temp0_168[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xc9)
            var_228 = temp0_168
            float temp0_169[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0x55)
            float temp0_170[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0)
            float temp0_172[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_168, temp0_168, 0xaa), temp0_111)
            float temp0_174[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_168, temp0_168, 0xff), temp0_119)
            float temp0_175[0x4] = _mm_mul_ps(temp0_170, zmm15)
            float temp0_179[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_169, temp0_100), temp0_175), temp0_172), 
                temp0_174)
            float var_218[0x4]
            var_218[0] = temp0_164[0]
            float temp0_180[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
            temp0_180[0] = temp0_164[0]
            float temp0_181[0x4] = _mm_shuffle_ps(temp0_180, temp0_180, 0xc6)
            temp0_181[0] = zmm6_1[0]
            float temp0_182[0x4] = _mm_shuffle_ps(temp0_181, temp0_181, 0xc9)
            var_218 = temp0_182
            float temp0_183[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0x55)
            float temp0_184[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0)
            float temp0_185[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xaa)
            float temp0_187[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xff), temp0_119)
            float temp0_188[0x4] = _mm_mul_ps(temp0_183, temp0_100)
            float temp0_189[0x4] = _mm_mul_ps(temp0_184, temp0_94)
            float temp0_190[0x4] = _mm_mul_ps(temp0_185, temp0_111)
            float temp0_193[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_188, temp0_189), temp0_190), temp0_187)
            float var_208[0x4]
            var_208[0] = zmm10[0]
            float temp0_194[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
            temp0_194[0] = temp0_162[0]
            float temp0_195[0x4] = _mm_shuffle_ps(temp0_194, temp0_194, 0xc6)
            temp0_195[0] = temp0_163[0]
            float temp0_196[0x4] = _mm_shuffle_ps(temp0_195, temp0_195, 0xc9)
            var_208 = temp0_196
            float temp0_198[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0x55), temp0_100)
            float temp0_200[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0), temp0_94)
            void* r14_3 = &result_2[1]
            int64_t j_1 = 0xa
            float temp0_201[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0xaa)
            float temp0_203[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xff), temp0_119)
            float temp0_207[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(temp0_198, temp0_200), _mm_mul_ps(temp0_201, temp0_111)), 
                temp0_203)
            float var_1f8[0x4]
            var_1f8[0] = zmm3[0]
            float temp0_208[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
            temp0_208[0] = zmm9[0]
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xc6)
            temp0_209[0] = zmm13[0]
            float temp0_210[0x4] = _mm_shuffle_ps(temp0_209, temp0_209, 0xc9)
            var_1f8 = temp0_210
            float temp0_211[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0x55)
            float temp0_212[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0)
            float temp0_213[0x4] = _mm_mul_ps(temp0_211, temp0_100)
            float temp0_214[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xaa)
            float temp0_215[0x4] = _mm_mul_ps(temp0_212, temp0_94)
            float temp0_216[0x4] = _mm_mul_ps(temp0_214, temp0_111)
            float temp0_217[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xff)
            float temp0_218[0x4] = _mm_add_ps(temp0_213, temp0_215)
            float temp0_219[0x4] = _mm_mul_ps(temp0_217, temp0_119)
            float temp0_221[0x4] = _mm_add_ps(_mm_add_ps(temp0_218, temp0_216), temp0_219)
            int64_t j
            
            do
                bool cond:2_1 = (*arg5)[6].b == 0
                zmm1 = *(r14_3 - 4)
                float var_238[0x4]
                var_238[0] = (*(r14_3 - 8))[0]
                zmm2 = *r14_3
                float temp0_222[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                temp0_222[0] = zmm1[0]
                int64_t var_1d8_1 = 0
                float temp0_223[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xc6)
                temp0_223[0] = zmm2[0]
                int32_t var_1d0_1 = 0
                float temp0_224[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xc9)
                var_238 = temp0_224
                float temp0_225[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0xff)
                float temp0_226[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0xaa)
                float temp0_227[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0x55)
                float temp0_228[0x4] = _mm_mul_ps(temp0_225, temp0_221)
                float temp0_230[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_224, temp0_224, 0), temp0_179)
                float temp0_231[0x4] = _mm_mul_ps(temp0_226, temp0_207)
                float temp0_232[0x4] = _mm_mul_ps(temp0_227, temp0_193)
                float temp0_235[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_228, temp0_231), _mm_add_ps(temp0_232, temp0_230))
                float var_270_1 = temp0_235[0]
                float temp0_236[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
                float temp0_237[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xaa)
                float var_26c_1 = temp0_236[0]
                float var_268_1 = temp0_237[0]
                
                if (cond:2_1)
                    zmm1 = zx.o(var_270_1.q)
                    *(arg5 + 0xc) = zmm1.q
                    *arg5 = zmm1.q
                    (*arg5)[5] = var_268_1
                    (*arg5)[2] = var_268_1
                    (*arg5)[6].b = 1
                else
                    zmm1 = (*arg5)[1]
                    float temp0_238[0x4] = _mm_min_ss((*arg5)[0], temp0_235[0])
                    float temp0_239[0x4] = _mm_min_ss(zmm1[0], temp0_236[0])
                    *arg5 = temp0_238[0]
                    float temp0_240[0x4] = __minss_xmmss_memss(temp0_237[0], (*arg5)[2])
                    (*arg5)[1] = temp0_239[0]
                    float temp0_241[0x4] = _mm_max_ss((*arg5)[3][0], temp0_235[0])
                    (*arg5)[2] = temp0_240[0]
                    float temp0_242[0x4] = _mm_max_ss(arg5[1][0][0], temp0_236[0])
                    (*arg5)[3] = temp0_241[0]
                    float temp0_243[0x4] = _mm_max_ss((*arg5)[5][0], temp0_237[0])
                    arg5[1][0] = temp0_242[0]
                    (*arg5)[5] = temp0_243[0]
                
                int64_t r15_5 = sx.q(arg2[1].d)
                int32_t rax_9 = (r15_5 + 1).d
                arg2[1].d = rax_9
                
                if (rax_9 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                *(*arg2 + (r15_5 << 2)) = temp0_235[0]
                int64_t r15_6 = sx.q(arg2[1].d)
                int32_t rax_11 = (r15_6 + 1).d
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                *(*arg2 + (r15_6 << 2)) = temp0_236[0]
                int64_t r15_7 = sx.q(arg2[1].d)
                int32_t rax_13 = (r15_7 + 1).d
                arg2[1].d = rax_13
                
                if (rax_13 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                r14_3 += 0xc
                *(*arg2 + (r15_7 << 2)) = temp0_237[0]
                j = j_1
                j_1 -= 1
            while (j != 1)
            zmm15 = temp0_94
        
        int32_t rax_16 = r15_4 + 1
        int32_t var_298_2 = rax_16
        temp0_111[0].q = 0x10
        
        do
            int32_t r14_4 = rax_16
            int64_t i_4 = 9
            int64_t i_2
            
            do
                int64_t r15_8 = sx.q(arg3[1].d)
                int32_t rax_17 = (r15_8 + 1).d
                arg3[1].d = rax_17
                
                if (rax_17 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_8 << 2)) = r14_4 - 1
                int64_t r15_9 = sx.q(arg3[1].d)
                int32_t rax_19 = (r15_9 + 1).d
                arg3[1].d = rax_19
                
                if (rax_19 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_9 << 2)) = r14_4 + 9
                int64_t r15_10 = sx.q(arg3[1].d)
                int32_t rax_21 = (r15_10 + 1).d
                arg3[1].d = rax_21
                
                if (rax_21 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_10 << 2)) = r14_4
                int64_t r15_11 = sx.q(arg3[1].d)
                int32_t rax_23 = (r15_11 + 1).d
                arg3[1].d = rax_23
                
                if (rax_23 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_11 << 2)) = r14_4 + 9
                int64_t r15_12 = sx.q(arg3[1].d)
                int32_t rax_25 = (r15_12 + 1).d
                arg3[1].d = rax_25
                
                if (rax_25 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_12 << 2)) = r14_4 + 0xa
                int64_t r15_13 = sx.q(arg3[1].d)
                int32_t rax_27 = (r15_13 + 1).d
                arg3[1].d = rax_27
                
                if (rax_27 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_13 << 2)) = r14_4
                r14_4 += 1
                i_2 = i_4
                i_4 -= 1
            while (i_2 != 1)
            rax_16 = var_298_2 + 0xa
            temp0_111[0].q -= 1
            var_298_2 = rax_16
        while (temp0_111[0].q != 1)
        
        r13_1 = var_248_1 + 0x50
        cond:4_1 = var_294 + 1 s< arg1[5].d
        zmm14 = 0x3ec90fdb
        var_294 += 1
        result = arg1
        var_248_1 = r13_1
    while (cond:4_1)
    result = result_1
    
    if (result != 0)
        return sub_140a74f90(result)

return result
