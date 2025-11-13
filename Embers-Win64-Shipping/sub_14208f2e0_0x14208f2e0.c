// 函数: sub_14208f2e0
// 地址: 0x14208f2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void* result = data_143f476b0
void* rdi = arg2

if (*(result + 4) != 0)
    result = arg1[0xca]
    
    if (result != 0)
        result = *(result + 0x28)
        int64_t* rcx = arg1[0x2a]
        int64_t r13_1 = sx.q(*(result + 0x40))
        uint64_t r15_1 = zx.q(*(rcx + 0x5f))
        
        if (r13_1.d != 0)
            int32_t i = 0
            int64_t var_270 = 0
            int64_t var_268_1 = 0
            int32_t var_25c
            __builtin_memset(&var_25c, 0, 0x1c)
            char var_25f_1 = 0xff
            int64_t var_278 = *(*rcx + (r15_1 << 3)) + 0x200
            int128_t* var_258
            
            if (r13_1.d s> 0)
                sub_1405a52a0(&var_258, r13_1.d)
            
            void* rax_3 = arg1[0xc9]
            int32_t rbx_1 = 0
            float zmm1[0x4] = *(rax_3 + 0x1c0)
            float zmm9[0x4] = *(rax_3 + 0x1d0)
            float temp0_1[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_4[0x4] = _mm_mul_ps(zmm1, temp0_1)
            float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
            float temp0_7[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x12)
            float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
            float temp0_9[0x4] = _mm_mul_ps(temp0_7, temp0_3)
            zmm1 = *(rax_3 + 0x1e0)
            int64_t* rax_4 = arg1[0xce]
            float temp0_11[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
            float temp0_12[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            int64_t rcx_4 = *rax_4
            float temp0_13[0x4] = _mm_add_ps(temp0_9, temp0_6)
            float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_9)
            float zmm3[0x4] = data_143f47560
            void* rax_5 = *(rcx_4 + (r15_1 << 3))
            float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm1)
            float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
            int32_t r12_1 = *(rax_5 + 0x30)
            float temp0_17[0x4] = _mm_sub_ps(zmm3, temp0_11)
            zmm3[0].q = zmm9 u>> 0x40
            float temp0_18[0x4] = _mm_shuffle_ps(zmm9, zmm3, 0xc4)
            float zmm2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, zmm1), data_143f47570)
            float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2, 0x32)
            float zmm13[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2, 0), temp0_21, 0x82)
            float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2, 0x31)
            float zmm11[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2, 0x10), temp0_24, 0x88)
            float var_208_1[0x4] = zmm11
            float var_1e8_1[0x4] = zmm13
            float temp0_28[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, temp0_16, 0x12), zmm2, 0xe8)
            
            if (r12_1 s> 0)
                do
                    int32_t var_14c = var_14c & 0xf8000000
                    int32_t var_124 = var_124 & 0xfffff800
                    int128_t var_188
                    int128_t* var_2a0_1 = &var_188
                    int32_t var_ec = (var_ec & 0xfc0c003c) | 0x40c003c
                    int64_t rax_9 = *arg1
                    char var_2a8_1 = 0
                    char var_2b0_1 = 0
                    int64_t var_120_1 = 0
                    int32_t var_114_1 = 1
                    int128_t var_110
                    __builtin_memset(&var_110, 0, 0x18)
                    int32_t var_f8_1 = 0xffffffff
                    int32_t var_f4_1 = 0
                    int32_t var_f0_1 = 0xffff0000
                    int32_t var_118_1 = 1
                    __builtin_memset(&var_188, 0, 0x3c)
                    int64_t var_140_1 = 1
                    int32_t var_130_1 = 0xffffffff
                    int32_t var_12c_1 = 0
                    int32_t var_128_1 = 0x3f800000
                    (*(rax_9 + 0x198))(arg1, zx.q(r15_1.d), 0, zx.q(rbx_1), 0, var_2b0_1, 
                        var_2a8_1, var_2a0_1)
                    int64_t rdi_1 = sx.q(var_268_1.d)
                    int32_t rax_10 = (rdi_1 + 1).d
                    var_268_1.d = rax_10
                    
                    if (rax_10 s> var_268_1:4.d)
                        sub_140775640(&var_270)
                    
                    sub_140819f30(rdi_1 * 0xa0 + var_270, &var_188)
                    
                    if (var_120_1 != 0)
                        sub_140a74f90(var_120_1)
                    
                    rbx_1 += 1
                while (rbx_1 s< r12_1)
                
                rdi = arg2
            
            float zmm7[0x4]
            float var_58_1[0x4] = zmm7
            float zmm8[0x4]
            float var_68_1[0x4] = zmm8
            float zmm10[0x4]
            float var_88_1[0x4] = zmm10
            int128_t zmm14
            int128_t var_c8_1 = zmm14
            int128_t zmm15
            int128_t var_d8_1 = zmm15
            sub_1422926f0(&var_278)
            int64_t var_250_1
            
            if (*(data_143f476c8 + 4) s> 0 && arg1[0xea].d s> 0)
                zmm10 = *(data_143f476f8 + 4)
                zmm15 = *(data_143f47710 + 4)
                r12_1.b = zmm10[0] > 0f
                float var_298_1 = zmm10[0]
                zmm14 = *(data_143f47728 + 4)
                
                if (zmm15.d f<= 0f || zmm14.d f<= 0f)
                    r13_1.b = 0
                else
                    r13_1.b = 1
                
                if (arg1[0xe6].d s> 0)
                    zmm9 = 0x3f000000
                    int64_t rdx_4 = 0
                    int64_t var_238_1 = 0
                    float (* r15_2)[0x4] = nullptr
                    
                    do
                        int64_t rax_15 = arg1[0xe7]
                        int64_t rcx_12 = arg1[0xe5]
                        float zmm0[0x4] = *(r15_2 + rax_15)
                        zmm1 = *(r15_2 + rax_15 + 4)
                        zmm2 = *(r15_2 + rax_15 + 8)
                        void* rax_16 = *(rdi + 8)
                        float zmm4_1[0x4] = *(r15_2 + rcx_12)
                        float zmm5_1[0x4] = *(r15_2 + rcx_12 + 4)
                        zmm0[0] = zmm0[0] - zmm4_1[0]
                        zmm3 = *(r15_2 + rcx_12 + 8)
                        zmm1[0] = zmm1[0] - zmm5_1[0]
                        zmm5_1[0] = zmm5_1[0] + zmm1[0]
                        zmm4_1[0] = zmm4_1[0] + zmm0[0]
                        zmm2[0] = zmm2[0] - zmm3[0]
                        zmm3[0] = zmm3[0] + zmm2[0]
                        zmm0[0] = zmm0[0] * zmm0[0]
                        zmm5_1[0] = zmm5_1[0] * zmm9[0]
                        zmm4_1[0] = zmm4_1[0] * zmm9[0]
                        zmm5_1[0] = zmm5_1[0] f- *(rax_16 + 0x634)
                        zmm3[0] = zmm3[0] * zmm9[0]
                        zmm4_1[0] = zmm4_1[0] f- *(rax_16 + 0x630)
                        zmm1[0] = zmm1[0] * zmm1[0]
                        zmm3[0] = zmm3[0] f- *(rax_16 + 0x638)
                        zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
                        zmm1[0] = zmm1[0] + zmm0[0]
                        zmm2[0] = zmm2[0] * zmm2[0]
                        zmm5_1[0] = zmm5_1[0] + zmm4_1[0]
                        zmm3[0] = zmm3[0] * zmm3[0]
                        zmm1[0] = zmm1[0] + zmm2[0]
                        zmm5_1[0] = zmm5_1[0] + zmm3[0]
                        float temp0_29[0x4] = _mm_sqrt_ss(0, zmm1[0])
                        float temp0_30[0x4] = _mm_sqrt_ss(0, zmm5_1[0])
                        temp0_29[0] = temp0_29[0] * zmm9[0]
                        temp0_30[0] = temp0_30[0] - temp0_29[0]
                        
                        if (temp0_30[0] <= zmm10[0] || r12_1.b == 0)
                            int32_t* j = *(*(arg1[0xe9] + rdx_4) + 8)
                            
                            if (j != 0)
                                do
                                    int64_t rcx_14 = sx.q(*j)
                                    int128_t* rax_17
                                    
                                    if (rcx_14.d s< 0 || rcx_14.d s>= arg1[0xc9][0x4a].d)
                                        rax_17.b = 0
                                    else
                                        rax_17.b = 1
                                    
                                    if (rax_17.b != 0)
                                        int64_t var_288_1 = 0
                                        int32_t var_280_1 = 0
                                        float (* rcx_16)[0x4] =
                                            (rcx_14 << 6) + *(arg1[0xc9] + 0x498)
                                        zmm2 = *rcx_16
                                        float temp0_31[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        float temp0_32[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                        float temp0_33[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                        float temp0_34[0x4] = _mm_mul_ps(temp0_31, zmm13)
                                        float temp0_35[0x4] = _mm_mul_ps(temp0_32, temp0_28)
                                        float temp0_37[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                                        float temp0_41[0x4] = _mm_add_ps(
                                            _mm_add_ps(
                                                _mm_add_ps(_mm_mul_ps(temp0_33, zmm11), temp0_34), 
                                                temp0_35), 
                                            temp0_37)
                                        zmm2 = rcx_16[1]
                                        float temp0_42[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        float temp0_43[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                        float temp0_44[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                        float temp0_45[0x4] = _mm_mul_ps(temp0_42, zmm13)
                                        float temp0_46[0x4] = _mm_mul_ps(temp0_43, temp0_28)
                                        float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm11)
                                        float temp0_49[0x4] =
                                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                                        float temp0_52[0x4] = _mm_add_ps(
                                            _mm_add_ps(_mm_add_ps(temp0_47, temp0_45), temp0_46), 
                                            temp0_49)
                                        zmm2 = rcx_16[2]
                                        float temp0_53[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        float temp0_54[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                        float temp0_56[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(zmm2, zmm2, 0x55), var_208_1)
                                        float temp0_57[0x4] = _mm_mul_ps(temp0_53, zmm13)
                                        float temp0_58[0x4] = _mm_mul_ps(temp0_54, temp0_28)
                                        float temp0_59[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                        float temp0_60[0x4] = _mm_add_ps(temp0_56, temp0_57)
                                        float temp0_61[0x4] = _mm_mul_ps(temp0_59, temp0_18)
                                        float temp0_63[0x4] =
                                            _mm_add_ps(_mm_add_ps(temp0_60, temp0_58), temp0_61)
                                        zmm2 = rcx_16[3]
                                        float temp0_65[0x4] = __mulps_xmmps_memps(
                                            _mm_shuffle_ps(zmm2, zmm2, 0x55), var_208_1)
                                        float temp0_66[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        float temp0_67[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                        float temp0_68[0x4] = _mm_mul_ps(temp0_66, zmm13)
                                        float temp0_69[0x4] = _mm_mul_ps(temp0_67, temp0_28)
                                        float temp0_70[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                        float temp0_71[0x4] = _mm_add_ps(temp0_65, temp0_68)
                                        float temp0_72[0x4] = _mm_mul_ps(temp0_70, temp0_18)
                                        float temp0_74[0x4] =
                                            _mm_add_ps(_mm_add_ps(temp0_71, temp0_69), temp0_72)
                                        zmm2 = data_142d3f660
                                        float temp0_75[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                                        float temp0_76[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                                        float temp0_77[0x4] = _mm_mul_ps(temp0_75, temp0_63)
                                        float temp0_78[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                                        temp0_74[3] = 0x3f800000
                                        float temp0_79[0x4] = _mm_mul_ps(temp0_78, temp0_74)
                                        float temp0_80[0x4] = _mm_mul_ps(temp0_76, temp0_52)
                                        float temp0_81[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                                        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_77)
                                        void* rax_19 = *(rdi + 8)
                                        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_41)
                                        int32_t var_21c_1 = 0x3f800000
                                        int32_t var_20c_1 = 0x3f800000
                                        int64_t var_288_2 = 0
                                        zmm7 = *(rax_19 + 0x634)
                                        zmm8 = *(rax_19 + 0x630)
                                        float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_83)
                                        zmm2 = *(arg1 + 0xe4)
                                        zmm2[0] = zmm2[0] f- arg1[0x1e].d
                                        float zmm6[0x4] = *(rax_19 + 0x638)
                                        int32_t var_280_2 = 0
                                        float temp0_85[0x4] = _mm_add_ps(temp0_82, temp0_84)
                                        int64_t var_288_3 = 0
                                        zmm1 = arg1[0x1c].d
                                        zmm1[0] = zmm1[0] f- *(arg1 + 0xec)
                                        int32_t var_280_3 = 0
                                        zmm8[0] = zmm8[0] - temp0_85[0]
                                        float temp0_86[0x4] =
                                            _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
                                        float temp0_87[0x4] =
                                            _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
                                        zmm7[0] = zmm7[0] - temp0_86[0]
                                        zmm0 = *(arg1 + 0xdc)
                                        zmm6[0] = zmm6[0] - temp0_87[0]
                                        zmm0[0] = zmm0[0] f- arg1[0x1d].d
                                        float var_228[0x4]
                                        var_228[0] = zmm0[0]
                                        float temp0_88[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                                        temp0_88[0] = zmm1[0]
                                        float temp0_89[0x4] =
                                            _mm_shuffle_ps(temp0_88, temp0_88, 0xc6)
                                        temp0_89[0] = zmm2[0]
                                        zmm2 = arg1[0x1e].d
                                        zmm2[0] = zmm2[0] f+ *(arg1 + 0xe4)
                                        float temp0_90[0x4] =
                                            _mm_shuffle_ps(temp0_89, temp0_89, 0xc9)
                                        var_228 = temp0_90
                                        float temp0_91[0x4] =
                                            _mm_shuffle_ps(temp0_90, temp0_90, 0xff)
                                        float temp0_92[0x4] =
                                            _mm_shuffle_ps(temp0_90, temp0_90, 0xaa)
                                        float temp0_93[0x4] =
                                            _mm_shuffle_ps(temp0_90, temp0_90, 0x55)
                                        float temp0_95[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_90, temp0_90, 0), temp0_41)
                                        float temp0_96[0x4] = _mm_mul_ps(temp0_93, temp0_52)
                                        float temp0_97[0x4] = _mm_mul_ps(temp0_92, temp0_63)
                                        float temp0_98[0x4] = _mm_mul_ps(temp0_91, temp0_74)
                                        float temp0_99[0x4] = _mm_add_ps(temp0_96, temp0_95)
                                        float temp0_100[0x4] = _mm_add_ps(temp0_98, temp0_97)
                                        zmm0 = *(arg1 + 0xdc)
                                        zmm0[0] = zmm0[0] f+ arg1[0x1d].d
                                        float temp0_101[0x4] = _mm_add_ps(temp0_100, temp0_99)
                                        zmm1 = *(arg1 + 0xec)
                                        zmm1[0] = zmm1[0] f+ arg1[0x1c].d
                                        float var_218[0x4]
                                        var_218[0] = zmm0[0]
                                        float temp0_102[0x4] =
                                            _mm_shuffle_ps(var_218, var_218, 0xe1)
                                        temp0_102[0] = zmm1[0]
                                        float temp0_103[0x4] =
                                            _mm_shuffle_ps(temp0_102, temp0_102, 0xc6)
                                        temp0_103[0] = zmm2[0]
                                        float temp0_104[0x4] =
                                            _mm_shuffle_ps(temp0_103, temp0_103, 0xc9)
                                        var_218 = temp0_104
                                        float temp0_105[0x4] =
                                            _mm_shuffle_ps(temp0_104, temp0_104, 0xff)
                                        float temp0_106[0x4] =
                                            _mm_shuffle_ps(temp0_104, temp0_104, 0xaa)
                                        float temp0_108[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_104, temp0_104, 0x55), temp0_52)
                                        float temp0_109[0x4] = _mm_mul_ps(temp0_105, temp0_74)
                                        float temp0_110[0x4] = _mm_mul_ps(temp0_106, temp0_63)
                                        float temp0_112[0x4] = _mm_mul_ps(
                                            _mm_shuffle_ps(temp0_104, temp0_104, 0), temp0_41)
                                        float temp0_115[0x4] = _mm_add_ps(
                                            _mm_add_ps(temp0_109, temp0_110), 
                                            _mm_add_ps(temp0_108, temp0_112))
                                        temp0_115[0] = temp0_115[0] - temp0_101[0]
                                        float temp0_116[0x4] =
                                            _mm_shuffle_ps(temp0_115, temp0_115, 0x55)
                                        float temp0_117[0x4] =
                                            _mm_shuffle_ps(temp0_101, temp0_101, 0x55)
                                        temp0_116[0] = temp0_116[0] - temp0_117[0]
                                        float temp0_118[0x4] =
                                            _mm_shuffle_ps(temp0_115, temp0_115, 0xaa)
                                        temp0_115[0] = temp0_115[0] * temp0_115[0]
                                        zmm8[0] = zmm8[0] * zmm8[0]
                                        temp0_116[0] = temp0_116[0] * temp0_116[0]
                                        float temp0_119[0x4] =
                                            _mm_shuffle_ps(temp0_101, temp0_101, 0xaa)
                                        temp0_118[0] = temp0_118[0] - temp0_119[0]
                                        zmm7[0] = zmm7[0] * zmm7[0]
                                        temp0_115[0] = temp0_115[0] + temp0_116[0]
                                        zmm6[0] = zmm6[0] * zmm6[0]
                                        zmm8[0] = zmm8[0] + zmm7[0]
                                        temp0_118[0] = temp0_118[0] * temp0_118[0]
                                        temp0_115[0] = temp0_115[0] + temp0_118[0]
                                        zmm8[0] = zmm8[0] + zmm6[0]
                                        float temp0_120[0x4] = _mm_sqrt_ss(0, temp0_115[0])
                                        float temp0_121[0x4] = _mm_sqrt_ss(0, zmm8[0])
                                        temp0_120[0] = temp0_120[0] * 0.5f
                                        temp0_121[0] = temp0_121[0] - temp0_120[0]
                                        
                                        if ((temp0_121[0] <= var_298_1 || r12_1.b == 0) && (
                                                temp0_120[0] f>= zmm15.d || r13_1.b == 0
                                                || not(temp0_121[0] f> zmm14.d)))
                                            int64_t rdi_2 = sx.q(var_250_1.d)
                                            int32_t rax_20 = (rdi_2 + 1).d
                                            var_250_1.d = rax_20
                                            
                                            if (rax_20 s> var_250_1:4.d)
                                                sub_1405c4fe0(&var_258)
                                            
                                            rax_17 = var_258
                                            rdi = arg2
                                            float (* rcx_19)[0x4] = rdi_2 << 6
                                            *(rcx_19 + rax_17) = temp0_41
                                            *(rcx_19 + rax_17 + 0x10) = temp0_52
                                            *(rcx_19 + rax_17 + 0x20) = temp0_63
                                            *(rcx_19 + rax_17 + 0x30) = temp0_74
                                        
                                        zmm13 = var_1e8_1
                                        zmm11 = var_208_1
                                    
                                    j = *(j + 8)
                                while (j != 0)
                                
                                zmm9 = 0x3f000000
                                zmm10 = var_298_1
                                rdx_4 = var_238_1
                        
                        rdx_4 += 8
                        i += 1
                        r15_2 = &(*r15_2)[3]
                        var_238_1 = rdx_4
                    while (i s< arg1[0xe6].d)
            else if (r13_1.d s> 0)
                int64_t rdi_3 = 0
                float (* rbx_2)[0x4] = nullptr
                
                do
                    int128_t* rax_11
                    
                    if (rdi_3 s< 0 || i s>= arg1[0xc9][0x4a].d)
                        rax_11.b = 0
                    else
                        rax_11.b = 1
                    
                    if (rax_11.b != 0)
                        int64_t r15_3 = sx.q(var_250_1.d)
                        int64_t rcx_20 = *(arg1[0xc9] + 0x498)
                        int32_t rax_22 = (r15_3 + 1).d
                        zmm2 = *(rbx_2 + rcx_20)
                        float temp0_122[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_123[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float temp0_124[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        float temp0_125[0x4] = _mm_mul_ps(temp0_122, zmm13)
                        float temp0_126[0x4] = _mm_mul_ps(temp0_123, temp0_28)
                        float temp0_128[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                        float temp0_132[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_124, zmm11), temp0_125), 
                                temp0_126), 
                            temp0_128)
                        zmm2 = *(rbx_2 + rcx_20 + 0x10)
                        float temp0_133[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_134[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float temp0_135[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        float temp0_136[0x4] = _mm_mul_ps(temp0_133, zmm13)
                        float temp0_137[0x4] = _mm_mul_ps(temp0_134, temp0_28)
                        float temp0_139[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                        float temp0_143[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_135, zmm11), temp0_136), 
                                temp0_137), 
                            temp0_139)
                        zmm2 = *(rbx_2 + rcx_20 + 0x20)
                        float temp0_144[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        float temp0_145[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_146[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float temp0_147[0x4] = _mm_mul_ps(temp0_145, zmm13)
                        float temp0_148[0x4] = _mm_mul_ps(temp0_146, temp0_28)
                        float temp0_150[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_18)
                        float temp0_154[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_144, zmm11), temp0_147), 
                                temp0_148), 
                            temp0_150)
                        zmm2 = *(rbx_2 + rcx_20 + 0x30)
                        float temp0_155[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                        float temp0_156[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                        float temp0_157[0x4] = _mm_mul_ps(temp0_155, zmm11)
                        var_250_1.d = rax_22
                        float temp0_158[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                        float temp0_159[0x4] = _mm_mul_ps(temp0_156, zmm13)
                        float temp0_160[0x4] = _mm_mul_ps(temp0_158, temp0_28)
                        float temp0_161[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                        float temp0_162[0x4] = _mm_add_ps(temp0_157, temp0_159)
                        float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_18)
                        float temp0_165[0x4] =
                            _mm_add_ps(_mm_add_ps(temp0_162, temp0_160), temp0_163)
                        temp0_165[3] = 0x3f800000
                        
                        if (rax_22 s> var_250_1:4.d)
                            sub_1405c4fe0(&var_258)
                        
                        rax_11 = var_258
                        int128_t* rcx_23 = r15_3 << 6
                        *(rcx_23 + rax_11) = temp0_132
                        *(rcx_23 + rax_11 + 0x10) = temp0_143
                        *(rcx_23 + rax_11 + 0x20) = temp0_154
                        *(rcx_23 + rax_11 + 0x30) = temp0_165
                    
                    i += 1
                    rdi_3 += 1
                    rbx_2 = &rbx_2[4]
                while (rdi_3 s< r13_1)
            int64_t rbx_3 = sx.q(arg3[1].d)
            int32_t rax_23 = (rbx_3 + 1).d
            arg3[1].d = rax_23
            
            if (rax_23 s> *(arg3 + 0xc))
                sub_1407c3b60(arg3)
            
            sub_14081b0c0(rbx_3 * 0x38 + *arg3, &var_278)
            int64_t var_248
            sub_1405ec8a0(&var_248)
            int128_t* rcx_28 = var_258
            
            if (rcx_28 != 0)
                sub_140a74f90(rcx_28)
            
            result = sub_14081c7d0(&var_270)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
