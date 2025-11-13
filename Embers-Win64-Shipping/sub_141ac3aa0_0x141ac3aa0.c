// 函数: sub_141ac3aa0
// 地址: 0x141ac3aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* r12 = *(arg1 + 0x208)
int128_t* r10 = arg4
void* rbx = arg1
int64_t* result = &r12[sx.q(*(arg1 + 0x210)) * 4]
float (* var_1c0)[0x4] = arg3
void* r9 = arg2
int64_t* result_1 = result

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
        result = (r13_1 << 6) + *(rbx + 0x238)
        char rcx = result[6].b
        
        if ((rcx & 2) == 0)
            result[6].b = rcx | 2
            int32_t rcx_1 = r12[3].d
            int32_t var_218
            float var_208[0x4]
            float var_158[0x4]
            float zmm0[0x4]
            float zmm1[0x4]
            float zmm2[0x4]
            float zmm3[0x4]
            float zmm4[0x4]
            float zmm5[0x4]
            
            if (rcx_1 == 0xffffffff)
                int64_t rdx_9 = sx.q(r12[2].d)
                
                if (*(rdx_9 + *(r9 + 0x20)) == 0)
                    sub_141a98300(r9 + 8, rdx_9.d)
                    arg3 = var_1c0
                    r10 = arg4
                
                uint32_t rdx_10 = zx.d(*(rbx + 0x121))
                float (* rcx_21)[0x4] = rdx_9 * 0x30 + *(r9 + 8)
                
                if (rdx_10 == 0)
                label_141ac4bb8:
                    var_158 = *rcx_21
                    float var_148_7[0x4] = rcx_21[1]
                    float var_138_7[0x4] = rcx_21[2]
                else if (rdx_10 == 1)
                    zmm13 = data_143f2b810
                    zmm15 = data_143f2b820
                    zmm8 = arg3[2]
                    zmm2 = zx.o(0)
                    zmm14 = data_143f2b8d0
                    zmm13[0].q = zmm2 u>> 0x40
                    var_158 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
                    float var_138_4[0x4] = _mm_and_ps(zmm13, zmm15)
                    float var_148_4[0x4] = zmm2
                    zmm12 = rcx_21[2]
                    
                    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm8), zmm14, 1)) == 0)
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
                        zmm12 = _mm_mul_ps(zmm12, zmm8)
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                            _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                        zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
                        zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                        zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
                        zmm3 = _mm_add_ps(zmm3, zmm1)
                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                        float var_138_6[0x4] = zmm12
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm2)
                        var_158 = zmm3
                        zmm3 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm6), zmm0)
                        zmm3 = _mm_add_ps(zmm3, zmm3)
                        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                        zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                        zmm1 = _mm_mul_ps(zmm1, zmm6)
                        zmm0 = _mm_mul_ps(zmm0, zmm2)
                        zmm3 = _mm_mul_ps(zmm3, zmm7)
                        float var_148_6[0x4] = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(zmm1, zmm0), _mm_add_ps(zmm3, zmm4)), arg3[1])
                    else
                        zmm1 = *arg3
                        zmm5 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                        zmm3 = _mm_add_ps(zmm1, zmm1)
                        zmm0 = _mm_shuffle_ps(zmm1, zmm1, 4)
                        _mm_mul_ps(zmm12, zmm8)
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
                        zmm1 = _mm_and_ps(zmm1, zmm15)
                        zmm0 = _mm_shuffle_ps(zmm5, zmm1, 0x32)
                        zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
                        zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
                        zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5, zmm1, 0x10), zmm0, 0x88)
                        zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm5, 0x12), zmm1, 0xe8)
                        zmm1 = _mm_add_ps(zmm3, zmm3)
                        zmm13[0].q = zmm8 u>> 0x40
                        zmm8 = _mm_shuffle_ps(zmm8, zmm13, 0xc4)
                        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                        zmm5 = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
                        zmm4 = _mm_mul_ps(zmm4, zmm1)
                        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x12))
                        zmm0 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), 
                            _mm_shuffle_ps(zmm4, zmm4, 1))
                        zmm6 = _mm_add_ps(zmm3, zmm2)
                        zmm2 = _mm_sub_ps(zmm2, zmm3)
                        zmm1 = _mm_sub_ps(zmm13, zmm0)
                        zmm6 = _mm_mul_ps(zmm6, zmm12)
                        zmm5 = _mm_mul_ps(zmm5, zmm2)
                        zmm1 = _mm_and_ps(_mm_mul_ps(zmm1, zmm12), zmm15)
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
                        var_208 = zmm2
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
                        int96_t var_1f8_3 = zmm3[0].12
                        zmm3 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                        zmm2 = _mm_add_ps(zmm2, zmm1)
                        zmm3 = _mm_mul_ps(zmm3, zmm7)
                        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                        zmm0 = _mm_mul_ps(zmm0, zmm9)
                        zmm2 = _mm_add_ps(zmm2, zmm6)
                        zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xff), zmm8)
                        zmm3 = _mm_add_ps(zmm3, zmm0)
                        int96_t var_1e8_3 = zmm2[0].12
                        int96_t var_1d8_3 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm5)[0].12
                        zmm11, zmm13, zmm14 = sub_1407740e0(&var_208, 0x322bcc77)
                        float zmm2_5[0x4] = var_208[0]
                        float zmm1_5 = var_208[1]
                        zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm11, 2), data_143f2b8c0 ^ zmm13)
                            ^ data_143f2b8c0
                        zmm2_5[0] = zmm2_5[0] * zmm14[0]
                        zmm1_5 = zmm1_5 * zmm14[0]
                        uint32_t zmm0_5[0x4] = var_208[2]
                        zmm0_5[0] = zmm0_5[0] f* zmm14[0]
                        var_208[0] = zmm2_5[0]
                        zmm2_5 = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                        var_208[2] = zmm0_5[0]
                        zmm0_5 = var_1f8_3:8.d
                        zmm0_5[0] = zmm0_5[0] f* zmm2_5[0]
                        var_208[1] = zmm1_5
                        zmm1_5 = var_1f8_3:4.d * zmm2_5[0]
                        float zmm3_3 = var_1f8_3.d * zmm2_5[0]
                        zmm2_5 = var_1e8_3.d
                        var_1f8_3:8.d = zmm0_5[0]
                        zmm0_5 = var_1e8_3:8.d
                        var_1f8_3:4.d = zmm1_5
                        zmm14 = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                        zmm0_5[0] = zmm0_5[0] f* zmm14[0]
                        zmm2_5[0] = zmm2_5[0] * zmm14[0]
                        zmm1_5 = var_1e8_3:4.d * zmm14[0]
                        var_1e8_3:8.d = zmm0_5[0]
                        var_1f8_3.d = zmm3_3
                        var_1e8_3.d = zmm2_5[0]
                        var_1e8_3:4.d = zmm1_5
                        uint32_t var_168[0x4]
                        sub_14077e4a0(&var_168, &var_208)
                        zmm5 = var_168
                        zmm6 = data_143f2b8b0
                        float zmm1_6[0x4] = _mm_mul_ps(zmm5, zmm5)
                        var_218 = 0x322bcc77
                        float var_138_5[0x4] = zmm11
                        zmm1_6 = _mm_add_ps(zmm1_6, _mm_shuffle_ps(zmm1_6, zmm1_6, 0x4e))
                        zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1_6, zmm1_6, 0x39), zmm1_6)
                        zmm1_6 = _mm_rsqrt_ps(zmm4)
                        zmm3 = _mm_mul_ps(zmm4, zmm6)
                        float zmm2_6[0x4] = _mm_add_ps(
                            _mm_mul_ps(
                                _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_6, zmm1_6), zmm3)), 
                                zmm1_6), 
                            zmm1_6)
                        zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_6, zmm2_6), zmm3))
                        float zmm0_6[0x4] = var_218
                        zmm0_6 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_6, zmm0_6, 0), zmm4, 2)
                        zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_6), zmm2_6)
                        zmm2_6 = _mm_unpacklo_ps(var_1d8_3:4.d, 0)
                        zmm6 = _mm_and_ps(_mm_mul_ps(zmm6, zmm5) ^ data_143f2b8a0, zmm0_6)
                            ^ data_143f2b8a0
                        float var_148_5[0x4] = _mm_unpacklo_ps(
                            _mm_unpacklo_ps(var_1d8_3.d, var_1d8_3:8.d[0].q), zmm2_6[0].q)
                        var_168 = zmm6
                        var_158 = zmm6
                else
                    if (rdx_10 != 2)
                        goto label_141ac4bb8
                    
                    sub_140ad7d70(rcx_21, &var_158, r10)
                
                result = sub_142253090(*(*(rbx + 0x218) + (r13_1 << 3)), &var_158)
            else
                int64_t r14_1 = 0
                int32_t* rsi_1 = *r12
                zmm13 = data_143dbb0c0
                zmm12 = data_143dbb0d0
                zmm14 = data_143dbb0e0
                uint64_t r15_2 = sx.q(r12[1].d) << 2 u>> 2
                
                if (rsi_1 u> &rsi_1[r12[1]])
                    r15_2 = 0
                
                float var_128[0x4]
                
                if (r15_2 != 0)
                    do
                        int64_t rax_10 = sx.q(*rsi_1)
                        int64_t rcx_2 = *(r9 + 0x20)
                        var_218 = rax_10.d
                        
                        if (*(rax_10 + rcx_2) == 0)
                            goto label_141ac3c5a
                        
                        int32_t var_1c8
                        sub_141ea4020(*(r9 + 0x18), &var_1c8, &var_218)
                        int64_t rdx_1 = sx.q(var_1c8)
                        float var_118[0x4]
                        float var_108[0x4]
                        
                        if (rdx_1.d == 0xffffffff)
                            rax_10 = zx.q(var_218)
                        label_141ac3c5a:
                            int64_t rax_11 = *(r9 + 8)
                            int64_t rdx_4 = sx.q(rax_10.d) * 6
                            zmm5 = *(rax_11 + (rdx_4 << 3))
                            var_128 = zmm5
                            zmm15 = *(rax_11 + (rdx_4 << 3) + 0x10)
                            var_118 = zmm15
                            zmm6 = *(rax_11 + (rdx_4 << 3) + 0x20)
                            var_108 = zmm6
                        else
                            if (*(rdx_1 + *(r9 + 0x20)) == 0)
                                sub_141a98300(r9 + 8, rdx_1.d)
                            
                            zmm12, zmm13, zmm14 = sub_140ad7d70(sx.q(var_218) * 0x30 + *(r9 + 8), 
                                &var_128, rdx_1 * 0x30 + *(r9 + 8))
                            zmm5 = var_128
                            zmm6 = var_108
                            zmm15 = var_118
                        zmm1 = data_143f2b8d0
                        float var_198_1[0x4] = zmm1
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm6), zmm1, 1)) == 0)
                            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), 
                                _mm_shuffle_ps(zmm13, zmm13, 0x1b))
                            zmm3 = _mm_mul_ps(zmm6, zmm12)
                            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
                            zmm2 = __mulps_xmmps_memps(zmm2, data_143f2b850)
                            zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            zmm0 = _mm_mul_ps(zmm13, zmm4)
                            zmm14 = _mm_mul_ps(zmm14, zmm6)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm1 = _mm_mul_ps(zmm1, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), 
                                _mm_shuffle_ps(zmm13, zmm13, 0xb1))
                            zmm1 = __mulps_xmmps_memps(zmm1, data_143f2b840)
                            zmm0 = __mulps_xmmps_memps(zmm0, data_143f2b830)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                            zmm13 = _mm_add_ps(zmm2, zmm0)
                            zmm2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xd2), zmm5), 
                                _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xc9), zmm1))
                            zmm2 = _mm_add_ps(zmm2, zmm2)
                            zmm12 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                            zmm0 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                            zmm12 = _mm_mul_ps(zmm12, zmm5)
                            zmm0 = _mm_mul_ps(zmm0, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, zmm4)
                            zmm12 = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(zmm12, zmm0), _mm_add_ps(zmm2, zmm3)), zmm15)
                        else
                            zmm9 = data_143f2b810
                            zmm1 = _mm_add_ps(zmm5, zmm5)
                            zmm2 = _mm_shuffle_ps(zmm5, zmm5, 4)
                            zmm3 = zmm5
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            zmm4 = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                            _mm_mul_ps(zmm14, zmm6)
                            zmm3 = _mm_mul_ps(zmm3, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                            zmm5 = _mm_mul_ps(zmm5, zmm1)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
                            zmm3 = zmm13
                            zmm10 = _mm_add_ps(zmm5, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm5)
                            zmm1 = _mm_sub_ps(zmm9, zmm0)
                            zmm10 = _mm_mul_ps(zmm10, zmm6)
                            zmm4 = _mm_mul_ps(zmm4, zmm2)
                            zmm1 = _mm_mul_ps(zmm1, zmm6)
                            zmm2 = _mm_shuffle_ps(zmm13, zmm13, 4)
                            zmm1 = __andps_xmmxud_memxud(zmm1, data_143f2b820)
                            zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                            zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm10, zmm1, 0x31)
                            zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 0x12), zmm1, 0xe8)
                            zmm1 = _mm_add_ps(zmm13, zmm13)
                            zmm9[0].q = zmm15 u>> 0x40
                            zmm15 = _mm_shuffle_ps(zmm15, zmm9, 0xc4)
                            zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                            zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                            zmm3 = _mm_mul_ps(zmm3, zmm1)
                            zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
                            zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                            zmm13 = _mm_mul_ps(zmm13, zmm1)
                            zmm0 = _mm_add_ps(zmm0, _mm_shuffle_ps(zmm3, zmm3, 1))
                            zmm6 = _mm_add_ps(zmm13, zmm2)
                            zmm2 = _mm_sub_ps(zmm2, zmm13)
                            zmm1 = _mm_sub_ps(zmm9, zmm0)
                            zmm6 = _mm_mul_ps(zmm6, zmm14)
                            zmm4 = _mm_mul_ps(zmm4, zmm2)
                            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(zmm1, zmm14), data_143f2b820)
                            zmm0 = _mm_shuffle_ps(zmm4, zmm1, 0x32)
                            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1, 0), zmm0, 0x82)
                            zmm0 = _mm_shuffle_ps(zmm6, zmm1, 0x31)
                            zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0x10), zmm0, 0x88)
                            zmm6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm4, 0x12), zmm1, 0xe8)
                            zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                            zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                            zmm1 = _mm_mul_ps(zmm1, zmm10)
                            zmm2 = _mm_mul_ps(zmm2, zmm7)
                            zmm9[0].q = zmm12 u>> 0x40
                            zmm12 = _mm_shuffle_ps(zmm12, zmm9, 0xc4)
                            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm15)
                            zmm2 = _mm_add_ps(zmm2, _mm_mul_ps(zmm0, zmm8))
                            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm8)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                            zmm2 = _mm_add_ps(zmm2, zmm3)
                            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm7)
                            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                            var_208 = zmm2
                            zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            zmm2 = _mm_mul_ps(zmm2, zmm7)
                            zmm5 = _mm_mul_ps(zmm5, zmm15)
                            zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0)
                            zmm3 = _mm_add_ps(zmm3, zmm1)
                            zmm0 = _mm_mul_ps(zmm0, zmm8)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                            zmm3 = _mm_add_ps(zmm3, zmm5)
                            zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                            zmm2 = _mm_add_ps(zmm2, zmm0)
                            zmm6 = _mm_mul_ps(zmm6, zmm15)
                            zmm0 = _mm_shuffle_ps(zmm12, zmm12, 0)
                            int96_t var_1f8_1 = zmm3[0].12
                            zmm3 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                            zmm2 = _mm_add_ps(zmm2, zmm1)
                            zmm3 = _mm_mul_ps(zmm3, zmm7)
                            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xaa), zmm10)
                            zmm0 = _mm_mul_ps(zmm0, zmm8)
                            zmm2 = _mm_add_ps(zmm2, zmm6)
                            zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xff), zmm15)
                            zmm3 = _mm_add_ps(zmm3, zmm0)
                            int96_t var_1e8_1 = zmm2[0].12
                            int96_t var_1d8_1 = _mm_add_ps(_mm_add_ps(zmm3, zmm1), zmm12)[0].12
                            zmm9, zmm11 = sub_1407740e0(&var_208, 0x322bcc77)
                            float zmm2_1[0x4] = var_208[0]
                            float zmm1_1 = var_208[1]
                            float zmm4_1[0x4] =
                                _mm_and_ps(_mm_cmpeq_ps(var_198_1, zmm11, 2), data_143f2b8c0 ^ zmm9)
                            uint32_t zmm0_1[0x4] = var_208[2]
                            zmm4_1 ^= data_143f2b8c0
                            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                            zmm1_1 = zmm1_1 * zmm4_1[0]
                            var_208[0] = zmm2_1[0]
                            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                            var_208[1] = zmm1_1
                            var_208[2] = zmm0_1[0]
                            zmm0_1 = var_1f8_1:8.d
                            zmm2_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                            zmm1_1 = var_1f8_1:4.d * zmm2_1[0]
                            zmm0_1[0] = zmm0_1[0] f* zmm2_1[0]
                            float zmm3_1 = var_1f8_1.d * zmm2_1[0]
                            zmm2_1 = var_1e8_1.d
                            zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
                            var_1f8_1:4.d = zmm1_1
                            var_1f8_1:8.d = zmm0_1[0]
                            zmm0_1 = var_1e8_1:8.d
                            zmm1_1 = var_1e8_1:4.d * zmm4_1[0]
                            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
                            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
                            var_1e8_1:4.d = zmm1_1
                            var_1e8_1:8.d = zmm0_1[0]
                            var_1f8_1.d = zmm3_1
                            var_1e8_1.d = zmm2_1[0]
                            uint32_t var_188[0x4]
                            sub_14077e4a0(&var_188, &var_208)
                            zmm5 = var_188
                            zmm14 = zmm11
                            zmm13 = data_143f2b8b0
                            zmm1 = _mm_mul_ps(zmm5, zmm5)
                            var_218 = 0x322bcc77
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
                            zmm0 = var_218
                            zmm0 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4, 2)
                            zmm13 = _mm_add_ps(_mm_mul_ps(zmm13, zmm2), zmm2)
                            zmm2 = _mm_unpacklo_ps(var_1d8_1:4.d, 0)
                            zmm13 = _mm_and_ps(_mm_mul_ps(zmm13, zmm5) ^ data_143f2b8a0, zmm0)
                                ^ data_143f2b8a0
                            zmm12 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_1d8_1.d, var_1d8_1:8.d[0].q), zmm2[0].q)
                            var_188 = zmm13
                        
                        rsi_1 = &rsi_1[1]
                        r14_1 += 1
                    while (r14_1 != r15_2)
                    
                    rcx_1 = r12[3].d
                    rbx = arg1
                
                int128_t* rax_14 = sub_14224f610(*(*(rbx + 0x218) + (sx.q(rcx_1) << 3)), &var_128)
                zmm15 = data_143f2b810
                zmm5 = data_143f2b820
                zmm15[0].q = zx.o(0) u>> 0x40
                var_158 = _mm_shuffle_ps(zx.o(0), zmm15, 0xc4)
                float var_138_1[0x4] = _mm_and_ps(zmm15, zmm5)
                float zmm1_2[0x4] = data_143f2b8d0
                int128_t var_148_1 = zx.o(0)
                zmm7 = *rax_14
                zmm8 = rax_14[2]
                zmm3 = zmm7
                float var_198_2[0x4] = zmm1_2
                float zmm0_2[0x4]
                float zmm2_2[0x4]
                
                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), zmm1_2, 1)) == 0)
                    zmm6 = rax_14[1]
                    zmm0_2 = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), zmm0_2)
                    zmm1_2 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    zmm5 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    zmm4 = _mm_mul_ps(zmm8, zmm12)
                    zmm2_2 = __mulps_xmmps_memps(zmm2_2, data_143f2b850)
                    zmm0_2 = _mm_mul_ps(zmm5, zmm13)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm7, 0xd2)
                    zmm8 = _mm_mul_ps(zmm8, zmm14)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
                    zmm0_2 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
                    zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f2b840)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm13)
                    float var_138_3[0x4] = zmm8
                    zmm2_2 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_2), 
                        __mulps_xmmps_memps(zmm0_2, data_143f2b830))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xc9), zmm3)
                    var_158 = zmm2_2
                    zmm2_2 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd2), zmm7), zmm0_2)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm2_2)
                    zmm5 = _mm_mul_ps(zmm5, zmm2_2)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xd2), zmm7)
                    zmm0_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xc9)
                    zmm5 = _mm_add_ps(zmm5, zmm4)
                    float var_148_3[0x4] = _mm_add_ps(
                        _mm_add_ps(_mm_sub_ps(zmm1_2, _mm_mul_ps(zmm0_2, zmm3)), zmm5), zmm6)
                else
                    zmm1_2 = _mm_add_ps(zmm7, zmm7)
                    zmm2_2 = _mm_shuffle_ps(zmm7, zmm7, 4)
                    zmm4 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    _mm_mul_ps(zmm14, zmm8)
                    zmm3 = _mm_mul_ps(zmm3, zmm1_2)
                    zmm2_2 = _mm_mul_ps(zmm2_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x29))
                    zmm1_2 = _mm_shuffle_ps(zmm1_2, zmm1_2, 0x12)
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0x1a)
                    zmm7 = _mm_mul_ps(zmm7, zmm1_2)
                    zmm0_2 = _mm_add_ps(zmm0_2, _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm10 = _mm_add_ps(zmm7, zmm2_2)
                    zmm2_2 = _mm_sub_ps(zmm2_2, zmm7)
                    zmm1_2 = _mm_sub_ps(zmm15, zmm0_2)
                    zmm10 = _mm_mul_ps(zmm10, zmm8)
                    zmm4 = _mm_mul_ps(zmm4, zmm2_2)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm8)
                    zmm2_2 = _mm_add_ps(zmm13, zmm13)
                    zmm8 = rax_14[1]
                    zmm1_2 = _mm_and_ps(zmm1_2, zmm5)
                    zmm3 = _mm_mul_ps(zmm13, zmm2_2)
                    zmm0_2 = _mm_shuffle_ps(zmm4, zmm1_2, 0x32)
                    zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm1_2, 0), zmm0_2, 0x82)
                    zmm0_2 = _mm_shuffle_ps(zmm10, zmm1_2, 0x31)
                    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1_2, 0x10), zmm0_2, 0x88)
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, zmm4, 0x12), zmm1_2, 0xe8)
                    zmm1_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x29)
                    zmm15[0].q = zmm8 u>> 0x40
                    zmm8 = _mm_shuffle_ps(zmm8, zmm15, 0xc4)
                    zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm13, zmm13, 4))
                    zmm0_2 =
                        _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), _mm_shuffle_ps(zmm3, zmm3, 1))
                    zmm13 = _mm_shuffle_ps(zmm13, zmm13, 0xff)
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0x12), zmm13)
                    zmm4 = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                    zmm6 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm1_2 = _mm_sub_ps(zmm1_2, zmm2_2)
                    zmm6 = _mm_mul_ps(zmm6, zmm14)
                    zmm4 = _mm_mul_ps(zmm4, zmm1_2)
                    zmm1_2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm15, zmm0_2), zmm14), zmm5)
                    zmm0_2 = _mm_shuffle_ps(zmm4, zmm1_2, 0x32)
                    zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm1_2, 0), zmm0_2, 0x82)
                    zmm0_2 = _mm_shuffle_ps(zmm6, zmm1_2, 0x31)
                    zmm5 = _mm_shuffle_ps(zmm4, zmm1_2, 0x10)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm4, 0x12)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm0_2, 0x88)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm1_2, 0xe8)
                    zmm15[0].q = zmm12 u>> 0x40
                    zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x55), zmm7)
                    zmm1_2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm4 = _mm_shuffle_ps(zmm12, zmm15, 0xc4)
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm8)
                    zmm1_2 = _mm_mul_ps(zmm1_2, zmm10)
                    zmm2_2 = _mm_add_ps(zmm2_2, _mm_mul_ps(zmm0_2, zmm9))
                    zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), zmm9)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), zmm10)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm3)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0x55), zmm7)
                    zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    var_208 = zmm2_2
                    zmm2_2 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm3 = _mm_add_ps(zmm3, zmm0_2)
                    zmm2_2 = _mm_mul_ps(zmm2_2, zmm7)
                    zmm5 = _mm_mul_ps(zmm5, zmm8)
                    zmm0_2 = _mm_shuffle_ps(zmm6, zmm6, 0)
                    zmm3 = _mm_add_ps(zmm3, zmm1_2)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), zmm10)
                    zmm3 = _mm_add_ps(zmm3, zmm5)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm0_2)
                    zmm6 = _mm_mul_ps(zmm6, zmm8)
                    zmm0_2 = _mm_shuffle_ps(zmm4, zmm4, 0)
                    int96_t var_1f8_2 = zmm3[0].12
                    zmm3 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm1_2)
                    zmm3 = _mm_mul_ps(zmm3, zmm7)
                    zmm1_2 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), zmm10)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm2_2 = _mm_add_ps(zmm2_2, zmm6)
                    zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm8)
                    zmm3 = _mm_add_ps(zmm3, zmm0_2)
                    int96_t var_1e8_2 = zmm2_2[0].12
                    int96_t var_1d8_2 = _mm_add_ps(_mm_add_ps(zmm3, zmm1_2), zmm4)[0].12
                    zmm11, zmm12, zmm15 = sub_1407740e0(&var_208, 0x322bcc77)
                    float zmm2_3[0x4] = var_208[0]
                    float zmm1_3 = var_208[1]
                    float zmm4_2[0x4] =
                        _mm_and_ps(_mm_cmpeq_ps(var_198_2, zmm11, 2), data_143f2b8c0 ^ zmm15)
                    uint32_t zmm0_3[0x4] = var_208[2]
                    zmm4_2 ^= data_143f2b8c0
                    zmm2_3[0] = zmm2_3[0] * zmm4_2[0]
                    zmm1_3 = zmm1_3 * zmm4_2[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
                    var_208[0] = zmm2_3[0]
                    var_208[1] = zmm1_3
                    var_208[2] = zmm0_3[0]
                    zmm0_3 = var_1f8_2:8.d
                    zmm2_3 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
                    zmm1_3 = var_1f8_2:4.d * zmm2_3[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm2_3[0]
                    float zmm3_2 = var_1f8_2.d * zmm2_3[0]
                    zmm2_3 = var_1e8_2.d
                    zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
                    var_1f8_2:4.d = zmm1_3
                    var_1f8_2:8.d = zmm0_3[0]
                    zmm0_3 = var_1e8_2:8.d
                    zmm1_3 = var_1e8_2:4.d * zmm4_2[0]
                    zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
                    zmm2_3[0] = zmm2_3[0] * zmm4_2[0]
                    var_1e8_2:4.d = zmm1_3
                    var_1e8_2:8.d = zmm0_3[0]
                    var_1f8_2.d = zmm3_2
                    var_1e8_2.d = zmm2_3[0]
                    uint32_t var_178[0x4]
                    sub_14077e4a0(&var_178, &var_208)
                    zmm5 = var_178
                    zmm6 = data_143f2b8b0
                    float zmm1_4[0x4] = _mm_mul_ps(zmm5, zmm5)
                    var_218 = 0x322bcc77
                    float var_138_2[0x4] = zmm11
                    zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                    zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                    zmm1_4 = _mm_rsqrt_ps(zmm4)
                    zmm3 = _mm_mul_ps(zmm4, zmm6)
                    float zmm2_4[0x4] = _mm_add_ps(
                        _mm_mul_ps(_mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), zmm3)), 
                            zmm1_4), 
                        zmm1_4)
                    zmm6 = _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(zmm2_4, zmm2_4), zmm3))
                    float zmm0_4[0x4] = var_218
                    zmm0_4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), zmm4, 2)
                    zmm6 = _mm_add_ps(_mm_mul_ps(zmm6, zmm2_4), zmm2_4)
                    zmm2_4 = _mm_unpacklo_ps(var_1d8_2:4.d, 0)
                    zmm6 =
                        _mm_and_ps(_mm_mul_ps(zmm6, zmm5) ^ data_143f2b8a0, zmm0_4) ^ data_143f2b8a0
                    float var_148_2[0x4] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps(var_1d8_2.d, var_1d8_2:8.d[0].q), zmm2_4[0].q)
                    var_178 = zmm6
                    var_158 = zmm6
                sub_142253090(*(*(rbx + 0x218) + (r13_1 << 3)), &var_158)
                result = *(rbx + 0x238)
                zmm0 = zmm12
                zmm0[0] = zmm0[0] * zmm12[0]
                zmm1 = _mm_shuffle_ps(zmm12, zmm12, 0x55)
                zmm1[0] = zmm1[0] * zmm1[0]
                zmm12 = _mm_shuffle_ps(zmm12, zmm12, 0xaa)
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm1[0] = zmm1[0] + zmm0[0]
                zmm1[0] = zmm1[0] + zmm12[0]
                *(&result[r13_1 * 8] + 0x2c) = _mm_sqrt_ss(0, zmm1[0])[0]
            r10 = arg4
            r9 = arg2
            arg3 = var_1c0
        
        r12 = &r12[4]
    while (r12 != result_1)

__security_check_cookie(rax_1 ^ &var_238)
return result
