// 函数: sub_141e94460
// 地址: 0x141e94460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t result = __security_cookie ^ &var_208
int64_t result_1 = result

if (not(0f f>= *(arg1 + 0x5c)))
    int64_t* rcx = *(arg1 + 0x30)
    result = (*(*rcx + 0x260))(rcx)
    int64_t result_3 = result
    
    if (result != 0)
        void* rax_2 = sub_142486290()
        void* rdx = *(result_3 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rdx + 0x38))
            int64_t result_2 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_2 << 3)) == rax_2 + 0x30)
                float var_c8_1 = arg3[0]
                uint64_t var_1c8
                uint32_t var_1b8[0x4]
                float var_1a8[0x4]
                uint32_t var_198[0x4]
                float var_188[0x4]
                float var_118[0x4]
                
                if ((*(*(arg1 + 0x28) + 0x50) & 1) != 0)
                    void* rax_4 = *(result_3 + 0x130)
                    int128_t* rax_5
                    
                    if (rax_4 == 0)
                        rax_5 = &data_143dbb0c0
                    else
                        rax_5 = rax_4 + 0x1c0
                    
                    float zmm7[0x4] = *(arg1 + 0xf0)
                    uint32_t zmm2[0x4] = data_143f3a0e0
                    float zmm3[0x4] = data_143f3a140
                    uint32_t temp0_1[0x4] = _mm_and_ps(zmm7, zmm2)
                    uint32_t zmm11[0x4] = *rax_5
                    float zmm12[0x4] = rax_5[1]
                    arg3 = rax_5[2]
                    uint32_t zmm5_1[0x4] = data_143f3a0b0
                    float zmm0_1[0x4]
                    uint32_t zmm1[0x4]
                    uint32_t zmm4_1[0x4]
                    float zmm6[0x4]
                    float zmm13[0x4]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, temp0_1, 1)) == 0)
                        zmm6 = data_143dbb0c0
                        zmm13 = data_143dbb0d0
                        zmm7 = data_143dbb0e0
                    else
                        zmm0_1 = data_143f3a0a0
                        zmm6 = __mulps_xmmps_memps(*(arg1 + 0xd0), data_143f3a150)
                        zmm0_1[0].q = zmm7 u>> 0x40
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm0_1, 0xc4)
                        zmm1 = _mm_rcp_ps(temp0_5)
                        float temp0_7[0x4] = _mm_mul_ps(zmm1, zmm1)
                        zmm1 = _mm_sub_ps(_mm_add_ps(zmm1, zmm1), _mm_mul_ps(temp0_7, temp0_5))
                        float temp0_11[0x4] = _mm_mul_ps(zmm1, zmm1)
                        zmm1 = _mm_add_ps(zmm1, zmm1)
                        float temp0_13[0x4] = _mm_mul_ps(temp0_11, temp0_5)
                        float temp0_15[0x4] = _mm_cmpeq_ps(_mm_and_ps(temp0_5, zmm2), zmm3, 2)
                        float temp0_16[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                        zmm1 = _mm_sub_ps(zmm1, temp0_13)
                        zmm7 = _mm_and_ps(temp0_15, zx.o(0) ^ zmm1) ^ zmm1
                        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        zmm7 = _mm_and_ps(zmm7, zmm5_1)
                        zmm5_1 = _mm_mul_ps(*(arg1 + 0xe0), zmm7)
                        float temp0_22[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        zmm4_1 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2), zmm1), 
                            _mm_mul_ps(temp0_22, temp0_16))
                        zmm4_1 = _mm_add_ps(zmm4_1, zmm4_1)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2), zmm1)
                        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        float temp0_31[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                        zmm1 = _mm_mul_ps(zmm1, zmm4_1)
                        float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_16)
                        zmm1 = _mm_add_ps(zmm1, zmm5_1)
                        zmm5_1 = data_143f3a0b0
                        zmm13 = _mm_and_ps(
                            _mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(zmm2, temp0_33), zmm1)), 
                            zmm5_1)
                    
                    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(arg3, zmm7), 
                            data_143f3a220, 1)) == 0)
                        float temp0_171[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_171)
                        zmm1 = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
                        zmm4_1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        float temp0_176[0x4] = _mm_mul_ps(zmm12, zmm7)
                        zmm2 = __mulps_xmmps_memps(zmm2, data_143f3a1f0)
                        float temp0_178[0x4] = _mm_mul_ps(zmm4_1, zmm11)
                        float temp0_179[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
                        float temp0_181[0x4] = _mm_mul_ps(arg3, zmm7)
                        zmm2 = _mm_add_ps(zmm2, temp0_178)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm6, zmm6, 0x55))
                        zmm11 = _mm_mul_ps(zmm11, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f3a1e0)
                        float temp0_188[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
                        zmm11 = __mulps_xmmps_memps(zmm11, data_143f3a1d0)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        float temp0_191[0x4] = _mm_mul_ps(temp0_188, temp0_179)
                        float temp0_192[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        float var_f8_2[0x4] = temp0_181
                        var_118 = _mm_add_ps(zmm2, zmm11)
                        zmm2 = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_176, temp0_176, 0xd2), temp0_192), 
                            temp0_191)
                        zmm2 = _mm_add_ps(zmm2, zmm2)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm2)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), temp0_192)
                        float temp0_201[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                        zmm4_1 = _mm_add_ps(zmm4_1, temp0_176)
                        uint32_t var_108_2[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(zmm1, _mm_mul_ps(temp0_201, temp0_179)), zmm4_1), 
                            zmm13)
                    else
                        float temp0_42[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                        zmm2 = _mm_add_ps(zmm6, zmm6)
                        zmm4_1 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                        _mm_mul_ps(arg3, zmm7)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), temp0_42)
                        float temp0_48[0x4] = _mm_mul_ps(zmm2, zmm6)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), 
                            _mm_shuffle_ps(zmm6, zmm6, 0xff))
                        float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1a), 
                            _mm_shuffle_ps(temp0_48, temp0_48, 1))
                        uint32_t zmm9[0x4] = _mm_add_ps(zmm2, zmm1)
                        zmm1 = _mm_sub_ps(zmm1, zmm2)
                        zmm2 = _mm_add_ps(zmm11, zmm11)
                        zmm9 = _mm_mul_ps(zmm9, zmm7)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
                        zmm1 = _mm_sub_ps(data_143f3a0a0, temp0_54)
                        float temp0_61[0x4] = _mm_mul_ps(zmm2, zmm11)
                        uint32_t temp0_63[0x4] = _mm_and_ps(_mm_mul_ps(zmm1, zmm7), zmm5_1)
                        float temp0_64[0x4] = _mm_shuffle_ps(zmm4_1, temp0_63, 0x32)
                        uint32_t zmm8[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(zmm9, temp0_63, 0), temp0_64, 0x82)
                        float temp0_67[0x4] = _mm_shuffle_ps(zmm9, temp0_63, 0x31)
                        float temp0_69[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, temp0_63, 0x10), temp0_67, 0x88)
                        zmm0_1 = data_143f3a0a0
                        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm9, zmm4_1, 0x12), temp0_63, 0xe8)
                        zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x29)
                        zmm0_1[0].q = zmm13 u>> 0x40
                        float temp0_73[0x4] = _mm_shuffle_ps(zmm13, zmm0_1, 0xc4)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm11, zmm11, 4))
                        float temp0_78[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0x1a), 
                            _mm_shuffle_ps(temp0_61, temp0_61, 1))
                        zmm11 = _mm_shuffle_ps(zmm11, zmm11, 0xff)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), zmm11)
                        zmm11 = data_143f3a0a0
                        zmm4_1 = _mm_shuffle_ps(arg3, arg3, 0xc9)
                        float temp0_83[0x4] = _mm_add_ps(zmm2, zmm1)
                        zmm1 = _mm_sub_ps(zmm1, zmm2)
                        float temp0_85[0x4] = _mm_mul_ps(temp0_83, arg3)
                        zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
                        uint32_t temp0_89[0x4] =
                            _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_78), arg3), zmm5_1)
                        float temp0_90[0x4] = _mm_shuffle_ps(zmm4_1, temp0_89, 0x32)
                        float temp0_92[0x4] =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_85, temp0_89, 0), temp0_90, 0x82)
                        float temp0_93[0x4] = _mm_shuffle_ps(temp0_85, temp0_89, 0x31)
                        zmm5_1 =
                            _mm_shuffle_ps(_mm_shuffle_ps(zmm4_1, temp0_89, 0x10), temp0_93, 0x88)
                        float temp0_96[0x4] = _mm_shuffle_ps(temp0_85, zmm4_1, 0x12)
                        zmm2 = _mm_shuffle_ps(temp0_92, temp0_92, 0x55)
                        float temp0_98[0x4] = _mm_shuffle_ps(temp0_96, temp0_89, 0xe8)
                        zmm0_1 = zmm11
                        zmm2 = _mm_mul_ps(zmm2, temp0_69)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xaa), zmm9)
                        zmm0_1[0].q = zmm12 u>> 0x40
                        float temp0_102[0x4] = _mm_shuffle_ps(zmm12, zmm0_1, 0xc4)
                        float temp0_103[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0)
                        float temp0_105[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xff), temp0_73)
                        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(temp0_103, zmm8))
                        float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm8)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm9)
                        zmm2 = _mm_add_ps(zmm2, temp0_105)
                        float temp0_115[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), temp0_69)
                        zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        var_1b8 = zmm2
                        zmm2 = _mm_shuffle_ps(temp0_98, temp0_98, 0x55)
                        float temp0_118[0x4] = _mm_add_ps(temp0_115, temp0_109)
                        zmm2 = _mm_mul_ps(zmm2, temp0_69)
                        zmm5_1 = _mm_mul_ps(zmm5_1, temp0_73)
                        float temp0_121[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0)
                        float temp0_122[0x4] = _mm_add_ps(temp0_118, zmm1)
                        float temp0_123[0x4] = _mm_mul_ps(temp0_121, zmm8)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_98, temp0_98, 0xaa), zmm9)
                        float temp0_126[0x4] = _mm_add_ps(temp0_122, zmm5_1)
                        float temp0_127[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0xff)
                        zmm2 = _mm_add_ps(zmm2, temp0_123)
                        float temp0_129[0x4] = _mm_mul_ps(temp0_127, temp0_73)
                        float temp0_130[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0)
                        var_1a8 = temp0_126
                        float temp0_131[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_69)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), zmm9)
                        float temp0_136[0x4] = _mm_mul_ps(temp0_130, zmm8)
                        zmm2 = _mm_add_ps(zmm2, temp0_129)
                        float temp0_139[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), temp0_73)
                        var_198 = zmm2
                        var_188 = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_133, temp0_136), zmm1), 
                            temp0_139)
                        float zmm10_1[0x4]
                        int128_t zmm11_1
                        zmm10_1, zmm11_1 = sub_1407740e0(&var_1b8, 0x322bcc77)
                        float zmm2_1[0x4] = var_1b8[0]
                        uint32_t zmm1_1 = var_1b8[1]
                        float zmm4_2[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f3a220, zmm10_1, 2), 
                            data_143f3a0c0 ^ zmm11_1)
                        uint32_t zmm0_2[0x4] = var_1b8[2]
                        zmm4_2 ^= data_143f3a0c0
                        zmm2_1[0] = zmm2_1[0] * zmm4_2[0]
                        zmm1_1 = zmm1_1 f* zmm4_2[0]
                        var_1b8[0] = zmm2_1[0]
                        zmm0_2[0] = zmm0_2[0] f* zmm4_2[0]
                        float zmm3_1 = var_1a8[0]
                        var_1b8[1] = zmm1_1
                        zmm1_1 = var_1a8[1]
                        float temp0_145[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                        zmm1_1 = zmm1_1 f* temp0_145[0]
                        var_1b8[2] = zmm0_2[0]
                        zmm0_2 = var_1a8[2]
                        zmm0_2[0] = zmm0_2[0] f* temp0_145[0]
                        zmm3_1 = zmm3_1 * temp0_145[0]
                        zmm2_1 = var_198[0]
                        float temp0_146[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                        var_1a8[1] = zmm1_1
                        zmm1_1 = var_198[1]
                        var_1a8[2] = zmm0_2[0]
                        zmm0_2 = var_198[2]
                        zmm1_1 = zmm1_1 f* temp0_146[0]
                        zmm0_2[0] = zmm0_2[0] f* temp0_146[0]
                        zmm2_1[0] = zmm2_1[0] * temp0_146[0]
                        var_198[1] = zmm1_1
                        var_198[2] = zmm0_2[0]
                        var_1a8[0] = zmm3_1
                        var_198[0] = zmm2_1[0]
                        sub_14077e4a0(&var_1c8, &var_1b8)
                        float zmm6_1[0x4] = var_1c8.o
                        float zmm5_2[0x4] = data_143f3a210
                        float temp0_147[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
                        float var_f8_1[0x4] = zmm10_1
                        float temp0_149[0x4] =
                            _mm_add_ps(temp0_147, _mm_shuffle_ps(temp0_147, temp0_147, 0x4e))
                        float temp0_151[0x4] =
                            _mm_add_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0x39), temp0_149)
                        float temp0_152[0x4] = _mm_rsqrt_ps(temp0_151)
                        float temp0_153[0x4] = _mm_mul_ps(temp0_151, zmm5_2)
                        float temp0_158[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm5_2, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_152, temp0_152), temp0_153)), 
                                temp0_152), 
                            temp0_152)
                        float temp0_160[0x4] =
                            _mm_mul_ps(_mm_mul_ps(temp0_158, temp0_158), temp0_153)
                        float zmm3_2[0x4] = var_188[0]
                        float temp0_161[0x4] = _mm_sub_ps(zmm5_2, temp0_160)
                        float temp0_163[0x4] =
                            _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_151, 2)
                        float temp0_165[0x4] =
                            _mm_add_ps(_mm_mul_ps(temp0_161, temp0_158), temp0_158)
                        float temp0_166[0x4] = _mm_unpacklo_ps(var_188[1], 0)
                        zmm5_2 =
                            _mm_and_ps(_mm_mul_ps(temp0_165, zmm6_1) ^ data_143f3a200, temp0_163)
                            ^ data_143f3a200
                        float var_108_1[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(zmm3_2, var_188[2][0].q), temp0_166[0].q)
                        var_118 = zmm5_2
                    
                    sub_141dd7250(result_3, &var_118, 0, nullptr, 0)
                
                arg3 = *(arg1 + 0x5c)
                sub_14077e760(&var_1b8, &arg2[3])
                char rax_8 = *(arg1 + 0x78)
                float* rax_17
                int32_t zmm14_1
                float zmm15
                int64_t var_1d8
                float zmm0_4[0x4]
                float zmm1_3[0x4]
                float zmm2_3[0x4]
                float zmm3_3[0x4]
                
                if (rax_8 != 0)
                    void* rax_18 = arg1 + 0x80
                    
                    if (rax_8 != 2)
                        rax_18 = &data_14399f6e0
                    
                    float zmm4_4[0x4] = *rax_18
                    float zmm5_3[0x4] = *(rax_18 + 0x10)
                    float zmm6_2[0x4] = *(rax_18 + 0x20)
                    uint32_t zmm7_1[0x4] = *(rax_18 + 0x30)
                    void* rax_19 = *(result_3 + 0x130)
                    var_118 = zmm4_4
                    float var_108_4[0x4] = zmm5_3
                    float var_f8_4[0x4] = zmm6_2
                    uint32_t var_e8_2[0x4] = zmm7_1
                    int64_t* rax_20
                    
                    if (rax_19 == 0)
                        int32_t var_1c0_2 = data_143dbb200
                        rax_20 = &var_1c8
                        var_1c8 = data_143dbb1f8.q
                    else
                        zmm1_3 = *(rax_19 + 0x1d0)
                        rax_20 = &var_1d8
                        var_1d8.d = zmm1_3[0]
                        float temp0_273[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                        float var_1d0_6 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)[0]
                        var_1d8:4.d = temp0_273[0]
                    
                    zmm0_4 = zx.o(*rax_20)
                    int32_t rax_22 = rax_20[1].d
                    zmm1_3 = zmm0_4
                    var_1c8 = zmm0_4.q
                    zmm2_3 = zmm0_4
                    zmm1_3[0] = zmm1_3[0] * arg3[0]
                    zmm0_4 = rax_22
                    float temp0_275[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    temp0_275[0] = temp0_275[0] * arg3[0]
                    int32_t var_1bc_2 = 0
                    zmm3_3 = var_1c8.o
                    zmm3_3[0] = zmm1_3[0]
                    zmm0_4[0] = zmm0_4[0] * arg3[0]
                    var_1d8 = 0
                    float temp0_276[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
                    temp0_276[0] = temp0_275[0]
                    int32_t var_1d0_7 = 0
                    float temp0_277[0x4] = _mm_shuffle_ps(temp0_276, temp0_276, 0xc6)
                    temp0_277[0] = zmm0_4[0]
                    float temp0_278[0x4] = _mm_shuffle_ps(temp0_277, temp0_277, 0xc9)
                    var_1c8.o = temp0_278
                    float temp0_279[0x4] = _mm_shuffle_ps(temp0_278, temp0_278, 0xff)
                    float temp0_280[0x4] = _mm_shuffle_ps(temp0_278, temp0_278, 0xaa)
                    float temp0_281[0x4] = _mm_shuffle_ps(temp0_278, temp0_278, 0x55)
                    float temp0_282[0x4] = _mm_mul_ps(temp0_279, zmm7_1)
                    float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm5_3)
                    float temp0_284[0x4] = _mm_mul_ps(temp0_280, zmm6_2)
                    float temp0_286[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_278, temp0_278, 0), zmm4_4)
                    float temp0_289[0x4] = _mm_add_ps(_mm_add_ps(temp0_282, temp0_284), 
                        _mm_add_ps(temp0_283, temp0_286))
                    temp0_289[0] = temp0_289[0] f+ *arg2
                    float temp0_290[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0x55)
                    temp0_290[0] = temp0_290[0] f+ arg2[1]
                    float temp0_291[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0xaa)
                    temp0_291[0] = temp0_291[0] f+ arg2[2]
                    *arg2 = temp0_289[0]
                    arg2[1] = temp0_290[0]
                    arg2[2] = temp0_291[0]
                    uint32_t var_158[0x4][0x4]
                    uint32_t (* rax_23)[0x4]
                    int32_t zmm15_1
                    rax_23, zmm15_1 = sub_140631b10(&var_118, &var_158)
                    uint128_t zmm2_6 = var_1b8
                    uint128_t zmm9_3 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0)
                    float zmm4_7[0x4] = rax_23[1]
                    uint32_t zmm3_6[0x4] = *rax_23
                    float zmm5_4[0x4] = rax_23[2]
                    float zmm6_4[0x4] = rax_23[3]
                    uint128_t zmm0_7 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0x55)
                    uint128_t zmm1_6 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0xaa)
                    zmm0_7 = _mm_mul_ps(zmm0_7, zmm4_7)
                    zmm1_6 = _mm_mul_ps(zmm1_6, zmm5_4)
                    zmm9_3 = _mm_mul_ps(zmm9_3, zmm3_6)
                    zmm2_6 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0xff), zmm6_4)
                    zmm9_3 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm9_3, zmm0_7), zmm1_6), zmm2_6)
                    zmm2_6 = var_1a8
                    uint128_t zmm10_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0), zmm3_6)
                    zmm0_7 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0x55), zmm4_7)
                    zmm1_6 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0xaa), zmm5_4)
                    zmm10_2 = _mm_add_ps(zmm10_2, zmm0_7)
                    var_118 = zmm9_3
                    zmm10_2 = _mm_add_ps(zmm10_2, zmm1_6)
                    void* r14_2 = *(result_3 + 0x130)
                    zmm10_2 = _mm_add_ps(zmm10_2, 
                        _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0xff), zmm6_4))
                    zmm2_6 = var_198
                    float temp0_314[0x4] = _mm_shuffle_ps(zmm2_6, zmm2_6, 0)
                    zmm0_7 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0x55)
                    zmm1_6 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0xaa)
                    zmm0_7 = _mm_mul_ps(zmm0_7, zmm4_7)
                    zmm1_6 = _mm_mul_ps(zmm1_6, zmm5_4)
                    zmm2_6 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0xff), zmm6_4)
                    uint128_t var_108_5 = zmm10_2
                    float temp0_324[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_314, zmm3_6), zmm0_7), zmm1_6), 
                        zmm2_6)
                    zmm2_6 = var_188
                    float temp0_325[0x4] = _mm_shuffle_ps(zmm2_6, zmm2_6, 0)
                    zmm0_7 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0x55)
                    float temp0_327[0x4] = _mm_mul_ps(temp0_325, zmm3_6)
                    zmm1_6 = _mm_shuffle_ps(zmm2_6, zmm2_6, 0xaa)
                    zmm0_7 = _mm_mul_ps(zmm0_7, zmm4_7)
                    zmm1_6 = _mm_mul_ps(zmm1_6, zmm5_4)
                    zmm2_6 = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0xff), zmm6_4)
                    float var_f8_5[0x4] = temp0_324
                    float temp0_335[0x4] =
                        _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_327, zmm0_7), zmm1_6), zmm2_6)
                    float var_e8_3[0x4] = temp0_335
                    int32_t rax_27
                    
                    if (r14_2 == 0)
                        zmm0_7 = zx.o(data_143dbb208)
                        rax_27 = data_143dbb210
                    else
                        zmm1_6 = *(r14_2 + 0x1c0)
                        uint32_t temp0_337 =
                            _mm_movemask_ps(_mm_cmpeq_ps(*(r14_2 + 0x180), zmm1_6, 4))
                        var_1d8.o = zmm1_6
                        
                        if (temp0_337 != 0)
                            *(r14_2 + 0x180) = zmm1_6
                            int32_t* rax_25 = sub_140adf5d0(&var_1d8, &var_1c8)
                            *(r14_2 + 0x190) = *rax_25
                            *(r14_2 + 0x198) = rax_25[2]
                        
                        zmm0_7 = zx.o(*(r14_2 + 0x190))
                        rax_27 = *(r14_2 + 0x198)
                    
                    var_1c8 = zmm0_7.q
                    zmm2_6 = zx.o(var_1c8)
                    zmm0_7.d = zmm2_6.d f* zmm15_1
                    zmm1_6.d = _mm_shuffle_ps(zmm2_6, zmm2_6, 0x55).d f* zmm15_1
                    var_1d8.d = zmm0_7.d
                    zmm0_7.d = rax_27.d f* zmm15_1
                    var_1d8:4.d = zmm1_6.d
                    var_1c8 = zmm2_6.q
                    int32_t var_1d0_8 = zmm0_7.d
                    sub_14077e760(&var_1b8, &var_1d8)
                    uint32_t (* rax_29)[0x4]
                    float zmm9_4[0x4]
                    float zmm10_3[0x4]
                    float zmm11_3[0x4]
                    rax_29, zmm9_4, zmm10_3, zmm11_3 = sub_140631b10(&var_118, &var_158)
                    float zmm2_7[0x4] = var_1b8
                    float temp0_339[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0x55)
                    float zmm4_8[0x4] = rax_29[1]
                    uint32_t zmm3_7[0x4] = *rax_29
                    float zmm5_5[0x4] = rax_29[2]
                    float zmm6_5[0x4] = rax_29[3]
                    float temp0_340[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xaa)
                    float temp0_341[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0)
                    float temp0_342[0x4] = _mm_mul_ps(temp0_339, zmm4_8)
                    float temp0_343[0x4] = _mm_mul_ps(temp0_340, zmm5_5)
                    float temp0_345[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_7, zmm2_7, 0xff), zmm6_5)
                    float temp0_349[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_341, zmm3_7), temp0_342), 
                            temp0_343), 
                        temp0_345)
                    float temp0_350[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0x55)
                    float temp0_351[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0xaa)
                    float temp0_352[0x4] = _mm_shuffle_ps(var_1a8, var_1a8, 0)
                    float temp0_353[0x4] = _mm_mul_ps(temp0_350, zmm4_8)
                    float temp0_354[0x4] = _mm_mul_ps(temp0_351, zmm5_5)
                    float temp0_356[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(var_1a8, var_1a8, 0xff), zmm6_5)
                    float temp0_360[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(_mm_mul_ps(temp0_352, zmm3_7), temp0_353), 
                            temp0_354), 
                        temp0_356)
                    zmm2_7 = var_198
                    float temp0_361[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0)
                    float temp0_362[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0x55)
                    float temp0_363[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xaa)
                    float temp0_364[0x4] = _mm_mul_ps(temp0_362, zmm4_8)
                    float temp0_365[0x4] = _mm_mul_ps(temp0_361, zmm3_7)
                    float temp0_366[0x4] = _mm_mul_ps(temp0_363, zmm5_5)
                    float temp0_367[0x4] = _mm_shuffle_ps(zmm2_7, zmm2_7, 0xff)
                    float temp0_368[0x4] = _mm_add_ps(temp0_365, temp0_364)
                    float temp0_369[0x4] = _mm_mul_ps(temp0_367, zmm6_5)
                    float temp0_371[0x4] = _mm_add_ps(_mm_add_ps(temp0_368, temp0_366), temp0_369)
                    float temp0_372[0x4] = _mm_shuffle_ps(var_188, var_188, 0)
                    float temp0_373[0x4] = _mm_shuffle_ps(var_188, var_188, 0x55)
                    float temp0_376[0x4] =
                        _mm_add_ps(_mm_mul_ps(temp0_372, zmm3_7), _mm_mul_ps(temp0_373, zmm4_8))
                    float temp0_378[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(var_188, var_188, 0xaa), zmm5_5)
                    float temp0_379[0x4] = _mm_shuffle_ps(var_188, var_188, 0xff)
                    float temp0_380[0x4] = _mm_shuffle_ps(zmm9_4, zmm9_4, 0)
                    float temp0_381[0x4] = _mm_shuffle_ps(zmm9_4, zmm9_4, 0x55)
                    float temp0_382[0x4] = _mm_add_ps(temp0_376, temp0_378)
                    float temp0_383[0x4] = _mm_mul_ps(temp0_380, temp0_349)
                    float temp0_384[0x4] = _mm_mul_ps(temp0_379, zmm6_5)
                    float temp0_386[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm9_4, zmm9_4, 0xaa), temp0_371)
                    float temp0_387[0x4] = _mm_add_ps(temp0_382, temp0_384)
                    float temp0_388[0x4] = _mm_shuffle_ps(zmm9_4, zmm9_4, 0xff)
                    float temp0_389[0x4] = _mm_mul_ps(temp0_381, temp0_360)
                    float temp0_390[0x4] = _mm_mul_ps(temp0_388, temp0_387)
                    float temp0_391[0x4] = _mm_add_ps(temp0_389, temp0_383)
                    float temp0_393[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0), temp0_349)
                    float temp0_394[0x4] = _mm_add_ps(temp0_391, temp0_386)
                    float temp0_396[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0xaa), temp0_371)
                    _mm_add_ps(temp0_394, temp0_390)
                    float temp0_398[0x4] = _mm_shuffle_ps(zmm10_3, zmm10_3, 0x55)
                    float temp0_400[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm10_3, zmm10_3, 0xff), temp0_387)
                    float temp0_402[0x4] = _mm_add_ps(_mm_mul_ps(temp0_398, temp0_360), temp0_393)
                    float temp0_404[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm11_3, zmm11_3, 0), temp0_349)
                    float temp0_405[0x4] = _mm_add_ps(temp0_402, temp0_396)
                    float temp0_407[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm11_3, zmm11_3, 0xaa), temp0_371)
                    _mm_add_ps(temp0_405, temp0_400)
                    float temp0_409[0x4] = _mm_shuffle_ps(zmm11_3, zmm11_3, 0x55)
                    float temp0_411[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(zmm11_3, zmm11_3, 0xff), temp0_387)
                    float temp0_413[0x4] = _mm_add_ps(_mm_mul_ps(temp0_409, temp0_360), temp0_404)
                    float temp0_415[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0), temp0_349)
                    float temp0_416[0x4] = _mm_add_ps(temp0_413, temp0_407)
                    float temp0_418[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0xaa), temp0_371)
                    float temp0_419[0x4] = _mm_add_ps(temp0_416, temp0_411)
                    float temp0_421[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0x55), temp0_360)
                    float temp0_423[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0xff), temp0_387)
                    float temp0_426[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(temp0_421, temp0_415), temp0_418), temp0_423)
                    float zmm8_4[0x4]
                    float zmm9_5[0x4]
                    zmm8_4, zmm9_5 = sub_14077e760(&var_1b8, &arg2[3])
                    uint32_t zmm6_6[0x4] = var_1b8
                    float temp0_427[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0x55)
                    float temp0_428[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0)
                    float temp0_429[0x4] = _mm_mul_ps(temp0_427, var_1a8)
                    float temp0_430[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0xaa)
                    float temp0_431[0x4] = _mm_mul_ps(temp0_428, zmm6_6)
                    float temp0_432[0x4] = _mm_mul_ps(temp0_430, var_198)
                    float temp0_433[0x4] = _mm_shuffle_ps(zmm8_4, zmm8_4, 0xff)
                    float temp0_435[0x4] = _mm_add_ps(_mm_add_ps(temp0_429, temp0_431), temp0_432)
                    float temp0_436[0x4] = _mm_mul_ps(temp0_433, var_188)
                    float temp0_437[0x4] = _mm_shuffle_ps(zmm9_5, zmm9_5, 0)
                    float temp0_438[0x4] = _mm_shuffle_ps(zmm9_5, zmm9_5, 0xaa)
                    float temp0_439[0x4] = _mm_mul_ps(temp0_437, zmm6_6)
                    float temp0_440[0x4] = _mm_add_ps(temp0_435, temp0_436)
                    float temp0_441[0x4] = _mm_mul_ps(temp0_438, var_198)
                    float temp0_443[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_419, temp0_419, 0x55), var_1a8)
                    var_1b8 = temp0_440
                    float temp0_445[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_5, zmm9_5, 0x55), var_1a8)
                    float temp0_447[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9_5, zmm9_5, 0xff), var_188)
                    float temp0_448[0x4] = _mm_add_ps(temp0_445, temp0_439)
                    float temp0_450[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_419, temp0_419, 0), zmm6_6)
                    float temp0_451[0x4] = _mm_add_ps(temp0_448, temp0_441)
                    float temp0_452[0x4] = _mm_shuffle_ps(temp0_419, temp0_419, 0xaa)
                    float temp0_453[0x4] = _mm_add_ps(temp0_443, temp0_450)
                    float temp0_454[0x4] = _mm_mul_ps(temp0_452, var_198)
                    float temp0_455[0x4] = _mm_shuffle_ps(temp0_419, temp0_419, 0xff)
                    float temp0_456[0x4] = _mm_add_ps(temp0_451, temp0_447)
                    float temp0_458[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_426, temp0_426, 0), zmm6_6)
                    float temp0_459[0x4] = _mm_add_ps(temp0_453, temp0_454)
                    float temp0_460[0x4] = _mm_mul_ps(temp0_455, var_188)
                    float var_1a8_1[0x4] = temp0_456
                    float temp0_461[0x4] = _mm_shuffle_ps(temp0_426, temp0_426, 0xaa)
                    float temp0_463[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_426, temp0_426, 0x55), var_1a8)
                    float temp0_464[0x4] = _mm_add_ps(temp0_459, temp0_460)
                    float temp0_465[0x4] = _mm_mul_ps(temp0_461, var_198)
                    float temp0_466[0x4] = _mm_shuffle_ps(temp0_426, temp0_426, 0xff)
                    float temp0_467[0x4] = _mm_add_ps(temp0_463, temp0_458)
                    float temp0_468[0x4] = _mm_mul_ps(temp0_466, var_188)
                    float var_198_1[0x4] = temp0_464
                    float var_188_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_467, temp0_465), temp0_468)
                    rax_17, zmm15 = sub_140adf440(&var_1b8, &var_1c8)
                    zmm14_1 = (zx.o(0)).d
                else
                    void* rax_9 = *(result_3 + 0x130)
                    float var_1d0_1
                    
                    if (rax_9 == 0)
                        float rax_10 = data_143dbb200
                        var_1d8 = data_143dbb1f8.q
                        var_1d0_1 = rax_10
                    else
                        zmm1_3 = *(rax_9 + 0x1d0)
                        var_1d8.d = zmm1_3[0]
                        float temp0_207[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                        var_1d0_1 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)[0]
                        var_1d8:4.d = temp0_207[0]
                    
                    zmm0_4 = zx.o(var_1d8)
                    uint32_t zmm9_1[0x4] = var_1b8
                    zmm0_4[0] = zmm0_4[0] * arg3[0]
                    int32_t var_1bc_1 = 0
                    zmm3_3 = var_1c8.o
                    float temp0_209[0x4] = _mm_shuffle_ps(zmm0_4, zmm0_4, 0x55)
                    zmm3_3[0] = zmm0_4[0]
                    temp0_209[0] = temp0_209[0] * arg3[0]
                    var_1d8 = zmm0_4.q
                    zmm0_4 = var_1d0_1
                    float temp0_210[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xe1)
                    temp0_210[0] = temp0_209[0]
                    zmm0_4[0] = zmm0_4[0] * arg3[0]
                    var_1d8 = 0
                    float temp0_211[0x4] = _mm_shuffle_ps(temp0_210, temp0_210, 0xc6)
                    int32_t var_1d0_3 = 0
                    temp0_211[0] = zmm0_4[0]
                    float temp0_212[0x4] = _mm_shuffle_ps(temp0_211, temp0_211, 0xc9)
                    var_1c8.o = temp0_212
                    float temp0_213[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xff)
                    float temp0_214[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xaa)
                    float temp0_215[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0x55)
                    float temp0_216[0x4] = _mm_mul_ps(temp0_213, var_188)
                    float temp0_217[0x4] = _mm_mul_ps(temp0_215, var_1a8)
                    float temp0_218[0x4] = _mm_mul_ps(temp0_214, var_198)
                    float temp0_220[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_212, temp0_212, 0), zmm9_1)
                    float temp0_223[0x4] = _mm_add_ps(_mm_add_ps(temp0_216, temp0_218), 
                        _mm_add_ps(temp0_217, temp0_220))
                    temp0_223[0] = temp0_223[0] f+ *arg2
                    float temp0_224[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0x55)
                    temp0_224[0] = temp0_224[0] f+ arg2[1]
                    float temp0_225[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xaa)
                    temp0_225[0] = temp0_225[0] f+ arg2[2]
                    *arg2 = temp0_223[0]
                    arg2[1] = temp0_224[0]
                    arg2[2] = temp0_225[0]
                    void* r14_1 = *(result_3 + 0x130)
                    int32_t rax_15
                    
                    if (r14_1 == 0)
                        zmm0_4 = zx.o(data_143dbb208)
                        rax_15 = data_143dbb210
                    else
                        zmm1_3 = *(r14_1 + 0x1c0)
                        uint32_t temp0_227 =
                            _mm_movemask_ps(_mm_cmpeq_ps(*(r14_1 + 0x180), zmm1_3, 4))
                        var_1d8.o = zmm1_3
                        
                        if (temp0_227 != 0)
                            *(r14_1 + 0x180) = zmm1_3
                            int32_t* rax_13 = sub_140adf5d0(&var_1d8, &var_1c8)
                            *(r14_1 + 0x190) = *rax_13
                            *(r14_1 + 0x198) = rax_13[2]
                        
                        zmm0_4 = zx.o(*(r14_1 + 0x190))
                        rax_15 = *(r14_1 + 0x198)
                    
                    var_1d8 = zmm0_4.q
                    zmm2_3 = zx.o(var_1d8)
                    zmm2_3[0] = zmm2_3[0] * arg3[0]
                    float temp0_228[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55)
                    temp0_228[0] = temp0_228[0] * arg3[0]
                    var_1d8.d = zmm2_3[0]
                    zmm0_4 = rax_15
                    zmm0_4[0] = zmm0_4[0] * arg3[0]
                    var_1d8:4.d = temp0_228[0]
                    var_1c8 = zmm2_3.q
                    float var_1d0_5 = zmm0_4[0]
                    float zmm6_3[0x4]
                    float zmm7_2[0x4]
                    float zmm8_2[0x4]
                    float zmm9_2[0x4]
                    zmm6_3, zmm7_2, zmm8_2, zmm9_2 = sub_14077e760(&var_1b8, &var_1d8)
                    uint32_t zmm2_4[0x4] = var_1b8
                    uint32_t zmm3_4[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
                    uint32_t zmm0_5[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
                    uint32_t zmm1_4[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
                    zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_2)
                    zmm1_4 = _mm_mul_ps(zmm1_4, zmm7_2)
                    zmm3_4 = _mm_mul_ps(zmm3_4, zmm8_2)
                    zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm6_3)
                    zmm3_4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_4, zmm0_5), zmm1_4), zmm2_4)
                    zmm2_4 = var_1a8
                    float temp0_240[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
                    zmm0_5 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
                    zmm1_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
                    float temp0_243[0x4] = _mm_mul_ps(temp0_240, zmm8_2)
                    zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_2)
                    zmm1_4 = _mm_mul_ps(zmm1_4, zmm7_2)
                    zmm2_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
                    float temp0_247[0x4] = _mm_add_ps(temp0_243, zmm0_5)
                    zmm2_4 = _mm_mul_ps(zmm2_4, zmm6_3)
                    var_118 = zmm3_4
                    float temp0_250[0x4] = _mm_add_ps(_mm_add_ps(temp0_247, zmm1_4), zmm2_4)
                    zmm3_4 = _mm_shuffle_ps(var_198, var_198, 0x55)
                    zmm0_5 = _mm_shuffle_ps(var_198, var_198, 0)
                    zmm1_4 = _mm_shuffle_ps(var_198, var_198, 0xaa)
                    float var_108_3[0x4] = temp0_250
                    zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_2)
                    zmm1_4 = _mm_mul_ps(zmm1_4, zmm7_2)
                    zmm3_4 = _mm_mul_ps(zmm3_4, zmm8_2)
                    zmm2_4 = _mm_mul_ps(_mm_shuffle_ps(var_198, var_198, 0xff), zmm6_3)
                    zmm3_4 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm3_4, zmm0_5), zmm1_4), zmm2_4)
                    zmm2_4 = var_188
                    float temp0_262[0x4] = _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55)
                    zmm0_5 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0)
                    float temp0_264[0x4] = _mm_mul_ps(temp0_262, zmm8_2)
                    zmm1_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa)
                    zmm0_5 = _mm_mul_ps(zmm0_5, zmm9_2)
                    zmm1_4 = _mm_mul_ps(zmm1_4, zmm7_2)
                    uint32_t var_f8_3[0x4] = zmm3_4
                    float temp0_268[0x4] = _mm_add_ps(temp0_264, zmm0_5)
                    zmm2_4 = _mm_shuffle_ps(zmm2_4, zmm2_4, 0xff)
                    float var_e8_1[0x4] =
                        _mm_add_ps(_mm_add_ps(temp0_268, zmm1_4), _mm_mul_ps(zmm2_4, zmm6_3))
                    rax_17, zmm14_1, zmm15 = sub_140adf440(&var_118, &var_1c8)
                *(arg2 + 0xc) = *rax_17
                result = zx.q(rax_17[2])
                arg2[5] = result.d
                
                if ((*(arg1 + 0x3c) & 0x20) != 0)
                    int64_t zmm0_6 = *(*(result_3 + 0x228) + 0x1f0)
                    result = *(arg1 + 0x28)
                    float zmm1_5
                    
                    if ((*(result + 0x50) & 2) == 0)
                        int64_t zmm3_5 = arg2[6]
                        zmm1_5 = zmm0_6.d f- zmm3_5.d
                        result = 1
                        int32_t rcx_14
                        
                        if (zmm1_5 f<= zmm14_1)
                            int32_t rcx_15
                            rcx_15.b = zmm1_5 f>= zmm14_1
                            rcx_14 = rcx_15 - 1
                        else
                            rcx_14 = 1
                        
                        int64_t zmm4_6 = *(arg1 + 0x100)
                        float zmm2_5 = zmm0_6.d f- zmm4_6.d
                        
                        if (not(zmm2_5 f> zmm14_1))
                            int32_t rax_31
                            rax_31.b = zmm2_5 f>= zmm14_1
                            result = zx.q(rax_31 - 1)
                        
                        if (rcx_14 == result.d)
                            zmm2_5 = zmm2_5 * zmm15 f+ zmm3_5.d
                            
                            if (not(zmm2_5 f< zmm0_6.d))
                                zmm0_6 = _mm_min_ss(zmm4_6.d, zmm2_5)
                        else
                            zmm1_5 = zmm1_5 * zmm15 f+ zmm3_5.d
                            
                            if (zmm1_5 f>= zmm3_5.d)
                                zmm0_6 = _mm_min_ss(zmm0_6.d, zmm1_5)
                            else
                                zmm0_6 = zmm3_5
                    else
                        zmm0_6.d = zmm0_6.d f- *(arg1 + 0x100)
                        zmm0_6.d = zmm0_6.d f* zmm15
                        zmm0_6.d = zmm0_6.d f+ arg2[6]
                    
                    zmm1_5 = 5f
                    
                    if (not(zmm0_6.d f< 5f))
                        zmm1_5 = __minss_xmmss_memss(zmm0_6.d, 0x432a0000).d
                    
                    arg2[6] = zmm1_5

__security_check_cookie(result_1 ^ &var_208)
return result
