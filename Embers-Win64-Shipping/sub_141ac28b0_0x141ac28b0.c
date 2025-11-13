// 函数: sub_141ac28b0
// 地址: 0x141ac28b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* r12 = *(arg1 + 0x210)
int128_t* r10 = arg4
void* rdi = arg1
void* result = &r12[sx.q(*(arg1 + 0x218)) * 4]
float (* var_200)[0x4] = arg3
void* r9 = arg2
void* result_1 = result

if (r12 != result)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    float zmm8[0x4]
    float var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    float zmm11[0x4]
    float var_a8_1[0x4] = zmm11
    float zmm12[0x4]
    float var_b8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_c8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    
    do
        int64_t r13_1 = sx.q(*(r12 + 0x14))
        result = (r13_1 << 6) + *(rdi + 0x240)
        char rcx = *(result + 0x30)
        
        if ((rcx & 2) == 0)
            *(result + 0x30) = rcx | 2
            int32_t rcx_1 = r12[3].d
            int32_t var_258
            float var_248[0x4]
            float var_168[0x4]
            float var_158[0x4]
            float var_148[0x4]
            float zmm0[0x4]
            float zmm1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            float zmm4[0x4]
            float zmm5[0x4]
            
            if (rcx_1 == 0xffffffff)
                int64_t rdx_13 = sx.q(r12[2].d)
                
                if (*(rdx_13 + *(r9 + 0x20)) == 0)
                    sub_141a98300(r9 + 8, rdx_13.d)
                    arg3 = var_200
                    r10 = arg4
                
                uint32_t rdx_14 = zx.d(*(rdi + 0x1b9))
                float (* rcx_21)[0x4] = rdx_13 * 0x30 + *(r9 + 8)
                
                if (rdx_14 == 0)
                label_141ac39ba:
                    var_168 = *rcx_21
                    var_158 = rcx_21[1]
                    var_148 = rcx_21[2]
                else if (rdx_14 == 1)
                    zmm13 = data_143f2b810
                    zmm12 = data_143f2b820
                    zmm8 = arg3[2]
                    zmm2 = zx.o(0)
                    zmm15 = data_143f2b8d0
                    zmm13[0].q = zmm2 u>> 0x40
                    var_168 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
                    float var_148_1[0x4] = _mm_and_ps(zmm13, zmm12)
                    float var_158_1[0x4] = zmm2
                    zmm14 = rcx_21[2]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), zmm15, 1)) == 0)
                        zmm6 = *arg3
                        zmm2 = *rcx_21
                        zmm5 = rcx_21[1]
                        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), zmm0)
                        zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        zmm4 = _mm_mul_ps(zmm8, zmm5)
                        zmm3 = __mulps_xmmps_memps(zmm3, data_143f2b850)
                        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        zmm0 = _mm_mul_ps(zmm2, zmm7)
                        zmm8 = _mm_mul_ps(zmm8, zmm14)
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                            _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
                        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
                        zmm3 = _mm_add_ps(zmm3, zmm1)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        var_148 = zmm8
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm2)
                        var_168 = zmm3
                        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm6), zmm0)
                        zmm3 = _mm_add_ps(zmm3, zmm3)
                        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                        zmm1 = _mm_mul_ps(zmm1, zmm6)
                        zmm0 = _mm_mul_ps(zmm0, zmm2)
                        zmm3 = _mm_mul_ps(zmm3, zmm7)
                        var_158 = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), arg3[1])
                    else
                        zmm1 = *arg3
                        zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                        zmm3 = _mm_add_ps(zmm1, zmm1)
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                        _mm_mul_ps(zmm14, zmm8)
                        zmm4 = _mm_mul_ps(zmm3, zmm1)
                        zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), zmm0)
                        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                        zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x1a)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), zmm1)
                        zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm4, zmm4, 1))
                        zmm10 = _mm_add_ps(zmm3, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm3 = *rcx_21
                        zmm1 = _mm_sub_ps(zmm13, zmm0)
                        zmm4 = zmm3
                        zmm10 = _mm_mul_ps(zmm10, zmm8)
                        zmm5 = _mm_mul_ps(zmm5, zmm2)
                        zmm1 = _mm_mul_ps(zmm1, zmm8)
                        zmm8 = arg3[1]
                        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 4)
                        zmm1 = _mm_and_ps(zmm1, zmm12)
                        zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
                        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
                        zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
                        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm5, 0x12), zmm1, 0xe8)
                        zmm1 = _mm_add_ps(zmm3, zmm3)
                        zmm13[0].q = zmm8 u>> 0x40
                        zmm8 = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        zmm5 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                        zmm4 = _mm_mul_ps(zmm4, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), 
                            _mm_shuffle_ps(zmm4, zmm4, 1))
                        zmm6 = _mm_add_ps(zmm3, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm1 = _mm_sub_ps(zmm13, zmm0)
                        zmm6 = _mm_mul_ps(zmm6, zmm14)
                        zmm5 = _mm_mul_ps(zmm5, zmm2)
                        zmm1 = _mm_and_ps(_mm_mul_ps(zmm1, zmm14), zmm12)
                        zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), 
                            _mm_shuffle_ps(zmm5, zmm1, 0x32), 0x82)
                        zmm4 = _mm_shuffle_ps(zmm5, zmm1, 0x10)
                        zmm0 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
                        zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                        zmm4 = _mm_shuffle_ps(zmm4, zmm0, 0x88)
                        zmm2 = _mm_mul_ps(zmm2, zmm7)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm5, 0x12)
                        zmm5 = rcx_21[1]
                        zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm10)
                        zmm13[0].q = zmm5 u>> 0x40
                        zmm5 = _mm_shuffle_ps(zmm5, zmm13, 0xc4)
                        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
                        zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm9))
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm9)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm10)
                        zmm2 = _mm_add_ps(zmm2, zmm3)
                        zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), zmm7)
                        zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                        var_248 = zmm2
                        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        zmm2 = _mm_mul_ps(zmm2, zmm7)
                        zmm4 = _mm_mul_ps(zmm4, zmm8)
                        zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                        zmm3 = _mm_add_ps(zmm3, zmm1)
                        zmm0 = _mm_mul_ps(zmm0, zmm9)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                        zmm3 = _mm_add_ps(zmm3, zmm4)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                        zmm2 = _mm_add_ps(zmm2, zmm0)
                        zmm6 = _mm_mul_ps(zmm6, zmm8)
                        zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
                        int96_t var_238_2 = zmm3[0].12
                        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm3 = _mm_mul_ps(zmm3, zmm7)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                        zmm0 = _mm_mul_ps(zmm0, zmm9)
                        zmm2 = _mm_add_ps(zmm2, zmm6)
                        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm8)
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        int96_t var_228_2 = zmm2[0].12
                        int96_t var_218_2 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
                        float zmm11_1[0x4]
                        int128_t zmm13_1
                        float zmm15_1[0x4]
                        zmm11_1, zmm13_1, zmm15_1 = sub_1407740e0(&var_248, 0x322bcc77)
                        float zmm2_5[0x4] = var_248[0]
                        float zmm1_5 = var_248[1]
                        zmm15_1 =
                            _mm_and_ps(_mm_cmpeq_ps(zmm15_1, zmm11_1, 2), data_143f2b8c0 ^ zmm13_1)
                            ^ data_143f2b8c0
                        zmm2_5[0] = zmm2_5[0] * zmm15_1[0]
                        zmm1_5 = zmm1_5 * zmm15_1[0]
                        uint32_t zmm0_5[0x4] = var_248[2]
                        zmm0_5[0] = zmm0_5[0] f* zmm15_1[0]
                        var_248[0] = zmm2_5[0]
                        zmm2_5 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0x55)
                        var_248[2] = zmm0_5[0]
                        zmm0_5 = var_238_2:8.d
                        zmm0_5[0] = zmm0_5[0] f* zmm2_5[0]
                        var_248[1] = zmm1_5
                        zmm1_5 = var_238_2:4.d * zmm2_5[0]
                        float zmm3_5 = var_238_2.d * zmm2_5[0]
                        zmm2_5 = var_228_2.d
                        var_238_2:8.d = zmm0_5[0]
                        zmm0_5 = var_228_2:8.d
                        var_238_2:4.d = zmm1_5
                        zmm15_1 = _mm_shuffle_ps(zmm15_1, zmm15_1, 0xaa)
                        zmm0_5[0] = zmm0_5[0] f* zmm15_1[0]
                        zmm2_5[0] = zmm2_5[0] * zmm15_1[0]
                        zmm1_5 = var_228_2:4.d * zmm15_1[0]
                        var_228_2:8.d = zmm0_5[0]
                        var_238_2.d = zmm3_5
                        var_228_2.d = zmm2_5[0]
                        var_228_2:4.d = zmm1_5
                        uint32_t var_1a8[0x4]
                        sub_14077e4a0(&var_1a8, &var_248)
                        float zmm5_3[0x4] = var_1a8
                        uint32_t zmm6_3[0x4] = data_143f2b8b0
                        float zmm1_6[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                        var_258 = 0x322bcc77
                        var_148 = zmm11_1
                        zmm1_6 = _mm_add_ps(zmm1_6, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x4e))
                        float zmm4_5[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_6, zmm1_6, 0x39), zmm1_6)
                        zmm1_6 = _mm_rsqrt_ps(zmm4_5)
                        float zmm3_6[0x4] = _mm_mul_ps(zmm4_5, zmm6_3)
                        float zmm2_6[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(zmm1_6, zmm1_6), zmm3_6)), 
                                zmm1_6), 
                            zmm1_6)
                        zmm6_3 = _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(zmm2_6, zmm2_6), zmm3_6))
                        float zmm0_6[0x4] = var_258
                        zmm0_6 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_6, zmm0_6, 0), zmm4_5, 2)
                        zmm6_3 = _mm_add_ps(_mm_mul_ps(zmm6_3, zmm2_6), zmm2_6)
                        zmm2_6 = _mm_unpacklo_ps(var_218_2:4.d, 0)
                        zmm6_3 = _mm_and_ps(_mm_mul_ps(zmm6_3, zmm5_3) ^ data_143f2b8a0, zmm0_6)
                            ^ data_143f2b8a0
                        var_158 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_218_2.d, var_218_2:8.d[0].q), 
                            zmm2_6[0].q)
                        var_1a8 = zmm6_3
                        var_168 = zmm6_3
                else
                    if (rdx_14 != 2)
                        goto label_141ac39ba
                    
                    sub_140ad7d70(rcx_21, &var_168, r10)
                
                result = sub_141acdd30(*(*(rdi + 0x220) + (r13_1 << 3)), &var_168)
            else
                int64_t r14_1 = 0
                int32_t* rsi_1 = *r12
                zmm13 = data_143dbb0c0
                zmm14 = data_143dbb0d0
                zmm15 = data_143dbb0e0
                uint64_t r15_2 = sx.q(r12[1].d) << 2 u>> 2
                
                if (rsi_1 u> &rsi_1[r12[1]])
                    r15_2 = 0
                
                float var_138[0x4]
                
                if (r15_2 != 0)
                    do
                        int64_t rax_10 = sx.q(*rsi_1)
                        int64_t rcx_2 = *(r9 + 0x20)
                        var_258 = rax_10.d
                        
                        if (*(rax_10 + rcx_2) == 0)
                            goto label_141ac2a6a
                        
                        int32_t var_208
                        sub_141ea4020(*(r9 + 0x18), &var_208, &var_258)
                        int64_t rdx_1 = sx.q(var_208)
                        
                        if (rdx_1.d == 0xffffffff)
                            rax_10 = zx.q(var_258)
                        label_141ac2a6a:
                            int64_t rax_11 = *(r9 + 8)
                            int64_t rdx_4 = sx.q(rax_10.d) * 6
                            zmm5 = *(rax_11 + (rdx_4 << 3))
                            var_168 = zmm5
                            zmm12 = *(rax_11 + (rdx_4 << 3) + 0x10)
                            var_158 = zmm12
                            zmm6 = *(rax_11 + (rdx_4 << 3) + 0x20)
                            var_148 = zmm6
                        else
                            if (*(rdx_1 + *(r9 + 0x20)) == 0)
                                sub_141a98300(r9 + 8, rdx_1.d)
                            
                            zmm13, zmm14, zmm15 = sub_140ad7d70(sx.q(var_258) * 0x30 + *(r9 + 8), 
                                &var_168, rdx_1 * 0x30 + *(r9 + 8))
                            zmm5 = var_168
                            zmm6 = var_148
                            zmm12 = var_158
                        
                        zmm1 = data_143f2b8d0
                        float var_1d8_1[0x4] = zmm1
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, zmm6), zmm1, 1)) == 0)
                            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), zmm0)
                            zmm1 = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
                            zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            zmm0 = _mm_mul_ps(zmm13, zmm4)
                            zmm2 = __mulps_xmmps_memps(zmm2, data_143f2b850)
                            zmm3 = _mm_mul_ps(zmm6, zmm14)
                            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm15 = _mm_mul_ps(zmm15, zmm6)
                            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm5, zmm5, 0x55))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm13)
                            zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                            zmm13 = _mm_add_ps(zmm2, zmm0)
                            zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm5), 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1))
                            zmm2 = _mm_add_ps(zmm2, zmm2)
                            zmm14 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                            zmm14 = _mm_mul_ps(zmm14, zmm5)
                            zmm0 = _mm_mul_ps(zmm0, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, zmm4)
                            zmm14 = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(zmm14, zmm0), _mm_add_ps(zmm2, zmm3)), zmm12)
                        else
                            zmm9 = data_143f2b810
                            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 4)
                            zmm2 = _mm_add_ps(zmm5, zmm5)
                            zmm3 = zmm5
                            zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            _mm_mul_ps(zmm15, zmm6)
                            zmm3 = _mm_mul_ps(zmm3, zmm2)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm0)
                            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x12)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                            zmm2 = _mm_mul_ps(zmm2, zmm5)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
                            zmm3 = zmm13
                            zmm10 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_sub_ps(zmm1, zmm2)
                            zmm2 = _mm_shuffle_ps(zmm13, zmm13, 4)
                            zmm10 = _mm_mul_ps(zmm10, zmm6)
                            zmm4 = _mm_mul_ps(zmm4, zmm1)
                            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm9, zmm0), zmm6), 
                                data_143f2b820)
                            zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 0x12), zmm1, 0xe8)
                            zmm1 = _mm_add_ps(zmm13, zmm13)
                            zmm9[0].q = zmm12 u>> 0x40
                            zmm12 = _mm_shuffle_ps(zmm12, zmm9, 0xc4)
                            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                            zmm4 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                            zmm3 = _mm_mul_ps(zmm3, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                            zmm13 = _mm_mul_ps(zmm13, zmm1)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
                            zmm6 = _mm_add_ps(zmm13, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm13)
                            zmm1 = _mm_sub_ps(zmm9, zmm0)
                            zmm6 = _mm_mul_ps(zmm6, zmm15)
                            zmm4 = _mm_mul_ps(zmm4, zmm2)
                            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm15), data_143f2b820)
                            zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm4, 0x12)
                            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm1, 0xe8)
                            zmm2 = _mm_mul_ps(zmm2, zmm7)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), zmm10)
                            zmm9[0].q = zmm14 u>> 0x40
                            zmm14 = _mm_shuffle_ps(zmm14, zmm9, 0xc4)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm12)
                            zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm8))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm8)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                            zmm2 = _mm_add_ps(zmm2, zmm3)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm7)
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            var_138 = zmm2
                            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            zmm2 = _mm_mul_ps(zmm2, zmm7)
                            zmm5 = _mm_mul_ps(zmm5, zmm12)
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                            zmm3 = _mm_add_ps(zmm3, zmm1)
                            zmm0 = _mm_mul_ps(zmm0, zmm8)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                            zmm3 = _mm_add_ps(zmm3, zmm5)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm6 = _mm_mul_ps(zmm6, zmm12)
                            zmm0 = _mm_shuffle_ps(zmm14, zmm14, 0)
                            int96_t var_128_1 = zmm3[0].12
                            zmm3 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm3 = _mm_mul_ps(zmm3, zmm7)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xaa), zmm10)
                            zmm0 = _mm_mul_ps(zmm0, zmm8)
                            zmm2 = _mm_add_ps(zmm2, zmm6)
                            zmm14 = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xff), zmm12)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            int96_t var_118_1 = zmm2[0].12
                            int96_t var_108_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm14)[0].12
                            zmm9, zmm11 = sub_1407740e0(&var_138, 0x322bcc77)
                            float zmm2_1[0x4] = var_138[0]
                            float zmm1_1 = var_138[1]
                            float zmm4_1[0x4] =
                                _mm_and_ps(_mm_cmpeq_ps(var_1d8_1, zmm11, 2), data_143f2b8c0 ^ zmm9)
                            uint32_t zmm0_1[0x4] = var_138[2]
                            zmm4_1 ^= data_143f2b8c0
                            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                            zmm1_1 = zmm1_1 * zmm4_1[0]
                            var_138[0] = zmm2_1[0]
                            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                            var_138[1] = zmm1_1
                            zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            zmm1_1 = var_128_1:4.d * zmm2_1[0]
                            var_138[2] = zmm0_1[0]
                            zmm0_1 = var_128_1:8.d
                            zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                            float zmm3_1 = var_128_1.d * zmm2_1[0]
                            zmm2_1 = var_118_1.d
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                            var_128_1:4.d = zmm1_1
                            var_128_1:8.d = zmm0_1[0]
                            zmm0_1 = var_118_1:8.d
                            zmm1_1 = var_118_1:4.d * zmm4_1[0]
                            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                            var_118_1:4.d = zmm1_1
                            var_118_1:8.d = zmm0_1[0]
                            var_128_1.d = zmm3_1
                            var_118_1.d = zmm2_1[0]
                            uint32_t var_1c8[0x4]
                            sub_14077e4a0(&var_1c8, &var_138)
                            zmm5 = var_1c8
                            zmm15 = zmm11
                            zmm13 = data_143f2b8b0
                            zmm1 = _mm_mul_ps(zmm5, zmm5)
                            var_258 = 0x322bcc77
                            zmm1 = _mm_add_ps(zmm1, _mm_shuffle_ps(zmm1, zmm1, 0x4e))
                            zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1, zmm1, 0x39), zmm1)
                            zmm1 = _mm_rsqrt_ps(zmm4)
                            zmm3 = _mm_mul_ps(zmm4, zmm13)
                            zmm2 = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(zmm1, zmm1), zmm3)), 
                                    zmm1), 
                                zmm1)
                            zmm13 = _mm_sub_ps(zmm13, _mm_mul_ps(_mm_mul_ps(zmm2, zmm2), zmm3))
                            zmm0 = var_258
                            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4, 2)
                            zmm13 = _mm_add_ps(_mm_mul_ps(zmm13, zmm2), zmm2)
                            zmm2 = _mm_unpacklo_ps(var_108_1:4.d, 0)
                            zmm13 = _mm_and_ps(_mm_mul_ps(zmm13, zmm5) ^ data_143f2b8a0, zmm0)
                                ^ data_143f2b8a0
                            zmm14 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), zmm2[0].q)
                            var_1c8 = zmm13
                        
                        rsi_1 = &rsi_1[1]
                        r14_1 += 1
                    while (r14_1 != r15_2)
                    
                    rcx_1 = r12[3].d
                    rdi = arg1
                
                int128_t* rbx_2 = *(*(rdi + 0x220) + (sx.q(rcx_1) << 3))
                sub_140ad8030(rbx_2, &var_168, 
                    sub_1417cbc40(&var_138, 
                        sx.q(*(rbx_2 + 0x38)) * 0x60 + 0x30 + *(rbx_2[3].q + 0x50)))
                float zmm1_2[0x4] = data_143f2b8d0
                float var_1d8_2[0x4] = zmm1_2
                float var_198[0x4]
                float zmm0_2[0x4]
                float zmm2_2[0x4]
                float zmm3_2[0x4]
                float zmm4_2[0x4]
                float zmm5_1[0x4]
                float zmm6_1[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm15, var_148), zmm1_2, 1)) == 0)
                    zmm5_1 = var_168
                    zmm0_2 = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm0_2)
                    zmm1_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                    zmm6_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    zmm4_2 = _mm_mul_ps(var_148, zmm14)
                    zmm2_2 = __mulps_xmmps_memps(zmm2_2, data_143f2b850)
                    zmm0_2 = _mm_mul_ps(zmm6_1, zmm13)
                    zmm3_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                    zmm15 = _mm_mul_ps(zmm15, var_148)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                    zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm13)
                    float var_178_2[0x4] = zmm15
                    zmm2_2 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_2), 
                        __mulps_xmmps_memps(zmm0_2, data_143f2b830))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xc9), zmm5_1)
                    var_198 = zmm2_2
                    zmm2_2 =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xd2), zmm3_2), zmm0_2)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm2_2)
                    zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2), zmm3_2)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm5_1)
                    zmm6_1 = _mm_add_ps(zmm6_1, zmm4_2)
                    float var_188_2[0x4] =
                        __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm1_2, zmm0_2), zmm6_1), var_158)
                else
                    zmm3_2 = var_168
                    zmm10 = data_143f2b810
                    zmm1_2 = _mm_add_ps(zmm3_2, zmm3_2)
                    zmm4_2 = zmm3_2
                    zmm5_1 = _mm_shuffle_ps(var_148, var_148, 0xc9)
                    zmm2_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 4)
                    zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xff)
                    zmm4_2 = _mm_mul_ps(zmm4_2, zmm1_2)
                    zmm2_2 = _mm_mul_ps(zmm2_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                    zmm3_2 = _mm_mul_ps(zmm3_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12))
                    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x1a), 
                        _mm_shuffle_ps(zmm4_2, zmm4_2, 1))
                    _mm_mul_ps(zmm15, var_148)
                    zmm11 = _mm_add_ps(zmm3_2, zmm2_2)
                    zmm4_2 = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
                    zmm2_2 = _mm_sub_ps(zmm2_2, zmm3_2)
                    zmm1_2 = _mm_sub_ps(zmm10, zmm0_2)
                    zmm11 = _mm_mul_ps(zmm11, var_148)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm2_2)
                    zmm1_2 = _mm_mul_ps(zmm1_2, var_148)
                    zmm2_2 = _mm_add_ps(zmm13, zmm13)
                    zmm1_2 = __andps_xmmxud_memxud(zmm1_2, data_143f2b820)
                    zmm0_2 = _mm_shuffle_ps(zmm5_1, zmm1_2, 0x32)
                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm1_2, 0), zmm0_2, 0x82)
                    zmm0_2 = _mm_shuffle_ps(zmm11, zmm1_2, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm1_2, 0x10), zmm0_2, 0x88)
                    zmm3_2 = _mm_mul_ps(zmm13, zmm2_2)
                    zmm11 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm5_1, 0x12), zmm1_2, 0xe8)
                    zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x29)
                    zmm10[0].q = var_158 u>> 0x40
                    float zmm8_1[0x4] = _mm_shuffle_ps(var_158, zmm10, 0xc4)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 4))
                    zmm0_2 = _mm_add_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0x1a), 
                        _mm_shuffle_ps(zmm3_2, zmm3_2, 1))
                    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x12), zmm13)
                    zmm6_1 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm1_2 = _mm_sub_ps(zmm1_2, zmm2_2)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm15)
                    zmm4_2 = _mm_mul_ps(zmm4_2, zmm1_2)
                    zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, zmm0_2), zmm15), 
                        data_143f2b820)
                    zmm3_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm1_2, 0), 
                        _mm_shuffle_ps(zmm4_2, zmm1_2, 0x32), 0x82)
                    zmm5_1 = _mm_shuffle_ps(zmm4_2, zmm1_2, 0x10)
                    zmm2_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, _mm_shuffle_ps(zmm6_1, zmm1_2, 0x31), 0x88)
                    zmm2_2 = _mm_mul_ps(zmm2_2, zmm7)
                    zmm6_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6_1, zmm4_2, 0x12), zmm1_2, 0xe8)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa), zmm11)
                    zmm10[0].q = zmm14 u>> 0x40
                    zmm4_2 = _mm_shuffle_ps(zmm14, zmm10, 0xc4)
                    zmm0_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0)
                    zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0xff), zmm8_1)
                    zmm2_2 = _mm_add_ps(zmm2_2, _mm_mul_ps(zmm0_2, zmm9))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), zmm9)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm11)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm3_2)
                    zmm3_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7)
                    zmm5_1 = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                    var_248 = zmm2_2
                    zmm2_2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm0_2)
                    zmm2_2 = _mm_mul_ps(zmm2_2, zmm7)
                    zmm5_1 = _mm_mul_ps(zmm5_1, zmm8_1)
                    zmm0_2 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm1_2)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa), zmm11)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm5_1)
                    zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xff)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                    zmm6_1 = _mm_mul_ps(zmm6_1, zmm8_1)
                    zmm0_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0)
                    int96_t var_238_1 = zmm3_2[0].12
                    zmm3_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm3_2 = _mm_mul_ps(zmm3_2, zmm7)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm11)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm6_1)
                    zmm4_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xff), zmm8_1)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm0_2)
                    int96_t var_228_1 = zmm2_2[0].12
                    int96_t var_218_1 = _mm_add_ps(_mm_add_ps(zmm3_2, zmm1_2), zmm4_2)[0].12
                    int128_t zmm10_1
                    float zmm12_1[0x4]
                    zmm10_1, zmm12_1 = sub_1407740e0(&var_248, 0x322bcc77)
                    float zmm2_3[0x4] = var_248[0]
                    float zmm1_3 = var_248[1]
                    float zmm4_3[0x4] =
                        _mm_and_ps(_mm_cmpeq_ps(var_1d8_2, zmm12_1, 2), data_143f2b8c0 ^ zmm10_1)
                        ^ data_143f2b8c0
                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                    uint32_t zmm0_3[0x4] = var_248[2]
                    zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                    zmm1_3 = zmm1_3 * zmm4_3[0]
                    var_248[0] = zmm2_3[0]
                    zmm2_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                    var_248[2] = zmm0_3[0]
                    zmm0_3 = var_238_1:8.d
                    zmm0_3[0] = zmm0_3[0] f* zmm2_3[0]
                    var_248[1] = zmm1_3
                    zmm1_3 = var_238_1:4.d * zmm2_3[0]
                    float zmm3_3 = var_238_1.d * zmm2_3[0]
                    zmm2_3 = var_228_1.d
                    zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                    var_238_1:8.d = zmm0_3[0]
                    zmm0_3 = var_228_1:8.d
                    var_238_1:4.d = zmm1_3
                    zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                    zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
                    zmm1_3 = var_228_1:4.d * zmm4_3[0]
                    var_228_1:8.d = zmm0_3[0]
                    var_238_1.d = zmm3_3
                    var_228_1.d = zmm2_3[0]
                    var_228_1:4.d = zmm1_3
                    uint32_t var_1b8[0x4]
                    sub_14077e4a0(&var_1b8, &var_248)
                    uint32_t zmm5_2[0x4] = var_1b8
                    float zmm6_2[0x4] = data_143f2b8b0
                    uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                    var_258 = 0x322bcc77
                    float var_178_1[0x4] = zmm12_1
                    zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                    float zmm4_4[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                    zmm1_4 = _mm_rsqrt_ps(zmm4_4)
                    float zmm3_4[0x4] = _mm_mul_ps(zmm4_4, zmm6_2)
                    float zmm2_4[0x4] = _mm_add_ps(
                        _mm_mul_ps(
                            _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3_4)), 
                            zmm1_4), 
                        zmm1_4)
                    zmm6_2 = _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm2_4, zmm2_4), zmm3_4))
                    uint32_t zmm0_4[0x4] = var_258
                    zmm0_4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), zmm4_4, 2)
                    zmm6_2 = _mm_add_ps(_mm_mul_ps(zmm6_2, zmm2_4), zmm2_4)
                    zmm2_4 = _mm_unpacklo_ps(var_218_1:4.d, 0)
                    zmm6_2 = _mm_and_ps(_mm_mul_ps(zmm6_2, zmm5_2) ^ data_143f2b8a0, zmm0_4)
                        ^ data_143f2b8a0
                    float var_188_1[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(var_218_1.d, var_218_1:8.d[0].q), zmm2_4[0].q)
                    var_1b8 = zmm6_2
                    var_198 = zmm6_2
                zmm14 = sub_141acdd30(*(*(rdi + 0x220) + (r13_1 << 3)), &var_198)
                result = *(rdi + 0x240)
                zmm0 = zmm14
                zmm0[0] = zmm0[0] * zmm14[0]
                zmm1 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                zmm14[0] = zmm14[0] * zmm14[0]
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm1[0] = zmm1[0] + zmm14[0]
                *(result + (r13_1 << 6) + 0x2c) = _mm_sqrt_ss(0, zmm1[0])[0]
            r10 = arg4
            r9 = arg2
            arg3 = var_200
        
        r12 = &r12[4]
    while (r12 != result_1)

__security_check_cookie(rax_1 ^ &var_278)
return result
