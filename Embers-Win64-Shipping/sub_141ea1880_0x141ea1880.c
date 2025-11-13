// 函数: sub_141ea1880
// 地址: 0x141ea1880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_428
int64_t rax_1 = __security_cookie ^ &var_428
void* rax_2 = data_143f5b298
float zmm6[0x4]
float var_28[0x4] = zmm6
float zmm7[0x4]
float var_38[0x4] = zmm7
float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
float zmm10[0x4]
float var_68[0x4] = zmm10
uint32_t zmm11[0x4]
uint32_t var_78[0x4] = zmm11
float zmm12[0x4]
float var_88[0x4] = zmm12
uint32_t zmm13[0x4]
uint32_t var_98[0x4] = zmm13
int128_t zmm14 = zx.o(0)
uint32_t zmm15[0x4]
uint32_t var_b8[0x4] = zmm15
float zmm0[0x4]
uint32_t zmm1[0x4]
float zmm2[0x4]

if (rax_2 != 0 && *(rax_2 + 0xb08) != 0)
    void* rax_3
    
    if (arg1[0x15] == 0)
        rax_3 = sub_141ee69e0(arg1)
        rax_2 = data_143f5b298
    
    if (arg1[0x15] != 0 || rax_3 != 0)
        void* rcx_4 = arg1[0x15]
        
        if (rcx_4 == 0)
            rcx_4 = sub_141ee69e0(arg1)
            rax_2 = data_143f5b298
        
        if (*(rcx_4 + 0x11a) != 2)
            int64_t* rsi_1 = *(rax_2 + 0xb08)
            int64_t* var_348
            (*(*rsi_1 + 0xf8))(rsi_1, &var_348, 0)
            
            if (var_348 != 0 && (*(*rsi_1 + 0x120))(rsi_1) != 0)
                zmm1 = data_143f3a0a0
                int64_t* rcx_7 = arg1[0x18]
                zmm0 = zmm1
                uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm1, data_143f3a0b0)
                int64_t rax_8 = arg1[0x19]
                zmm0[0].q = zx.o(0) u>> 0x40
                float temp0_2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
                float var_198[0x4] = temp0_2
                float var_188_1[0x4] = zx.o(0)
                char var_408
                float var_1c8[0x4]
                
                if (rcx_7 == 0)
                    var_1c8 = temp0_2
                    int128_t var_1b8_3 = zx.o(0)
                    uint32_t var_1a8_3[0x4] = temp0_1
                else if ((*(arg1 + 0x14c) & 0x1c) != 0)
                    var_408.q = rax_8
                    zmm14 = sub_141f355c0(arg1, &var_1c8, &var_198, rcx_7, var_408)
                else
                    void var_138
                    uint32_t (* rax_9)[0x4] = (*(*rcx_7 + 0x408))(rcx_7, &var_138, rax_8, 0)
                    zmm8 = rax_9[2]
                    uint32_t zmm4_1[0x4]
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_1, zmm8), 
                            data_143f3a220, 1)) == 0)
                        float zmm5_1[0x4] = *rax_9
                        zmm2 = var_198
                        zmm7 = rax_9[1]
                        float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                        zmm4_1 = _mm_mul_ps(var_188_1, zmm8)
                        float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f3a1f0)
                        float temp0_141[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                        float temp0_142[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        float temp0_143[0x4] = _mm_mul_ps(zmm2, temp0_142)
                        zmm15 = _mm_mul_ps(temp0_1, zmm8)
                        float temp0_145[0x4] = _mm_add_ps(temp0_140, temp0_143)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                        float temp0_149[0x4] =
                            _mm_mul_ps(temp0_141, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3a1e0)
                        float temp0_151[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                        float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f3a1d0)
                        uint32_t var_1a8_2[0x4] = zmm15
                        float temp0_154[0x4] = _mm_add_ps(_mm_add_ps(temp0_145, zmm1), temp0_152)
                        float temp0_155[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                        float temp0_156[0x4] = _mm_mul_ps(temp0_151, temp0_155)
                        float temp0_157[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        var_1c8 = temp0_154
                        float temp0_160[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), temp0_157), temp0_156)
                        float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
                        zmm1 = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
                        float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
                        zmm1 = _mm_mul_ps(zmm1, temp0_157)
                        float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_155)
                        float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_142)
                        uint32_t var_1b8_2[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(zmm1, temp0_165), _mm_add_ps(temp0_166, zmm4_1)), 
                            zmm7)
                    else
                        zmm1 = *rax_9
                        zmm11 = data_143f3a0a0
                        zmm9 = rax_9[1]
                        float temp0_6[0x4] = _mm_add_ps(zmm1, zmm1)
                        zmm4_1 = zmm1
                        float temp0_7[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                        float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                        zmm4_1 = _mm_mul_ps(zmm4_1, temp0_6)
                        float temp0_12[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_8)
                        float temp0_14[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x12), zmm1)
                        float temp0_17[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                            _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                        _mm_mul_ps(temp0_1, zmm8)
                        float temp0_19[0x4] = _mm_add_ps(temp0_14, temp0_12)
                        float temp0_20[0x4] = _mm_sub_ps(temp0_12, temp0_14)
                        float zmm3[0x4] = var_198
                        zmm1 = _mm_sub_ps(zmm11, temp0_17)
                        float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
                        float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
                        zmm1 = _mm_mul_ps(zmm1, zmm8)
                        float temp0_25[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                        uint32_t temp0_26[0x4] = __andps_xmmxud_memxud(zmm1, data_143f3a0b0)
                        float temp0_27[0x4] = _mm_shuffle_ps(temp0_23, temp0_26, 0x32)
                        float temp0_29[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_26, 0), temp0_27, 0x82)
                        float temp0_30[0x4] = _mm_shuffle_ps(temp0_22, temp0_26, 0x31)
                        float temp0_32[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, temp0_26, 0x10), temp0_30, 0x88)
                        zmm0 = zmm11
                        float temp0_34[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), temp0_26, 0xe8)
                        zmm1 = _mm_add_ps(zmm3, zmm3)
                        zmm0[0].q = zmm9 u>> 0x40
                        float temp0_36[0x4] = _mm_shuffle_ps(zmm9, zmm0, 0xc4)
                        float temp0_37[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        float temp0_38[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
                        float var_248_1[0x4] = temp0_29
                        zmm4_1 = _mm_mul_ps(zmm3, zmm1)
                        float temp0_41[0x4] = _mm_mul_ps(temp0_25, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                        float temp0_43[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                        float temp0_46[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a), 
                            _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
                        float var_238_1[0x4] = temp0_32
                        float var_228_1[0x4] = temp0_34
                        float temp0_47[0x4] = _mm_add_ps(temp0_43, temp0_41)
                        float var_218_1[0x4] = temp0_36
                        float temp0_48[0x4] = _mm_sub_ps(temp0_41, temp0_43)
                        zmm1 = _mm_sub_ps(zmm11, temp0_46)
                        float temp0_50[0x4] = _mm_mul_ps(temp0_47, temp0_1)
                        float temp0_51[0x4] = _mm_mul_ps(temp0_38, temp0_48)
                        uint32_t temp0_53[0x4] =
                            __andps_xmmxud_memxud(_mm_mul_ps(zmm1, temp0_1), data_143f3a0b0)
                        float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_53, 0), 
                            _mm_shuffle_ps(temp0_51, temp0_53, 0x32), 0x82)
                        float temp0_57[0x4] = _mm_shuffle_ps(temp0_50, temp0_53, 0x31)
                        float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
                        zmm4_1 =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_51, temp0_53, 0x10), temp0_57, 0x88)
                        zmm0 = zmm11
                        float var_208_1[0x4] = temp0_56
                        float temp0_61[0x4] = _mm_mul_ps(temp0_58, temp0_32)
                        float temp0_63[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, temp0_51, 0x12), temp0_53, 0xe8)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xaa), temp0_34)
                        zmm0[0].q = var_188_1 u>> 0x40
                        float temp0_66[0x4] = _mm_shuffle_ps(var_188_1, zmm0, 0xc4)
                        float temp0_67[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
                        float temp0_69[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_36)
                        uint32_t var_1f8_1[0x4] = zmm4_1
                        float var_1d8_1[0x4] = temp0_66
                        float var_1e8_1[0x4] = temp0_63
                        float temp0_71[0x4] = _mm_add_ps(temp0_61, _mm_mul_ps(temp0_67, temp0_29))
                        float temp0_73[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_29)
                        float temp0_74[0x4] = _mm_add_ps(temp0_71, zmm1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), temp0_34)
                        float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_69)
                        float temp0_79[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), temp0_32)
                        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                        float var_3c8[0x4] = temp0_77
                        float temp0_81[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0x55)
                        float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
                        float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_32)
                        zmm4_1 = _mm_mul_ps(zmm4_1, temp0_36)
                        float temp0_85[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0)
                        float temp0_86[0x4] = _mm_add_ps(temp0_82, zmm1)
                        float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_29)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_34)
                        float temp0_90[0x4] = _mm_add_ps(temp0_86, zmm4_1)
                        float temp0_91[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
                        float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
                        float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_36)
                        float temp0_94[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0)
                        int96_t var_3b8_1 = temp0_90[0].12
                        float temp0_95[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0x55)
                        float temp0_96[0x4] = _mm_add_ps(temp0_92, zmm1)
                        float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_32)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_34)
                        float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_29)
                        float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
                        float temp0_103[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xff), temp0_36)
                        float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
                        int96_t var_3a8_1 = temp0_101[0].12
                        int96_t var_398_1 = _mm_add_ps(_mm_add_ps(temp0_104, zmm1), temp0_103)[0].12
                        zmm11, zmm13, zmm14 = sub_1407740e0(&var_3c8, 0x322bcc77)
                        float zmm2_1[0x4] = var_3c8[0]
                        float zmm1_1 = var_3c8[1]
                        float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f3a220, zmm13, 2), 
                            data_143f3a0c0 ^ zmm11)
                        uint32_t zmm0_1[0x4] = var_3c8[2]
                        zmm4_2 ^= data_143f3a0c0
                        zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
                        zmm1_1 = zmm1_1 * zmm4_2[0]
                        zmm0_1[0] = zmm0_1[0] f* zmm4_2[0]
                        var_3c8[0] = zmm2_1[0]
                        float temp0_109[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                        var_3c8[1] = zmm1_1
                        zmm1_1 = var_3b8_1:4.d * temp0_109[0]
                        var_3c8[2] = zmm0_1[0]
                        zmm0_1 = var_3b8_1:8.d
                        zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
                        float zmm3_1 = var_3b8_1.d * temp0_109[0]
                        zmm2_1 = var_3a8_1.d
                        var_3b8_1:4.d = zmm1_1
                        var_3b8_1:8.d = zmm0_1[0]
                        zmm0_1 = var_3a8_1:8.d
                        float var_258_1[0x4] = zmm4_2
                        float temp0_110[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                        zmm1_1 = var_3a8_1:4.d * temp0_110[0]
                        zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
                        zmm2_1[0] = zmm2_1[0] * temp0_110[0]
                        var_3a8_1:4.d = zmm1_1
                        var_3a8_1:8.d = zmm0_1[0]
                        var_3b8_1.d = zmm3_1
                        var_3a8_1.d = zmm2_1[0]
                        uint32_t var_2e8[0x4]
                        sub_14077e4a0(&var_2e8, &var_3c8)
                        uint32_t zmm5_2[0x4] = var_2e8
                        zmm6 = data_143f3a210
                        zmm1 = _mm_mul_ps(zmm5_2, zmm5_2)
                        uint32_t var_1a8_1[0x4] = zmm13
                        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                        uint32_t zmm4_3[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                        zmm1 = _mm_rsqrt_ps(zmm4_3)
                        float temp0_117[0x4] = _mm_mul_ps(zmm4_3, zmm6)
                        float temp0_122[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), temp0_117)), 
                                zmm1), 
                            zmm1)
                        float temp0_125[0x4] = _mm_sub_ps(zmm6, 
                            _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
                        float temp0_127[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_3, 2)
                        zmm6 = _mm_and_ps(
                            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122), 
                                zmm5_2) ^ data_143f3a200, 
                            temp0_127) ^ data_143f3a200
                        var_2e8 = zmm6
                        var_1c8 = zmm6
                        float var_1b8_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(var_398_1.d, var_398_1:8.d[0].q), 
                            _mm_unpacklo_ps(var_398_1:4.d, 0)[0].q)
                
                int64_t* rcx_12 = var_348
                (*(*rcx_12 + 0x38))(rcx_12, &var_1c8, arg1, not.b(*(arg1 + 0x204) u>> 2) & 1, 
                    var_408)
                
                if ((*(arg1 + 0x204) & 4) != 0)
                    int64_t* rcx_13 = var_348
                    int32_t var_338
                    float var_2b8[0x4]
                    
                    if ((*(*rcx_13 + 0x28))(rcx_13, &var_2b8, &var_338) == 0)
                        zmm14 = sub_141f46560(arg1)
                    else
                        zmm0 = var_2b8
                        int32_t var_330
                        float temp0_171[0x4] = _mm_unpacklo_ps(var_338, var_330[0].q)
                        float var_168[0x4] = zmm0
                        int32_t var_334
                        float temp0_172[0x4] = _mm_unpacklo_ps(var_334, 0)
                        zmm2 = data_14399f66c
                        float var_158_1[0x4] = _mm_unpacklo_ps(temp0_171, temp0_172[0].q)
                        float var_148_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(data_14399f668, data_14399f670[0].q), 
                            _mm_unpacklo_ps(zmm2, 0)[0].q)
                        zmm14 = sub_141f49090(arg1, &var_168, 0, 0, 0)
                
                int64_t* rcx_15 = var_348
                (*(*rcx_15 + 0x30))(rcx_15, &arg1[0x3e])
            
            int64_t* var_340
            
            if (var_340 != 0)
                var_340[1].d -= 1
                
                if (var_340[1].d == 1)
                    (**var_340)(var_340)
                    int32_t r14_1 = *(var_340 + 0xc)
                    *(var_340 + 0xc) -= 1
                    
                    if (r14_1 == 1)
                        (*(*var_340 + 8))(var_340, zx.q(r14_1))

uint32_t var_2f8[0x4]
float zmm4[0x4]
float zmm5[0x4]

if ((*(arg1 + 0x204) & 8) != 0)
    int64_t* rsi_3 = arg1[0x14]
    char rax_17
    
    if (rsi_3 != 0)
        rax_17 = sub_141e8f280(rsi_3)
    
    int64_t* rcx_19
    
    if (rsi_3 == 0 || rax_17 == 0)
        rsi_3 = nullptr
        rcx_19 = nullptr
    else
        rcx_19 = rsi_3[0x4b]
    
    if (rcx_19 != 0 && (*(rcx_19 + 0x294) & 2) != 0 && (*(*rcx_19 + 0x6a8))(rcx_19) != 0)
        int32_t var_3e0
        (*(*rsi_3 + 0x6c8))(rsi_3, &var_3e0)
        zmm1 = *(arg1 + 0x1c0)
        var_2f8 = zmm1
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1, *(arg1 + 0x180), 4)) != 0)
            *(arg1 + 0x180) = zmm1
            void var_278
            int32_t* rax_22 = sub_140adf5d0(&var_2f8, &var_278)
            arg1[0x32] = *rax_22
            arg1[0x33].d = rax_22[2]
        
        zmm7 = data_143f3a240
        zmm4 = zx.o(arg1[0x32])
        int32_t rax_24 = arg1[0x33].d
        zmm6 = var_3e0
        zmm9 = data_143f3a0e0
        float temp0_181[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
        float temp0_182[0x4] = _mm_unpacklo_ps(zmm4, rax_24[0].q)
        int32_t var_3d8
        float temp0_183[0x4] = _mm_unpacklo_ps(zmm6, var_3d8[0].q)
        float temp0_185[0x4] =
            _mm_unpacklo_ps(temp0_182, _mm_unpacklo_ps(temp0_181, zx.o(0)[0].q)[0].q)
        int32_t var_3dc
        float temp0_187[0x4] = _mm_unpacklo_ps(temp0_183, _mm_unpacklo_ps(var_3dc, 0)[0].q)
        zmm2 = data_143f3a250
        float temp0_188[0x4] = _mm_sub_ps(temp0_187, temp0_185)
        zmm5 = _mm_and_ps(zmm7, zmm9)
        float temp0_190[0x4] = _mm_div_ps(temp0_188, zmm7)
        float temp0_192[0x4] = _mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_190))
        float temp0_197[0x4] = _mm_sub_ps(temp0_188, 
            _mm_mul_ps(
                _mm_and_ps(_mm_cmpeq_ps(zmm2, _mm_and_ps(temp0_190, zmm9), 2), 
                    temp0_192 ^ temp0_190) ^ temp0_192, 
                zmm7))
        float temp0_200[0x4] = _mm_max_ps(_mm_sub_ps(zx.o(0), zmm5), _mm_min_ps(temp0_197, zmm5))
        float temp0_201[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_200, 2)
        zmm1 = _mm_add_ps(temp0_200, zmm7)
        zmm8 = _mm_and_ps(temp0_201, zmm1 ^ temp0_200) ^ zmm1
        float temp0_204[0x4] = _mm_cmpeq_ps(data_143f3a230, zmm8, 1)
        zmm1 = _mm_and_ps(_mm_sub_ps(zmm8, zmm7) ^ zmm8, temp0_204) ^ zmm8
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0), 
                _mm_and_ps(zmm1, zmm9), 1)) != 0)
            int64_t var_318 = var_3e0.q
            int32_t var_310_1 = var_3d8
            zmm14 = sub_141f4a3b0(arg1, &var_318, 0, 0, 0)

int32_t rax_29

if ((*(arg1 + 0x204) & 0x10) == 0)
    zmm2 = *(arg1 + 0x1d0)
    float var_2c4_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    *arg3 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    arg3[1].d = var_2c4_1
    zmm1 = *(arg1 + 0x1c0)
    uint32_t temp0_385 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1, 4))
    uint32_t var_288[0x4] = zmm1
    
    if (temp0_385 != 0)
        *(arg1 + 0x180) = zmm1
        void var_26c
        int32_t* rax_32 = sub_140adf5d0(&var_288, &var_26c)
        arg1[0x32] = *rax_32
        arg1[0x33].d = rax_32[2]
    
    *(arg3 + 0xc) = arg1[0x32]
    rax_29 = arg1[0x33].d
else
    zmm13 = *(arg1 + 0x1e0)
    zmm5 = *(arg1 + 0x1c0)
    zmm11 = *(arg1 + 0x210)
    zmm12 = *(arg1 + 0x220)
    zmm6 = *(arg1 + 0x1d0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(*(arg1 + 0x230), zmm13), data_143f3a220, 1)) == 0)
        float temp0_343[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        float temp0_345[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_343)
        zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
        float temp0_347[0x4] = _mm_mul_ps(zmm12, zmm13)
        float temp0_348[0x4] = __mulps_xmmps_memps(temp0_345, data_143f3a1f0)
        float temp0_349[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
        float temp0_350[0x4] = _mm_mul_ps(temp0_349, zmm11)
        float temp0_351[0x4] = _mm_shuffle_ps(temp0_347, temp0_347, 0xd2)
        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
        float temp0_353[0x4] = _mm_add_ps(temp0_348, temp0_350)
        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm5, zmm5, 0x55))
        zmm11 = _mm_mul_ps(zmm11, _mm_shuffle_ps(zmm5, zmm5, 0xaa))
        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3a1e0)
        float temp0_359[0x4] = _mm_shuffle_ps(temp0_347, temp0_347, 0xc9)
        zmm11 = __mulps_xmmps_memps(zmm11, data_143f3a1d0)
        float temp0_361[0x4] = _mm_add_ps(temp0_353, zmm1)
        zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
        float temp0_363[0x4] = _mm_mul_ps(temp0_359, zmm1)
        float temp0_364[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
        float temp0_365[0x4] = _mm_mul_ps(temp0_351, temp0_364)
        zmm6 = _mm_add_ps(temp0_361, zmm11)
        float temp0_367[0x4] = _mm_sub_ps(temp0_365, temp0_363)
        float temp0_368[0x4] = _mm_add_ps(temp0_367, temp0_367)
        float temp0_369[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0xd2)
        float temp0_370[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0xc9)
        float temp0_371[0x4] = _mm_mul_ps(temp0_369, temp0_364)
        float temp0_372[0x4] = _mm_mul_ps(temp0_370, zmm1)
        float temp0_373[0x4] = _mm_mul_ps(temp0_368, temp0_349)
        zmm4 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_371, temp0_372), _mm_add_ps(temp0_373, temp0_347)), 
            *(arg1 + 0x1d0))
    else
        zmm9 = data_143f3a0a0
        float temp0_214[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
        float temp0_215[0x4] = _mm_add_ps(zmm5, zmm5)
        float temp0_216[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_215, temp0_215, 0x29), temp0_214)
        float temp0_219[0x4] = _mm_mul_ps(temp0_215, zmm5)
        float temp0_222[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(temp0_215, temp0_215, 0x12), _mm_shuffle_ps(zmm5, zmm5, 0xff))
        float temp0_225[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_219, temp0_219, 0x1a), 
            _mm_shuffle_ps(temp0_219, temp0_219, 1))
        float temp0_226[0x4] = _mm_add_ps(temp0_222, zmm1)
        zmm1 = _mm_sub_ps(zmm1, temp0_222)
        float temp0_228[0x4] = _mm_shuffle_ps(zmm11, zmm11, 4)
        float temp0_229[0x4] = _mm_mul_ps(temp0_226, zmm13)
        float temp0_230[0x4] = _mm_mul_ps(temp0_216, zmm1)
        uint32_t temp0_233[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_225), zmm13), data_143f3a0b0)
        float temp0_234[0x4] = _mm_shuffle_ps(temp0_230, temp0_233, 0x32)
        float temp0_236[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_229, temp0_233, 0), temp0_234, 0x82)
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_229, temp0_233, 0x31)
        float temp0_239[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_230, temp0_233, 0x10), temp0_237, 0x88)
        zmm9[0].q = zmm6 u>> 0x40
        float temp0_240[0x4] = _mm_shuffle_ps(zmm6, zmm9, 0xc4)
        float temp0_242[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_229, temp0_230, 0x12), temp0_233, 0xe8)
        zmm1 = _mm_add_ps(zmm11, zmm11)
        var_2f8 = temp0_240
        float temp0_245[0x4] = _mm_mul_ps(temp0_228, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm0 = *(arg1 + 0x230)
        float temp0_246[0x4] = _mm_mul_ps(zmm1, zmm11)
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
        float temp0_248[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc9)
        zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xff), zmm1)
        float temp0_251[0x4] = _mm_add_ps(zmm11, temp0_245)
        float temp0_252[0x4] = _mm_sub_ps(temp0_245, zmm11)
        zmm11 = *(arg1 + 0x230)
        float temp0_253[0x4] = _mm_mul_ps(temp0_251, zmm0)
        float temp0_256[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_246, temp0_246, 0x1a), 
            _mm_shuffle_ps(temp0_246, temp0_246, 1))
        float temp0_257[0x4] = _mm_mul_ps(temp0_248, temp0_252)
        uint32_t temp0_260[0x4] =
            __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, temp0_256), zmm11), data_143f3a0b0)
        float temp0_261[0x4] = _mm_shuffle_ps(temp0_257, temp0_260, 0x32)
        float temp0_263[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_253, temp0_260, 0), temp0_261, 0x82)
        float temp0_264[0x4] = _mm_shuffle_ps(temp0_253, temp0_260, 0x31)
        float temp0_266[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_257, temp0_260, 0x10), temp0_264, 0x88)
        float temp0_267[0x4] = _mm_shuffle_ps(temp0_253, temp0_257, 0x12)
        zmm4 = var_2f8
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0x55)
        float temp0_269[0x4] = _mm_shuffle_ps(temp0_267, temp0_260, 0xe8)
        zmm1 = _mm_shuffle_ps(temp0_263, temp0_263, 0xaa)
        float temp0_271[0x4] = _mm_mul_ps(temp0_268, temp0_239)
        zmm1 = _mm_mul_ps(zmm1, temp0_242)
        zmm9[0].q = zmm12 u>> 0x40
        float temp0_273[0x4] = _mm_shuffle_ps(zmm12, zmm9, 0xc4)
        float temp0_274[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0)
        float temp0_276[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_263, temp0_263, 0xff), zmm4)
        float temp0_278[0x4] = _mm_add_ps(temp0_271, _mm_mul_ps(temp0_274, temp0_236))
        float temp0_280[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0), temp0_236)
        float temp0_281[0x4] = _mm_add_ps(temp0_278, zmm1)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0xaa), temp0_242)
        float temp0_284[0x4] = _mm_add_ps(temp0_281, temp0_276)
        float temp0_286[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0x55), temp0_239)
        float temp0_287[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0xff)
        float var_388[0x4] = temp0_284
        float temp0_288[0x4] = _mm_shuffle_ps(temp0_269, temp0_269, 0x55)
        float temp0_289[0x4] = _mm_add_ps(temp0_286, temp0_280)
        float temp0_290[0x4] = _mm_mul_ps(temp0_288, temp0_239)
        float temp0_291[0x4] = _mm_mul_ps(temp0_287, zmm4)
        float temp0_292[0x4] = _mm_shuffle_ps(temp0_269, temp0_269, 0)
        float temp0_293[0x4] = _mm_add_ps(temp0_289, zmm1)
        float temp0_294[0x4] = _mm_mul_ps(temp0_292, temp0_236)
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_269, temp0_269, 0xaa), temp0_242)
        float temp0_297[0x4] = _mm_add_ps(temp0_290, temp0_294)
        float temp0_298[0x4] = _mm_shuffle_ps(temp0_269, temp0_269, 0xff)
        float temp0_299[0x4] = _mm_add_ps(temp0_293, temp0_291)
        float temp0_300[0x4] = _mm_mul_ps(temp0_298, zmm4)
        float temp0_301[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0)
        float temp0_302[0x4] = _mm_add_ps(temp0_297, zmm1)
        float temp0_303[0x4] = _mm_mul_ps(temp0_301, temp0_236)
        int96_t var_378_1 = temp0_299[0].12
        float temp0_304[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0x55)
        float temp0_305[0x4] = _mm_add_ps(temp0_302, temp0_300)
        float temp0_306[0x4] = _mm_mul_ps(temp0_304, temp0_239)
        int96_t var_368_1 = temp0_305[0].12
        float temp0_307[0x4] = _mm_add_ps(temp0_306, temp0_303)
        float temp0_309[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_273, temp0_273, 0xaa), temp0_242)
        float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_273, temp0_273, 0xff), zmm4)
        int96_t var_358_1 = _mm_add_ps(_mm_add_ps(temp0_307, temp0_309), temp0_311)[0].12
        int128_t zmm9_1
        zmm9_1, zmm11, zmm13, zmm14, zmm15 = sub_1407740e0(&var_388, 0x322bcc77)
        uint32_t zmm2_2[0x4] = var_388[0]
        float zmm1_2 = var_388[1]
        uint32_t temp0_316[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(zmm15, _mm_mul_ps(zmm11, zmm13), 2), data_143f3a0c0 ^ zmm9_1)
        uint32_t zmm0_2[0x4] = var_388[2]
        zmm15 = temp0_316 ^ data_143f3a0c0
        zmm2_2[0] = zmm2_2[0] f* zmm15[0]
        zmm1_2 = zmm1_2 f* zmm15[0]
        zmm0_2[0] = zmm0_2[0] f* zmm15[0]
        var_388[0] = zmm2_2[0]
        zmm2_2 = _mm_shuffle_ps(zmm15, zmm15, 0x55)
        var_388[2] = zmm0_2[0]
        zmm0_2 = var_378_1:8.d
        zmm0_2[0] = zmm0_2[0] f* zmm2_2[0]
        var_388[1] = zmm1_2
        zmm1_2 = var_378_1:4.d f* zmm2_2[0]
        float zmm3_2 = var_378_1.d f* zmm2_2[0]
        zmm2_2 = var_368_1.d
        var_378_1:8.d = zmm0_2[0]
        zmm0_2 = var_368_1:8.d
        var_378_1:4.d = zmm1_2
        zmm15 = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
        zmm0_2[0] = zmm0_2[0] f* zmm15[0]
        zmm2_2[0] = zmm2_2[0] f* zmm15[0]
        zmm1_2 = var_368_1:4.d f* zmm15[0]
        var_368_1:8.d = zmm0_2[0]
        var_378_1.d = zmm3_2
        var_368_1.d = zmm2_2[0]
        var_368_1:4.d = zmm1_2
        uint32_t var_2a8[0x4]
        sub_14077e4a0(&var_2a8, &var_388)
        uint32_t zmm5_3[0x4] = var_2a8
        zmm6 = data_143f3a210
        zmm1 = _mm_mul_ps(zmm5_3, zmm5_3)
        zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
        float temp0_323[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
        zmm1 = _mm_rsqrt_ps(temp0_323)
        float temp0_325[0x4] = _mm_mul_ps(temp0_323, zmm6)
        float temp0_330[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), temp0_325)), zmm1), zmm1)
        float temp0_333[0x4] =
            _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_330, temp0_330), temp0_325))
        float temp0_335[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_323, 2)
        float temp0_337[0x4] = _mm_add_ps(_mm_mul_ps(temp0_333, temp0_330), temp0_330)
        float temp0_338[0x4] = _mm_unpacklo_ps(var_358_1:4.d, 0)
        zmm6 =
            _mm_and_ps(_mm_mul_ps(temp0_337, zmm5_3) ^ data_143f3a200, temp0_335) ^ data_143f3a200
        zmm4 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_358_1.d, var_358_1:8.d[0].q), temp0_338[0].q)
    
    float var_298[0x4] = zmm6
    float var_2d0_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
    *arg3 = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55)[0].q)).q
    arg3[1].d = var_2d0_1
    int64_t var_308
    sub_140adf5d0(&var_298, &var_308)
    int32_t var_300
    rax_29 = var_300
    *(arg3 + 0xc) = var_308

*(arg3 + 0x14) = rax_29

if ((*(arg1 + 0x204) & 0x10) == 0)
    zmm0 = arg1[0x3e].d
else
    zmm0 = *(arg1 + 0x244)
    zmm0[0] = zmm0[0] f+ arg1[0x3e].d

arg3[3].d = zmm0[0]
*(arg3 + 0x2c) = arg1[0x40].d
arg3[6].d ^= (zx.d(*(arg1 + 0x204)) ^ arg3[6].d) & 1
arg3[6].d ^= (zx.d(*(arg1 + 0x204)) ^ arg3[6].d) & 2
*(arg3 + 0x34) = *(arg1 + 0x205)
arg3[4].d = *(arg1 + 0x1f4)
*(arg3 + 0x24) = arg1[0x3f].d
arg3[5].d = *(arg1 + 0x1fc)
arg3[7].d = arg1[0x48].d

if (not(zmm14.d f>= arg1[0x48].d))
    sub_1405af800(&arg3[8], &arg1[0x4e])

sub_14229e040()
void var_108
int128_t* result = sub_1422a13b0(&data_143f53590, &var_108, arg1)

if (result != &arg3[0xb2])
    if (arg3[0xb8].b != 0)
        arg3[0xb8].b = 0
    
    if (result[3].b != 0)
        *(arg3 + 0x590) = *result
        *(arg3 + 0x5a0) = result[1]
        *(arg3 + 0x5b0) = result[2]
        arg3[0xb8].b = 1

__security_check_cookie(rax_1 ^ &var_428)
return result
