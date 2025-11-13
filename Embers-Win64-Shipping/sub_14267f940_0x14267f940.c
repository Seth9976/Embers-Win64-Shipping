// 函数: sub_14267f940
// 地址: 0x14267f940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* result = arg1
int32_t r8 = 0
int32_t var_264 = 0
void* var_270 = nullptr
int32_t i_1 = 0

if (result[1].d s> 0)
    float zmm0[0x4] = data_142dc1870
    float zmm1[0x4] = data_142dc1850
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
    int64_t r13_1 = 0
    float temp0_4[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    float temp0_5[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    zmm1 = data_142dc1860
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm8[0x4] = zx.o(0)
    float zmm9[0x4]
    float var_78_1[0x4] = zmm9
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float temp0_6[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float temp0_7[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    zmm0 = data_142dc1880
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float temp0_9[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
    float temp0_10[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
    float temp0_11[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    float zmm14[0x4] = 0x3eb2b8c3
    float temp0_12[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    int32_t var_21c_1 = 0x3f800000
    int64_t var_238_1 = 0
    int32_t i
    
    do
        int64_t r12_1 = *result
        zmm7 = data_143f717b0
        zmm6 = data_143f717c0
        zmm9 = *(r12_1 + r13_1 + 0x30)
        zmm1 = *arg6
        zmm11 = arg6[1]
        float temp0_13[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_14[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_15[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_16[0x4] = _mm_mul_ps(zmm1, temp0_13)
        float temp0_18[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0x29), temp0_14)
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x12)
        float temp0_20[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x1a)
        float temp0_21[0x4] = _mm_mul_ps(temp0_19, temp0_15)
        zmm1 = arg6[2]
        float temp0_23[0x4] = _mm_add_ps(temp0_20, _mm_shuffle_ps(temp0_16, temp0_16, 1))
        float temp0_24[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_25[0x4] = _mm_add_ps(temp0_21, temp0_18)
        float temp0_26[0x4] = _mm_sub_ps(temp0_18, temp0_21)
        float temp0_27[0x4] = _mm_mul_ps(temp0_25, zmm1)
        float temp0_28[0x4] = _mm_mul_ps(temp0_24, temp0_26)
        float zmm2[0x4] = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_23), zmm1), zmm6)
        float temp0_32[0x4] = _mm_shuffle_ps(temp0_28, zmm2, 0x32)
        float temp0_34[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm2, 0), temp0_32, 0x82)
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_27, zmm2, 0x31)
        float temp0_37[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_28, zmm2, 0x10), temp0_35, 0x88)
        float temp0_39[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, temp0_28, 0x12), zmm2, 0xe8)
        float zmm5[0x4] = _mm_and_ps(zmm7, zmm6)
        float temp0_41[0x4] = _mm_unpacklo_ps(*(r12_1 + r13_1 + 0x34), 0)
        zmm7[0].q = zmm11 u>> 0x40
        float temp0_42[0x4] = _mm_shuffle_ps(zmm11, zmm7, 0xc4)
        zmm7[0].q = zmm8 u>> 0x40
        float temp0_43[0x4] = _mm_shuffle_ps(zx.o(0), zmm7, 0xc4)
        float temp0_44[0x4] = _mm_unpacklo_ps(zmm9, (*(r12_1 + r13_1 + 0x38))[0].q)
        float temp0_45[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 4)
        float temp0_46[0x4] = _mm_unpacklo_ps(temp0_44, temp0_41[0].q)
        float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_43)
        float temp0_48[0x4] = _mm_mul_ps(temp0_47, temp0_43)
        float temp0_49[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0x29)
        float temp0_50[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xff)
        float temp0_51[0x4] = _mm_mul_ps(temp0_49, temp0_45)
        float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0x12), temp0_50)
        float temp0_54[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_55[0x4] = _mm_add_ps(temp0_53, temp0_51)
        float temp0_56[0x4] = _mm_sub_ps(temp0_51, temp0_53)
        float temp0_57[0x4] = _mm_mul_ps(temp0_55, zmm5)
        float temp0_58[0x4] = _mm_mul_ps(temp0_54, temp0_56)
        float temp0_61[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1a), 
            _mm_shuffle_ps(temp0_48, temp0_48, 1))
        zmm7[0].q = temp0_46 u>> 0x40
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_46, zmm7, 0xc4)
        zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm7, temp0_61), zmm5), zmm6)
        float temp0_68[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_57, zmm1, 0), 
            _mm_shuffle_ps(temp0_58, zmm1, 0x32), 0x82)
        float temp0_69[0x4] = _mm_shuffle_ps(temp0_57, zmm1, 0x31)
        float temp0_70[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
        float temp0_72[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_58, zmm1, 0x10), temp0_69, 0x88)
        float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0), temp0_34)
        float temp0_76[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_57, temp0_58, 0x12), zmm1, 0xe8)
        float temp0_77[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0xaa)
        float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xff), temp0_42)
        float temp0_80[0x4] = _mm_mul_ps(temp0_77, temp0_39)
        float temp0_82[0x4] = _mm_add_ps(_mm_mul_ps(temp0_70, temp0_37), temp0_74)
        float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0), temp0_34)
        float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_80)
        float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_39)
        float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_79)
        float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0x55), temp0_37)
        float temp0_92[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xff), temp0_42)
        float temp0_93[0x4] = _mm_add_ps(temp0_90, temp0_84)
        float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0), temp0_34)
        float temp0_96[0x4] = _mm_add_ps(temp0_93, temp0_87)
        float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xaa), temp0_39)
        float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_92)
        float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x55), temp0_37)
        float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0xff), temp0_42)
        float temp0_104[0x4] = _mm_add_ps(temp0_101, temp0_95)
        float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_34)
        float temp0_107[0x4] = _mm_add_ps(temp0_104, temp0_98)
        float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_39)
        float temp0_110[0x4] = _mm_add_ps(temp0_107, temp0_103)
        float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x55), temp0_37)
        float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_42)
        float temp0_117[0x4] =
            _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_112, temp0_106), temp0_109), temp0_114)
        int64_t r14_1 = sx.q(arg4[1].d)
        int32_t temp0_118
        int32_t temp1_1
        temp0_118:temp1_1 = muls.dp.d(0x55555556, arg2[1].d)
        int32_t rax_1 = (r14_1 + 1).d
        arg4[1].d = rax_1
        int32_t r15_4 = (temp0_118 u>> 0x1f) + temp0_118 + arg7
        
        if (rax_1 s> *(arg4 + 0xc))
            sub_1405a4cf0(arg4)
            r8 = var_264
            arg4 = arg_20
        
        *(*arg4 + (r14_1 << 2)) = r15_4
        int32_t r14_2 = 0
        
        if (r8 s< 0)
            int32_t var_268_1 = 0
            
            if (r8 != 0)
                sub_140638cc0(&var_270, 0)
                r8 = var_264
                r14_2 = var_268_1
        
        int32_t var_268_2 = r14_2 + 0xa
        
        if (r14_2 + 0xa s> r8)
            sub_140638a00(&var_270)
        
        void* r14_3 = var_270
        memset(r14_3 + sx.q(r14_2) * 0xc, 0, 0x78)
        int32_t j = 0
        void* r14_4 = r14_3 + 8
        
        do
            float temp0_119[0x4] = _mm_cvtepi32_ps(zx.o(j))
            *(r14_4 - 8) = 0
            temp0_119[0] = temp0_119[0] * zmm14[0]
            zmm0, zmm14, zmm15 = __libm_sse2_sincosf_(temp0_119)
            r14_4 += 0xc
            zmm0[0] = zmm0[0] f* *(r12_1 + r13_1 + 0x3c)
            j += 1
            float temp0_120[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
            *(r14_4 - 0x10) = zmm0[0]
            temp0_120[0] = temp0_120[0] f* *(r12_1 + r13_1 + 0x3c)
            *(r14_4 - 0xc) = temp0_120[0]
        while (j s< 0xa)
        
        for (int32_t j_1 = 0; j_1 s< 0x11; j_1 += 1)
            int32_t var_20c_1 = 0
            zmm1 = zx.o(0)
            zmm1[0] = float.s(j_1)
            zmm1[0] = zmm1[0] * 22.5f
            float temp0_123[0x4] = __mulps_xmmps_memps(
                _mm_unpacklo_ps(zx.o(0), _mm_unpacklo_ps(zmm1, 0)[0].q), data_143f718f0)
            zmm2 = data_143f718a0
            float temp0_128[0x4] = _mm_sub_ps(temp0_123, 
                __mulps_xmmps_memps(
                    _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(temp0_123, 
                        data_143f718e0))), 
                    data_143f718d0))
            float temp0_130[0x4] =
                _mm_cmpeq_ps(zmm2, __andps_xmmxud_memxud(temp0_128, data_143f71820), 1)
            zmm0 = _mm_and_ps(
                _mm_sub_ps(
                    __orps_xmmxud_memxud(__andps_xmmxud_memxud(temp0_128, data_143f718c0), 
                        data_143f718b0), 
                    temp0_128) ^ temp0_128, 
                temp0_130) ^ temp0_128
            float temp0_135[0x4] = _mm_mul_ps(zmm0, zmm0)
            float temp0_136[0x4] = __mulps_xmmps_memps(temp0_135, temp0_1)
            float temp0_137[0x4] = __mulps_xmmps_memps(temp0_135, temp0_7)
            float temp0_138[0x4] = __addps_xmmps_memps(temp0_136, temp0_2)
            float temp0_139[0x4] = __addps_xmmps_memps(temp0_137, temp0_8)
            float temp0_140[0x4] = _mm_mul_ps(temp0_138, temp0_135)
            float temp0_141[0x4] = _mm_mul_ps(temp0_139, temp0_135)
            float temp0_142[0x4] = __addps_xmmps_memps(temp0_140, temp0_3)
            float temp0_143[0x4] = __addps_xmmps_memps(temp0_141, temp0_9)
            float temp0_144[0x4] = _mm_mul_ps(temp0_142, temp0_135)
            float temp0_145[0x4] = _mm_mul_ps(temp0_143, temp0_135)
            float temp0_146[0x4] = __addps_xmmps_memps(temp0_144, temp0_4)
            float temp0_147[0x4] = __addps_xmmps_memps(temp0_145, temp0_10)
            float temp0_148[0x4] = _mm_mul_ps(temp0_146, temp0_135)
            float temp0_149[0x4] = _mm_mul_ps(temp0_147, temp0_135)
            float temp0_150[0x4] = __addps_xmmps_memps(temp0_148, temp0_5)
            float temp0_151[0x4] = __addps_xmmps_memps(temp0_149, temp0_11)
            float temp0_152[0x4] = _mm_mul_ps(temp0_150, temp0_135)
            float temp0_153[0x4] = _mm_mul_ps(temp0_151, temp0_135)
            zmm1 = data_143f71880 ^ data_143f717b0
            float temp0_154[0x4] = __addps_xmmps_memps(temp0_152, temp0_6)
            float temp0_155[0x4] = __addps_xmmps_memps(temp0_153, temp0_12)
            zmm1 = _mm_and_ps(zmm1, temp0_130) ^ data_143f717b0
            float temp0_157[0x4] = _mm_mul_ps(temp0_154, zmm0)
            float temp0_158[0x4] = _mm_mul_ps(temp0_155, zmm1)
            float temp0_159[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0x55)
            float temp0_160[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xaa)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0xaa)
            temp0_160[0] = temp0_160[0] * temp0_157[0]
            temp0_161[0] = temp0_161[0] * temp0_159[0]
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_158, temp0_158, 0x55)
            temp0_158[0] = temp0_158[0] * temp0_159[0]
            temp0_160[0] = temp0_160[0] * temp0_162[0]
            temp0_160[0] = temp0_160[0] * temp0_159[0]
            temp0_160[0] = temp0_160[0] - temp0_161[0]
            temp0_162[0] = temp0_162[0] * temp0_158[0]
            temp0_161[0] = temp0_161[0] * temp0_162[0]
            temp0_160[0] = temp0_160[0] + temp0_161[0]
            zmm13 = data_143dbb200
            temp0_158[0] = temp0_158[0] * temp0_160[0]
            int32_t var_1fc_1 = 0
            temp0_161[0] = temp0_161[0] * temp0_157[0]
            int32_t var_1ec_1 = 0
            zmm6 = temp0_158 ^ data_142d3f780
            temp0_160[0] = temp0_160[0] * temp0_159[0]
            int32_t var_1dc_1 = 0x3f800000
            temp0_161[0] = temp0_161[0] * temp0_158[0]
            zmm9 = data_143dbb1fc
            temp0_161[0] = temp0_161[0] * temp0_159[0]
            float zmm3[0x4] = data_143dbb1f8
            temp0_161[0] = temp0_161[0] * temp0_162[0]
            temp0_162[0] = temp0_162[0] * temp0_160[0]
            temp0_161[0] = temp0_161[0] + temp0_160[0]
            float var_218[0x4]
            var_218[0] = temp0_162[0]
            float temp0_163[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
            temp0_162[0] = temp0_162[0] - temp0_161[0]
            temp0_163[0] = temp0_158[0]
            float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc6)
            zmm10 = temp0_161 ^ data_142d3f780
            temp0_164[0] = temp0_157[0]
            float temp0_165[0x4] = _mm_shuffle_ps(temp0_164, temp0_164, 0xc9)
            var_218 = temp0_165
            float temp0_166[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0x55)
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0)
            float temp0_169[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_165, temp0_165, 0xaa), temp0_110)
            float temp0_171[0x4] =
                __mulps_xmmps_memps(_mm_shuffle_ps(temp0_165, temp0_165, 0xff), temp0_117)
            float temp0_172[0x4] = _mm_mul_ps(temp0_167, zmm15)
            float temp0_176[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_166, temp0_99), temp0_172), temp0_169), 
                temp0_171)
            float var_208[0x4]
            var_208[0] = temp0_160[0]
            float temp0_177[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
            temp0_177[0] = temp0_160[0]
            float temp0_178[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xc6)
            temp0_178[0] = zmm6[0]
            float temp0_179[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xc9)
            var_208 = temp0_179
            float temp0_180[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0x55)
            float temp0_181[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0)
            float temp0_182[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xaa)
            float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0xff), temp0_117)
            float temp0_185[0x4] = _mm_mul_ps(temp0_180, temp0_99)
            float temp0_186[0x4] = _mm_mul_ps(temp0_181, temp0_88)
            float temp0_187[0x4] = _mm_mul_ps(temp0_182, temp0_110)
            float temp0_190[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_185, temp0_186), temp0_187), temp0_184)
            float var_1f8[0x4]
            var_1f8[0] = zmm10[0]
            float temp0_191[0x4] = _mm_shuffle_ps(var_1f8, var_1f8, 0xe1)
            temp0_191[0] = temp0_162[0]
            float temp0_192[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xc6)
            temp0_192[0] = temp0_161[0]
            float temp0_193[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xc9)
            var_1f8 = temp0_193
            float temp0_195[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_193, temp0_193, 0x55), temp0_99)
            float temp0_197[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_193, temp0_193, 0), temp0_88)
            void* r14_5 = r14_3 + 8
            int64_t k_2 = 0xa
            float temp0_198[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0xaa)
            float temp0_200[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_193, temp0_193, 0xff), temp0_117)
            float temp0_204[0x4] = _mm_add_ps(
                _mm_add_ps(_mm_add_ps(temp0_195, temp0_197), _mm_mul_ps(temp0_198, temp0_110)), 
                temp0_200)
            float var_1e8[0x4]
            var_1e8[0] = zmm3[0]
            float temp0_205[0x4] = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
            temp0_205[0] = zmm9[0]
            float temp0_206[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0xc6)
            temp0_206[0] = zmm13[0]
            float temp0_207[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xc9)
            var_1e8 = temp0_207
            float temp0_208[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0x55)
            float temp0_209[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0)
            float temp0_210[0x4] = _mm_mul_ps(temp0_208, temp0_99)
            float temp0_211[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xaa)
            float temp0_212[0x4] = _mm_mul_ps(temp0_209, temp0_88)
            float temp0_213[0x4] = _mm_mul_ps(temp0_211, temp0_110)
            float temp0_214[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xff)
            float temp0_215[0x4] = _mm_add_ps(temp0_210, temp0_212)
            float temp0_216[0x4] = _mm_mul_ps(temp0_214, temp0_117)
            float temp0_218[0x4] = _mm_add_ps(_mm_add_ps(temp0_215, temp0_213), temp0_216)
            int64_t k
            
            do
                bool cond:1_1 = (*arg5)[6].b == 0
                zmm1 = *(r14_5 - 4)
                float var_228[0x4]
                var_228[0] = (*(r14_5 - 8))[0]
                zmm2 = *r14_5
                float temp0_219[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                temp0_219[0] = zmm1[0]
                int64_t var_258_2 = 0
                float temp0_220[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xc6)
                temp0_220[0] = zmm2[0]
                int32_t var_250_1 = 0
                float temp0_221[0x4] = _mm_shuffle_ps(temp0_220, temp0_220, 0xc9)
                var_228 = temp0_221
                float temp0_222[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0xff)
                float temp0_223[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0xaa)
                float temp0_224[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0x55)
                float temp0_225[0x4] = _mm_mul_ps(temp0_222, temp0_218)
                float temp0_227[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_221, temp0_221, 0), temp0_176)
                float temp0_228[0x4] = _mm_mul_ps(temp0_223, temp0_204)
                float temp0_229[0x4] = _mm_mul_ps(temp0_224, temp0_190)
                float temp0_232[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_225, temp0_228), _mm_add_ps(temp0_229, temp0_227))
                float var_248_1 = temp0_232[0]
                float temp0_233[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
                float temp0_234[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0xaa)
                float var_244_1 = temp0_233[0]
                float var_240_1 = temp0_234[0]
                
                if (cond:1_1)
                    zmm1 = zx.o(var_248_1.q)
                    *(arg5 + 0xc) = zmm1.q
                    *arg5 = zmm1.q
                    (*arg5)[5] = var_240_1
                    (*arg5)[2] = var_240_1
                    (*arg5)[6].b = 1
                else
                    zmm0 = *arg5
                    float temp0_235[0x4] = __minss_xmmss_memss(temp0_233[0], (*arg5)[1])
                    float temp0_236[0x4] = _mm_min_ss(zmm0[0], temp0_232[0])
                    (*arg5)[1] = temp0_235[0]
                    zmm1 = (*arg5)[3]
                    *arg5 = temp0_236[0]
                    float temp0_237[0x4] = _mm_max_ss(zmm1[0], temp0_232[0])
                    float temp0_238[0x4] = _mm_min_ss((*arg5)[2][0], temp0_234[0])
                    (*arg5)[3] = temp0_237[0]
                    float temp0_239[0x4] = __maxss_xmmss_memss(temp0_234[0], (*arg5)[5])
                    (*arg5)[2] = temp0_238[0]
                    float temp0_240[0x4] = _mm_max_ss(arg5[1][0][0], temp0_233[0])
                    (*arg5)[5] = temp0_239[0]
                    arg5[1][0] = temp0_240[0]
                
                int64_t r15_5 = sx.q(arg2[1].d)
                int32_t rax_7 = (r15_5 + 1).d
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                *(*arg2 + (r15_5 << 2)) = temp0_232[0]
                int64_t r15_6 = sx.q(arg2[1].d)
                int32_t rax_9 = (r15_6 + 1).d
                arg2[1].d = rax_9
                
                if (rax_9 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                *(*arg2 + (r15_6 << 2)) = temp0_233[0]
                int64_t r15_7 = sx.q(arg2[1].d)
                int32_t rax_11 = (r15_7 + 1).d
                arg2[1].d = rax_11
                
                if (rax_11 s> *(arg2 + 0xc))
                    sub_1406105e0(arg2)
                
                r14_5 += 0xc
                *(*arg2 + (r15_7 << 2)) = temp0_234[0]
                k = k_2
                k_2 -= 1
            while (k != 1)
            zmm15 = temp0_88
        
        int32_t rax_14 = r15_4 + 1
        int32_t var_278_2 = rax_14
        int64_t j_3 = 0x10
        int64_t j_2
        
        do
            int32_t r14_6 = rax_14
            int64_t k_3 = 9
            int64_t k_1
            
            do
                int64_t r15_8 = sx.q(arg3[1].d)
                int32_t rax_15 = (r15_8 + 1).d
                arg3[1].d = rax_15
                
                if (rax_15 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_8 << 2)) = r14_6 - 1
                int64_t r15_9 = sx.q(arg3[1].d)
                int32_t rax_17 = (r15_9 + 1).d
                arg3[1].d = rax_17
                
                if (rax_17 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_9 << 2)) = r14_6 + 9
                int64_t r15_10 = sx.q(arg3[1].d)
                int32_t rax_19 = (r15_10 + 1).d
                arg3[1].d = rax_19
                
                if (rax_19 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_10 << 2)) = r14_6
                int64_t r15_11 = sx.q(arg3[1].d)
                int32_t rax_21 = (r15_11 + 1).d
                arg3[1].d = rax_21
                
                if (rax_21 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_11 << 2)) = r14_6 + 9
                int64_t r15_12 = sx.q(arg3[1].d)
                int32_t rax_23 = (r15_12 + 1).d
                arg3[1].d = rax_23
                
                if (rax_23 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_12 << 2)) = r14_6 + 0xa
                int64_t r15_13 = sx.q(arg3[1].d)
                int32_t rax_25 = (r15_13 + 1).d
                arg3[1].d = rax_25
                
                if (rax_25 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(*arg3 + (r15_13 << 2)) = r14_6
                r14_6 += 1
                k_1 = k_3
                k_3 -= 1
            while (k_1 != 1)
            rax_14 = var_278_2 + 0xa
            j_2 = j_3
            j_3 -= 1
            var_278_2 = rax_14
        while (j_2 != 1)
        zmm8 = zx.o(0)
        i = i_1 + 1
        result = arg1
        r13_1 = var_238_1 + 0x40
        zmm14 = 0x3eb2b8c3
        r8 = var_264
        arg4 = arg_20
        i_1 = i
        var_238_1 = r13_1
    while (i s< result[1].d)
    void* rcx_15 = var_270
    
    if (rcx_15 != 0)
        return sub_140a74f90(rcx_15)

return result
