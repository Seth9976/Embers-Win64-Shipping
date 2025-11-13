// 函数: sub_142308590
// 地址: 0x142308590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t* rcx = *arg1
uint64_t var_2d8 = 0
int32_t var_2d0 = 0
char* result = sub_142216840(sub_140d3c6e0(rcx) + 0x2a8, &var_2d8)

if (result.d != 0 && result.d s<= 0x20)
    void* rax_3 = sub_140d3c6e0(*arg1)
    float zmm8[0x4] = data_143f57810
    float zmm1_1[0x4] = *(rax_3 + 0x1c0)
    float zmm6[0x4] = *(rax_3 + 0x1e0)
    float zmm12[0x4] = *(rax_3 + 0x1d0)
    float temp0_1[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
    void* rax_4 = arg1[1]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
    float temp0_4[0x4] = _mm_mul_ps(zmm1_1, temp0_1)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
    float temp0_7[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
    float temp0_8[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x1a)
    float temp0_10[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_3)
    float temp0_12[0x4] = _mm_add_ps(temp0_8, _mm_shuffle_ps(temp0_4, temp0_4, 1))
    float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_6)
    float temp0_14[0x4] = _mm_sub_ps(temp0_6, temp0_10)
    float zmm3[0x4] = *(rax_4 + 0x1c0)
    float temp0_15[0x4] = _mm_sub_ps(zmm8, temp0_12)
    float temp0_16[0x4] = _mm_mul_ps(temp0_13, zmm6)
    float temp0_17[0x4] = _mm_mul_ps(temp0_7, temp0_14)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm6)
    float temp0_19[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
    zmm1_1 = __andps_xmmxud_memxud(temp0_18, data_143f57820)
    float temp0_21[0x4] = _mm_shuffle_ps(temp0_17, zmm1_1, 0x32)
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm1_1, 0), temp0_21, 0x82)
    float temp0_24[0x4] = _mm_shuffle_ps(temp0_16, zmm1_1, 0x31)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_17, zmm1_1, 0x10)
    _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, temp0_17, 0x12), zmm1_1, 0xe8)
    float temp0_28[0x4] = _mm_add_ps(zmm3, zmm3)
    _mm_shuffle_ps(temp0_25, temp0_24, 0x88)
    float temp0_30[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
    zmm8[0].q = zmm12 u>> 0x40
    _mm_shuffle_ps(zmm12, zmm8, 0xc4)
    float temp0_32[0x4] = _mm_mul_ps(zmm3, temp0_28)
    float temp0_33[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x29)
    float temp0_35[0x4] = _mm_mul_ps(temp0_30, _mm_shuffle_ps(temp0_28, temp0_28, 0x12))
    zmm1_1 = *(rax_4 + 0x1e0)
    float temp0_36[0x4] = _mm_mul_ps(temp0_19, temp0_33)
    float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xc9)
    float temp0_38[0x4] = _mm_add_ps(temp0_35, temp0_36)
    float temp0_39[0x4] = _mm_sub_ps(temp0_36, temp0_35)
    float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm1_1)
    float temp0_41[0x4] = _mm_mul_ps(temp0_37, temp0_39)
    zmm3 = __andps_xmmxud_memxud(
        _mm_mul_ps(
            _mm_sub_ps(zmm8, 
                _mm_add_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x1a), 
                    _mm_shuffle_ps(temp0_32, temp0_32, 1))), 
            zmm1_1), 
        data_143f57820)
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_41, zmm3, 0x32)
    float temp0_50[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_40, zmm3, 0), temp0_48, 0x82)
    float temp0_51[0x4] = _mm_shuffle_ps(temp0_40, zmm3, 0x31)
    float temp0_53[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_41, zmm3, 0x10), temp0_51, 0x88)
    float zmm0_1[0x4] = *(rax_4 + 0x1d0)
    zmm8[0].q = zmm0_1 u>> 0x40
    float temp0_54[0x4] = _mm_shuffle_ps(temp0_40, temp0_41, 0x12)
    float temp0_55[0x4] = _mm_shuffle_ps(zmm0_1, zmm8, 0xc4)
    float temp0_56[0x4] = _mm_shuffle_ps(temp0_54, zmm3, 0xe8)
    float var_2e8_1[0x4] = temp0_55
    float var_318[0x4] = temp0_50
    float var_308_1[0x4] = temp0_53
    float var_2f8_1[0x4] = temp0_56
    void var_118
    uint32_t (* rax_5)[0x4]
    float zmm9_1[0x4]
    float zmm10_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    rax_5, zmm9_1, zmm10_1, zmm11_1, zmm12_1 = sub_140631b10(&var_318, &var_118)
    float temp0_57[0x4] = _mm_shuffle_ps(zmm10_1, zmm10_1, 0)
    float temp0_58[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
    uint32_t zmm2_1[0x4] = *rax_5
    float zmm3_1[0x4] = rax_5[1]
    float zmm4_2[0x4] = rax_5[2]
    float zmm5_2[0x4] = rax_5[3]
    float temp0_59[0x4] = _mm_mul_ps(temp0_58, zmm3_1)
    float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa), zmm4_2)
    float temp0_62[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0)
    float temp0_63[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0)
    float temp0_64[0x4] = _mm_mul_ps(temp0_62, zmm2_1)
    float temp0_65[0x4] = _mm_mul_ps(temp0_57, zmm2_1)
    float temp0_66[0x4] = _mm_mul_ps(temp0_63, zmm2_1)
    float temp0_67[0x4] = _mm_add_ps(temp0_64, temp0_59)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xff), zmm5_2)
    float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0x55), zmm3_1)
    float temp0_72[0x4] = _mm_add_ps(temp0_67, temp0_61)
    float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xaa), zmm4_2)
    float temp0_75[0x4] = _mm_add_ps(temp0_65, temp0_71)
    float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10_1, zmm10_1, 0xff), zmm5_2)
    float zmm13_1[0x4] = _mm_add_ps(temp0_72, temp0_69)
    float temp0_79[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0x55)
    float temp0_80[0x4] = _mm_add_ps(temp0_75, temp0_74)
    float temp0_81[0x4] = _mm_mul_ps(temp0_79, zmm3_1)
    float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11_1, zmm11_1, 0xaa), zmm4_2)
    float temp0_84[0x4] = _mm_add_ps(temp0_66, temp0_81)
    float temp0_85[0x4] = _mm_shuffle_ps(zmm11_1, zmm11_1, 0xff)
    float zmm14_1[0x4] = _mm_add_ps(temp0_80, temp0_77)
    float temp0_87[0x4] = _mm_mul_ps(temp0_85, zmm5_2)
    float temp0_88[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0)
    float temp0_89[0x4] = _mm_add_ps(temp0_84, temp0_83)
    float temp0_90[0x4] = _mm_mul_ps(temp0_88, zmm2_1)
    float temp0_91[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0x55)
    float zmm15_1[0x4] = _mm_add_ps(temp0_89, temp0_87)
    uint64_t r12_1 = var_2d8
    float temp0_93[0x4] = _mm_shuffle_ps(zmm12_1, zmm12_1, 0xaa)
    float temp0_94[0x4] = _mm_mul_ps(temp0_91, zmm3_1)
    int64_t rax_7 = r12_1 + (sx.q(var_2d0) << 3)
    float temp0_95[0x4] = _mm_mul_ps(temp0_93, zmm4_2)
    float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12_1, zmm12_1, 0xff), zmm5_2)
    zmm10_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_90, temp0_94), temp0_95), temp0_97)
    float var_1e8_1[0x4] = zmm10_1
    
    if (r12_1 != rax_7)
        zmm11_1 = 0x80000000
        zmm12_1 = 0x40000000
        
        do
            uint32_t rbx_1 = zx.d(sub_14226e880(r12_1))
            void var_338
            sub_14226c680(&var_338, r12_1)
            int128_t* rax_9 = sub_14226de10(&var_118, r12_1)
            float zmm1_3[0x4] = *rax_9
            zmm9_1 = rax_9[1]
            float temp0_101[0x4] = _mm_add_ps(zmm1_3, zmm1_3)
            float temp0_102[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 4)
            float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x29), temp0_102)
            float temp0_105[0x4] = _mm_mul_ps(temp0_101, zmm1_3)
            float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x12), 
                _mm_shuffle_ps(zmm1_3, zmm1_3, 0xff))
            zmm1_3 = rax_9[2]
            float temp0_109[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x1a)
            float temp0_110[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 1)
            float temp0_111[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xc9)
            float temp0_112[0x4] = _mm_add_ps(temp0_109, temp0_110)
            float temp0_113[0x4] = _mm_add_ps(temp0_108, temp0_104)
            float temp0_114[0x4] = _mm_sub_ps(temp0_104, temp0_108)
            float zmm3_2[0x4] = data_143f57810
            float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm1_3)
            float temp0_116[0x4] = _mm_mul_ps(temp0_111, temp0_114)
            zmm3_2[0].q = zmm9_1 u>> 0x40
            float temp0_117[0x4] = _mm_sub_ps(zmm3_2, temp0_112)
            float temp0_118[0x4] = _mm_shuffle_ps(zmm9_1, zmm3_2, 0xc4)
            int96_t var_2e8_2 = temp0_118[0].12
            float zmm2_2[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_117, zmm1_3), data_143f57820)
            float temp0_121[0x4] = _mm_shuffle_ps(temp0_116, zmm2_2, 0x32)
            float temp0_123[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_115, zmm2_2, 0), temp0_121, 0x82)
            float temp0_124[0x4] = _mm_shuffle_ps(temp0_115, zmm2_2, 0x31)
            float temp0_125[0x4] = _mm_shuffle_ps(temp0_116, zmm2_2, 0x10)
            float temp0_126[0x4] = _mm_shuffle_ps(temp0_115, temp0_116, 0x12)
            float temp0_127[0x4] = _mm_shuffle_ps(temp0_125, temp0_124, 0x88)
            var_318 = temp0_123
            float temp0_128[0x4] = _mm_shuffle_ps(temp0_126, zmm2_2, 0xe8)
            int64_t var_138
            int32_t var_130
            
            if (rbx_1.b == 0)
                void* rax_54 = sub_14183e350(&var_338)
                int64_t* rbx_9 = arg1[2]
                int64_t rdi_5 = sx.q(rbx_9[1].d)
                int32_t rcx_61 = (rdi_5 + 1).d
                rbx_9[1].d = rcx_61
                
                if (rcx_61 s> *(rbx_9 + 0xc))
                    sub_1405c4d20(rbx_9)
                
                int64_t rax_55 = *rbx_9
                int64_t rcx_63 = rdi_5 * 5
                *(rax_55 + (rcx_63 << 2)) = 0xffffffff
                *(rax_55 + (rcx_63 << 2) + 4) = 0
                *(rax_55 + (rcx_63 << 2) + 0xc) = 0
                int64_t* rcx_64 = arg1[2]
                int32_t var_1fc_1 = 0x3f800000
                float var_208[0x4]
                var_208[0] = var_2e8_2.d[0]
                var_138 = 0
                int64_t rax_56 = sx.q(rcx_64[1].d)
                int64_t rdx_28 = *rcx_64
                float temp0_271[0x4] = _mm_shuffle_ps(var_208, var_208, 0xe1)
                temp0_271[0] = var_2e8_2:4.d[0]
                var_130 = 0
                int64_t r8_10 = rax_56 * 5
                float temp0_272[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xc6)
                temp0_272[0] = var_2e8_2:8.d[0]
                *(rdx_28 + (r8_10 << 2) - 0x14) = 0xffffffff
                float temp0_273[0x4] = _mm_shuffle_ps(temp0_272, temp0_272, 0xc9)
                var_208 = temp0_273
                float temp0_274[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0xff)
                float temp0_275[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0xaa)
                float temp0_276[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0x55)
                float temp0_277[0x4] = _mm_mul_ps(temp0_275, zmm15_1)
                float temp0_278[0x4] = _mm_mul_ps(temp0_276, zmm14_1)
                float temp0_279[0x4] = _mm_mul_ps(temp0_274, zmm10_1)
                float temp0_281[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_273, temp0_273, 0), zmm13_1)
                float temp0_284[0x4] =
                    _mm_add_ps(_mm_add_ps(temp0_279, temp0_277), _mm_add_ps(temp0_278, temp0_281))
                float var_1b8_1 = _mm_shuffle_ps(temp0_284, temp0_284, 0xaa)[0]
                *(rdx_28 + (r8_10 << 2) - 0xc) =
                    (_mm_unpacklo_ps(temp0_284, _mm_shuffle_ps(temp0_284, temp0_284, 0x55)[0].q)).q
                *(rdx_28 + (r8_10 << 2) - 4) = var_1b8_1
                *(rdx_28 + (r8_10 << 2) - 0x10) = *(rax_54 + 4)
            else
                float zmm0_3[0x4]
                float zmm6_1[0x4]
                
                if (rbx_1 == 2)
                    void* rax_31 = sub_14183e350(&var_338)
                    void* rbx_5 = arg1[2]
                    float temp0_227[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0x55)
                    float temp0_228[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0)
                    float temp0_229[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xaa)
                    int64_t rsi_3 = sx.q(*(rbx_5 + 0x28))
                    float temp0_230[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
                    float temp0_231[0x4] = _mm_mul_ps(temp0_228, zmm13_1)
                    float temp0_232[0x4] = _mm_mul_ps(temp0_229, zmm15_1)
                    int32_t rax_32 = (rsi_3 + 1).d
                    *(rbx_5 + 0x28) = rax_32
                    float temp0_233[0x4] = _mm_mul_ps(temp0_227, zmm14_1)
                    float temp0_234[0x4] = _mm_mul_ps(temp0_230, zmm14_1)
                    float temp0_235[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xff)
                    float temp0_236[0x4] = _mm_add_ps(temp0_233, temp0_231)
                    float temp0_238[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0), zmm13_1)
                    float temp0_239[0x4] = _mm_mul_ps(temp0_235, zmm10_1)
                    float temp0_240[0x4] = _mm_add_ps(temp0_236, temp0_232)
                    float temp0_241[0x4] = _mm_add_ps(temp0_234, temp0_238)
                    float temp0_243[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xaa), zmm15_1)
                    float temp0_244[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0)
                    float temp0_245[0x4] = _mm_add_ps(temp0_240, temp0_239)
                    float temp0_246[0x4] = _mm_mul_ps(temp0_244, zmm13_1)
                    float temp0_247[0x4] = _mm_add_ps(temp0_241, temp0_243)
                    float temp0_249[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0xaa), zmm15_1)
                    var_318 = temp0_245
                    float temp0_251[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_128, temp0_128, 0x55), zmm14_1)
                    float temp0_253[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xff), zmm10_1)
                    float temp0_254[0x4] = _mm_add_ps(temp0_251, temp0_246)
                    float temp0_256[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0), zmm13_1)
                    float temp0_257[0x4] = _mm_add_ps(temp0_247, temp0_253)
                    float temp0_258[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xff)
                    float temp0_259[0x4] = _mm_add_ps(temp0_254, temp0_249)
                    float temp0_261[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xaa), zmm15_1)
                    float var_308_3[0x4] = temp0_257
                    float temp0_263[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x55), zmm14_1)
                    float temp0_264[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xff)
                    float temp0_265[0x4] = _mm_mul_ps(temp0_258, zmm10_1)
                    float temp0_266[0x4] = _mm_add_ps(temp0_263, temp0_256)
                    float temp0_267[0x4] = _mm_mul_ps(temp0_264, zmm10_1)
                    float var_2f8_3[0x4] = _mm_add_ps(temp0_259, temp0_265)
                    float var_2e8_4[0x4] = _mm_add_ps(_mm_add_ps(temp0_266, temp0_261), temp0_267)
                    
                    if (rax_32 s> *(rbx_5 + 0x2c))
                        sub_1405c4ec0(rbx_5 + 0x20)
                    
                    int64_t rax_33 = *(rbx_5 + 0x20)
                    int64_t rcx_34 = rsi_3 * 5
                    *(rax_33 + (rcx_34 << 3)) = 0
                    *(rax_33 + (rcx_34 << 3) + 8) = 0
                    *(rax_33 + (rcx_34 << 3) + 0x10) = 0
                    *(rax_33 + (rcx_34 << 3) + 0x18) = 0
                    *(rax_33 + (rcx_34 << 3) + 0x20) = 0xffffffff
                    void* rdx_14 = arg1[2]
                    uint64_t* rbx_8 = *(rdx_14 + 0x20) + ((sx.q(*(rdx_14 + 0x28)) * 5 - 5) << 3)
                    rbx_8[1].d = 0
                    
                    if (*(rbx_8 + 0xc) s<= 5)
                        sub_1405a5410(rbx_8, 6)
                    
                    zmm2_2 = *(rax_31 + 4)
                    zmm0_3 = *(rax_31 + 8)
                    zmm2_2[0] = zmm2_2[0] + zmm12_1[0]
                    zmm1_3 = *(rax_31 + 0xc)
                    zmm0_3[0] = zmm0_3[0] + zmm12_1[0]
                    zmm1_3[0] = zmm1_3[0] + zmm12_1[0]
                    int64_t var_2a8 = 0x3f800000
                    int32_t var_2a0_1 = 0
                    *(rax_31 + 4) = zmm2_2[0]
                    *(rax_31 + 8) = zmm0_3[0]
                    *(rax_31 + 0xc) = zmm1_3[0]
                    float var_29c_1 = zmm2_2[0]
                    int64_t var_198[0x2]
                    int64_t* rax_36 = sub_142320270(&var_2a8, &var_198, &var_318)
                    int64_t rsi_4 = sx.q(rbx_8[1].d)
                    int128_t zmm6_2 = *rax_36
                    int32_t rax_37 = (rsi_4 + 1).d
                    var_2a8.o = zmm6_2
                    rbx_8[1].d = rax_37
                    
                    if (rax_37 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    uint64_t rax_38 = *rbx_8
                    int32_t var_298 = 0xbf800000
                    int64_t var_294_1 = 0
                    *(rax_38 + rsi_4 * 0x10) = zmm6_2
                    int32_t var_28c_1 = *(rax_31 + 4)
                    int64_t var_188[0x2]
                    int64_t* rax_39 = sub_142320270(&var_298, &var_188, &var_318)
                    int64_t rsi_5 = sx.q(rbx_8[1].d)
                    int128_t zmm6_3 = *rax_39
                    int32_t rax_40 = (rsi_5 + 1).d
                    var_298.o = zmm6_3
                    rbx_8[1].d = rax_40
                    
                    if (rax_40 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    uint64_t rax_41 = *rbx_8
                    int32_t var_288 = 0
                    int64_t var_284_1 = 0x3f800000
                    *(rax_41 + rsi_5 * 0x10) = zmm6_3
                    int32_t var_27c_1 = *(rax_31 + 8)
                    int64_t var_178[0x2]
                    int64_t* rax_42 = sub_142320270(&var_288, &var_178, &var_318)
                    int64_t rsi_6 = sx.q(rbx_8[1].d)
                    int128_t zmm6_4 = *rax_42
                    int32_t rax_43 = (rsi_6 + 1).d
                    var_288.o = zmm6_4
                    rbx_8[1].d = rax_43
                    
                    if (rax_43 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    uint64_t rax_44 = *rbx_8
                    int32_t var_278 = 0
                    int32_t var_274_1 = 0xbf800000
                    int32_t var_270_1 = 0
                    *(rax_44 + rsi_6 * 0x10) = zmm6_4
                    int32_t var_26c_1 = *(rax_31 + 8)
                    int64_t var_168[0x2]
                    int64_t* rax_45 = sub_142320270(&var_278, &var_168, &var_318)
                    int64_t rsi_7 = sx.q(rbx_8[1].d)
                    int128_t zmm6_5 = *rax_45
                    int32_t rax_46 = (rsi_7 + 1).d
                    var_278.o = zmm6_5
                    rbx_8[1].d = rax_46
                    
                    if (rax_46 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    uint64_t rax_47 = *rbx_8
                    int64_t var_268 = 0
                    int32_t var_260_1 = 0x3f800000
                    *(rax_47 + rsi_7 * 0x10) = zmm6_5
                    int32_t var_25c_1 = *(rax_31 + 0xc)
                    int64_t var_158[0x2]
                    int64_t* rax_48 = sub_142320270(&var_268, &var_158, &var_318)
                    int64_t rsi_8 = sx.q(rbx_8[1].d)
                    int128_t zmm6_6 = *rax_48
                    int32_t rax_49 = (rsi_8 + 1).d
                    var_268.o = zmm6_6
                    rbx_8[1].d = rax_49
                    
                    if (rax_49 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    uint64_t rax_50 = *rbx_8
                    int64_t var_258 = 0
                    int32_t var_250_1 = 0xbf800000
                    *(rax_50 + rsi_8 * 0x10) = zmm6_6
                    int32_t var_24c_1 = *(rax_31 + 0xc)
                    int64_t var_148[0x2]
                    int64_t* rax_51
                    rax_51, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_142320270(&var_258, &var_148, &var_318)
                    int64_t rdi_4 = sx.q(rbx_8[1].d)
                    zmm6_1 = *rax_51
                    int32_t rax_52 = (rdi_4 + 1).d
                    var_258.o = zmm6_1
                    rbx_8[1].d = rax_52
                    
                    if (rax_52 s> *(rbx_8 + 0xc))
                        sub_1405a4f90(rbx_8)
                    
                    *(*rbx_8 + rdi_4 * 0x10) = zmm6_1
                    rbx_8[4].d = 0xffffffff
                else if (rbx_1 == 3)
                    void* rax_19 = sub_14183e350(&var_338)
                    int64_t* rbx_3 = arg1[2]
                    int64_t rdi_2 = sx.q(rbx_3[1].d)
                    int32_t rcx_26 = (rdi_2 + 2).d
                    rbx_3[1].d = rcx_26
                    
                    if (rcx_26 s> *(rbx_3 + 0xc))
                        sub_1405c4d20(rbx_3)
                    
                    int64_t rax_20 = *rbx_3
                    int64_t rcx_28 = rdi_2 * 5
                    *(rax_20 + (rcx_28 << 2)) = 0xffffffff
                    *(rax_20 + (rcx_28 << 2) + 4) = 0
                    *(rax_20 + (rcx_28 << 2) + 0xc) = 0
                    *(rax_20 + (rcx_28 << 2) + 0x14) = 0xffffffff
                    *(rax_20 + (rcx_28 << 2) + 0x18) = 0
                    *(rax_20 + (rcx_28 << 2) + 0x20) = 0
                    int64_t* rcx_29 = arg1[2]
                    int64_t r15_2 = sx.q(rcx_29[3].d)
                    int64_t rax_21 = sx.q(rcx_29[1].d)
                    int64_t rsi_2 = *rcx_29
                    int64_t r8_3 = rax_21 * 5
                    int32_t rax_22 = (r15_2 + 1).d
                    var_138 = r8_3
                    int64_t rdx_11 = (rax_21 - 2) * 5
                    rcx_29[3].d = rax_22
                    
                    if (rax_22 s> *(rcx_29 + 0x1c))
                        sub_1405a4d70(&rcx_29[2])
                        r8_3 = var_138
                    
                    zmm6_1 = var_318[0]
                    float zmm7_1[0x4] = var_318[1]
                    float zmm8_1[0x4] = var_318[2]
                    int64_t rax_23 = rcx_29[2]
                    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                    *(rax_23 + (r15_2 << 3)) = -1
                    void* rax_24 = arg1[2]
                    zmm8_1[0] = zmm8_1[0] * zmm8_1[0]
                    zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
                    float var_2c8_1 = zmm6_1[0]
                    int64_t rcx_31 = sx.q(*(rax_24 + 0x18))
                    int64_t r9_1 = *(rax_24 + 0x10)
                    float var_2c4_1 = zmm7_1[0]
                    float var_2c0_1 = zmm8_1[0]
                    zmm7_1[0] = zmm7_1[0] + zmm8_1[0]
                    float zmm4_3[0x4]
                    float zmm5_3[0x4]
                    
                    if (not(zmm7_1[0] != 1f))
                        zmm0_3 = zx.o(var_2c8_1.q)
                        zmm1_3 = var_2c0_1
                        zmm4_3 = zmm0_3.d
                        zmm3_2 = _mm_shuffle_ps(zmm0_3, zmm0_3, 0x55)
                    else if (zmm7_1[0] >= 9.99999994e-09f)
                        zmm5_3 = 0x3f000000
                        float temp0_176[0x4] = _mm_rsqrt_ss(zmm7_1[0], zmm7_1[0])
                        zmm2_2 = 0x3f000000
                        zmm7_1[0] = zmm7_1[0] * 0.5f
                        temp0_176[0] = temp0_176[0] * temp0_176[0]
                        zmm7_1[0] = zmm7_1[0] * temp0_176[0]
                        zmm2_2[0] = 0.5f - zmm7_1[0]
                        temp0_176[0] = temp0_176[0] * zmm2_2[0]
                        temp0_176[0] = temp0_176[0] + temp0_176[0]
                        temp0_176[0] = temp0_176[0] * temp0_176[0]
                        zmm7_1[0] = zmm7_1[0] * temp0_176[0]
                        zmm5_3[0] = 0.5f - zmm7_1[0]
                        temp0_176[0] = temp0_176[0] * zmm5_3[0]
                        temp0_176[0] = temp0_176[0] + temp0_176[0]
                        zmm1_3 = temp0_176
                        int64_t var_2b8_1
                        var_2b8_1.d = temp0_176[0]
                        zmm4_3 = zmm1_3
                        zmm1_3[0] = zmm1_3[0] * zmm7_1[0]
                        zmm4_3[0] = zmm4_3[0] * zmm6_1[0]
                        zmm3_2 = zmm1_3
                        zmm1_3[0] = zmm1_3[0] * zmm8_1[0]
                    else
                        zmm4_3 = data_143dbb1f8
                        zmm3_2 = data_143dbb1fc
                        zmm1_3 = data_143dbb200
                    
                    zmm8_1 = var_2e8_2.d
                    zmm9_1 = var_2e8_2:4.d
                    *(rsi_2 + (rdx_11 << 2)) = 0xffffffff
                    int32_t var_22c_1 = 0
                    float var_238[0x4]
                    var_238[0] = zmm4_3[0]
                    int32_t var_21c_1 = 0x3f800000
                    zmm4_3 = *(rax_19 + 8)
                    float temp0_177[0x4] = _mm_shuffle_ps(var_238, var_238, 0xe1)
                    temp0_177[0] = zmm3_2[0]
                    var_138 = 0
                    float temp0_178[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0xc6)
                    temp0_178[0] = zmm1_3[0]
                    int32_t var_130_1 = 0
                    float temp0_179[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xc9)
                    var_238 = temp0_179
                    float temp0_180[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xff)
                    float temp0_181[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xaa)
                    float temp0_182[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0x55)
                    float temp0_184[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0), zmm13_1)
                    var_138 = 0
                    float temp0_185[0x4] = _mm_mul_ps(temp0_182, zmm14_1)
                    int32_t var_130_2 = 0
                    float temp0_186[0x4] = _mm_mul_ps(temp0_181, zmm15_1)
                    int32_t var_20c_1 = 0x3f800000
                    float temp0_187[0x4] = _mm_mul_ps(temp0_180, zmm10_1)
                    zmm10_1 = var_2e8_2:8.d
                    float temp0_188[0x4] = _mm_add_ps(temp0_185, temp0_184)
                    float var_228[0x4]
                    var_228[0] = zmm8_1[0]
                    float temp0_189[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
                    float temp0_190[0x4] = _mm_add_ps(temp0_187, temp0_186)
                    temp0_189[0] = zmm9_1[0]
                    float temp0_191[0x4] = _mm_shuffle_ps(temp0_189, temp0_189, 0xc6)
                    temp0_191[0] = zmm10_1[0]
                    float temp0_192[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0xc9)
                    float temp0_193[0x4] = _mm_add_ps(temp0_190, temp0_188)
                    var_228 = temp0_192
                    float temp0_194[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0xaa)
                    float temp0_195[0x4] = _mm_shuffle_ps(temp0_192, temp0_192, 0x55)
                    float temp0_197[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_192, temp0_192, 0xff), var_1e8_1)
                    float temp0_198[0x4] = _mm_mul_ps(temp0_194, zmm15_1)
                    float temp0_200[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_192, temp0_192, 0), zmm13_1)
                    float temp0_201[0x4] = _mm_add_ps(temp0_197, temp0_198)
                    float temp0_202[0x4] = _mm_mul_ps(temp0_195, zmm14_1)
                    float temp0_203[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0x55)
                    float temp0_204[0x4] = _mm_shuffle_ps(temp0_193, temp0_193, 0xaa)
                    float temp0_205[0x4] = _mm_add_ps(temp0_202, temp0_200)
                    zmm4_3[0] = zmm4_3[0] * temp0_193[0]
                    float temp0_206[0x4] = _mm_add_ps(temp0_201, temp0_205)
                    zmm4_3[0] = zmm4_3[0] * temp0_203[0]
                    zmm4_3[0] = zmm4_3[0] * temp0_204[0]
                    zmm4_3[0] = zmm4_3[0] + temp0_206[0]
                    float temp0_207[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0x55)
                    zmm4_3[0] = zmm4_3[0] + temp0_207[0]
                    float temp0_208[0x4] = _mm_shuffle_ps(temp0_206, temp0_206, 0xaa)
                    zmm4_3[0] = zmm4_3[0] + temp0_208[0]
                    *(rsi_2 + (rdx_11 << 2) + 8) = (_mm_unpacklo_ps(zmm4_3, zmm4_3[0].q)).q
                    *(rsi_2 + (rdx_11 << 2) + 0x10) = zmm4_3[0]
                    *(rsi_2 + (rdx_11 << 2) + 4) = *(rax_19 + 4)
                    *(rsi_2 + (r8_3 << 2) - 0x14) = 0xffffffff
                    zmm5_3 = *(rax_19 + 8)
                    float var_218[0x4]
                    var_218[0] = zmm8_1[0]
                    var_138 = 0
                    float temp0_210[0x4] = _mm_shuffle_ps(var_218, var_218, 0xe1)
                    temp0_210[0] = zmm9_1[0]
                    var_130 = 0
                    float temp0_211[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xc6)
                    temp0_211[0] = zmm10_1[0]
                    zmm10_1 = var_1e8_1
                    float temp0_212[0x4] = _mm_shuffle_ps(temp0_211, temp0_211, 0xc9)
                    var_218 = temp0_212
                    float temp0_213[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xff)
                    float temp0_214[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xaa)
                    float temp0_215[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0x55)
                    float temp0_216[0x4] = _mm_mul_ps(temp0_214, zmm15_1)
                    float temp0_218[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_212, temp0_212, 0), zmm13_1)
                    float temp0_219[0x4] = _mm_mul_ps(temp0_213, zmm10_1)
                    float temp0_220[0x4] = _mm_mul_ps(temp0_215, zmm14_1)
                    float temp0_221[0x4] = _mm_add_ps(temp0_219, temp0_216)
                    zmm5_3[0] = zmm5_3[0] * temp0_193[0]
                    zmm11_1 = 0x80000000
                    float temp0_223[0x4] = _mm_add_ps(temp0_221, _mm_add_ps(temp0_220, temp0_218))
                    zmm5_3[0] = zmm5_3[0] * temp0_203[0]
                    zmm5_3[0] = zmm5_3[0] * temp0_204[0]
                    float temp0_224[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0x55)
                    temp0_223[0] = temp0_223[0] - zmm5_3[0]
                    float temp0_225[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xaa)
                    temp0_224[0] = temp0_224[0] - zmm5_3[0]
                    temp0_225[0] = temp0_225[0] - zmm5_3[0]
                    *(rsi_2 + (r8_3 << 2) - 0xc) = (_mm_unpacklo_ps(temp0_223, temp0_224[0].q)).q
                    *(rsi_2 + (r8_3 << 2) - 4) = temp0_225[0]
                    *(rsi_2 + (r8_3 << 2) - 0x10) = *(rax_19 + 4)
                    *(r9_1 + (rcx_31 << 3) - 4) = (rdi_2 + 1).d
                    *(r9_1 + (rcx_31 << 3) - 8) = rdi_2.d
                else if (rbx_1 == 4)
                    void* rax_10 = sub_14183e350(&var_338)
                    
                    if (*(rax_10 + 0x20) != 0)
                        sub_142309ef0(arg1[2] + 0x20, 1)
                        void* rdx_4 = arg1[2]
                        float temp0_130[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0x55)
                        float temp0_131[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0)
                        float temp0_132[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xaa)
                        int64_t rax_11 = sx.q(*(rdx_4 + 0x28))
                        float temp0_133[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0x55)
                        float temp0_134[0x4] = _mm_mul_ps(temp0_131, zmm13_1)
                        float temp0_135[0x4] = _mm_mul_ps(temp0_132, zmm15_1)
                        int64_t rax_12 = *(rdx_4 + 0x20)
                        float temp0_136[0x4] = _mm_mul_ps(temp0_130, zmm14_1)
                        float temp0_137[0x4] = _mm_mul_ps(temp0_133, zmm14_1)
                        void* rbx_2 = rax_12 + rax_11 * 0x28
                        int64_t* rcx_14 = *(rax_10 + 0x20)
                        float temp0_138[0x4] = _mm_shuffle_ps(temp0_123, temp0_123, 0xff)
                        float temp0_139[0x4] = _mm_add_ps(temp0_136, temp0_134)
                        float temp0_140[0x4] = _mm_mul_ps(temp0_138, zmm10_1)
                        int64_t rax_13 = *rcx_14
                        float temp0_142[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0), zmm13_1)
                        float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_135)
                        float temp0_145[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_127, temp0_127, 0xaa), zmm15_1)
                        float temp0_146[0x4] = _mm_add_ps(temp0_137, temp0_142)
                        float temp0_147[0x4] = _mm_shuffle_ps(temp0_127, temp0_127, 0xff)
                        float temp0_148[0x4] = _mm_add_ps(temp0_143, temp0_140)
                        float temp0_149[0x4] = _mm_mul_ps(temp0_147, zmm10_1)
                        float temp0_150[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0)
                        float temp0_151[0x4] = _mm_add_ps(temp0_146, temp0_145)
                        float temp0_152[0x4] = _mm_mul_ps(temp0_150, zmm13_1)
                        var_318 = temp0_148
                        float temp0_153[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xaa)
                        float temp0_154[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0x55)
                        float temp0_155[0x4] = _mm_add_ps(temp0_151, temp0_149)
                        float temp0_156[0x4] = _mm_mul_ps(temp0_153, zmm15_1)
                        float temp0_157[0x4] = _mm_mul_ps(temp0_154, zmm14_1)
                        float temp0_158[0x4] = _mm_shuffle_ps(temp0_128, temp0_128, 0xff)
                        float var_308_2[0x4] = temp0_155
                        float temp0_159[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0x55)
                        float temp0_160[0x4] = _mm_add_ps(temp0_157, temp0_152)
                        float temp0_161[0x4] = _mm_mul_ps(temp0_159, zmm14_1)
                        float temp0_162[0x4] = _mm_mul_ps(temp0_158, zmm10_1)
                        float temp0_163[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0)
                        float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_156)
                        float temp0_165[0x4] = _mm_mul_ps(temp0_163, zmm13_1)
                        float temp0_167[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0xaa), zmm15_1)
                        float temp0_168[0x4] = _mm_add_ps(temp0_161, temp0_165)
                        float temp0_169[0x4] = _mm_shuffle_ps(temp0_118, temp0_118, 0xff)
                        float temp0_170[0x4] = _mm_add_ps(temp0_164, temp0_162)
                        float temp0_171[0x4] = _mm_mul_ps(temp0_169, zmm10_1)
                        float var_2f8_2[0x4] = temp0_170
                        float var_2e8_3[0x4] =
                            _mm_add_ps(_mm_add_ps(temp0_168, temp0_167), temp0_171)
                        int32_t rax_14 = (*(rax_13 + 0x40))(rcx_14)
                        *(rbx_2 - 0x20) = 0
                        
                        if (*(rbx_2 - 0x1c) != rax_14)
                            sub_1405a5410(rbx_2 - 0x28, rax_14)
                        
                        int32_t rdi_1 = 0
                        
                        if (rax_14 != 0)
                            do
                                int64_t* rcx_16 = *(rax_10 + 0x20)
                                (*(*rcx_16 + 0x48))(rcx_16, zx.q(rdi_1), &var_138)
                                float var_324_1 = var_138:4.d[0]
                                float var_328 = var_138.d[0]
                                int32_t var_12c
                                float var_31c_1 = (var_12c ^ zmm11_1)[0]
                                float var_320_1 = var_130[0]
                                int64_t var_1a8[0x2]
                                int64_t* rax_16
                                rax_16, zmm10_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                    sub_142320270(&var_328, &var_1a8, &var_318)
                                int64_t rsi_1 = sx.q(*(rbx_2 - 0x20))
                                float zmm0_4[0x4] = *rax_16
                                var_328.o = zmm0_4
                                int32_t rax_17 = (rsi_1 + 1).d
                                float temp0_174[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 0xff)
                                temp0_174[0] = temp0_174[0] + zmm12_1[0]
                                *(rbx_2 - 0x20) = rax_17
                                float var_31c_2 = temp0_174[0]
                                
                                if (rax_17 s> *(rbx_2 - 0x1c))
                                    sub_1405a4f90(rbx_2 - 0x28)
                                
                                rdi_1 += 1
                                *(*(rbx_2 - 0x28) + rsi_1 * 0x10) = var_328.o
                            while (rdi_1 u< rax_14)
            sub_14225b2b0(&var_338)
            r12_1 += 8
        while (r12_1 != rax_7)
    
    result = arg1[3]
    *result = 1

uint64_t rcx_22 = var_2d8

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_358)
return result
