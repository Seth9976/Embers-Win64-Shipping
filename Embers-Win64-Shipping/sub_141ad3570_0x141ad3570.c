// 函数: sub_141ad3570
// 地址: 0x141ad3570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
int64_t* rdi = arg1 + 0x3c8
int64_t* r14 = arg2
int32_t rdx = *(arg1 + 0x3d0)
rdi[1].d = 0

if (*(rdi + 0xc) != rdx)
    sub_1405fdf40(rdi, rdx)

int32_t rdx_1 = *(arg1 + 0x3e0)
*(arg1 + 0x3e0) = 0

if (*(arg1 + 0x3e4) != rdx_1)
    sub_1405a5220(arg1 + 0x3d8, rdx_1)

int32_t rdx_2 = *(arg1 + 0x3f0)
*(arg1 + 0x3f0) = 0

if (*(arg1 + 0x3f4) != rdx_2)
    sub_14090a730(arg1 + 0x3e8, rdx_2)

int32_t* rcx_3 = *(arg1 + 0x418)
void* r13 = r14[3]
int32_t* var_300 = rcx_3
void* result = &rcx_3[sx.q(*(arg1 + 0x420))]
void* result_1 = result

if (rcx_3 != result)
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    int128_t zmm15
    int128_t var_d8_1 = zmm15
    
    do
        int64_t r15_1 = sx.q(*rcx_3)
        int64_t var_368 = r15_1
        void* rsi_3 = (r15_1 << 4) + *(arg1 + 0x408)
        result = sub_141ea6180(rsi_3, r13)
        
        if (result.b != 0)
            int32_t rcx_5 = *(rsi_3 + 8)
            int32_t* rdx_4 = nullptr
            int32_t* r15_3 = r15_1 * 0x1f0 + *(arg1 + 0x398)
            int32_t* rax_3 = *(r15_3 + 0x1e0)
            
            if (rax_3 != 0)
                rdx_4 = rax_3
            
            int32_t rdx_5
            
            if (rcx_5 s>= 0)
                rdx_5 = *(rsi_3 + 0xc)
            else
                int32_t rcx_6 = rcx_5 * 2
                
                if ((rcx_6 & 0xfffffffe) == 0xfffffffe)
                    rdx_5 = -1
                else
                    rdx_5 = *(*(r13 + 0x80) + (sx.q(rcx_6) s>> 1 << 2))
            
            int64_t rsi_4 = sx.q(rdx_5)
            
            if (*(rsi_4 + r14[4]) == 0)
                sub_141a98300(&r14[1], rdx_5)
            
            int64_t rax_8 = r14[1]
            char r8_1 = *(arg1 + 0x241)
            int64_t rcx_11 = rsi_4 * 6
            float zmm1[0x4] = *(rax_8 + (rcx_11 << 3) + 0x10)
            float var_218[0x4] = *(rax_8 + (rcx_11 << 3))
            float var_208_1[0x4] = zmm1
            float var_1f8_1[0x4] = *(rax_8 + (rcx_11 << 3) + 0x20)
            uint128_t var_118
            uint128_t zmm7_1
            int128_t zmm8_1
            int128_t zmm9_1
            zmm7_1, zmm8_1, zmm9_1 = sub_141abbf90(arg1, &var_118, r8_1, r14, &var_218)
            int32_t rax_9 = *(arg1 + 0x174)
            float zmm15_1[0x4] = var_118
            float var_108[0x4]
            float zmm14_1[0x4] = var_108
            uint64_t var_388 = *(arg1 + 0x16c)
            int32_t var_380_1 = rax_9
            uint128_t zmm0_1
            
            if (rdx_4 != 0)
                zmm15_1 = data_14399f720
                int64_t rcx_13 = var_368 * 3
                int64_t rax_11 = *(arg1 + 0x3f8)
                var_388 = *(rax_11 + (rcx_13 << 2))
                float zmm3_1[0x4] = var_388.d ^ zmm8_1
                zmm0_1 = *(rax_11 + (rcx_13 << 2) + 8) ^ zmm8_1
                float temp0_1[0x4] = _mm_unpacklo_ps(var_388:4.d ^ zmm8_1, 0)
                zmm14_1 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_1, zmm0_1.q), temp0_1[0].q)
            
            int64_t* var_3b0
            int32_t* var_3a8
            float (* var_3a0)[0x4]
            void* r14_1
            float zmm5_1[0x4]
            uint128_t zmm6_1
            
            if (*(arg1 + 0x1c7) == 0)
                int32_t zmm10_1
                int32_t zmm11_1
                
                if (*(arg1 + 0x1c4) == 0)
                    zmm10_1 = 0x7f7fffff
                    rdi = arg1 + 0x3c8
                    zmm11_1 = 0xff7fffff
                else
                    zmm6_1 = *(arg1 + 0x1d4)
                    zmm0_1 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                    float temp0_7[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                    zmm5_1 = zmm0_1 ^ zmm8_1
                    int32_t var_390_1 = 0x7f7fffff
                    int32_t var_398_1 = 0xff7fffff
                    temp0_7[0] = temp0_7[0] + temp0_7[0]
                    float var_2d0 = zmm14_1[0]
                    zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                    float temp0_8[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
                    zmm5_1[0] = zmm5_1[0] f* zmm0_1.d
                    zmm0_1.d = temp0_7.d f* temp0_7[0]
                    temp0_7[0] = temp0_7[0] * temp0_8[0]
                    zmm5_1[0] = zmm5_1[0] f- zmm0_1.d
                    temp0_7[0] = temp0_7[0] * zmm15_1[0]
                    zmm5_1[0] = zmm5_1[0] * temp0_8[0]
                    zmm0_1.d = zmm5_1.d f* zmm15_1[0]
                    zmm5_1[0] = zmm5_1[0] f+ zmm9_1.d
                    zmm5_1[0] = zmm5_1[0] + temp0_7[0]
                    temp0_7[0] = temp0_7[0] f- zmm0_1.d
                    int32_t var_2cc_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55).d
                    var_3a0 = (_mm_unpacklo_ps(*(arg1 + 0x1c8), zmm6_1.q)).q
                    zmm0_1 = *(arg1 + 0x380)
                    float var_2dc
                    var_3a8 = &var_2dc
                    var_2dc = zmm5_1[0]
                    float temp0_11[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
                    float var_2d8_1 = temp0_7[0]
                    float var_2d4_1 = zmm5_1[0]
                    float var_2c8_1 = temp0_11[0]
                    zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_141e18640(zmm0_1, rdi, rdx_4, &var_2d0, 
                        zmm6_1, r15_3, &var_388, var_3a8, var_3a0.d, var_398_1, var_390_1, 
                        var_388.d)
                
                float zmm1_1[0x4]
                
                if (*(arg1 + 0x1c5) == 0)
                    r14_1 = arg1 + 0x380
                else
                    zmm7_1 = *(arg1 + 0x1d8)
                    zmm15_1[0] = zmm15_1[0] + zmm15_1[0]
                    float var_2b8 = zmm14_1[0]
                    float temp0_12[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                    r14_1 = arg1 + 0x380
                    zmm6_1 = temp0_12 ^ zmm8_1
                    float temp0_13[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    float temp0_14[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                    zmm0_1.d = zmm15_1.d f* temp0_14[0]
                    zmm1_1 = zmm6_1
                    zmm1_1[0] = zmm1_1[0] * temp0_13[0]
                    zmm1_1[0] = zmm1_1[0] f+ zmm0_1.d
                    zmm0_1.d = zmm15_1.d f* zmm15_1[0]
                    zmm15_1[0] = zmm15_1[0] * temp0_13[0]
                    float var_2c4 = zmm1_1[0]
                    zmm1_1 = zmm6_1
                    zmm1_1[0] = zmm1_1[0] * temp0_12[0]
                    zmm6_1.d = zmm6_1.d f* temp0_14[0]
                    zmm1_1[0] = zmm1_1[0] f- zmm0_1.d
                    int32_t var_2b4_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55).d
                    zmm15_1[0] = zmm15_1[0] f- zmm6_1.d
                    var_3a0 = (_mm_unpacklo_ps(*(arg1 + 0x1cc), zmm7_1.q)).q
                    zmm1_1[0] = zmm1_1[0] f+ zmm9_1.d
                    zmm0_1 = *r14_1
                    var_3a8 = &var_2c4
                    var_3b0 = &var_388
                    float var_2bc_1 = zmm15_1[0]
                    float var_2c0_1 = zmm1_1[0]
                    float var_2b0_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)[0]
                    zmm8_1, zmm9_1, zmm10_1, zmm11_1 = sub_141e18640(zmm0_1, rdi, rdx_4, &var_2b8, 
                        zmm6_1, r15_3, var_3b0, var_3a8, var_3a0.d, zmm11_1, zmm10_1, var_388.d)
                
                if (*(arg1 + 0x1c6) != 0)
                    zmm7_1 = *(arg1 + 0x1dc)
                    r14_1 = arg1 + 0x380
                    zmm6_1 = zmm15_1 ^ zmm8_1
                    float var_2a0 = zmm14_1[0]
                    zmm6_1.d = zmm6_1.d f+ zmm6_1.d
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                    temp0_18[0] = temp0_18[0] + temp0_18[0]
                    float temp0_19[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xff)
                    float temp0_20[0x4] = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                    zmm0_1.d = zmm6_1.d f* temp0_20[0]
                    temp0_18[0] = temp0_18[0] * temp0_19[0]
                    temp0_18[0] = temp0_18[0] f- zmm0_1.d
                    zmm0_1.d = temp0_18.d f* temp0_20[0]
                    temp0_18[0] = temp0_18[0] * temp0_18[0]
                    float var_2ac = temp0_18[0]
                    zmm1_1 = zmm6_1
                    zmm1_1[0] = zmm1_1[0] * temp0_19[0]
                    zmm6_1.d = zmm6_1.d f* zmm15_1[0]
                    zmm1_1[0] = zmm1_1[0] f+ zmm0_1.d
                    int32_t var_29c_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55).d
                    zmm6_1.d = zmm6_1.d f- temp0_18[0]
                    var_3a0 = (_mm_unpacklo_ps(*(arg1 + 0x1d0), zmm7_1.q)).q
                    zmm0_1 = *r14_1
                    var_3a8 = &var_2ac
                    zmm6_1.d = zmm6_1.d f+ zmm9_1.d
                    float var_2a8_1 = zmm1_1[0]
                    var_3b0 = &var_388
                    int32_t var_2a4_1 = zmm6_1.d
                    float var_298_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)[0]
                    zmm8_1, zmm9_1 = sub_141e18640(zmm0_1, rdi, rdx_4, &var_2a0, zmm6_1, r15_3, 
                        var_3b0, var_3a8, var_3a0.d, zmm11_1, zmm10_1, var_388.d)
                
                zmm6_1 = 0x3e99999a
            else
                float var_2e8 = zmm14_1[0]
                int32_t var_2e4_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55).d
                r14_1 = arg1 + 0x380
                float var_2e0_1 = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)[0]
                zmm6_1, zmm8_1, zmm9_1 = sub_141e1a200(*r14_1, rdi, rdx_4, &var_2e8, zmm7_1, 
                    zmm8_1, zmm9_1, r15_3, &var_388)
            
            char rax_13 = *(arg1 + 0x244) & 0x20
            int128_t* var_3b8_6
            float var_2f8[0x4]
            float zmm10_2[0x4]
            
            if (*(arg1 + 0x1e0) != 0)
                if (rax_13 == 0)
                    zmm7_1 = zmm6_1
                else
                    zmm7_1 = *(arg1 + 0x1b8)
                
                zmm6_1 = var_118
                var_3a0.d = zmm7_1.d
                zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                int64_t var_294 = 0x3f800000
                zmm5_1 = zmm0_1 ^ zmm8_1
                int32_t var_28c_1 = 0
                zmm5_1[0] = zmm5_1[0] + zmm5_1[0]
                float temp0_25[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
                temp0_25[0] = temp0_25[0] + temp0_25[0]
                float temp0_26[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                zmm5_1[0] = zmm5_1[0] f* zmm0_1.d
                zmm0_1.d = temp0_25.d f* temp0_25[0]
                temp0_25[0] = temp0_25[0] * temp0_26[0]
                zmm5_1[0] = zmm5_1[0] f- zmm0_1.d
                temp0_25[0] = temp0_25[0] f* zmm6_1.d
                zmm5_1[0] = zmm5_1[0] * temp0_26[0]
                zmm0_1.d = zmm5_1.d f* zmm6_1.d
                zmm5_1[0] = zmm5_1[0] f+ zmm9_1.d
                zmm5_1[0] = zmm5_1[0] + temp0_25[0]
                temp0_25[0] = temp0_25[0] f- zmm0_1.d
                var_3a8.d = (*(arg1 + 0x1e4)).d
                zmm0_1 = *(arg1 + 0x380)
                var_3b0 = &var_294
                float var_288 = zmm5_1[0]
                float var_284_1 = temp0_25[0]
                float var_280_1 = zmm5_1[0]
                result, zmm10_2, zmm14, zmm15 = sub_141e19980(zmm0_1, arg1 + 0x3d8, rdx_4, 
                    &var_288, zmm6_1, zmm7_1, r15_3, var_3b0, var_3a8.d, var_3a0.d)
            else
                if (rax_13 == 0)
                    zmm0_1 = zmm6_1
                else
                    zmm0_1 = *(arg1 + 0x1b8)
                
                int32_t var_398_4 = zmm0_1.d
                zmm0_1 = *r14_1
                var_3a0 = arg1 + 0x1f4
                var_3a8 = arg1 + 0x1e8
                var_3b0.b = *(arg1 + 0x1e1)
                var_3b8_6 = &var_2f8
                var_2f8 = zmm15_1
                result, zmm10_2, zmm14, zmm15 = sub_141e18990(zmm0_1, arg1 + 0x3d8, rdx_4, r15_3, 
                    var_3b8_6, var_3b0.b, var_3a8, var_3a0, var_398_4)
            
            float var_1b8[0x4]
            float var_1a8[0x4]
            float var_198[0x4]
            float var_178[0x4]
            float var_168[0x4]
            float var_158[0x4]
            float zmm0[0x4]
            
            if (*(arg1 + 0x238) s> 0 && (*(arg1 + 0x244) & 2) != 0)
                void* i = *(arg1 + 0x230)
                result = (sx.q(*(arg1 + 0x238)) << 6) + i
                var_2f8[0].q = result
                
                if (i != result)
                    do
                        zmm1 = *(i + 0x20)
                        float var_148[0x4] = *(i + 0x10)
                        float var_138_1[0x4] = zmm1
                        float var_128_1[0x4] = *(i + 0x30)
                        
                        if (sub_141ea6180(i, r13) != 0)
                            int32_t rax_19 = *(i + 8)
                            int32_t rdx_14
                            
                            if (rax_19 s>= 0)
                                rdx_14 = *(i + 0xc)
                            else
                                int32_t rcx_16 = rax_19 * 2
                                
                                if ((rcx_16 & 0xfffffffe) == 0xfffffffe)
                                    rdx_14 = -1
                                else
                                    rdx_14 = *(*(r13 + 0x80) + (sx.q(rcx_16) s>> 1 << 2))
                            
                            int64_t rsi_6 = sx.q(rdx_14)
                            
                            if (*(rsi_6 + r14[4]) == 0)
                                sub_141a98300(&r14[1], rdx_14)
                            
                            int64_t rax_24 = r14[1]
                            char r8_8 = *(arg1 + 0x241)
                            int64_t rcx_21 = rsi_6 * 6
                            zmm1 = *(rax_24 + (rcx_21 << 3) + 0x10)
                            float var_1e8[0x4] = *(rax_24 + (rcx_21 << 3))
                            float var_1d8_1[0x4] = zmm1
                            float var_1c8_1[0x4] = *(rax_24 + (rcx_21 << 3) + 0x20)
                            zmm14, zmm15 = sub_141abbf90(arg1, &var_178, r8_8, arg2, &var_1e8)
                            float zmm1_2[0x4] = data_143f2b8d0
                            float temp0_27[0x4] = _mm_min_ps(var_128_1, var_158)
                            var_368.o = zmm1_2
                            
                            if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_27, zmm1_2, 1)) == 0)
                                float zmm5_2[0x4] = var_178
                                float zmm2_3[0x4] = var_148
                                float temp0_161[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b), 
                                    _mm_shuffle_ps(zmm5_2, zmm5_2, 0))
                                float temp0_162[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e)
                                float temp0_163[0x4] = _mm_mul_ps(var_138_1, var_158)
                                float temp0_164[0x4] =
                                    __mulps_xmmps_memps(temp0_161, data_143f2b850)
                                float temp0_165[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1)
                                float temp0_166[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                                float temp0_167[0x4] = _mm_mul_ps(zmm2_3, temp0_166)
                                float temp0_168[0x4] = _mm_mul_ps(var_128_1, var_158)
                                float temp0_169[0x4] = _mm_add_ps(temp0_164, temp0_167)
                                float temp0_171[0x4] =
                                    _mm_mul_ps(temp0_162, _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55))
                                float temp0_173[0x4] =
                                    _mm_mul_ps(temp0_165, _mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa))
                                float temp0_174[0x4] =
                                    __mulps_xmmps_memps(temp0_171, data_143f2b840)
                                float temp0_175[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xc9)
                                float temp0_176[0x4] =
                                    __mulps_xmmps_memps(temp0_173, data_143f2b830)
                                float var_128_3[0x4] = temp0_168
                                float temp0_178[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_169, temp0_174), temp0_176)
                                float temp0_179[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                                float temp0_180[0x4] = _mm_mul_ps(temp0_175, temp0_179)
                                float temp0_181[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                                var_148 = temp0_178
                                float temp0_184[0x4] = _mm_sub_ps(
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_163, temp0_163, 0xd2), 
                                        temp0_181), 
                                    temp0_180)
                                float temp0_185[0x4] = _mm_add_ps(temp0_184, temp0_184)
                                float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xd2)
                                float temp0_187[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xc9)
                                float temp0_188[0x4] = _mm_mul_ps(temp0_186, temp0_181)
                                float temp0_189[0x4] = _mm_mul_ps(temp0_187, temp0_179)
                                float temp0_190[0x4] = _mm_mul_ps(temp0_185, temp0_166)
                                float var_138_3[0x4] = __addps_xmmps_memps(
                                    _mm_add_ps(_mm_sub_ps(temp0_188, temp0_189), 
                                        _mm_add_ps(temp0_190, temp0_163)), 
                                    var_168)
                            else
                                zmm1_2 = var_178
                                float zmm11_2[0x4] = data_143f2b810
                                float temp0_30[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
                                float temp0_31[0x4] = _mm_shuffle_ps(var_158, var_158, 0xc9)
                                float temp0_32[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                                _mm_mul_ps(var_128_1, var_158)
                                float temp0_34[0x4] = _mm_mul_ps(temp0_30, zmm1_2)
                                float temp0_36[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x29), temp0_32)
                                float temp0_37[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                                float temp0_38[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x1a)
                                float temp0_40[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0x12), temp0_37)
                                float temp0_42[0x4] =
                                    _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_34, temp0_34, 1))
                                float temp0_43[0x4] = _mm_add_ps(temp0_40, temp0_36)
                                float temp0_44[0x4] = _mm_sub_ps(temp0_36, temp0_40)
                                float temp0_45[0x4] = _mm_sub_ps(zmm11_2, temp0_42)
                                float temp0_46[0x4] = _mm_mul_ps(temp0_43, var_158)
                                float temp0_47[0x4] = _mm_mul_ps(temp0_45, var_158)
                                float temp0_48[0x4] = _mm_mul_ps(temp0_31, temp0_44)
                                zmm1_2 = __andps_xmmxud_memxud(temp0_47, data_143f2b820)
                                float temp0_52[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_46, zmm1_2, 0), 
                                    _mm_shuffle_ps(temp0_48, zmm1_2, 0x32), 0x82)
                                float temp0_53[0x4] = _mm_shuffle_ps(temp0_46, zmm1_2, 0x31)
                                float temp0_55[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_48, zmm1_2, 0x10), temp0_53, 0x88)
                                float temp0_57[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_46, temp0_48, 0x12), zmm1_2, 0xe8)
                                zmm1_2 = var_148
                                zmm11_2[0].q = var_168 u>> 0x40
                                float temp0_58[0x4] = _mm_add_ps(zmm1_2, zmm1_2)
                                float temp0_59[0x4] = _mm_shuffle_ps(var_168, zmm11_2, 0xc4)
                                float temp0_60[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 4)
                                float temp0_61[0x4] = _mm_mul_ps(temp0_58, zmm1_2)
                                float temp0_63[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x29), temp0_60)
                                float temp0_64[0x4] = _mm_shuffle_ps(zmm1_2, zmm1_2, 0xff)
                                float temp0_65[0x4] = _mm_shuffle_ps(var_128_1, var_128_1, 0xc9)
                                float temp0_67[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x12), temp0_64)
                                float temp0_68[0x4] = _mm_add_ps(temp0_67, temp0_63)
                                float temp0_69[0x4] = _mm_sub_ps(temp0_63, temp0_67)
                                float temp0_70[0x4] = _mm_mul_ps(temp0_68, var_128_1)
                                float temp0_73[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_61, temp0_61, 0x1a), 
                                    _mm_shuffle_ps(temp0_61, temp0_61, 1))
                                float temp0_74[0x4] = _mm_mul_ps(temp0_65, temp0_69)
                                zmm1_2 = __andps_xmmxud_memxud(
                                    __mulps_xmmps_memps(_mm_sub_ps(zmm11_2, temp0_73), var_128_1), 
                                    data_143f2b820)
                                float temp0_80[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_70, zmm1_2, 0), 
                                    _mm_shuffle_ps(temp0_74, zmm1_2, 0x32), 0x82)
                                float temp0_81[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0x55)
                                float temp0_84[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_74, zmm1_2, 0x10), 
                                    _mm_shuffle_ps(temp0_70, zmm1_2, 0x31), 0x88)
                                float temp0_85[0x4] = _mm_mul_ps(temp0_81, temp0_55)
                                float temp0_87[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_70, temp0_74, 0x12), zmm1_2, 0xe8)
                                float temp0_89[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xaa), temp0_57)
                                zmm11_2[0].q = var_138_1 u>> 0x40
                                float temp0_90[0x4] = _mm_shuffle_ps(var_138_1, zmm11_2, 0xc4)
                                float temp0_91[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0)
                                float temp0_93[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0xff), temp0_59)
                                float temp0_95[0x4] =
                                    _mm_add_ps(temp0_85, _mm_mul_ps(temp0_91, temp0_52))
                                float temp0_97[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0), temp0_52)
                                float temp0_98[0x4] = _mm_add_ps(temp0_95, temp0_89)
                                float temp0_100[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xaa), temp0_57)
                                float temp0_101[0x4] = _mm_add_ps(temp0_98, temp0_93)
                                float temp0_103[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0x55), temp0_55)
                                float temp0_104[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xff)
                                var_1b8 = temp0_101
                                float temp0_105[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0x55)
                                float temp0_106[0x4] = _mm_add_ps(temp0_103, temp0_97)
                                float temp0_107[0x4] = _mm_mul_ps(temp0_105, temp0_55)
                                float temp0_108[0x4] = _mm_mul_ps(temp0_104, temp0_59)
                                float temp0_109[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0)
                                float temp0_110[0x4] = _mm_add_ps(temp0_106, temp0_100)
                                float temp0_111[0x4] = _mm_mul_ps(temp0_109, temp0_52)
                                float temp0_113[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xaa), temp0_57)
                                float temp0_114[0x4] = _mm_add_ps(temp0_110, temp0_108)
                                float temp0_115[0x4] = _mm_shuffle_ps(temp0_87, temp0_87, 0xff)
                                float temp0_116[0x4] = _mm_add_ps(temp0_107, temp0_111)
                                float temp0_117[0x4] = _mm_mul_ps(temp0_115, temp0_59)
                                float temp0_118[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0)
                                var_1a8 = temp0_114
                                float temp0_119[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0x55)
                                float temp0_120[0x4] = _mm_add_ps(temp0_116, temp0_113)
                                float temp0_121[0x4] = _mm_mul_ps(temp0_119, temp0_55)
                                float temp0_122[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0xaa)
                                float temp0_123[0x4] = _mm_mul_ps(temp0_118, temp0_52)
                                float temp0_124[0x4] = _mm_add_ps(temp0_120, temp0_117)
                                float temp0_125[0x4] = _mm_mul_ps(temp0_122, temp0_57)
                                float temp0_126[0x4] = _mm_add_ps(temp0_121, temp0_123)
                                float temp0_128[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xff), temp0_59)
                                var_198 = temp0_124
                                int96_t var_188_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_126, temp0_125), temp0_128)[0].12
                                int128_t zmm11_3
                                float zmm13_2[0x4]
                                zmm11_3, zmm13_2, zmm14, zmm15 = sub_1407740e0(&var_1b8, 0x322bcc77)
                                float zmm4_3[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_368.o, zmm13_2, 2), 
                                    data_143f2b8c0 ^ zmm11_3) ^ data_143f2b8c0
                                float zmm2_4[0x4] = var_1b8[0]
                                float zmm1_3 = var_1b8[1]
                                uint32_t zmm0_2[0x4] = var_1b8[2]
                                float zmm3_4 = var_1a8[0]
                                zmm2_4[0] = zmm2_4[0] * zmm4_3[0]
                                zmm1_3 = zmm1_3 * zmm4_3[0]
                                zmm0_2[0] = zmm0_2[0] f* zmm4_3[0]
                                var_1b8[0] = zmm2_4[0]
                                float temp0_133[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                                var_1b8[1] = zmm1_3
                                zmm1_3 = var_1a8[1] * temp0_133[0]
                                var_1b8[2] = zmm0_2[0]
                                zmm0_2 = var_1a8[2]
                                zmm0_2[0] = zmm0_2[0] f* temp0_133[0]
                                zmm3_4 = zmm3_4 * temp0_133[0]
                                zmm2_4 = var_198[0]
                                float temp0_134[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                                var_1a8[1] = zmm1_3
                                zmm1_3 = var_198[1]
                                var_1a8[2] = zmm0_2[0]
                                zmm0_2 = var_198[2]
                                zmm1_3 = zmm1_3 * temp0_134[0]
                                zmm0_2[0] = zmm0_2[0] f* temp0_134[0]
                                zmm2_4[0] = zmm2_4[0] * temp0_134[0]
                                var_198[1] = zmm1_3
                                var_198[2] = zmm0_2[0]
                                var_1a8[0] = zmm3_4
                                var_198[0] = zmm2_4[0]
                                uint32_t var_248[0x4]
                                sub_14077e4a0(&var_248, &var_1b8)
                                uint32_t zmm5_3[0x4] = var_248
                                float zmm6_4[0x4] = data_143f2b8b0
                                uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                                var_368.d = 0x322bcc77
                                float var_128_2[0x4] = zmm13_2
                                zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                                uint32_t zmm4_4[0x4] =
                                    _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                                zmm1_4 = _mm_rsqrt_ps(zmm4_4)
                                float temp0_141[0x4] = _mm_mul_ps(zmm4_4, zmm6_4)
                                float temp0_146[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_4, 
                                            _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), temp0_141)), 
                                        zmm1_4), 
                                    zmm1_4)
                                float temp0_149[0x4] = _mm_sub_ps(zmm6_4, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_146, temp0_146), temp0_141))
                                zmm0 = var_368.d
                                float temp0_151[0x4] =
                                    _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4_4, 2)
                                float temp0_153[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_149, temp0_146), temp0_146)
                                float temp0_154[0x4] = _mm_unpacklo_ps(var_188_1:4.d, 0)
                                zmm6_4 = _mm_and_ps(_mm_mul_ps(temp0_153, zmm5_3) ^ data_143f2b8a0, 
                                    temp0_151) ^ data_143f2b8a0
                                float var_138_2[0x4] = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_188_1.d, var_188_1:8.d[0].q), 
                                    temp0_154[0].q)
                                var_248 = zmm6_4
                                var_148 = zmm6_4
                        
                        result, zmm10_2 = sub_141e19ed0(*r14_1, arg1 + 0x3c8, r15_3, &var_148)
                        i += 0x40
                    while (i != var_2f8[0].q)
            
            float zmm2_2[0x4]
            float zmm6_2[0x4]
            
            if (*(arg1 + 0x218) s> 0 && (*(arg1 + 0x244) & 1) != 0)
                void* rsi_7 = *(arg1 + 0x210)
                result = sx.q(*(arg1 + 0x218))
                void* r12_2 = rsi_7 + result * 0x24
                
                if (rsi_7 != r12_2)
                    void* rdi_1 = rsi_7 + 0x18
                    
                    do
                        float zmm3_2[0x4] = *(rdi_1 - 8)
                        var_158 = data_143dbb0e0
                        zmm1 = *(rdi_1 - 4)
                        var_178 = data_143dbb0c0
                        var_168 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3_2, (*rdi_1)[0].q), 
                            _mm_unpacklo_ps(zmm1, zx.o(0)[0].q)[0].q)
                        result = sub_141ea6180(rsi_7, r13)
                        
                        if (result.b != 0)
                            int32_t rax_26 = *(rdi_1 - 0x10)
                            
                            if (rax_26 s>= 0)
                                var_368.d = *(rdi_1 - 0xc)
                            else
                                int32_t rcx_27 = rax_26 * 2
                                
                                if ((rcx_27 & 0xfffffffe) == 0xfffffffe)
                                    var_368.d = 0xffffffff
                                else
                                    var_368.d = *(*(r13 + 0x80) + (sx.q(rcx_27) s>> 1 << 2))
                            
                            zmm10_2, zmm14, zmm15 = sub_141ab9e20(arg1, &var_1b8, arg2, &var_368)
                            zmm1 = data_143f2b8d0
                            float temp0_198[0x4] = _mm_min_ps(var_158, var_198)
                            var_2f8 = zmm1
                            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(temp0_198, zmm1, 1)))
                            
                            if (result.d == 0)
                                float zmm5_4[0x4] = var_1b8
                                zmm2_2 = var_178
                                float temp0_330[0x4] = __mulps_xmmps_memps(var_198, var_168)
                                float temp0_331[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x1b)
                                float temp0_332[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x4e)
                                float temp0_334[0x4] =
                                    _mm_mul_ps(temp0_331, _mm_shuffle_ps(zmm5_4, zmm5_4, 0))
                                float temp0_335[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xff)
                                float temp0_336[0x4] = _mm_mul_ps(var_158, var_198)
                                float temp0_337[0x4] =
                                    __mulps_xmmps_memps(temp0_334, data_143f2b850)
                                float temp0_338[0x4] = _mm_mul_ps(temp0_335, zmm2_2)
                                float temp0_339[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xb1)
                                var_158 = temp0_336
                                float temp0_340[0x4] = _mm_add_ps(temp0_337, temp0_338)
                                float temp0_342[0x4] =
                                    _mm_mul_ps(temp0_332, _mm_shuffle_ps(zmm5_4, zmm5_4, 0x55))
                                float temp0_344[0x4] =
                                    _mm_mul_ps(temp0_339, _mm_shuffle_ps(zmm5_4, zmm5_4, 0xaa))
                                float temp0_345[0x4] =
                                    __mulps_xmmps_memps(temp0_342, data_143f2b840)
                                float temp0_346[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0xc9)
                                float temp0_347[0x4] =
                                    __mulps_xmmps_memps(temp0_344, data_143f2b830)
                                float temp0_349[0x4] =
                                    _mm_add_ps(_mm_add_ps(temp0_340, temp0_345), temp0_347)
                                float temp0_350[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0xd2)
                                var_178 = temp0_349
                                float temp0_351[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xd2)
                                float temp0_352[0x4] = _mm_mul_ps(temp0_346, temp0_351)
                                float temp0_353[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
                                float temp0_355[0x4] =
                                    _mm_sub_ps(_mm_mul_ps(temp0_350, temp0_353), temp0_352)
                                float temp0_356[0x4] = _mm_add_ps(temp0_355, temp0_355)
                                float temp0_357[0x4] = _mm_mul_ps(temp0_335, temp0_356)
                                float temp0_359[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_356, temp0_356, 0xd2), temp0_353)
                                float temp0_360[0x4] = _mm_shuffle_ps(temp0_356, temp0_356, 0xc9)
                                float temp0_361[0x4] = _mm_add_ps(temp0_357, temp0_330)
                                var_168 = __addps_xmmps_memps(
                                    _mm_add_ps(
                                        _mm_sub_ps(temp0_359, _mm_mul_ps(temp0_360, temp0_351)), 
                                        temp0_361), 
                                    var_1a8)
                            else
                                zmm1 = var_1b8
                                zmm11 = data_143f2b810
                                float temp0_201[0x4] = _mm_add_ps(zmm1, zmm1)
                                float temp0_202[0x4] = _mm_shuffle_ps(var_198, var_198, 0xc9)
                                float temp0_203[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                _mm_mul_ps(var_158, var_198)
                                float temp0_205[0x4] = _mm_mul_ps(temp0_201, zmm1)
                                float temp0_207[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_201, temp0_201, 0x29), temp0_203)
                                float temp0_208[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                float temp0_209[0x4] = _mm_shuffle_ps(temp0_205, temp0_205, 0x1a)
                                float temp0_211[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_201, temp0_201, 0x12), temp0_208)
                                float temp0_213[0x4] =
                                    _mm_add_ps(temp0_209, _mm_shuffle_ps(temp0_205, temp0_205, 1))
                                float temp0_214[0x4] = _mm_add_ps(temp0_211, temp0_207)
                                float temp0_215[0x4] = _mm_sub_ps(temp0_207, temp0_211)
                                zmm3_2 = var_178
                                float temp0_216[0x4] = _mm_sub_ps(zmm11, temp0_213)
                                float temp0_217[0x4] = _mm_mul_ps(temp0_214, var_198)
                                float temp0_218[0x4] = _mm_mul_ps(temp0_202, temp0_215)
                                float temp0_219[0x4] = _mm_mul_ps(temp0_216, var_198)
                                float temp0_220[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 4)
                                zmm1 = __andps_xmmxud_memxud(temp0_219, data_143f2b820)
                                float temp0_222[0x4] = _mm_shuffle_ps(temp0_218, zmm1, 0x32)
                                float temp0_224[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_217, zmm1, 0), temp0_222, 0x82)
                                float temp0_225[0x4] = _mm_shuffle_ps(temp0_217, zmm1, 0x31)
                                float temp0_227[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_218, zmm1, 0x10), temp0_225, 0x88)
                                float temp0_229[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_217, temp0_218, 0x12), zmm1, 0xe8)
                                float temp0_230[0x4] = _mm_add_ps(zmm3_2, zmm3_2)
                                zmm11[0].q = var_1a8 u>> 0x40
                                float temp0_231[0x4] = _mm_shuffle_ps(var_1a8, zmm11, 0xc4)
                                float temp0_232[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x29)
                                float temp0_233[0x4] = _mm_mul_ps(temp0_230, zmm3_2)
                                float temp0_234[0x4] = _mm_mul_ps(temp0_220, temp0_232)
                                float temp0_235[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x12)
                                float temp0_236[0x4] = _mm_shuffle_ps(var_158, var_158, 0xc9)
                                float temp0_238[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), temp0_235)
                                float temp0_239[0x4] = _mm_add_ps(temp0_238, temp0_234)
                                float temp0_240[0x4] = _mm_sub_ps(temp0_234, temp0_238)
                                float temp0_241[0x4] = _mm_mul_ps(temp0_239, var_158)
                                float temp0_244[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_233, temp0_233, 0x1a), 
                                    _mm_shuffle_ps(temp0_233, temp0_233, 1))
                                float temp0_245[0x4] = _mm_mul_ps(temp0_236, temp0_240)
                                zmm1 = __andps_xmmxud_memxud(
                                    __mulps_xmmps_memps(_mm_sub_ps(zmm11, temp0_244), var_158), 
                                    data_143f2b820)
                                float temp0_251[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_241, zmm1, 0), 
                                    _mm_shuffle_ps(temp0_245, zmm1, 0x32), 0x82)
                                float temp0_252[0x4] = _mm_shuffle_ps(temp0_251, temp0_251, 0x55)
                                float temp0_255[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_245, zmm1, 0x10), 
                                    _mm_shuffle_ps(temp0_241, zmm1, 0x31), 0x88)
                                float temp0_256[0x4] = _mm_mul_ps(temp0_252, temp0_227)
                                float temp0_258[0x4] = _mm_shuffle_ps(
                                    _mm_shuffle_ps(temp0_241, temp0_245, 0x12), zmm1, 0xe8)
                                float temp0_260[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_251, temp0_251, 0xaa), temp0_229)
                                zmm11[0].q = var_168 u>> 0x40
                                float temp0_261[0x4] = _mm_shuffle_ps(var_168, zmm11, 0xc4)
                                float temp0_262[0x4] = _mm_shuffle_ps(temp0_251, temp0_251, 0)
                                float temp0_264[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_251, temp0_251, 0xff), temp0_231)
                                float temp0_266[0x4] =
                                    _mm_add_ps(temp0_256, _mm_mul_ps(temp0_262, temp0_224))
                                float temp0_268[0x4] =
                                    _mm_mul_ps(_mm_shuffle_ps(temp0_255, temp0_255, 0), temp0_224)
                                float temp0_269[0x4] = _mm_add_ps(temp0_266, temp0_260)
                                float temp0_271[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_255, temp0_255, 0xaa), temp0_229)
                                float temp0_272[0x4] = _mm_add_ps(temp0_269, temp0_264)
                                float temp0_274[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_255, temp0_255, 0x55), temp0_227)
                                float temp0_275[0x4] = _mm_shuffle_ps(temp0_255, temp0_255, 0xff)
                                float var_348[0x4] = temp0_272
                                float temp0_276[0x4] = _mm_shuffle_ps(temp0_258, temp0_258, 0x55)
                                float temp0_277[0x4] = _mm_add_ps(temp0_274, temp0_268)
                                float temp0_278[0x4] = _mm_mul_ps(temp0_276, temp0_227)
                                float temp0_279[0x4] = _mm_mul_ps(temp0_275, temp0_231)
                                float temp0_280[0x4] = _mm_shuffle_ps(temp0_258, temp0_258, 0)
                                float temp0_281[0x4] = _mm_add_ps(temp0_277, temp0_271)
                                float temp0_282[0x4] = _mm_mul_ps(temp0_280, temp0_224)
                                float temp0_284[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_258, temp0_258, 0xaa), temp0_229)
                                float temp0_285[0x4] = _mm_add_ps(temp0_281, temp0_279)
                                float temp0_286[0x4] = _mm_shuffle_ps(temp0_258, temp0_258, 0xff)
                                float temp0_287[0x4] = _mm_add_ps(temp0_278, temp0_282)
                                float temp0_288[0x4] = _mm_mul_ps(temp0_286, temp0_231)
                                float temp0_289[0x4] = _mm_shuffle_ps(temp0_261, temp0_261, 0)
                                int96_t var_338_1 = temp0_285[0].12
                                float temp0_290[0x4] = _mm_shuffle_ps(temp0_261, temp0_261, 0x55)
                                float temp0_291[0x4] = _mm_add_ps(temp0_287, temp0_284)
                                float temp0_292[0x4] = _mm_mul_ps(temp0_290, temp0_227)
                                float temp0_293[0x4] = _mm_shuffle_ps(temp0_261, temp0_261, 0xaa)
                                float temp0_294[0x4] = _mm_mul_ps(temp0_289, temp0_224)
                                float temp0_295[0x4] = _mm_add_ps(temp0_291, temp0_288)
                                float temp0_296[0x4] = _mm_mul_ps(temp0_293, temp0_229)
                                float temp0_297[0x4] = _mm_add_ps(temp0_292, temp0_294)
                                float temp0_299[0x4] = _mm_mul_ps(
                                    _mm_shuffle_ps(temp0_261, temp0_261, 0xff), temp0_231)
                                int96_t var_328_1 = temp0_295[0].12
                                int96_t var_318_1 =
                                    _mm_add_ps(_mm_add_ps(temp0_297, temp0_296), temp0_299)[0].12
                                zmm10_2, zmm11, zmm13, zmm14, zmm15 =
                                    sub_1407740e0(&var_348, 0x322bcc77)
                                float zmm4_6[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_2f8, zmm13, 2), 
                                    data_143f2b8c0 ^ zmm11) ^ data_143f2b8c0
                                float zmm2_6[0x4] = var_348[0]
                                float zmm1_5 = var_348[1]
                                uint32_t zmm0_3[0x4] = var_348[2]
                                zmm2_6[0] = zmm2_6[0] * zmm4_6[0]
                                zmm1_5 = zmm1_5 * zmm4_6[0]
                                zmm0_3[0] = zmm0_3[0] f* zmm4_6[0]
                                var_348[0] = zmm2_6[0]
                                float temp0_304[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0x55)
                                var_348[1] = zmm1_5
                                zmm1_5 = var_338_1:4.d * temp0_304[0]
                                var_348[2] = zmm0_3[0]
                                zmm0_3 = var_338_1:8.d
                                zmm0_3[0] = zmm0_3[0] f* temp0_304[0]
                                float zmm3_6 = var_338_1.d * temp0_304[0]
                                zmm2_6 = var_328_1.d
                                float temp0_305[0x4] = _mm_shuffle_ps(zmm4_6, zmm4_6, 0xaa)
                                var_338_1:4.d = zmm1_5
                                var_338_1:8.d = zmm0_3[0]
                                zmm0_3 = var_328_1:8.d
                                zmm1_5 = var_328_1:4.d * temp0_305[0]
                                zmm0_3[0] = zmm0_3[0] f* temp0_305[0]
                                zmm2_6[0] = zmm2_6[0] * temp0_305[0]
                                var_328_1:4.d = zmm1_5
                                var_328_1:8.d = zmm0_3[0]
                                var_338_1.d = zmm3_6
                                var_328_1.d = zmm2_6[0]
                                uint32_t var_238[0x4]
                                result = sub_14077e4a0(&var_238, &var_348)
                                uint32_t zmm5_5[0x4] = var_238
                                zmm6_2 = data_143f2b8b0
                                float temp0_306[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                                var_368.d = 0x322bcc77
                                var_158 = zmm13
                                float temp0_308[0x4] = _mm_add_ps(temp0_306, 
                                    _mm_shuffle_ps(temp0_306, temp0_306, 0x4e))
                                float temp0_310[0x4] = _mm_add_ps(
                                    _mm_shuffle_ps(temp0_308, temp0_308, 0x39), temp0_308)
                                float temp0_311[0x4] = _mm_rsqrt_ps(temp0_310)
                                float temp0_312[0x4] = _mm_mul_ps(temp0_310, zmm6_2)
                                float temp0_317[0x4] = _mm_add_ps(
                                    _mm_mul_ps(
                                        _mm_sub_ps(zmm6_2, 
                                            _mm_mul_ps(_mm_mul_ps(temp0_311, temp0_311), 
                                                temp0_312)), 
                                        temp0_311), 
                                    temp0_311)
                                float temp0_320[0x4] = _mm_sub_ps(zmm6_2, 
                                    _mm_mul_ps(_mm_mul_ps(temp0_317, temp0_317), temp0_312))
                                zmm0 = var_368.d
                                float temp0_322[0x4] =
                                    _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_310, 2)
                                float temp0_324[0x4] =
                                    _mm_add_ps(_mm_mul_ps(temp0_320, temp0_317), temp0_317)
                                float temp0_325[0x4] = _mm_unpacklo_ps(var_318_1:4.d, 0)
                                zmm6_2 = _mm_and_ps(_mm_mul_ps(temp0_324, zmm5_5) ^ data_143f2b8a0, 
                                    temp0_322) ^ data_143f2b8a0
                                var_168 = _mm_unpacklo_ps(
                                    _mm_unpacklo_ps(var_318_1.d, var_318_1:8.d[0].q), 
                                    temp0_325[0].q)
                                var_238 = zmm6_2
                                var_178 = zmm6_2
                        
                        uint32_t rcx_34 = zx.d(*(rdi_1 + 8))
                        
                        if (rcx_34 == 0)
                            var_3b8_6.d = (*(rdi_1 + 4))[0]
                            result, zmm10_2 =
                                sub_141e1a580(*r14_1, arg1 + 0x3c8, r15_3, &var_178, var_3b8_6.d)
                        else if (rcx_34 == 1)
                            var_3b8_6.d = (*(rdi_1 + 4))[0]
                            result, zmm10_2 =
                                sub_141e1a820(*r14_1, arg1 + 0x3c8, r15_3, &var_178, var_3b8_6.d)
                        
                        rsi_7 += 0x24
                        rdi_1 += 0x24
                    while (rsi_7 != r12_2)
            
            if ((*(arg1 + 0x245) & 0xc) != 0)
                int32_t rax_31 = data_143dbb200
                int64_t var_268 = data_143dbb1f8.q
                int32_t var_260_1 = rax_31
                float var_250_1 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)[0]
                int64_t var_258 =
                    (_mm_unpacklo_ps(zmm14, _mm_shuffle_ps(zmm14, zmm14, 0x55)[0].q)).q
                int64_t* var_3b8_7 = &var_268
                sub_141e1b500(arg1 + 0x3e8, rdx_4, &var_258, r15_3)
                int64_t rdx_24 = *(arg1 + 0x3e8)
                int64_t rcx_37 = sx.q(*(arg1 + 0x3f0)) * 0x60
                *(rcx_37 + rdx_24 - 0x18) = *(arg1 + 0x188)
                *(rcx_37 + rdx_24 - 0x14) = *(arg1 + 0x18c)
                zmm7 = *(arg1 + 0x204)
                zmm6_2 = *(arg1 + 0x200)
                float zmm8_2[0x4] = *(arg1 + 0x208)
                zmm6_2[0] = zmm6_2[0] * zmm6_2[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm8_2[0] = zmm8_2[0] * zmm8_2[0]
                zmm6_2[0] = zmm6_2[0] + zmm7[0]
                zmm6_2[0] = zmm6_2[0] + zmm8_2[0]
                int64_t var_378
                float rax_36
                
                if (zmm6_2[0] != 1f)
                    float var_370_1
                    
                    if (zmm6_2[0] >= zmm10_2[0])
                        float temp0_369[0x4] = _mm_rsqrt_ss(zmm6_2[0], zmm6_2[0])
                        zmm2_2 = 0x3f000000
                        zmm6_2[0] = zmm6_2[0] * 0.5f
                        temp0_369[0] = temp0_369[0] * temp0_369[0]
                        zmm6_2[0] = zmm6_2[0] * temp0_369[0]
                        zmm2_2[0] = 0.5f - zmm6_2[0]
                        temp0_369[0] = temp0_369[0] * zmm2_2[0]
                        temp0_369[0] = temp0_369[0] + temp0_369[0]
                        temp0_369[0] = temp0_369[0] * temp0_369[0]
                        zmm6_2[0] = zmm6_2[0] * temp0_369[0]
                        temp0_369[0] = temp0_369[0] * (0.5f - zmm6_2[0])
                        temp0_369[0] = temp0_369[0] + temp0_369[0]
                        zmm6_2[0] = zmm6_2[0] * temp0_369[0]
                        zmm7[0] = zmm7[0] * temp0_369[0]
                        zmm8_2[0] = zmm8_2[0] * temp0_369[0]
                        var_378.d = zmm6_2[0]
                        var_378:4.d = zmm7[0]
                        var_370_1 = zmm8_2[0]
                        var_368.d = temp0_369[0]
                    else
                        var_378.d = data_143dbb1f8[0]
                        var_370_1 = data_143dbb200[0]
                        var_378:4.d = data_143dbb1fc[0]
                    
                    rax_36 = var_370_1
                else
                    rax_36 = *(arg1 + 0x208)
                    var_378 = *(arg1 + 0x200)
                
                *(rcx_37 + rdx_24 - 0x40) = var_378
                *(rcx_37 + rdx_24 - 0x38) = rax_36
                *(rcx_37 + rdx_24 - 0x34) = *(arg1 + 0x1e2)
                *(rcx_37 + rdx_24 - 0x50) = zmm15
                *(rcx_37 + rdx_24 - 0xf) = *(arg1 + 0x245) u>> 3 & 1
                result.b = *(arg1 + 0x245) u>> 2
                result.b &= 1
                *(rcx_37 + rdx_24 - 0x10) = result.b
            
            r14 = arg2
            rdi = arg1 + 0x3c8
        
        rcx_3 = &var_300[1]
        var_300 = rcx_3
    while (rcx_3 != result_1)

__security_check_cookie(rax_1 ^ &var_3d8)
return result
