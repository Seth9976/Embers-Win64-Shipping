// 函数: sub_141f14420
// 地址: 0x141f14420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int32_t result = *(arg1 + 0x260) << 2
int64_t* r13 = arg2
int32_t rbx_1 = result * arg2[1].d

if (rbx_1 s> 0)
    sub_1422a3c90(arg1 + 0x1d8, rbx_1, 1)
    sub_1422c8fe0(arg1 + 0x150, rbx_1, 1, 1)
    sub_1422a3a50(arg1 + 0x218, rbx_1, 1)
    int32_t i = 0
    int32_t i_1 = 0
    float var_358[0x4]
    float var_1c8[0x4]
    int64_t* arg_8
    
    if (r13[1].d s> 0)
        void** r12_1 = nullptr
        int32_t r15_1 = 1
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        float zmm7[0x4]
        float var_58_1[0x4] = zmm7
        float zmm8[0x4]
        float var_68_1[0x4] = zmm8
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        float zmm10[0x4]
        float var_88_1[0x4] = zmm10
        float zmm11[0x4]
        float var_98_1[0x4] = zmm11
        float zmm15[0x4] = 0x80000000
        int32_t var_3e0_1 = 1
        void** var_3a0_1 = nullptr
        
        do
            if ((rdi & r15_1) != 0)
                float zmm0_1[0x4] = *(arg1 + 0xb0)
                float zmm3[0x4] = *(arg1 + 0xb4)
                float zmm4_1[0x4] = *(arg1 + 0xb8)
                float var_3dc_1 = zmm0_1[0]
                float var_3d8_1 = zmm3[0]
                float var_3d4_1 = zmm4_1[0]
                void* rbx_2 = *(r12_1 + *r13)
                int64_t var_348_1 = 0
                int32_t var_340_1 = 0
                int64_t var_378_1 = 0
                float zmm1[0x4] = *(rbx_2 + 0x60c)
                float zmm2[0x4] = *(rbx_2 + 0x610)
                zmm1[0] = zmm1[0] - zmm0_1[0]
                zmm0_1 = *(rbx_2 + 0x614)
                zmm2[0] = zmm2[0] - zmm3[0]
                zmm3 = data_142d4cc00
                zmm0_1[0] = zmm0_1[0] - zmm4_1[0]
                zmm7 = *(rbx_2 + 0x430)
                zmm6 = *(rbx_2 + 0x420)
                float zmm5_1[0x4] = *(rbx_2 + 0x410)
                zmm4_1 = *(rbx_2 + 0x400)
                zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                int32_t var_370_1 = 0
                zmm2[0] = zmm2[0] * zmm2[0]
                void* var_3a8_1 = rbx_2
                zmm1[0] = zmm1[0] * zmm1[0]
                int128_t var_168
                __builtin_memcpy(&var_168, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00", 
                    0x20)
                zmm2[0] = zmm2[0] + zmm1[0]
                zmm2[0] = zmm2[0] + zmm0_1[0]
                float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm5_1)
                float temp0_3[0x4] = _mm_sqrt_ss(0, zmm2[0])
                float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
                float var_3f0_1 = temp0_3[0]
                float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                float temp0_6[0x4] = _mm_mul_ps(temp0_4, zmm4_1)
                float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm7)
                float temp0_12[0x4] = _mm_add_ps(_mm_add_ps(temp0_6, temp0_2), 
                    _mm_add_ps(_mm_mul_ps(temp0_5, zmm6), temp0_8))
                var_348_1.o = temp0_12
                float var_3cc_1 = (temp0_12 ^ zmm15)[0]
                float var_1e8_1[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0x55) ^ zmm15
                float var_1d8_1[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xaa) ^ zmm15
                zmm2 = data_142d4cc20
                float temp0_15[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), zmm5_1)
                float temp0_18[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_19[0x4] = _mm_mul_ps(temp0_15, zmm4_1)
                float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), zmm7)
                float temp0_25[0x4] = _mm_add_ps(_mm_add_ps(temp0_19, temp0_17), 
                    _mm_add_ps(_mm_mul_ps(temp0_18, zmm6), temp0_21))
                var_378_1.o = temp0_25
                float var_3d0_1 = (temp0_25 ^ zmm15)[0]
                float var_208_1[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0x55) ^ zmm15
                float var_1f8_1[0x4] = _mm_shuffle_ps(temp0_25, temp0_25, 0xaa) ^ zmm15
                float var_1a8[0x4]
                float zmm12_1
                float zmm13_1
                float zmm14_1
                zmm12_1, zmm13_1, zmm14_1, zmm15 = sub_1408041d0(arg1 + 0x80, &var_1a8)
                zmm2 = *(rbx_2 + 0x380)
                zmm5_1 = var_1a8
                float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float var_178[0x4]
                float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_178)
                int64_t var_328_1 = 0
                float temp0_33[0x4] = _mm_mul_ps(temp0_28, zmm5_1)
                int32_t var_320_1 = 0
                float var_188[0x4]
                float temp0_34[0x4] = _mm_mul_ps(temp0_29, var_188)
                float var_198[0x4]
                float temp0_38[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_30, var_198), temp0_33), temp0_34), 
                    temp0_32)
                zmm2 = *(rbx_2 + 0x390)
                float temp0_39[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_40[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_41[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_178)
                float temp0_44[0x4] = _mm_mul_ps(temp0_39, zmm5_1)
                float temp0_45[0x4] = _mm_mul_ps(temp0_40, var_188)
                float var_118_1[0x4] = temp0_38
                float temp0_49[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_41, var_198), temp0_44), temp0_45), 
                    temp0_43)
                zmm2 = *(rbx_2 + 0x3a0)
                float temp0_50[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_51[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_52[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_54[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_178)
                float temp0_55[0x4] = _mm_mul_ps(temp0_51, zmm5_1)
                float temp0_56[0x4] = _mm_mul_ps(temp0_52, var_188)
                float var_108_1[0x4] = temp0_49
                float temp0_60[0x4] = _mm_add_ps(
                    _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_50, var_198), temp0_55), temp0_56), 
                    temp0_54)
                zmm2 = *(rbx_2 + 0x3b0)
                float temp0_61[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_62[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_63[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_64[0x4] = _mm_mul_ps(temp0_61, var_198)
                float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), var_178)
                float temp0_67[0x4] = _mm_mul_ps(temp0_62, zmm5_1)
                float temp0_68[0x4] = _mm_mul_ps(temp0_63, var_188)
                float var_f8_1[0x4] = temp0_60
                float temp0_71[0x4] =
                    _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_64, temp0_67), temp0_68), temp0_66)
                zmm2 = data_142d4cc00
                int128_t var_148
                __builtin_memcpy(&var_148, 
                    "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                "00\x80\x3f\x00\x00\x00\x00", 
                    0x30)
                float var_e8_1[0x4] = temp0_71
                float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_71)
                int64_t var_318_1 = 0
                float temp0_74[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_75[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                float temp0_76[0x4] = _mm_mul_ps(temp0_74, temp0_60)
                int32_t var_310_1 = 0
                float temp0_77[0x4] = _mm_mul_ps(temp0_75, temp0_49)
                int64_t var_308_1 = 0
                float temp0_78[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_76)
                int32_t var_300_1 = 0
                float temp0_81[0x4] = _mm_add_ps(temp0_77, _mm_mul_ps(temp0_78, temp0_38))
                zmm2 = data_142d4cc20
                float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_81)
                float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_49)
                var_328_1.o = temp0_82
                float var_3f4_1 = (temp0_82 ^ zmm15)[0]
                zmm0_1 = _mm_shuffle_ps(temp0_82, temp0_82, 0x55) ^ zmm15
                float temp0_86[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xaa)
                float var_338_1 = zmm0_1[0]
                float var_368_1 = (temp0_86 ^ zmm15)[0]
                float temp0_87[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_88[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_60)
                float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_38)
                float temp0_92[0x4] = _mm_mul_ps(temp0_88, temp0_71)
                float temp0_93[0x4] = _mm_add_ps(temp0_84, temp0_91)
                zmm2 = data_142d4cc30
                float temp0_94[0x4] = _mm_add_ps(temp0_92, temp0_89)
                float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xff), temp0_71)
                float temp0_97[0x4] = _mm_add_ps(temp0_94, temp0_93)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x55), temp0_49)
                var_318_1.o = temp0_97
                arg_8.d = (temp0_97 ^ zmm15)[0]
                float var_2e8_1[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x55) ^ zmm15
                float var_248_1[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0xaa) ^ zmm15
                float temp0_102[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_38)
                float temp0_105[0x4] = _mm_mul_ps(temp0_102, temp0_60)
                float temp0_106[0x4] = _mm_add_ps(temp0_99, temp0_104)
                float temp0_108[0x4] = _mm_add_ps(_mm_add_ps(temp0_96, temp0_105), temp0_106)
                var_308_1.o = temp0_108
                float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0x55)
                zmm10 = temp0_108 ^ zmm15
                zmm11 = _mm_shuffle_ps(temp0_108, temp0_108, 0xaa) ^ zmm15
                float var_3c0_1 = zmm10[0]
                zmm9 = temp0_109 ^ zmm15
                var_1c8 = zmm11
                var_358 = zmm9
                uint64_t rdi_1 = 0
                int32_t var_3e8_1 = 0
                
                if (*(arg1 + 0x260) s> 0)
                    int64_t* r12_2 = nullptr
                    
                    do
                        int64_t r13_1 = *(arg1 + 0x258)
                        
                        if (*(r12_2 + r13_1) != 0)
                            void* rcx_4 = *(r12_2 + r13_1 + 0x20)
                            zmm6 = *(r12_2 + r13_1 + 0x14)
                            zmm15 = *(r12_2 + r13_1 + 0x18)
                            zmm8 = var_3f0_1
                            
                            if (rcx_4 != 0)
                                zmm0_1, zmm6, zmm8, zmm9 = sub_141f89240(rcx_4, zmm8)
                                zmm6[0] = zmm6[0] * zmm0_1[0]
                                zmm15[0] = zmm15[0] * zmm0_1[0]
                            
                            bool cond:0_1 = (*(r12_2 + r13_1 + 0x10) & 1) == 0
                            int32_t var_38c_1 = 0x3f800000
                            float var_398[0x4]
                            var_398[0] = var_3dc_1[0]
                            float temp0_111[0x4] = _mm_shuffle_ps(var_398, var_398, 0xe1)
                            temp0_111[0] = var_3d8_1[0]
                            float temp0_112[0x4] = _mm_shuffle_ps(temp0_111, temp0_111, 0xc6)
                            temp0_112[0] = var_3d4_1[0]
                            float temp0_113[0x4] = _mm_shuffle_ps(temp0_112, temp0_112, 0xc9)
                            var_398 = temp0_113
                            float temp0_115[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_113, temp0_113, 0xff), *(rbx_2 + 0x3f0))
                            float temp0_117[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_113, temp0_113, 0xaa), *(rbx_2 + 0x3e0))
                            float temp0_119[0x4] = __mulps_xmmps_memps(
                                _mm_shuffle_ps(temp0_113, temp0_113, 0x55), *(rbx_2 + 0x3d0))
                            zmm0_1 = var_3d0_1
                            float var_258_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_115, temp0_117), 
                                _mm_add_ps(temp0_119, 
                                    __mulps_xmmps_memps(_mm_shuffle_ps(temp0_113, temp0_113, 0), 
                                        *(rbx_2 + 0x3c0))))
                            zmm2 = zmm0_1
                            zmm2[0] = zmm2[0] * zmm0_1[0]
                            var_208_1[0] = var_208_1[0] * var_208_1[0]
                            zmm2[0] = zmm2[0] + var_208_1[0]
                            var_1f8_1[0] = var_1f8_1[0] * var_1f8_1[0]
                            zmm0_1 = var_3cc_1
                            zmm2[0] = zmm2[0] + var_1f8_1[0]
                            zmm0_1[0] = zmm0_1[0] * zmm0_1[0]
                            var_1e8_1[0] = var_1e8_1[0] * var_1e8_1[0]
                            float temp0_125[0x4] = _mm_sqrt_ss(0, zmm2[0])
                            zmm0_1[0] = zmm0_1[0] + var_1e8_1[0]
                            var_1d8_1[0] = var_1d8_1[0] * var_1d8_1[0]
                            zmm0_1[0] = zmm0_1[0] + var_1d8_1[0]
                            float temp0_126[0x4] = _mm_sqrt_ss(0, zmm0_1[0])
                            float var_3f8_1
                            
                            if (cond:0_1)
                                var_3f8_1 = zmm6[0]
                            else
                                zmm15[0] = zmm15[0] / temp0_126[0]
                                zmm7 = 0x3f800000
                                zmm15[0] = zmm15[0] * temp0_125[0]
                                zmm7[0] = 1f * zmm6[0]
                                zmm15[0] = zmm15[0] * 1f
                                var_3f8_1 = zmm7[0]
                            
                            float var_3ec_1 = zmm15[0]
                            void var_2f8
                            sub_140acc920(&var_2f8, arg1 + 0x270)
                            void* rcx_6 = *(r12_2 + r13_1 + 8)
                            float zmm0_2[0x4]
                            
                            if (rcx_6 != 0)
                                zmm0_2, zmm9 = sub_141f89240(rcx_6, zmm8)
                                float var_2ec
                                zmm1 = var_2ec
                                zmm1[0] = zmm1[0] * zmm0_2[0]
                                var_2ec = zmm1[0]
                            
                            int64_t j_1 = 4
                            zmm8 = var_3f4_1 ^ 0x80000000
                            zmm6 = var_338_1 ^ 0x80000000
                            zmm15 = var_248_1
                            zmm7 = var_368_1 ^ 0x80000000
                            uint64_t r14_1 = zx.q(i * result + (rdi_1 << 2).d)
                            int32_t var_3c4_1 = r14_1.d
                            int64_t j
                            
                            do
                                int64_t rdi_2 = *(arg1 + 0x1b0)
                                
                                if (*(arg1 + 0x1d1) == 0)
                                    zmm8[0] = zmm8[0] * zmm13_1
                                    zmm8[0] = zmm8[0] + zmm8[0]
                                    zmm8[0] = zmm8[0] + zmm12_1
                                    int32_t rax_19 = int.d(zmm8[0]) s>> 1
                                    char rcx_15
                                    
                                    if (rax_19 s>= 0xffffff80)
                                        rcx_15 = 0x7f
                                        
                                        if (rax_19 s< 0x7f)
                                            rcx_15 = rax_19.b
                                    else
                                        rcx_15 = -0x80
                                    
                                    *(rdi_2 + (r14_1 << 3)) = rcx_15
                                    zmm6[0] = zmm6[0] * zmm13_1
                                    zmm6[0] = zmm6[0] + zmm6[0]
                                    zmm6[0] = zmm6[0] + zmm12_1
                                    int32_t rax_21 = int.d(zmm6[0]) s>> 1
                                    char rcx_16
                                    
                                    if (rax_21 s>= 0xffffff80)
                                        rcx_16 = 0x7f
                                        
                                        if (rax_21 s< 0x7f)
                                            rcx_16 = rax_21.b
                                    else
                                        rcx_16 = -0x80
                                    
                                    *(rdi_2 + (r14_1 << 3) + 1) = rcx_16
                                    zmm7[0] = zmm7[0] * zmm13_1
                                    zmm7[0] = zmm7[0] + zmm7[0]
                                    zmm7[0] = zmm7[0] + zmm12_1
                                    int32_t rax_23 = int.d(zmm7[0]) s>> 1
                                    char rcx_17
                                    
                                    if (rax_23 s>= 0xffffff80)
                                        rcx_17 = 0x7f
                                        
                                        if (rax_23 s< 0x7f)
                                            rcx_17 = rax_23.b
                                    else
                                        rcx_17 = -0x80
                                    
                                    float var_288_1 = arg_8.d[0]
                                    float var_284_1 = var_2e8_1[0]
                                    zmm0_2 = data_142d3f660
                                    *(rdi_2 + (r14_1 << 3) + 2) = rcx_17
                                    float var_268_1[0x4] = zmm0_2
                                    float var_298 = zmm8[0]
                                    float var_294_1 = zmm6[0]
                                    float var_290_1 = zmm7[0]
                                    float var_280_1 = zmm15[0]
                                    float var_278_1 = zmm10[0]
                                    float var_274_1 = zmm9[0]
                                    float var_270_1 = zmm11[0]
                                    *(rdi_2 + (r14_1 << 3) + 3) = 0x7f
                                    int32_t var_28c_1 = 0
                                    int32_t var_27c_1 = 0
                                    int32_t var_26c_1 = 0
                                    float zmm0_4
                                    float zmm9_2
                                    zmm0_4, zmm9_2, zmm10, zmm11, zmm12_1, zmm13_1, zmm14_1, 
                                        zmm15 = sub_14062b8d0(&var_298)
                                    float zmm2_2
                                    
                                    zmm2_2 = zmm0_4 >= 0f ? 254.5f : -253.5f
                                    
                                    float zmm1_2 = zmm10[0] * zmm13_1
                                    int32_t rax_25 = int.d(zmm1_2 + zmm1_2 + zmm12_1) s>> 1
                                    char rcx_19
                                    
                                    if (rax_25 s>= 0xffffff80)
                                        rcx_19 = 0x7f
                                        
                                        if (rax_25 s< 0x7f)
                                            rcx_19 = rax_25.b
                                    else
                                        rcx_19 = -0x80
                                    
                                    *(rdi_2 + (r14_1 << 3) + 4) = rcx_19
                                    zmm1_2 = zmm9_2 * zmm13_1
                                    int32_t rax_27 = int.d(zmm1_2 + zmm1_2 + zmm12_1) s>> 1
                                    char rcx_20
                                    
                                    if (rax_27 s>= 0xffffff80)
                                        rcx_20 = 0x7f
                                        
                                        if (rax_27 s< 0x7f)
                                            rcx_20 = rax_27.b
                                    else
                                        rcx_20 = -0x80
                                    
                                    zmm1_2 = zmm11[0]
                                    *(rdi_2 + (r14_1 << 3) + 5) = rcx_20
                                    zmm1_2 = zmm1_2 * zmm13_1
                                    int32_t rax_29 = int.d(zmm1_2 + zmm1_2 + zmm12_1) s>> 1
                                    char rcx_21
                                    
                                    if (rax_29 s>= 0xffffff80)
                                        rcx_21 = 0x7f
                                        
                                        if (rax_29 s< 0x7f)
                                            rcx_21 = rax_29.b
                                    else
                                        rcx_21 = -0x80
                                    
                                    *(rdi_2 + (r14_1 << 3) + 6) = rcx_21
                                    int32_t rax_31 = int.d(zmm2_2) s>> 1
                                    char rcx_22
                                    
                                    if (rax_31 s>= 0xffffff80)
                                        rcx_22 = 0x7f
                                        
                                        if (rax_31 s< 0x7f)
                                            rcx_22 = rax_31.b
                                    else
                                        rcx_22 = -0x80
                                    
                                    *(rdi_2 + (r14_1 << 3) + 7) = rcx_22
                                else
                                    zmm8[0] = zmm8[0] * zmm14_1
                                    int16_t* rbx_5 = (zx.q(r14_1.d) << 4) + rdi_2
                                    zmm8[0] = zmm8[0] + zmm8[0]
                                    zmm8[0] = zmm8[0] + zmm12_1
                                    int32_t rax_5 = int.d(zmm8[0]) s>> 1
                                    int16_t rcx_7
                                    
                                    if (rax_5 s>= 0xffff8000)
                                        rcx_7 = 0x7fff
                                        
                                        if (rax_5 s< 0x7fff)
                                            rcx_7 = rax_5.w
                                    else
                                        rcx_7 = -0x8000
                                    
                                    *rbx_5 = rcx_7
                                    zmm6[0] = zmm6[0] * zmm14_1
                                    zmm6[0] = zmm6[0] + zmm6[0]
                                    zmm6[0] = zmm6[0] + zmm12_1
                                    int32_t rax_7 = int.d(zmm6[0]) s>> 1
                                    int16_t rcx_8
                                    
                                    if (rax_7 s>= 0xffff8000)
                                        rcx_8 = 0x7fff
                                        
                                        if (rax_7 s< 0x7fff)
                                            rcx_8 = rax_7.w
                                    else
                                        rcx_8 = -0x8000
                                    
                                    rbx_5[1] = rcx_8
                                    zmm7[0] = zmm7[0] * zmm14_1
                                    zmm7[0] = zmm7[0] + zmm7[0]
                                    zmm7[0] = zmm7[0] + zmm12_1
                                    int32_t rax_9 = int.d(zmm7[0]) s>> 1
                                    int16_t rcx_9
                                    
                                    if (rax_9 s>= 0xffff8000)
                                        rcx_9 = 0x7fff
                                        
                                        if (rax_9 s< 0x7fff)
                                            rcx_9 = rax_9.w
                                    else
                                        rcx_9 = -0x8000
                                    
                                    float var_2c8_1 = arg_8.d[0]
                                    float var_2c4_1 = var_2e8_1[0]
                                    zmm0_2 = data_142d3f660
                                    rbx_5[2] = rcx_9
                                    float var_2a8_1[0x4] = zmm0_2
                                    float var_2d8 = zmm8[0]
                                    float var_2d4_1 = zmm6[0]
                                    float var_2d0_1 = zmm7[0]
                                    float var_2c0_1 = zmm15[0]
                                    float var_2b8_1 = zmm10[0]
                                    float var_2b4_1 = zmm9[0]
                                    float var_2b0_1 = zmm11[0]
                                    rbx_5[3] = 0x7fff
                                    int32_t var_2cc_1 = 0
                                    int32_t var_2bc_1 = 0
                                    int32_t var_2ac_1 = 0
                                    float zmm0_3
                                    float zmm9_1
                                    zmm0_3, zmm9_1, zmm10, zmm11, zmm12_1, zmm13_1, zmm14_1, 
                                        zmm15 = sub_14062b8d0(&var_2d8)
                                    float zmm2_1
                                    
                                    zmm2_1 = zmm0_3 >= 0f ? 65534.5f : -65533.5f
                                    
                                    float zmm1_1 = zmm10[0] * zmm14_1
                                    int32_t rax_11 = int.d(zmm1_1 + zmm1_1 + zmm12_1) s>> 1
                                    int16_t rcx_11
                                    
                                    if (rax_11 s>= 0xffff8000)
                                        rcx_11 = 0x7fff
                                        
                                        if (rax_11 s< 0x7fff)
                                            rcx_11 = rax_11.w
                                    else
                                        rcx_11 = -0x8000
                                    
                                    rbx_5[4] = rcx_11
                                    zmm1_1 = zmm9_1 * zmm14_1
                                    int32_t rax_13 = int.d(zmm1_1 + zmm1_1 + zmm12_1) s>> 1
                                    int16_t rcx_12
                                    
                                    if (rax_13 s>= 0xffff8000)
                                        rcx_12 = 0x7fff
                                        
                                        if (rax_13 s< 0x7fff)
                                            rcx_12 = rax_13.w
                                    else
                                        rcx_12 = -0x8000
                                    
                                    zmm1_1 = zmm11[0]
                                    rbx_5[5] = rcx_12
                                    zmm1_1 = zmm1_1 * zmm14_1
                                    int32_t rax_15 = int.d(zmm1_1 + zmm1_1 + zmm12_1) s>> 1
                                    int16_t rcx_13
                                    
                                    if (rax_15 s>= 0xffff8000)
                                        rcx_13 = 0x7fff
                                        
                                        if (rax_15 s< 0x7fff)
                                            rcx_13 = rax_15.w
                                    else
                                        rcx_13 = -0x8000
                                    
                                    rbx_5[6] = rcx_13
                                    int32_t rax_17 = int.d(zmm2_1) s>> 1
                                    
                                    if (rax_17 s>= 0xffff8000)
                                        int16_t rcx_14 = 0x7fff
                                        
                                        if (rax_17 s< 0x7fff)
                                            rcx_14 = rax_17.w
                                        
                                        rbx_5[7] = rcx_14
                                    else
                                        rbx_5[7] = 0x8000
                                
                                int32_t* rbx_8 = zx.q(r14_1.d * *(arg1 + 0x248)) + *(arg1 + 0x240)
                                void var_388
                                char* rax_32
                                rax_32, zmm6, zmm7, zmm8, zmm9 =
                                    sub_140ae16d0(&var_2f8, &var_388, 1)
                                r14_1 = zx.q(r14_1.d + 1)
                                *rbx_8 = *rax_32
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            zmm15 = var_3ec_1
                            int64_t rcx_25 = *(arg1 + 0x200)
                            zmm11 = var_3f8_1 ^ data_142d3f780
                            zmm6 = arg_8.d
                            float zmm3_1[0x4] = var_3f4_1
                            float zmm4_2[0x4] = var_338_1
                            int64_t* rax_34 = zx.q(*(arg1 + 0x208) * var_3c4_1)
                            zmm3_1[0] = zmm3_1[0] * zmm15[0]
                            zmm4_2[0] = zmm4_2[0] * zmm15[0]
                            float zmm5_2 = var_368_1 * zmm15[0]
                            zmm15 ^= data_142d3f780
                            zmm11[0] = zmm11[0] * var_248_1[0]
                            zmm11[0] = zmm11[0] * zmm6[0]
                            zmm11[0] = zmm11[0] * var_2e8_1[0]
                            zmm11[0] = zmm11[0] + zmm5_2
                            zmm11[0] = zmm11[0] + zmm3_1[0]
                            zmm11[0] = zmm11[0] + zmm4_2[0]
                            float var_218_1 = zmm11[0]
                            *(rax_34 + rcx_25) = (_mm_unpacklo_ps(zmm11, zmm11[0].q)).q
                            zmm0_2 = var_3f8_1
                            *(zx.q(rax_34.d) + rcx_25 + 8) = var_218_1
                            int64_t* rax_37 = zx.q((var_3c4_1 + 1) * *(arg1 + 0x208))
                            int64_t rcx_26 = *(arg1 + 0x200)
                            zmm6[0] = zmm6[0] * zmm0_2[0]
                            var_2e8_1[0] = var_2e8_1[0] * zmm0_2[0]
                            var_248_1[0] = var_248_1[0] * zmm0_2[0]
                            zmm6[0] = zmm6[0] + zmm3_1[0]
                            zmm15[0] = zmm15[0] * var_338_1
                            var_2e8_1[0] = var_2e8_1[0] + zmm4_2[0]
                            var_248_1[0] = var_248_1[0] + zmm5_2
                            zmm15[0] = zmm15[0] * var_368_1
                            zmm15[0] = zmm15[0] * var_3f4_1
                            float var_230_1 = var_248_1[0]
                            *(rax_37 + rcx_26) = (_mm_unpacklo_ps(zmm6, var_2e8_1[0].q)).q
                            zmm15[0] = zmm15[0] + zmm11[0]
                            zmm15[0] = zmm15[0] + var_2e8_1[0]
                            *(zx.q(rax_37.d) + rcx_26 + 8) = var_230_1
                            int64_t rcx_27 = *(arg1 + 0x200)
                            zmm15[0] = zmm15[0] + zmm11[0]
                            zmm15[0] = zmm15[0] + var_248_1[0]
                            zmm15[0] = zmm15[0] + zmm11[0]
                            int64_t* rax_40 = zx.q((var_3c4_1 + 2) * *(arg1 + 0x208))
                            zmm15[0] = zmm15[0] + zmm6[0]
                            float var_224_1 = zmm15[0]
                            *(rax_40 + rcx_27) = (_mm_unpacklo_ps(zmm15, zmm15[0].q)).q
                            *(zx.q(rax_40.d) + rcx_27 + 8) = var_224_1
                            int64_t rcx_28 = *(arg1 + 0x200)
                            float var_3b0 = zmm15[0]
                            int64_t* rax_43 = zx.q((var_3c4_1 + 3) * *(arg1 + 0x208))
                            *(rax_43 + rcx_28) = (_mm_unpacklo_ps(zmm15, zmm15[0].q)).q
                            *(zx.q(rax_43.d) + rcx_28 + 8) = var_3b0
                            int64_t rdx_10 = *(arg1 + 0x1b8)
                            int64_t rcx_30 = zx.q(var_3c4_1) * zx.q(*(arg1 + 0x1c8))
                            
                            if (*(arg1 + 0x1d0) == 0)
                                *(rdx_10 + (rcx_30 << 2)) = 0
                            else
                                *(rdx_10 + (rcx_30 << 3)) = 0
                            
                            int64_t rdx_11 = *(arg1 + 0x1b8)
                            int64_t rcx_32 = zx.q(var_3c4_1 + 1) * zx.q(*(arg1 + 0x1c8))
                            
                            if (*(arg1 + 0x1d0) == 0)
                                *(rdx_11 + (rcx_32 << 2)) = 0x3c000000
                            else
                                *(rdx_11 + (rcx_32 << 3)) = 0
                                *(rdx_11 + (rcx_32 << 3) + 4) = 0x3f800000
                            
                            int64_t rdx_12 = *(arg1 + 0x1b8)
                            int64_t rcx_34 = zx.q(var_3c4_1 + 2) * zx.q(*(arg1 + 0x1c8))
                            
                            if (*(arg1 + 0x1d0) == 0)
                                *(rdx_12 + (rcx_34 << 2)) = 0x3c00
                            else
                                *(rdx_12 + (rcx_34 << 3)) = 0x3f800000
                            
                            int64_t rdx_13 = *(arg1 + 0x1b8)
                            int64_t rcx_36 = zx.q(var_3c4_1 + 3) * zx.q(*(arg1 + 0x1c8))
                            
                            if (*(arg1 + 0x1d0) == 0)
                                *(rdx_13 + (rcx_36 << 2)) = 0x3c003c00
                            else
                                *(rdx_13 + (rcx_36 << 3)) = 0x3f800000
                                *(rdx_13 + (rcx_36 << 3) + 4) = 0x3f800000
                            
                            int32_t rax_49 = sub_14081f8e0(arg5, 1)
                            int64_t* rdi_5 =
                                zx.q(rax_49 s% 0x66) * 0xa0 + *(*arg5 + (sx.q(rax_49 s/ 0x66) << 3))
                            rdi_5[0xf] = arg1 + 0x278
                            int64_t* rcx_42 = *(r12_2 + r13_1)
                            rdi_5[0x10] = (*(*rcx_42 + 0x280))(rcx_42)
                            int32_t rax_54 = *(rdi_5 + 0x9c)
                            rdi_5[0x11] = 0
                            int32_t rbx_11 = (zx.d(*(arg1 + 0x35)) & 1) | (rax_54 & 0xfffffffa)
                            *(rdi_5 + 0x9c) = rbx_11
                            int64_t* rcx_44 = rdi_5
                            *(rdi_5 + 0x9c) = (sub_14082c3b0(arg1, var_3a8_1) & 7) << 0xd
                                | (rbx_11 & 0xffff00ff) | 0x82
                            int64_t* rax_61 = rdi_5[0xd]
                            
                            if (rax_61 != 0)
                                rcx_44 = rax_61
                            
                            rcx_44[2] = 0
                            rcx_44[8].d = 0
                            rcx_44[0xa].d = 0
                            *(rcx_44 + 0x54) = 3
                            *(rcx_44 + 0x44) = 2
                            *(rcx_44 + 0x4c) = var_3c4_1
                            *(rdi_5 + 0x9c) |= 0x10000
                            i = i_1
                            *(rdi_5 + 0x9c) =
                                zx.d(sub_14076deb0(arg1)) << 0x11 | (*(rdi_5 + 0x9c) & 0xfffdffff)
                            zmm12_1, zmm13_1, zmm14_1 = sub_1422dd2a0(arg5, i, rdi_5)
                            zmm11 = var_1c8
                            zmm9 = var_358
                            zmm10 = var_3c0_1
                            rbx_2 = var_3a8_1
                            rdi_1 = zx.q(var_3e8_1)
                        
                        rdi_1 = zx.q(rdi_1.d + 1)
                        r12_2 = &r12_2[5]
                        var_3e8_1 = rdi_1.d
                    while (rdi_1.d s< *(arg1 + 0x260))
                    
                    zmm15 = 0x80000000
                    r15_1 = var_3e0_1
                    r12_1 = var_3a0_1
                    r13 = arg2
                
                rdi = arg4
            
            i += 1
            r15_1 = rol.d(r15_1, 1)
            r12_1 = &r12_1[1]
            i_1 = i
            var_3e0_1 = r15_1
            var_3a0_1 = r12_1
        while (i s< r13[1].d)
    
    void* var_3b0_1 = arg1
    void* var_3b8 = arg1 + 0x278
    
    if (sub_140a80f40() != 0)
        return sub_141f05ba0(&var_3b8)
    
    if (data_143f138f4 == 0)
        uint32_t rax_69
        
        if (data_143de5480 != 0)
            rax_69.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_69.b != 0)
            var_358 = var_3b8.o
            return sub_141f05ba0(&var_358)
    
    int64_t* rax_71 = sub_141f0ed10(&var_1c8, nullptr, 0xff)
    *(*rax_71 + 0x10) = var_3b8.o
    void* rcx_51 = *rax_71
    int32_t r8_6 = rax_71[2].d
    int64_t* rdx_22 = rax_71[1]
    int64_t* rbx_15 = *(rcx_51 + 0x28)
    arg_8 = rbx_15
    int32_t* rdi_6 = &rbx_15[9]
    
    if (rbx_15 != 0)
        *rdi_6 += 1
        rbx_15 = arg_8
    
    result = sub_140a064d0(rcx_51, rdx_22, r8_6, 1)
    
    if (rbx_15 != 0)
        result = *rdi_6
        *rdi_6 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_8)

return result
