// 函数: sub_14230e0c0
// 地址: 0x14230e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t result = __security_cookie ^ &var_248
int64_t result_1 = result
int64_t* r14 = arg4
void* rdi = arg5
void* var_1d8 = rdi
void* rbx = arg1

if (*(arg1 + 0x430) != 0 && arg2 != 0)
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
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    uint32_t zmm14[0x4]
    uint32_t var_c8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_d8_1[0x4] = zmm15
    uint32_t var_218[0x4]
    uint32_t var_158[0x4]
    float var_118[0x4]
    float var_108_1[0x4]
    float var_f8_1[0x4]
    uint32_t zmm1[0x4]
    
    if (arg1 == arg3)
        zmm1 = data_143dbb0d0
        var_118 = data_143dbb0c0
        var_f8_1 = data_143dbb0e0
        var_108_1 = zmm1
    else
        zmm7 = *(arg3 + 0x1e0)
        uint32_t zmm2[0x4] = data_143f57850
        float zmm3[0x4] = data_143f57940
        uint32_t temp0_1[0x4] = _mm_and_ps(zmm7, zmm2)
        zmm14 = data_143f57820
        zmm15 = data_143f57810
        float zmm5[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(zmm3, temp0_1, 1)) == 0)
            zmm6 = data_143dbb0c0
            zmm11 = data_143dbb0d0
            zmm7 = data_143dbb0e0
        else
            zmm6 = __mulps_xmmps_memps(*(arg3 + 0x1c0), data_143f57950)
            zmm5 = *(arg3 + 0x1d0)
            zmm15[0].q = zmm7 u>> 0x40
            float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm15, 0xc4)
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
            zmm7 = _mm_and_ps(zmm7, zmm14)
            float temp0_21[0x4] = _mm_mul_ps(zmm5, zmm7)
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xc9), temp0_16)
            float temp0_26[0x4] =
                _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_21, temp0_21, 0xd2), zmm1), temp0_23)
            float temp0_27[0x4] = _mm_add_ps(temp0_26, temp0_26)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd2), zmm1)
            zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, temp0_27, 0xc9)
            zmm1 = _mm_mul_ps(zmm1, temp0_27)
            float temp0_33[0x4] = _mm_mul_ps(temp0_31, temp0_16)
            zmm1 = _mm_add_ps(zmm1, temp0_21)
            zmm11 =
                _mm_and_ps(_mm_sub_ps(zx.o(0), _mm_add_ps(_mm_sub_ps(zmm2, temp0_33), zmm1)), zmm14)
        
        zmm12 = *(arg1 + 0x1e0)
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7), data_143f578e0, 1)) == 0)
            zmm3 = *(arg1 + 0x1c0)
            float zmm4[0x4] = *(arg1 + 0x1d0)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), _mm_shuffle_ps(zmm6, zmm6, 0))
            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
            float temp0_175[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_176[0x4] = _mm_mul_ps(zmm4, zmm7)
            zmm2 = __mulps_xmmps_memps(zmm2, data_143f578d0)
            float temp0_178[0x4] = _mm_mul_ps(temp0_175, zmm3)
            float temp0_179[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
            float temp0_180[0x4] = _mm_mul_ps(zmm12, zmm7)
            zmm2 = _mm_add_ps(zmm2, temp0_178)
            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm6, zmm6, 0x55))
            float temp0_185[0x4] = _mm_mul_ps(temp0_179, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
            zmm1 = __mulps_xmmps_memps(zmm1, data_143f578c0)
            float temp0_187[0x4] = _mm_shuffle_ps(temp0_176, temp0_176, 0xc9)
            float temp0_188[0x4] = __mulps_xmmps_memps(temp0_185, data_143f578b0)
            var_f8_1 = temp0_180
            zmm2 = _mm_add_ps(_mm_add_ps(zmm2, zmm1), temp0_188)
            float temp0_191[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_192[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_193[0x4] = _mm_mul_ps(temp0_187, temp0_192)
            var_118 = zmm2
            zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_176, temp0_176, 0xd2), temp0_191), 
                temp0_193)
            zmm2 = _mm_add_ps(zmm2, zmm2)
            float temp0_198[0x4] = _mm_mul_ps(temp0_175, zmm2)
            float temp0_199[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xd2), temp0_191)
            float temp0_202[0x4] = _mm_mul_ps(temp0_199, temp0_192)
            float temp0_203[0x4] = _mm_add_ps(temp0_198, temp0_176)
            var_108_1 = _mm_add_ps(_mm_add_ps(_mm_sub_ps(zmm1, temp0_202), temp0_203), zmm11)
        else
            zmm1 = _mm_add_ps(zmm6, zmm6)
            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 4)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            _mm_mul_ps(zmm12, zmm7)
            float temp0_46[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
            float temp0_47[0x4] = _mm_mul_ps(zmm1, zmm6)
            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
            float temp0_53[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0x1a), 
                _mm_shuffle_ps(temp0_47, temp0_47, 1))
            float temp0_54[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            zmm3 = *(arg1 + 0x1c0)
            float temp0_55[0x4] = _mm_mul_ps(temp0_54, zmm1)
            zmm1 = _mm_sub_ps(zmm15, temp0_53)
            float temp0_57[0x4] = _mm_add_ps(temp0_55, zmm2)
            zmm2 = _mm_sub_ps(zmm2, temp0_55)
            zmm1 = _mm_mul_ps(zmm1, zmm7)
            float temp0_60[0x4] = _mm_mul_ps(temp0_57, zmm7)
            float temp0_61[0x4] = _mm_mul_ps(temp0_44, zmm2)
            uint32_t temp0_62[0x4] = _mm_and_ps(zmm1, zmm14)
            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_66[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_62, 0), 
                _mm_shuffle_ps(temp0_61, temp0_62, 0x32), 0x82)
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_60, temp0_62, 0x31)
            float temp0_69[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_61, temp0_62, 0x10), temp0_67, 0x88)
            float temp0_71[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_60, temp0_61, 0x12), temp0_62, 0xe8)
            zmm1 = _mm_add_ps(zmm3, zmm3)
            zmm15[0].q = zmm11 u>> 0x40
            float temp0_73[0x4] = _mm_shuffle_ps(zmm11, zmm15, 0xc4)
            float temp0_74[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_75[0x4] = _mm_mul_ps(zmm3, zmm1)
            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
            float temp0_79[0x4] = _mm_mul_ps(temp0_74, _mm_shuffle_ps(zmm1, zmm1, 0x12))
            float temp0_82[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x1a), 
                _mm_shuffle_ps(temp0_75, temp0_75, 1))
            float temp0_83[0x4] = _mm_add_ps(temp0_79, zmm2)
            zmm2 = _mm_sub_ps(zmm2, temp0_79)
            zmm1 = _mm_sub_ps(zmm15, temp0_82)
            float temp0_86[0x4] = _mm_mul_ps(temp0_83, zmm12)
            float temp0_87[0x4] = _mm_mul_ps(temp0_46, zmm2)
            uint32_t temp0_89[0x4] = _mm_and_ps(_mm_mul_ps(zmm1, zmm12), zmm14)
            float temp0_90[0x4] = _mm_shuffle_ps(temp0_87, temp0_89, 0x32)
            float temp0_92[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_86, temp0_89, 0), temp0_90, 0x82)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_86, temp0_89, 0x31)
            float temp0_95[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, temp0_89, 0x10), temp0_93, 0x88)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0x55), temp0_69)
            float temp0_98[0x4] = _mm_shuffle_ps(temp0_86, temp0_87, 0x12)
            zmm5 = *(arg1 + 0x1d0)
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_98, temp0_89, 0xe8)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xaa), temp0_71)
            zmm15[0].q = zmm5 u>> 0x40
            float temp0_102[0x4] = _mm_shuffle_ps(zmm5, zmm15, 0xc4)
            float temp0_103[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0)
            float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xff), temp0_73)
            zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(temp0_103, temp0_66))
            float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0), temp0_66)
            zmm2 = _mm_add_ps(zmm2, zmm1)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xaa), temp0_71)
            zmm2 = _mm_add_ps(zmm2, temp0_105)
            float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0x55), temp0_69)
            float temp0_116[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0xff)
            var_218 = zmm2
            zmm2 = _mm_shuffle_ps(temp0_99, temp0_99, 0x55)
            float temp0_118[0x4] = _mm_add_ps(temp0_115, temp0_109)
            zmm2 = _mm_mul_ps(zmm2, temp0_69)
            float temp0_120[0x4] = _mm_mul_ps(temp0_116, temp0_73)
            float temp0_121[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0)
            float temp0_122[0x4] = _mm_add_ps(temp0_118, zmm1)
            float temp0_123[0x4] = _mm_mul_ps(temp0_121, temp0_66)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xaa), temp0_71)
            float temp0_126[0x4] = _mm_add_ps(temp0_122, temp0_120)
            float temp0_127[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0xff)
            zmm2 = _mm_add_ps(zmm2, temp0_123)
            float temp0_129[0x4] = _mm_mul_ps(temp0_127, temp0_73)
            float temp0_130[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0)
            int96_t var_208_1 = temp0_126[0].12
            float temp0_131[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
            zmm2 = _mm_add_ps(zmm2, zmm1)
            float temp0_133[0x4] = _mm_mul_ps(temp0_131, temp0_69)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_71)
            float temp0_136[0x4] = _mm_mul_ps(temp0_130, temp0_66)
            zmm2 = _mm_add_ps(zmm2, temp0_129)
            float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xff), temp0_73)
            float temp0_140[0x4] = _mm_add_ps(temp0_133, temp0_136)
            int96_t var_1f8_1 = zmm2[0].12
            int96_t var_1e8_1 = _mm_add_ps(_mm_add_ps(temp0_140, zmm1), temp0_139)[0].12
            zmm10, zmm13, zmm15 = sub_1407740e0(&var_218, 0x322bcc77)
            float zmm2_1[0x4] = var_218[0]
            uint32_t zmm1_1 = var_218[1]
            zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm10, 2), data_143f57830 ^ zmm15)
            uint32_t zmm0_1[0x4] = var_218[2]
            zmm13 ^= data_143f57830
            zmm2_1[0] = zmm2_1[0] * zmm13[0]
            zmm1_1 = zmm1_1 f* zmm13[0]
            zmm0_1[0] = zmm0_1[0] f* zmm13[0]
            var_218[0] = zmm2_1[0]
            var_218[1] = zmm1_1
            float temp0_145[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
            zmm1_1 = var_208_1:4.d f* temp0_145[0]
            var_218[2] = zmm0_1[0]
            zmm0_1 = var_208_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_145[0]
            float zmm3_1 = var_208_1.d * temp0_145[0]
            zmm2_1 = var_1f8_1.d
            var_208_1:4.d = zmm1_1
            var_208_1:8.d = zmm0_1[0]
            zmm0_1 = var_1f8_1:8.d
            float temp0_146[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
            zmm1_1 = var_1f8_1:4.d f* temp0_146[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_146[0]
            zmm2_1[0] = zmm2_1[0] * temp0_146[0]
            var_1f8_1:4.d = zmm1_1
            var_1f8_1:8.d = zmm0_1[0]
            var_208_1.d = zmm3_1
            var_1f8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_158, &var_218)
            zmm6 = var_158
            float zmm5_1[0x4] = data_143f57790
            float temp0_147[0x4] = _mm_mul_ps(zmm6, zmm6)
            var_f8_1 = zmm10
            float temp0_149[0x4] = _mm_add_ps(temp0_147, _mm_shuffle_ps(temp0_147, temp0_147, 0x4e))
            float temp0_151[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0x39), temp0_149)
            float temp0_152[0x4] = _mm_rsqrt_ps(temp0_151)
            float temp0_153[0x4] = _mm_mul_ps(temp0_151, zmm5_1)
            float temp0_158[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_152, temp0_152), temp0_153)), 
                    temp0_152), 
                temp0_152)
            float temp0_161[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_158, temp0_158), temp0_153))
            float temp0_163[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_151, 2)
            float temp0_165[0x4] = _mm_add_ps(_mm_mul_ps(temp0_161, temp0_158), temp0_158)
            float temp0_166[0x4] = _mm_unpacklo_ps(var_1e8_1:4.d, 0)
            zmm5_1 =
                _mm_and_ps(_mm_mul_ps(temp0_165, zmm6) ^ data_143f57780, temp0_163) ^ data_143f57780
            var_108_1 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_1e8_1.d, var_1e8_1:8.d[0].q), temp0_166[0].q)
            var_118 = zmm5_1
    bool cond:1_1 = *(rdi + 0x38) == 0
    zmm13 = var_118
    float var_128_1[0x4] = var_108_1
    var_158 = var_f8_1
    int64_t rax_3
    
    if (not(cond:1_1))
        rax_3 = sub_140d3c6e0(rdi + 0x10)
    
    float var_198[0x4]
    float var_188
    
    if (cond:1_1 || rax_3 != *(rbx + 0x430))
        int64_t* rcx_3 = *(arg2 + 0x40)
        int64_t* var_1a8_1 = rcx_3
        void* rax_5 = &rcx_3[sx.q(*(arg2 + 0x48))]
        
        if (rcx_3 != rax_5)
            do
                void* r13_1 = *rcx_3
                int32_t rax_6 = sub_14078ee20(*(rbx + 0x430) + 0x188, r13_1 + 0x80)
                
                if (rax_6 != 0xffffffff)
                    void* rbx_1 = *(r13_1 + 0x28)
                    void* r14_3 = (sx.q(*(r13_1 + 0x30)) << 6) + rbx_1
                    
                    if (rbx_1 != r14_3)
                        do
                            int64_t rsi_1 = sx.q(*(rdi + 0x20))
                            int32_t r15_1 = *(rbx_1 + 0x38)
                            int64_t var_1b8_1 = *(rbx_1 + 0x30)
                            int32_t rax_7 = (rsi_1 + 1).d
                            float var_1bc_1 = (*(rbx_1 + 0x3c))[0]
                            *(rdi + 0x20) = rax_7
                            
                            if (rax_7 s> *(rdi + 0x24))
                                sub_1405c4d20(rdi + 0x18)
                            
                            int64_t rax_8 = *(rdi + 0x18)
                            int64_t rcx_7 = rsi_1 * 5
                            rbx_1 += 0x40
                            *(rax_8 + (rcx_7 << 2)) = rax_6.o
                            *(rax_8 + (rcx_7 << 2) + 0x10) = r15_1
                        while (rbx_1 != r14_3)
                        
                        rdi = var_1d8
                    
                    void* r15_2 = *(r13_1 + 0x48)
                    void* r13_4 = sx.q(*(r13_1 + 0x50)) * 0x50 + r15_2
                    
                    if (r15_2 != r13_4)
                        void* rdi_1 = r15_2 + 0x38
                        
                        do
                            var_198[0].q = 0
                            var_198[2] = 0x3f800000
                            zmm9 = sub_140adf300(rdi_1 + 4, &var_188, &var_198)
                            float zmm0[0x4] = *(rdi_1 + 0x14)
                            float zmm5_2[0x4] = *(rdi_1 - 8)
                            float zmm3_3[0x4] = *rdi_1
                            int64_t zmm4_2 = *(rdi_1 - 4)
                            zmm8 = var_188
                            int64_t r14_4 = sx.q(*(rdi + 0x20))
                            int32_t var_180
                            zmm6 = var_180
                            int32_t var_184
                            zmm7 = var_184
                            zmm0[0] = zmm0[0] * zmm9[0]
                            int32_t rax_10 = (r14_4 + 1).d
                            zmm8[0] = zmm8[0] * zmm0[0]
                            zmm7[0] = zmm7[0] * zmm0[0]
                            zmm5_2[0] = zmm5_2[0] - zmm8[0]
                            zmm6[0] = zmm6[0] * zmm0[0]
                            zmm8[0] = zmm8[0] + zmm5_2[0]
                            int64_t zmm2_3
                            zmm2_3.d = zmm4_2.d f- zmm7[0]
                            zmm3_3[0] = zmm3_3[0] - zmm6[0]
                            zmm7[0] = zmm7[0] f+ zmm4_2.d
                            zmm6[0] = zmm6[0] + zmm3_3[0]
                            float temp0_207[0x4] = _mm_unpacklo_ps(zmm5_2, zmm2_3)
                            float var_160_1 = zmm3_3[0]
                            int64_t var_138_1 = (_mm_unpacklo_ps(zmm8, zmm7[0].q)).q
                            zmm0 = *(rdi_1 + 0x10)
                            float var_1bc_2 = zmm0[0]
                            float var_13c_1 = zmm0[0]
                            float var_170_1 = zmm6[0]
                            int64_t var_1b8_2 = temp0_207.q
                            *(rdi + 0x20) = rax_10
                            
                            if (rax_10 s> *(rdi + 0x24))
                                sub_1405c4d20(rdi + 0x18)
                            
                            int64_t rax_11 = *(rdi + 0x18)
                            int64_t rcx_10 = r14_4 * 5
                            *(rax_11 + (rcx_10 << 2)) = rax_6.o
                            *(rax_11 + (rcx_10 << 2) + 0x10) = var_160_1
                            int64_t r14_5 = sx.q(*(rdi + 0x20))
                            int32_t rax_12 = (r14_5 + 1).d
                            *(rdi + 0x20) = rax_12
                            
                            if (rax_12 s> *(rdi + 0x24))
                                sub_1405c4d20(rdi + 0x18)
                            
                            int64_t rax_13 = *(rdi + 0x18)
                            int64_t rcx_12 = r14_5 * 5
                            *(rax_13 + (rcx_12 << 2)) = rax_6.o
                            *(rax_13 + (rcx_12 << 2) + 0x10) = var_170_1
                            int64_t r14_6 = sx.q(*(rdi + 0x30))
                            int32_t rcx_13 = *(var_1d8 + 0x20)
                            int32_t var_224_1 = rcx_13 - 1
                            int32_t rax_17 = (r14_6 + 1).d
                            *(rdi + 0x30) = rax_17
                            
                            if (rax_17 s> *(rdi + 0x34))
                                sub_1405a4d70(rdi + 0x28)
                            
                            r15_2 += 0x50
                            rdi_1 += 0x50
                            *(*(rdi + 0x28) + (r14_6 << 3)) = (rcx_13 - 2).q
                        while (r15_2 != r13_4)
                    
                    rbx = arg1
                
                rdi = var_1d8
                rcx_3 = &var_1a8_1[1]
                var_1a8_1 = rcx_3
            while (rcx_3 != rax_5)
            
            r14 = arg4
        
        sub_140d3a3a0(rdi + 0x10, *(rbx + 0x430))
        *(rdi + 0x38) = 1
    
    int32_t rdx_11 = *(rdi + 0x20) + r14[1].d
    
    if (rdx_11 s> *(r14 + 0xc))
        sub_1405c55e0(r14, rdx_11)
    
    int32_t rdx_13 = *(rdi + 0x30) + r14[3].d
    
    if (rdx_13 s> *(r14 + 0x1c))
        sub_1405c5570(&r14[2], rdx_13)
    
    float (* r12_2)[0x4] = *(rdi + 0x18)
    void* rax_20 = &(*r12_2)[sx.q(*(rdi + 0x20)) * 5]
    
    if (r12_2 != rax_20)
        var_198 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
        
        do
            int64_t rbx_3 = sx.q(r14[1].d)
            int32_t rax_21 = (rbx_3 + 1).d
            r14[1].d = rax_21
            
            if (rax_21 s> *(r14 + 0xc))
                sub_1405c4d20(r14)
            
            int64_t rsi_3 = *r14
            int64_t rbx_4 = rbx_3 * 5
            *(rsi_3 + (rbx_4 << 2)) = *r12_2
            *(rsi_3 + (rbx_4 << 2) + 0x10) = r12_2[1][0]
            float (* rax_23)[0x4]
            rax_23, zmm6, zmm8, zmm9, zmm13 =
                sub_141f5e7d0(arg1, &var_118, *(rsi_3 + (rbx_4 << 2)), &data_143dbb0c0)
            float zmm1_4[0x4] = data_143f578e0
            var_188.o = zmm1_4
            zmm15 = rax_23[2]
            float temp0_210[0x4] = _mm_min_ps(zmm15, zmm6)
            zmm14 = _mm_mul_ps(zmm15, zmm6)
            float zmm5_3[0x4]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_210, zmm1_4, 1)) == 0)
                zmm5_3 = *rax_23
                float temp0_341[0x4] = _mm_mul_ps(rax_23[1], zmm6)
                float temp0_342[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x1b)
                float temp0_343[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                float temp0_344[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
                float temp0_346[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_341, temp0_341, 0xc9), temp0_344)
                float temp0_349[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_341, temp0_341, 0xd2), temp0_343), temp0_346)
                float temp0_350[0x4] = _mm_add_ps(temp0_349, temp0_349)
                float temp0_352[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_350, temp0_350, 0xc9), temp0_344)
                float temp0_354[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_350, temp0_350, 0xd2), temp0_343)
                float temp0_355[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0x4e)
                float temp0_356[0x4] = _mm_mul_ps(temp0_350, zmm8)
                float temp0_357[0x4] = _mm_sub_ps(temp0_354, temp0_352)
                float temp0_359[0x4] = _mm_mul_ps(temp0_342, _mm_shuffle_ps(zmm13, zmm13, 0))
                float temp0_360[0x4] = _mm_mul_ps(zmm5_3, zmm8)
                float temp0_361[0x4] = _mm_add_ps(temp0_356, temp0_341)
                float temp0_362[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xb1)
                float temp0_363[0x4] = __mulps_xmmps_memps(temp0_359, data_143f578d0)
                float temp0_364[0x4] = _mm_add_ps(temp0_357, temp0_361)
                float temp0_365[0x4] = _mm_add_ps(temp0_363, temp0_360)
                float temp0_367[0x4] = _mm_mul_ps(temp0_355, _mm_shuffle_ps(zmm13, zmm13, 0x55))
                zmm7 = _mm_add_ps(temp0_364, zmm9)
                float temp0_370[0x4] = _mm_mul_ps(temp0_362, _mm_shuffle_ps(zmm13, zmm13, 0xaa))
                float temp0_371[0x4] = __mulps_xmmps_memps(temp0_367, data_143f578c0)
                float temp0_372[0x4] = __mulps_xmmps_memps(temp0_370, data_143f578b0)
                zmm6 = _mm_add_ps(_mm_add_ps(temp0_365, temp0_371), temp0_372)
            else
                zmm11 = data_143f57810
                float temp0_214[0x4] = _mm_add_ps(zmm13, zmm13)
                float temp0_215[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
                float temp0_216[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_217[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                float temp0_219[0x4] =
                    _mm_mul_ps(temp0_215, _mm_shuffle_ps(temp0_214, temp0_214, 0x29))
                float temp0_220[0x4] = _mm_mul_ps(temp0_214, zmm13)
                float temp0_222[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_214, temp0_214, 0x12), zmm8)
                float temp0_225[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_220, temp0_220, 0x1a), 
                    _mm_shuffle_ps(temp0_220, temp0_220, 1))
                float temp0_226[0x4] = _mm_add_ps(temp0_222, temp0_219)
                float temp0_227[0x4] = _mm_sub_ps(temp0_219, temp0_222)
                float temp0_228[0x4] = _mm_mul_ps(temp0_226, zmm6)
                float temp0_229[0x4] = _mm_mul_ps(temp0_216, temp0_227)
                zmm1_4 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm11, temp0_225), zmm6), 
                    data_143f57820)
                float temp0_233[0x4] = _mm_shuffle_ps(temp0_229, zmm1_4, 0x32)
                float temp0_235[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_228, zmm1_4, 0), temp0_233, 0x82)
                float temp0_236[0x4] = _mm_shuffle_ps(temp0_228, zmm1_4, 0x31)
                float temp0_237[0x4] = _mm_shuffle_ps(temp0_228, temp0_229, 0x12)
                float temp0_239[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_229, zmm1_4, 0x10), temp0_236, 0x88)
                float temp0_240[0x4] = _mm_shuffle_ps(temp0_237, zmm1_4, 0xe8)
                zmm1_4 = *rax_23
                zmm11[0].q = zmm9 u>> 0x40
                float temp0_241[0x4] = _mm_add_ps(zmm1_4, zmm1_4)
                float temp0_242[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                float temp0_243[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 4)
                float temp0_244[0x4] = _mm_mul_ps(temp0_241, zmm1_4)
                float temp0_246[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0x29), temp0_243)
                float temp0_247[0x4] = _mm_shuffle_ps(zmm1_4, zmm1_4, 0xff)
                float temp0_248[0x4] = _mm_shuffle_ps(temp0_244, temp0_244, 0x1a)
                float temp0_250[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0x12), temp0_247)
                float temp0_252[0x4] =
                    _mm_add_ps(temp0_248, _mm_shuffle_ps(temp0_244, temp0_244, 1))
                float temp0_253[0x4] = _mm_add_ps(temp0_250, temp0_246)
                float temp0_254[0x4] = _mm_sub_ps(temp0_246, temp0_250)
                float temp0_255[0x4] = _mm_sub_ps(zmm11, temp0_252)
                float temp0_256[0x4] = _mm_mul_ps(temp0_253, zmm15)
                float temp0_257[0x4] = _mm_mul_ps(temp0_217, temp0_254)
                zmm1_4 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_255, zmm15), data_143f57820)
                float temp0_260[0x4] = _mm_shuffle_ps(temp0_257, zmm1_4, 0x32)
                float temp0_262[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_256, zmm1_4, 0), temp0_260, 0x82)
                float temp0_263[0x4] = _mm_shuffle_ps(temp0_256, temp0_257, 0x12)
                zmm5_3 = rax_23[1]
                float temp0_264[0x4] = _mm_shuffle_ps(temp0_256, zmm1_4, 0x31)
                float temp0_266[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_257, zmm1_4, 0x10), temp0_264, 0x88)
                float temp0_267[0x4] = _mm_shuffle_ps(temp0_263, zmm1_4, 0xe8)
                float temp0_268[0x4] = _mm_shuffle_ps(temp0_262, temp0_262, 0x55)
                float temp0_270[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_262, temp0_262, 0xaa), temp0_240)
                float temp0_271[0x4] = _mm_mul_ps(temp0_268, temp0_239)
                zmm11[0].q = zmm5_3 u>> 0x40
                float temp0_272[0x4] = _mm_shuffle_ps(zmm5_3, zmm11, 0xc4)
                float temp0_273[0x4] = _mm_shuffle_ps(temp0_262, temp0_262, 0)
                float temp0_275[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_262, temp0_262, 0xff), temp0_242)
                float temp0_277[0x4] = _mm_add_ps(temp0_271, _mm_mul_ps(temp0_273, temp0_235))
                float temp0_279[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0), temp0_235)
                float temp0_280[0x4] = _mm_add_ps(temp0_277, temp0_270)
                float temp0_282[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0xaa), temp0_240)
                float temp0_283[0x4] = _mm_add_ps(temp0_280, temp0_275)
                float temp0_285[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_266, temp0_266, 0x55), temp0_239)
                float temp0_286[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0xff)
                var_218 = temp0_283
                float temp0_287[0x4] = _mm_shuffle_ps(temp0_267, temp0_267, 0x55)
                float temp0_288[0x4] = _mm_add_ps(temp0_285, temp0_279)
                float temp0_289[0x4] = _mm_mul_ps(temp0_287, temp0_239)
                float temp0_290[0x4] = _mm_mul_ps(temp0_286, temp0_242)
                float temp0_291[0x4] = _mm_shuffle_ps(temp0_267, temp0_267, 0)
                float temp0_292[0x4] = _mm_add_ps(temp0_288, temp0_282)
                float temp0_293[0x4] = _mm_mul_ps(temp0_291, temp0_235)
                float temp0_295[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_267, temp0_267, 0xaa), temp0_240)
                float temp0_296[0x4] = _mm_add_ps(temp0_292, temp0_290)
                float temp0_297[0x4] = _mm_shuffle_ps(temp0_267, temp0_267, 0xff)
                float temp0_298[0x4] = _mm_add_ps(temp0_289, temp0_293)
                float temp0_299[0x4] = _mm_mul_ps(temp0_297, temp0_242)
                float temp0_300[0x4] = _mm_shuffle_ps(temp0_272, temp0_272, 0)
                int96_t var_208_2 = temp0_296[0].12
                float temp0_301[0x4] = _mm_shuffle_ps(temp0_272, temp0_272, 0x55)
                float temp0_302[0x4] = _mm_add_ps(temp0_298, temp0_295)
                float temp0_303[0x4] = _mm_mul_ps(temp0_301, temp0_239)
                float temp0_305[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_272, temp0_272, 0xaa), temp0_240)
                float temp0_306[0x4] = _mm_mul_ps(temp0_300, temp0_235)
                float temp0_307[0x4] = _mm_add_ps(temp0_302, temp0_299)
                float temp0_309[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_272, temp0_272, 0xff), temp0_242)
                float temp0_310[0x4] = _mm_add_ps(temp0_303, temp0_306)
                int96_t var_1f8_2 = temp0_307[0].12
                int96_t var_1e8_2 = _mm_add_ps(_mm_add_ps(temp0_310, temp0_305), temp0_309)[0].12
                zmm11, zmm14 = sub_1407740e0(&var_218, 0x322bcc77)
                float zmm2_5[0x4] = var_218[0]
                uint32_t zmm1_5 = var_218[1]
                float zmm4_4[0x4] =
                    _mm_and_ps(_mm_cmpeq_ps(var_188.o, zmm14, 2), data_143f57830 ^ zmm11)
                uint32_t zmm0_2[0x4] = var_218[2]
                zmm4_4 ^= data_143f57830
                zmm2_5[0] = zmm2_5[0] * zmm4_4[0]
                zmm1_5 = zmm1_5 f* zmm4_4[0]
                zmm0_2[0] = zmm0_2[0] f* zmm4_4[0]
                var_218[0] = zmm2_5[0]
                var_218[1] = zmm1_5
                var_218[2] = zmm0_2[0]
                zmm0_2 = var_208_2:8.d
                float temp0_315[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
                zmm1_5 = var_208_2:4.d f* temp0_315[0]
                zmm0_2[0] = zmm0_2[0] f* temp0_315[0]
                float zmm3_5 = var_208_2.d * temp0_315[0]
                zmm2_5 = var_1f8_2.d
                float temp0_316[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa)
                var_208_2:4.d = zmm1_5
                var_208_2:8.d = zmm0_2[0]
                zmm0_2 = var_1f8_2:8.d
                zmm1_5 = var_1f8_2:4.d f* temp0_316[0]
                zmm0_2[0] = zmm0_2[0] f* temp0_316[0]
                zmm2_5[0] = zmm2_5[0] * temp0_316[0]
                var_1f8_2:4.d = zmm1_5
                var_1f8_2:8.d = zmm0_2[0]
                var_208_2.d = zmm3_5
                var_1f8_2.d = zmm2_5[0]
                uint32_t var_168[0x4]
                sub_14077e4a0(&var_168, &var_218)
                zmm5_3 = var_168
                zmm6 = data_143f57790
                float temp0_317[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                float temp0_319[0x4] =
                    _mm_add_ps(temp0_317, _mm_shuffle_ps(temp0_317, temp0_317, 0x4e))
                float temp0_321[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0x39), temp0_319)
                float temp0_322[0x4] = _mm_rsqrt_ps(temp0_321)
                float temp0_323[0x4] = _mm_mul_ps(temp0_321, zmm6)
                float temp0_328[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_322, temp0_322), temp0_323)), 
                        temp0_322), 
                    temp0_322)
                float temp0_331[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_328, temp0_328), temp0_323))
                float temp0_333[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_321, 2)
                float temp0_335[0x4] = _mm_add_ps(_mm_mul_ps(temp0_331, temp0_328), temp0_328)
                float temp0_336[0x4] = _mm_unpacklo_ps(var_1e8_2:4.d, 0)
                zmm6 = _mm_and_ps(_mm_mul_ps(temp0_335, zmm5_3) ^ data_143f57780, temp0_333)
                    ^ data_143f57780
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_1e8_2.d, var_1e8_2:8.d[0].q), 
                    temp0_336[0].q)
                var_168 = zmm6
            float zmm2_4[0x4] = *(rsi_3 + (rbx_4 << 2) + 0xc)
            r12_2 = &(*r12_2)[5]
            float temp0_375[0x4] =
                _mm_unpacklo_ps(*(rsi_3 + (rbx_4 << 2) + 8), (*(rsi_3 + (rbx_4 << 2) + 0x10))[0].q)
            float temp0_376[0x4] = _mm_unpacklo_ps(zmm2_4, 0)
            float temp0_377[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_378[0x4] = _mm_unpacklo_ps(temp0_375, temp0_376[0].q)
            float temp0_379[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_380[0x4] = _mm_mul_ps(temp0_378, zmm14)
            *(rsi_3 + (rbx_4 << 2)) = 0xffffffff
            float temp0_381[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_383[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_380, temp0_380, 0xc9), temp0_379)
            float temp0_386[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_380, temp0_380, 0xd2), temp0_377), temp0_383)
            float temp0_387[0x4] = _mm_add_ps(temp0_386, temp0_386)
            float temp0_388[0x4] = _mm_mul_ps(temp0_381, temp0_387)
            float temp0_389[0x4] = _mm_shuffle_ps(temp0_387, temp0_387, 0xd2)
            float temp0_390[0x4] = _mm_shuffle_ps(temp0_387, temp0_387, 0xc9)
            float temp0_391[0x4] = _mm_mul_ps(temp0_389, temp0_377)
            float temp0_392[0x4] = _mm_mul_ps(temp0_390, temp0_379)
            float temp0_393[0x4] = _mm_add_ps(temp0_388, temp0_380)
            float temp0_396[0x4] =
                _mm_add_ps(_mm_add_ps(_mm_sub_ps(temp0_391, temp0_392), temp0_393), zmm7)
            float var_170_2 = _mm_shuffle_ps(temp0_396, temp0_396, 0xaa)[0]
            *(rsi_3 + (rbx_4 << 2) + 8) =
                (_mm_unpacklo_ps(temp0_396, _mm_shuffle_ps(temp0_396, temp0_396, 0x55)[0].q)).q
            *(rsi_3 + (rbx_4 << 2) + 0x10) = var_170_2
        while (r12_2 != rax_20)
        
        rdi = var_1d8
    
    int64_t* rbx_5 = *(rdi + 0x28)
    result = sx.q(*(rdi + 0x30))
    int32_t rsi_4 = r14[3].d
    void* r14_7 = &rbx_5[result]
    
    while (rbx_5 != r14_7)
        int64_t rdi_3 = sx.q(r14[3].d)
        int32_t rax_25 = (rdi_3 + 1).d
        r14[3].d = rax_25
        
        if (rax_25 s> *(r14 + 0x1c))
            sub_1405a4d70(&r14[2])
        
        int64_t rax_26 = *rbx_5
        rbx_5 = &rbx_5[1]
        int64_t rcx_27 = r14[2]
        *(rcx_27 + (rdi_3 << 3)) = rax_26
        result = zx.q(rax_26.d + rsi_4)
        *(rcx_27 + (rdi_3 << 3) + 4) += rsi_4
        *(rcx_27 + (rdi_3 << 3)) = result.d

__security_check_cookie(result_1 ^ &var_248)
return result
