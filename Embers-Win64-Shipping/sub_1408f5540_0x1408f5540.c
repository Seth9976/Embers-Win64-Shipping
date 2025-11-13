// 函数: sub_1408f5540
// 地址: 0x1408f5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141efce60(arg1, arg2)
int64_t* result = sub_1408f4ea0()

if (result != 0)
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x18))(result, rdx_1)
    
    if (result.b != 0)
        if (*(arg1 + 0x312) == 0)
            char rax = *(arg1 + 0x204)
            *(arg1 + 0x312) = 1
            
            if (rax == 1)
            label_1408f55a4:
                
                if (*(arg1 + 0x205) == 0)
                    arg1[0x48] = arg1
                    arg1[0x62].b = 0
                else
                    void* rax_1 = arg1[0x14]
                    
                    if (rax_1 != 0)
                        int64_t rcx_1 = *(rax_1 + 0x130)
                        
                        if (rcx_1 != 0)
                            arg1[0x48] = rcx_1
                            arg1[0x62].b = 0
            else if (*(arg1 + 0x311) != 0 && rax == 0)
                goto label_1408f55a4
        
        void* rax_2 = arg1[0x48]
        char result_1 = 0
        
        if (rax_2 == 0)
            arg1[0x62].b = 0
        else
            int32_t var_180
            uint64_t var_170
            float var_158[0x4]
            uint128_t zmm1
            
            if (arg1[0x62].b == 0)
                if (*(arg1 + 0x311) == 0)
                    zmm1 = *(rax_2 + 0x1d0)
                    var_180 = zmm1.d
                    uint128_t zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    int32_t var_178_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                    int32_t var_17c_1 = zmm0_1.d
                    int64_t* rax_7 = sub_1408f4ea0()
                    
                    if (rax_7 != 0)
                        int64_t r9_2 = *rax_7
                        
                        if ((*(r9_2 + 0x30))(rax_7, &var_180, &arg1[0x46], r9_2) == 0)
                            zmm1 = data_143dbb1fc
                            int32_t rax_9 = data_143dbb210
                            var_180 = data_143dbb1f8.d
                            int32_t var_17c_2 = zmm1.d
                            int32_t var_178_3 = data_143dbb200.d
                            var_170 = data_143dbb208
                            int32_t var_168_2 = rax_9
                            int64_t* rax_10 = sub_1408f4ea0()
                            
                            if (rax_10 != 0 && (*(*rax_10 + 0x40))(rax_10, &arg1[0x46], &var_180, 
                                    &var_170, &result_1) != 0)
                                void* rax_12 = arg1[0x48]
                                arg1[0x62].b = 1
                                *(arg1 + 0x250) = *(rax_12 + 0x1c0)
                                *(arg1 + 0x260) = *(rax_12 + 0x1d0)
                                *(arg1 + 0x270) = *(rax_12 + 0x1e0)
                                arg3, arg4 = sub_140ade170(&var_170, &var_158)
                                float zmm3_1[0x4] = data_14399f668
                                float zmm4_1[0x4] = var_180
                                float zmm5_1[0x4] = var_158
                                float temp0_3[0x4] = _mm_unpacklo_ps(var_17c_2, 0)
                                float temp0_4[0x4] = _mm_unpacklo_ps(zmm4_1, var_178_3.q)
                                zmm0_1 = data_14399f670
                                float temp0_5[0x4] = _mm_unpacklo_ps(temp0_4, temp0_3[0].q)
                                float temp0_6[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                                *(arg1 + 0x2a0) =
                                    _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1.q), temp0_6[0].q)
                                *(arg1 + 0x280) = zmm5_1
                                *(arg1 + 0x290) = temp0_5
                                int32_t rax_13 = arg1[0x3f].d
                                
                                if (rax_13 != 0 && rax_13 != 1)
                                    void* rdi_1 = arg1[0x49]
                                    
                                    if (rdi_1 == 0)
                                        void* rdx_6
                                        
                                        if (arg1[0x41] == rdi_1)
                                            rdx_6 = nullptr
                                        else
                                            void* rax_15 = sub_1408f5ff0()
                                            
                                            if (rax_15 == 0)
                                                rdx_6 = nullptr
                                            else
                                                rdx_6 = arg1[0x41]
                                                int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                                                
                                                if (rax_16.d s> *(rdx_6 + 0x38)
                                                        || *(*(rdx_6 + 0x30) + (rax_16 << 3))
                                                        != rax_15 + 0x30)
                                                    rdx_6 = nullptr
                                        
                                        void* rax_18
                                        rax_18, arg3, arg4, arg5 = sub_1420224f0(rdx_6)
                                        rdi_1 = rax_18
                                        void* rax_19
                                        void* rcx_8
                                        int64_t rdx_7
                                        
                                        if (rax_18 != 0)
                                            rax_19 = sub_1408f5ff0()
                                            rcx_8 = *(rdi_1 + 0x10)
                                            rdx_7 = sx.q(*(rax_19 + 0x38))
                                        
                                        if (rax_18 == 0 || rdx_7.d s> *(rcx_8 + 0x38)
                                                || *(*(rcx_8 + 0x30) + (rdx_7 << 3))
                                                != rax_19 + 0x30)
                                            rdi_1 = nullptr
                                        
                                        arg1[0x49] = rdi_1
                                    
                                    *(rdi_1 + 0x28) = *(arg1 + 0x230)
                                    void* rax_21 = arg1[0x49]
                                    *(rax_21 + 0x40) = *(arg1 + 0x250)
                                    *(rax_21 + 0x50) = *(arg1 + 0x260)
                                    *(rax_21 + 0x60) = *(arg1 + 0x270)
                                    void* rax_23 = arg1[0x49] + 0x70
                                    *rax_23 = *(arg1 + 0x280)
                                    *(rax_23 + 0x10) = *(arg1 + 0x290)
                                    *(rax_23 + 0x20) = *(arg1 + 0x2a0)
                                    sub_14203bd10(arg1[0x49], &arg1[0x3e], arg1[0x40].d)
                else
                    var_180.q = data_143dbb1f8.q
                    int32_t var_178_1 = data_143dbb200
                    int32_t rax_4 = data_143dbb210
                    var_170 = data_143dbb208
                    int32_t var_168_1 = rax_4
                    int64_t* rax_5 = sub_1408f4ea0()
                    
                    if (rax_5 == 0)
                        arg1[0x62].b = rax_5.b
                    else
                        arg1[0x62].b =
                            (*(*rax_5 + 0x40))(rax_5, &arg1[0x46], &var_180, &var_170, &result_1)
            
            if (arg1[0x62].b != 0 || arg1[0x62].b != 0)
                zmm1 = data_143dbb1fc
                int32_t rax_24 = data_143dbb210
                var_180 = data_143dbb1f8.d
                int32_t var_17c_3 = zmm1.d
                int32_t var_178_4 = data_143dbb200.d
                var_170 = data_143dbb208
                int32_t var_168_3 = rax_24
                result_1 = 0
                int64_t* rax_25
                int128_t zmm6_1
                rax_25, zmm6_1 = sub_1408f4ea0()
                
                if (rax_25 != 0
                        && (*(*rax_25 + 0x40))(rax_25, &arg1[0x46], &var_180, &var_170, &result_1)
                        != 0)
                    float (* rax_27)[0x4] = sub_140ade170(&var_170, &var_158)
                    float zmm3_2[0x4] = data_14399f668
                    float zmm4_2[0x4] = *rax_27
                    float zmm13[0x4] = var_180
                    float temp0_10[0x4] = _mm_unpacklo_ps(var_17c_3, 0)
                    float temp0_11[0x4] = _mm_unpacklo_ps(zmm13, var_178_4[0].q)
                    float temp0_12[0x4] = _mm_unpacklo_ps(zmm3_2, data_14399f670[0].q)
                    float temp0_13[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 4)
                    float temp0_14[0x4] = _mm_unpacklo_ps(temp0_11, temp0_10[0].q)
                    float temp0_15[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
                    float temp0_16[0x4] = _mm_add_ps(zmm4_2, zmm4_2)
                    *(arg1 + 0x300) = _mm_unpacklo_ps(temp0_12, temp0_15[0].q)
                    *(arg1 + 0x2e0) = zmm4_2
                    *(arg1 + 0x2f0) = temp0_14
                    float zmm15[0x4] = data_143cec4f0
                    float temp0_18[0x4] = _mm_mul_ps(zmm4_2, temp0_16)
                    float temp0_20[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x29), temp0_13)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x12)
                    float temp0_24[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x1a), 
                        _mm_shuffle_ps(temp0_18, temp0_18, 1))
                    float temp0_25[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
                    float zmm2_2[0x4] = *(arg1 + 0x280)
                    float temp0_26[0x4] = _mm_mul_ps(temp0_21, temp0_25)
                    float temp0_27[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 4)
                    float temp0_28[0x4] = _mm_add_ps(temp0_26, temp0_20)
                    float temp0_29[0x4] = _mm_sub_ps(temp0_20, temp0_26)
                    float zmm1_1[0x4] =
                        __andps_xmmxud_memxud(_mm_sub_ps(zmm15, temp0_24), data_143cec4b0)
                    float temp0_32[0x4] = _mm_shuffle_ps(temp0_29, zmm1_1, 0x32)
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_28, zmm1_1, 0), temp0_32, 0x82)
                    float temp0_35[0x4] = _mm_shuffle_ps(temp0_28, zmm1_1, 0x31)
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1_1, 0x10), temp0_35, 0x88)
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_28, temp0_29, 0x12), zmm1_1, 0xe8)
                    float temp0_40[0x4] = _mm_add_ps(zmm2_2, zmm2_2)
                    zmm15[0].q = temp0_14 u>> 0x40
                    _mm_shuffle_ps(temp0_14, zmm15, 0xc4)
                    float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm2_2)
                    float temp0_43[0x4] = _mm_shuffle_ps(temp0_40, temp0_40, 0x29)
                    float temp0_46[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), 
                        _mm_shuffle_ps(temp0_40, temp0_40, 0x12))
                    float temp0_47[0x4] = _mm_mul_ps(temp0_27, temp0_43)
                    float temp0_48[0x4] = _mm_add_ps(temp0_46, temp0_47)
                    float temp0_49[0x4] = _mm_shuffle_ps(temp0_42, temp0_42, 0x1a)
                    float temp0_50[0x4] = _mm_sub_ps(temp0_47, temp0_46)
                    zmm3_2 = __andps_xmmxud_memxud(
                        _mm_sub_ps(zmm15, 
                            _mm_add_ps(temp0_49, _mm_shuffle_ps(temp0_42, temp0_42, 1))), 
                        data_143cec4b0)
                    float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, zmm3_2, 0x32)
                    float temp0_57[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm3_2, 0), temp0_55, 0x82)
                    float temp0_58[0x4] = _mm_shuffle_ps(temp0_48, zmm3_2, 0x31)
                    float var_118[0x4] = temp0_57
                    zmm1_1 = *(arg1 + 0x290)
                    float temp0_60[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm3_2, 0x10), temp0_58, 0x88)
                    zmm15[0].q = zmm1_1 u>> 0x40
                    float temp0_61[0x4] = _mm_shuffle_ps(temp0_48, temp0_50, 0x12)
                    float temp0_62[0x4] = _mm_shuffle_ps(zmm1_1, zmm15, 0xc4)
                    float temp0_63[0x4] = _mm_shuffle_ps(temp0_61, zmm3_2, 0xe8)
                    float var_e8_1[0x4] = temp0_62
                    uint32_t var_d8[0x4]
                    uint32_t (* rax_28)[0x4]
                    float zmm6_3[0x4]
                    float zmm7_1[0x4]
                    float zmm9[0x4]
                    float zmm13_1[0x4]
                    uint32_t zmm15_1[0x4]
                    rax_28, zmm6_3, zmm7_1, zmm9, zmm13_1, zmm15_1 =
                        sub_140631b10(&var_118, &var_d8)
                    uint32_t zmm2_3[0x4] = *rax_28
                    float temp0_64[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                    uint32_t zmm1_2[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                    uint32_t zmm14_1[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm13_1)
                    float temp0_69[0x4] = _mm_mul_ps(temp0_64, zmm7_1)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm9)
                    zmm14_1 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm14_1, zmm6_3), temp0_69), zmm1_2), 
                        zmm2_3)
                    zmm2_3 = rax_28[1]
                    uint32_t zmm11_1[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    float temp0_76[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                    zmm1_2 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                    zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm13_1)
                    float temp0_80[0x4] = _mm_mul_ps(temp0_76, zmm7_1)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm9)
                    zmm11_1 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(zmm11_1, zmm6_3), temp0_80), zmm1_2), 
                        zmm2_3)
                    zmm2_3 = rax_28[2]
                    uint32_t zmm10_1[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    float temp0_87[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                    zmm1_2 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                    zmm10_1 = _mm_mul_ps(zmm10_1, zmm6_3)
                    zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm13_1)
                    float temp0_92[0x4] = _mm_mul_ps(temp0_87, zmm7_1)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm9)
                    zmm10_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm10_1, temp0_92), zmm1_2), zmm2_3)
                    zmm2_3 = rax_28[3]
                    float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), zmm6_3)
                    float temp0_99[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0)
                    zmm1_2 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa)
                    float temp0_101[0x4] = _mm_mul_ps(temp0_99, zmm7_1)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm9)
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xff)
                    float temp0_104[0x4] = _mm_add_ps(temp0_98, temp0_101)
                    zmm2_3 = _mm_mul_ps(zmm2_3, zmm13_1)
                    float temp0_107[0x4] = _mm_add_ps(_mm_add_ps(temp0_104, zmm1_2), zmm2_3)
                    zmm2_3 = *(arg1 + 0x250)
                    zmm1_2 = _mm_add_ps(zmm2_3, zmm2_3)
                    float temp0_109[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 4)
                    float temp0_110[0x4] = _mm_mul_ps(zmm1_2, zmm2_3)
                    float temp0_112[0x4] =
                        _mm_mul_ps(temp0_109, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                    float temp0_116[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0x1a), 
                        _mm_shuffle_ps(temp0_110, temp0_110, 1))
                    zmm2_3 = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), zmm1_2)
                    zmm1_2 = _mm_sub_ps(zmm15_1, temp0_116)
                    float temp0_120[0x4] = _mm_add_ps(zmm2_3, temp0_112)
                    float temp0_121[0x4] = _mm_sub_ps(temp0_112, zmm2_3)
                    uint32_t temp0_122[0x4] = __andps_xmmxud_memxud(zmm1_2, data_143cec4b0)
                    float temp0_125[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_120, temp0_122, 0), 
                        _mm_shuffle_ps(temp0_121, temp0_122, 0x32), 0x82)
                    float temp0_126[0x4] = _mm_shuffle_ps(temp0_120, temp0_122, 0x31)
                    zmm2_3 = _mm_shuffle_ps(temp0_125, temp0_125, 0x55)
                    float temp0_129[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_121, temp0_122, 0x10), temp0_126, 0x88)
                    float temp0_130[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0)
                    zmm2_3 = _mm_mul_ps(zmm2_3, zmm11_1)
                    float temp0_132[0x4] = _mm_mul_ps(temp0_130, zmm14_1)
                    float temp0_133[0x4] = _mm_shuffle_ps(temp0_120, temp0_121, 0x12)
                    float zmm4_3[0x4] = *(arg1 + 0x260)
                    float temp0_134[0x4] = _mm_shuffle_ps(temp0_133, temp0_122, 0xe8)
                    zmm1_2 = _mm_shuffle_ps(temp0_125, temp0_125, 0xaa)
                    zmm2_3 = _mm_add_ps(zmm2_3, temp0_132)
                    float temp0_138[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xff), temp0_107)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10_1)
                    float temp0_141[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0), zmm14_1)
                    zmm2_3 = _mm_add_ps(zmm2_3, zmm1_2)
                    zmm15_1[0].q = zmm4_3 u>> 0x40
                    float temp0_143[0x4] = _mm_shuffle_ps(zmm4_3, zmm15_1, 0xc4)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0xaa), zmm10_1)
                    zmm2_3 = _mm_add_ps(zmm2_3, temp0_138)
                    float temp0_148[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_129, 0x55), zmm11_1)
                    float temp0_149[0x4] = _mm_shuffle_ps(temp0_129, temp0_129, 0xff)
                    var_d8 = zmm2_3
                    float temp0_150[0x4] = _mm_mul_ps(temp0_149, temp0_107)
                    float temp0_151[0x4] = _mm_add_ps(temp0_148, temp0_141)
                    zmm2_3 = _mm_shuffle_ps(temp0_134, temp0_134, 0x55)
                    float var_c8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_151, zmm1_2), temp0_150)
                    zmm2_3 = _mm_mul_ps(zmm2_3, zmm11_1)
                    float temp0_157[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_134, temp0_134, 0), zmm14_1)
                    zmm1_2 = _mm_shuffle_ps(temp0_134, temp0_134, 0xaa)
                    float temp0_159[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0x55)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10_1)
                    zmm2_3 = _mm_add_ps(zmm2_3, temp0_157)
                    float temp0_162[0x4] = _mm_mul_ps(temp0_159, zmm11_1)
                    float temp0_163[0x4] = _mm_shuffle_ps(temp0_134, temp0_134, 0xff)
                    float temp0_165[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_143, temp0_143, 0), zmm14_1)
                    zmm2_3 = _mm_add_ps(zmm2_3, zmm1_2)
                    float temp0_167[0x4] = _mm_mul_ps(temp0_163, temp0_107)
                    zmm1_2 = _mm_shuffle_ps(temp0_143, temp0_143, 0xaa)
                    float temp0_169[0x4] = _mm_add_ps(temp0_162, temp0_165)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10_1)
                    float temp0_171[0x4] = _mm_shuffle_ps(temp0_143, temp0_143, 0xff)
                    zmm2_3 = _mm_add_ps(zmm2_3, temp0_167)
                    float temp0_173[0x4] = _mm_mul_ps(temp0_171, temp0_107)
                    uint32_t var_b8_1[0x4] = zmm2_3
                    float var_a8_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_169, zmm1_2), temp0_173)
                    sub_1407c8dd0(&var_118, &var_d8)
                    float zmm2_4[0x4] = var_118
                    *(arg1 + 0x2c0) = temp0_60
                    *(arg1 + 0x2d0) = temp0_63
                    *(arg1 + 0x2b0) = zmm2_4
                    var_158 = zmm2_4
                    int64_t var_148
                    sub_140adf5d0(&var_158, &var_148)
                    uint128_t zmm2_5 = *(arg1 + 0x2c0)
                    int64_t* rcx_16 = arg1[0x48]
                    uint64_t var_138 = var_148
                    var_158[2] = _mm_shuffle_ps(zmm2_5, zmm2_5, 0xaa).d
                    uint128_t zmm0_5 =
                        _mm_unpacklo_ps(zmm2_5, _mm_shuffle_ps(zmm2_5, zmm2_5, 0x55)[0].q)
                    int32_t var_140
                    int32_t var_130_1 = var_140
                    float rax_30 = var_158[2]
                    uint64_t var_128 = zmm0_5.q
                    float var_120_1 = rax_30
                    int512_t zmm6_4
                    int512_t zmm7_2
                    int512_t zmm8_1
                    int512_t zmm9_1
                    zmm6_4, zmm7_2, zmm8_1, zmm9_1 =
                        sub_141f4a260(rcx_16, &var_128, &var_138, 0, 0, 0)
                    zmm9_1.o = arg5
                    zmm8_1.o = arg4
                    zmm7_2.o = arg3
                    zmm6_4.o = zmm6_1
        
        char result_2 = result_1
        
        if (*(arg1 + 0x313) != result_2)
            void* rcx_17
            char* rdx_15
            
            if (result_2 == 0)
                rcx_17 = &arg1[0x44]
                rdx_15 = nullptr
            else
                rcx_17 = &arg1[0x42]
                bool var_187
                rdx_15 = &var_187
                var_187 = *(arg1 + 0x311) != 0
            
            sub_1405a9f90(rcx_17, rdx_15)
        
        result = zx.q(result_1)
        *(arg1 + 0x313) = result.b

return result
