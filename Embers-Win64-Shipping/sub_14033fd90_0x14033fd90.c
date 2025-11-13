// 函数: sub_14033fd90
// 地址: 0x14033fd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm15[0x4]
uint32_t var_58[0x4] = zmm15
uint32_t zmm14[0x4]
uint32_t var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
uint32_t zmm12[0x4]
uint32_t var_88[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
uint32_t zmm9[0x4]
uint32_t var_b8[0x4] = zmm9
float zmm7[0x4]
float var_d8[0x4] = zmm7
uint32_t zmm6[0x4]
uint32_t var_e8[0x4] = zmm6
float zmm8[0x4] = *arg8
uint64_t result = zx.q(arg7)
uint32_t var_200[0x4]
float var_1f8
uint32_t var_190[0x4]
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]
uint32_t zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
uint32_t zmm5[0x4]

if (_mm_movemask_ps(zmm8) != 0xf)
    if (result.d s>= 2)
        uint64_t r13_2 = zx.q(result.d)
        int64_t rsi_2 = 1
        zmm11 = zx.o(0)
        zmm9 = 0x322bcc77
        zmm12 = 0xffffffff
        zmm13 = 0x3f000000
        zmm10 = data_142d3f660
        float var_100_1[0x4] = zmm8
        
        do
            uint64_t rbx_2 = zx.q(*(arg3 + (rsi_2 << 1)))
            uint64_t rax_15 = rbx_2 * 0x30
            *(arg4 + sx.q(rbx_2.d * arg5 + arg6))
            zmm2 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3]
            zmm14 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3 + 1]
            zmm15 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3 + 2]
            zmm0 = *(arg2 + rax_15)
            zmm5 = *(arg2 + rax_15 + 0x10)
            zmm7 = *(arg2 + rax_15 + 0x20)
            zmm1 = _mm_cmpeq_ps(zmm7, zmm11, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(_mm_or_ps(_mm_cmpeq_ps(zmm15, zmm11, 1), zmm1), zmm8))
                    == 0)
                zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm3 = _mm_mul_ps(zmm1, zmm0)
                zmm4 = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm6 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), zmm4), 
                        data_142d3f7c0), 
                    zmm3)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                zmm4 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), zmm3), 
                        data_142d3f7d0), 
                    zmm6)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                zmm0 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), zmm3), 
                        data_142d3f7b0), 
                    zmm4)
                zmm5 = _mm_mul_ps(zmm5, zmm15)
                zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
                zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
                zmm6 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                zmm4 = _mm_sub_ps(_mm_mul_ps(zmm4, zmm3), _mm_mul_ps(zmm6, zmm2))
                zmm4 = _mm_add_ps(zmm4, zmm4)
                zmm1 = _mm_add_ps(_mm_mul_ps(zmm1, zmm4), zmm5)
                zmm5 = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                zmm14 = _mm_add_ps(zmm14, 
                    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm5, zmm3), _mm_mul_ps(zmm4, zmm2)), zmm1))
                zmm15 = _mm_mul_ps(zmm15, zmm7)
            else
                zmm1 = _mm_add_ps(zmm0, zmm0)
                zmm4 = _mm_mul_ps(zmm0, zmm1)
                zmm3 = _mm_shuffle_ps(zmm4, zmm4, 1)
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), zmm3)
                zmm3 = _mm_mul_ps(_mm_sub_ps(data_142d3f670, zmm4), zmm7)
                zmm4 = _mm_shuffle_ps(zmm0, zmm0, 4)
                zmm9 = zx.o(0)
                zmm11 = zmm15
                zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x29), zmm4)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x12), zmm0)
                zmm10 = zmm13
                float temp0_245[0x4] = _mm_mul_ps(_mm_add_ps(zmm15, zmm1), zmm7)
                zmm0 = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
                zmm15 = _mm_mul_ps(_mm_sub_ps(zmm15, zmm1), zmm0)
                zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_245, zmm3, 0), 
                    _mm_shuffle_ps(zmm15, zmm9, 0x3a), 0x82)
                zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm15, 5), 
                    _mm_shuffle_ps(temp0_245, zmm9, 0x35), 0x82)
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, temp0_245, 0xa5), 
                    _mm_shuffle_ps(zmm3, zmm9, 0x3a), 0x82)
                zmm12 = data_142d3f660
                zmm12[0].q = zmm5.q
                uint32_t var_150_2[0x4] =
                    _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm5, zmm12, 0x3a), 0x84)
                uint32_t var_160_2[0x4] = zmm4
                uint32_t var_170_2[0x4] = zmm1
                uint32_t var_180_2[0x4] = zmm0
                zmm1 = _mm_add_ps(zmm2, zmm2)
                zmm4 = _mm_mul_ps(zmm2, zmm1)
                zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xc1)
                zmm4 = _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0xda), zmm0)
                zmm0 = _mm_mul_ps(_mm_sub_ps(data_142d3f670, zmm4), zmm11)
                zmm4 = _mm_shuffle_ps(zmm2, zmm2, 4)
                zmm5 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x29), zmm4)
                zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0x12), zmm2)
                zmm6 = _mm_mul_ps(_mm_add_ps(zmm5, zmm1), zmm11)
                zmm2 = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
                zmm5 = _mm_mul_ps(_mm_sub_ps(zmm5, zmm1), zmm2)
                zmm4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm0, 0), 
                    _mm_shuffle_ps(zmm5, zx.o(0), 0x3a), 0x82)
                zmm2 = _mm_shuffle_ps(zmm0, zmm5, 5)
                zmm5 = _mm_shuffle_ps(zmm5, zmm6, 0xa5)
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm6, zx.o(0), 0x35), 0x82)
                zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm0, zx.o(0), 0x3a), 0x82)
                zmm12[0].q = zmm14.q
                zmm1 = _mm_shuffle_ps(zmm14, zmm12, 0x3a)
                zmm8 = _mm_cmpeq_epi32(zmm8, zx.o(0))
                zmm14 = _mm_shuffle_ps(zmm14, zmm1, 0x84)
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm4)
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), zmm5), zmm3)
                zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_245, temp0_245, 0), zmm2), zmm0)
                zmm12 = _mm_add_ps(_mm_mul_ps(zmm14, zx.o(0)), zmm1)
                zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm4)
                float temp0_304[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_245, temp0_245, 0x55), zmm5), zmm15)
                zmm15 = data_142d3f5e0
                zmm0 = var_170_2[1]
                zmm6 = var_170_2[3]
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2), temp0_304)
                zmm6 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm14), zmm0)
                zmm0 = var_160_2[0]
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4)
                zmm1 = var_160_2[2]
                zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5), zmm0)
                zmm3 = var_160_2[1]
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm2), zmm1)
                zmm0 = var_160_2[3]
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14), zmm3)
                zmm1 = var_150_2[0]
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm4)
                zmm3 = var_150_2[2]
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm5), zmm1)
                zmm1 = var_150_2[1]
                zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm2), zmm3)
                zmm4 = var_150_2[3]
                zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm14), zmm1)
                zmm13 = __mulps_xmmps_memps(zmm11, zmm7)
                zmm7 = zx.o(zmm6[0])
                zmm5 = zmm6
                zmm3 = zmm6
                zmm11 = zx.o(zmm0[0])
                zmm6[0] = zmm7[0]
                zmm1 = zmm0
                int96_t var_1f0_2 = zmm6[0].12
                zmm2 = zmm0
                zmm0[0] = zmm11[0]
                int96_t var_1e0_2 = zmm0[0].12
                zmm6 = _mm_shuffle_ps(zmm12, zmm12, 0xe5)
                int96_t var_1d0_2 = zmm4[0].12
                zmm12[0] = zmm12[0] f* zmm12[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm6[0] = zmm6[0] f+ zmm12[0]
                zmm0 = _mm_unpackhi_pd(zmm12, zmm12[0].q)
                zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
                zmm3[0].q = zmm3 u>> 0x40
                zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
                zmm2[0].q = zmm2 u>> 0x40
                var_200 = zmm12
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm0[0] = zmm0[0] f+ zmm6[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm5[0] = zmm5[0] f+ zmm7[0]
                zmm3[0] = zmm3[0] f* zmm3[0]
                zmm3[0] = zmm3[0] f+ zmm5[0]
                zmm11[0] = zmm11[0] f* zmm11[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm1[0] = zmm1[0] f+ zmm11[0]
                zmm2[0] = zmm2[0] f* zmm2[0]
                zmm2[0] = zmm2[0] f+ zmm1[0]
                zmm1 = zmm0
                zmm1[0] = zmm1[0] f+ -9.99999994e-09f
                zmm4 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
                zmm0[0] = zmm0[0] f* zmm10[0]
                zmm4[0] = zmm4[0] f* zmm4[0]
                zmm4[0] = zmm4[0] f* zmm0[0]
                zmm6 = zmm10
                zmm6[0] = zmm6[0] f- zmm4[0]
                zmm6[0] = zmm6[0] f* zmm4[0]
                zmm6[0] = zmm6[0] f+ zmm4[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm6[0] = zmm6[0] f* zmm0[0]
                zmm0 = zmm10
                zmm0[0] = zmm0[0] f- zmm6[0]
                zmm0[0] = zmm0[0] f* zmm6[0]
                zmm0[0] = zmm0[0] f+ zmm6[0]
                zmm4 = _mm_cmpeq_ss(0, zmm1[0], 2)
                uint32_t temp0_340[0x4] = _mm_and_ps(zmm0, zmm4)
                uint32_t temp0_342[0x4] = _mm_or_ps(_mm_andnot_ps(zmm4, 0x3f800000), temp0_340)
                zmm0 = zmm3
                zmm0[0] = zmm0[0] f+ -9.99999994e-09f
                zmm1 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] f* zmm10[0]
                zmm1[0] = zmm1[0] f* zmm1[0]
                zmm1[0] = zmm1[0] f* zmm3[0]
                zmm6 = zmm10
                zmm6[0] = zmm6[0] f- zmm1[0]
                zmm6[0] = zmm6[0] f* zmm1[0]
                zmm6[0] = zmm6[0] f+ zmm1[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm6[0] = zmm6[0] f* zmm3[0]
                zmm3 = zmm10
                zmm3[0] = zmm3[0] f- zmm6[0]
                zmm3[0] = zmm3[0] f* zmm6[0]
                zmm3[0] = zmm3[0] f+ zmm6[0]
                zmm1 = _mm_cmpeq_ss(0, zmm0[0], 2)
                uint32_t temp0_345[0x4] = _mm_and_ps(zmm3, zmm1)
                uint32_t temp0_347[0x4] = _mm_or_ps(_mm_andnot_ps(zmm1, 0x3f800000), temp0_345)
                zmm2[0] = zmm2[0] f+ -9.99999994e-09f
                zmm3 = _mm_rsqrt_ss(zmm2[0], zmm2[0])
                zmm2[0] = zmm2[0] f* zmm10[0]
                zmm3[0] = zmm3[0] f* zmm3[0]
                zmm3[0] = zmm3[0] f* zmm2[0]
                zmm6 = zmm10
                zmm6[0] = zmm6[0] f- zmm3[0]
                zmm6[0] = zmm6[0] f* zmm3[0]
                zmm6[0] = zmm6[0] f+ zmm3[0]
                zmm6[0] = zmm6[0] f* zmm6[0]
                zmm6[0] = zmm6[0] f* zmm2[0]
                zmm14 = zmm10
                zmm10[0] = zmm10[0] f- zmm6[0]
                zmm10[0] = zmm10[0] f* zmm6[0]
                zmm10[0] = zmm10[0] f+ zmm6[0]
                zmm3 = _mm_cmpeq_ss(0, zmm2[0], 2)
                zmm10 = _mm_and_ps(zmm10, zmm3)
                uint32_t temp0_352[0x4] = _mm_or_ps(_mm_andnot_ps(zmm3, 0x3f800000), zmm10)
                zmm0 = var_200[1]
                zmm0[0] = zmm0[0] f* temp0_342[0]
                zmm2 = var_1f8
                zmm2[0] = zmm2[0] f* temp0_342[0]
                temp0_342[0] = temp0_342[0] f* zmm12[0]
                zmm4 = _mm_unpacklo_ps(temp0_342, zmm0[0].q)[0].q | zmm2[0].q << 0x40
                zmm2 = var_1f0_2.d
                zmm2[0] = zmm2[0] f* temp0_347[0]
                zmm0 = var_1f0_2:4.d
                zmm0[0] = zmm0[0] f* temp0_347[0]
                zmm2 = _mm_unpacklo_ps(zmm2, zmm0[0].q)
                temp0_347[0] = temp0_347[0] f* var_1f0_2:8.d
                zmm2 = zmm2[0].q | temp0_347[0].q << 0x40
                zmm0 = var_1e0_2.d
                zmm0[0] = zmm0[0] f* temp0_352[0]
                zmm1 = var_1e0_2:4.d
                zmm1[0] = zmm1[0] f* temp0_352[0]
                zmm0 = _mm_unpacklo_ps(zmm0, zmm1[0].q)
                temp0_352[0] = temp0_352[0] f* var_1e0_2:8.d
                zmm0 = zmm0[0].q | temp0_352[0].q << 0x40
                float var_110_2[0x4] = zmm13
                zmm1 = _mm_cmpeq_ps(zx.o(0), zmm13, 2)
                uint32_t temp0_357[0x4] = _mm_and_ps(data_142d3f670, zmm1)
                uint32_t temp0_359[0x4] =
                    _mm_or_ps(__andnps_xmmxud_memxud(zmm1, data_142d3f7e0), temp0_357)
                zmm3 = _mm_mul_ps(_mm_shuffle_epi32(temp0_359, 0), zmm4)
                zmm12 = _mm_shuffle_ps(zmm3, zmm3, 0xe5)
                zmm11 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
                var_200[0] = zmm3[0]
                var_200[1] = zmm12[0]
                var_1f8 = zmm11[0]
                zmm5 = _mm_mul_ps(_mm_shuffle_epi32(temp0_359, 0x55), zmm2)
                float temp0_366[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
                zmm2 = _mm_unpackhi_pd(zmm5, zmm5[0].q)
                var_1f0_2.d = zmm5[0]
                var_1f0_2:4.d = temp0_366[0]
                var_1f0_2:8.d = zmm2[0]
                float temp0_369[0x4] = _mm_mul_ps(_mm_shuffle_epi32(temp0_359, 0xaa), zmm0)
                zmm4 = _mm_shuffle_ps(zmm3, _mm_shuffle_ps(0x800000, zmm3, 0x20), 0x24)
                zmm0 = _mm_shuffle_ps(temp0_369, temp0_369, 0xe5)
                zmm10 = data_142d3f770
                char temp0_376 = _mm_movemask_ps(_mm_or_ps(
                    _mm_cmpeq_ps(_mm_and_ps(zmm4, zmm10), zmm15, 2), zmm8))
                zmm4 = _mm_unpackhi_pd(temp0_369, temp0_369[0].q)
                var_1e0_2.d = temp0_369[0]
                var_1e0_2:4.d = zmm0[0]
                var_1e0_2:8.d = zmm4[0]
                
                if (temp0_376 == 0xf)
                label_140340f80:
                    zmm2 = data_142d3f660
                    zmm8 = var_100_1
                    zmm11 = zx.o(0)
                    zmm9 = 0x322bcc77
                    zmm12 = 0xffffffff
                    zmm13 = zmm14
                    zmm10 = data_142d3f660
                else
                    if (_mm_movemask_ps(_mm_or_ps(
                            _mm_cmpeq_ps(
                                _mm_and_ps(
                                    _mm_shuffle_ps(zmm5, _mm_shuffle_ps(0x800000, zmm5, 0x20), 
                                        0x24), 
                                    zmm10), 
                                zmm15, 2), 
                            zmm8)) == 0xf)
                        goto label_140340f80
                    
                    if (_mm_movemask_ps(_mm_or_ps(
                            _mm_cmpeq_ps(
                                _mm_and_ps(
                                    _mm_shuffle_ps(temp0_369, 
                                        _mm_shuffle_ps(0x800000, temp0_369, 0x20), 0x24), 
                                    zmm10), 
                                zmm15, 2), 
                            zmm8)) == 0xf)
                        goto label_140340f80
                    
                    zmm3[0] = zmm3[0] f+ temp0_366[0]
                    zmm3[0] = zmm3[0] f+ zmm4[0]
                    zmm10 = data_142d3f660
                    
                    if (zmm3[0] f<= 0f)
                        temp0_366[0] f- zmm3[0]
                        int64_t r14_2
                        r14_2.b = temp0_366[0] f> zmm3[0]
                        int64_t rax_22 = 0
                        
                        if (temp0_366[0] f> zmm3[0])
                            rax_22 = 0x14
                        
                        if (zmm4[0] f> *(&var_200 + rax_22))
                            r14_2 = 2
                        
                        int64_t r15_2 = sx.q(*(&data_143443234 + (r14_2 << 2)))
                        int64_t rax_23 = sx.q(*(&data_143443234 + (r15_2 << 2)))
                        zmm0 = var_200[zx.q((r14_2 * 5).d)]
                        zmm0[0] = zmm0[0] f- var_200[sx.q((r15_2 * 5).d)]
                        zmm0[0] = zmm0[0] f- var_200[sx.q((rax_23 * 5).d)]
                        zmm0[0] = zmm0[0] f+ 1f
                        zmm1 = _mm_sqrt_ss(0, zmm0[0])
                        zmm0 = 0x3f800000
                        zmm0[0] = 1f f/ zmm1[0]
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f f/ zmm0[0]
                        zmm13 = zmm14
                        zmm0[0] = zmm0[0] f* zmm14[0]
                        zmm1[0] = zmm1[0] f* zmm14[0]
                        var_190[r14_2] = zmm1[0]
                        zmm1 = var_200[sx.q((r15_2 + (r14_2 << 2)).d)]
                        zmm1[0] = zmm1[0] f+ var_200[sx.q((r14_2 + (r15_2 << 2)).d)]
                        zmm1[0] = zmm1[0] f* zmm0[0]
                        var_190[r15_2] = zmm1[0]
                        zmm1 = var_200[sx.q((rax_23 + (r14_2 << 2)).d)]
                        zmm1[0] = zmm1[0] f+ var_200[sx.q((r14_2 + (rax_23 << 2)).d)]
                        zmm1[0] = zmm1[0] f* zmm0[0]
                        zmm2 = var_200[sx.q((rax_23 + (r15_2 << 2)).d)]
                        zmm2[0] = zmm2[0] f- var_200[sx.q((r15_2 + (rax_23 << 2)).d)]
                        var_190[rax_23] = zmm1[0]
                        zmm2[0] = zmm2[0] f* zmm0[0]
                        uint32_t var_184_2 = zmm2[0]
                        zmm2 = var_190
                    else
                        zmm3[0] = zmm3[0] f+ 1f
                        zmm1 = _mm_sqrt_ss(0, zmm3[0])
                        zmm3 = 0x3f800000
                        zmm3[0] = 1f f/ zmm1[0]
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f f/ zmm3[0]
                        zmm13 = zmm14
                        zmm3[0] = zmm3[0] f* zmm14[0]
                        zmm2[0] = zmm2[0] f- zmm0[0]
                        zmm2[0] = zmm2[0] f* zmm3[0]
                        temp0_369[0] = temp0_369[0] f- zmm11[0]
                        temp0_369[0] = temp0_369[0] f* zmm3[0]
                        zmm2 = _mm_unpacklo_ps(zmm2, temp0_369[0].q)
                        zmm12[0] = zmm12[0] f- zmm5[0]
                        zmm12[0] = zmm12[0] f* zmm3[0]
                        zmm1[0] = zmm1[0] f* zmm14[0]
                        zmm12 = _mm_unpacklo_ps(zmm12, zmm1[0].q)
                        zmm2 = zmm2[0].q | zmm12[0].q << 0x40
                    
                    zmm8 = var_100_1
                    zmm11 = zx.o(0)
                    zmm9 = 0x322bcc77
                    zmm12 = 0xffffffff
                
                zmm15 = var_110_2
                zmm0 = _mm_mul_ps(zmm2, zmm2)
                zmm1 = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
                zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
                zmm3[0] = zmm3[0] f+ zmm1[0]
                uint32_t temp0_435[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(zmm9[0], zmm3[0], 6), zmm12)
                zmm1 = zmm3
                zmm1[0] = zmm1[0] f* zmm13[0]
                zmm3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                zmm3[0] = zmm3[0] f* zmm3[0]
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm5 = zmm13
                zmm5[0] = zmm5[0] f- zmm3[0]
                zmm5[0] = zmm5[0] f* zmm3[0]
                zmm5[0] = zmm5[0] f+ zmm3[0]
                zmm5[0] = zmm5[0] f* zmm5[0]
                zmm5[0] = zmm5[0] f* zmm1[0]
                zmm1 = zmm13
                zmm1[0] = zmm1[0] f- zmm5[0]
                zmm1[0] = zmm1[0] f* zmm5[0]
                zmm1[0] = zmm1[0] f+ zmm5[0]
                zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm2)
                zmm0 = _mm_shuffle_ps(temp0_435, temp0_435, 0)
                uint32_t temp0_440[0x4] = _mm_and_ps(zmm1, zmm0)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm10), temp0_440)
                zmm14 = zx.o(var_1d0_2.q)[0].q | var_1d0_2:8.d[0].q << 0x40
            
            zmm1 = _mm_mul_ps(zmm0, zmm0)
            zmm2 = _mm_add_ps(_mm_unpackhi_pd(zmm1, zmm1[0].q), zmm1)
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
            zmm3[0] = zmm3[0] f+ zmm2[0]
            uint32_t temp0_448[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(zmm9[0], zmm3[0], 6), zmm12)
            zmm2 = zmm3
            zmm2[0] = zmm2[0] f* zmm13[0]
            zmm3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm5 = zmm13
            zmm5[0] = zmm5[0] f- zmm3[0]
            zmm5[0] = zmm5[0] f* zmm3[0]
            zmm5[0] = zmm5[0] f+ zmm3[0]
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm5[0] = zmm5[0] f* zmm2[0]
            zmm2 = zmm13
            zmm2[0] = zmm2[0] f- zmm5[0]
            zmm2[0] = zmm2[0] f* zmm5[0]
            zmm2[0] = zmm2[0] f+ zmm5[0]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm0)
            zmm1 = _mm_shuffle_ps(temp0_448, temp0_448, 0)
            uint32_t temp0_453[0x4] = _mm_and_ps(zmm2, zmm1)
            arg1[rbx_2 * 3] = _mm_or_ps(_mm_andnot_ps(zmm1, zmm10), temp0_453)
            result = rbx_2 * 0x30
            *(arg1 + result + 0x10) = zmm14
            *(arg1 + result + 0x20) = zmm15
            rsi_2 += 1
        while (r13_2 != rsi_2)
else if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    zmm7 = zx.o(0)
    zmm11 = 0x322bcc77
    zmm14 = 0xffffffff
    zmm12 = 0x3f000000
    zmm6 = data_142d3f660
    zmm15 = data_142d3f5e0
    
    do
        uint64_t rbx_1 = zx.q(*(arg3 + (rsi_1 << 1)))
        uint64_t rax_5 = rbx_1 * 0x30
        *(arg4 + sx.q(rbx_1.d * arg5 + arg6))
        zmm5 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3]
        zmm10 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 1]
        zmm9 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 2]
        zmm4 = *(arg2 + rax_5)
        zmm13 = *(arg2 + rax_5 + 0x10)
        zmm8 = *(arg2 + rax_5 + 0x20)
        zmm0 = _mm_cmpeq_ps(zmm8, zmm7, 1)
        
        if (_mm_movemask_ps(_mm_or_ps(_mm_cmpeq_ps(zmm9, zmm7, 1), zmm0)) == 0)
            zmm0 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            zmm1 = _mm_mul_ps(zmm0, zmm4)
            zmm2 = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm3 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), zmm2), 
                    data_142d3f7c0), 
                zmm1)
            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            zmm2 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), zmm1), 
                    data_142d3f7d0), 
                zmm3)
            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), zmm1), 
                    data_142d3f7b0), 
                zmm2)
            float temp0_194[0x4] = _mm_mul_ps(zmm13, zmm9)
            zmm1 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            zmm2 = _mm_shuffle_ps(temp0_194, temp0_194, 0xd2)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            zmm3 = _mm_shuffle_ps(temp0_194, temp0_194, 0xc9)
            zmm2 = _mm_sub_ps(_mm_mul_ps(zmm2, zmm1), _mm_mul_ps(zmm3, zmm5))
            zmm2 = _mm_add_ps(zmm2, zmm2)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm2), temp0_194)
            zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0xd2)
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xc9)
            zmm10 = _mm_add_ps(zmm10, 
                _mm_add_ps(_mm_sub_ps(_mm_mul_ps(zmm3, zmm1), _mm_mul_ps(zmm2, zmm5)), zmm0))
            zmm9 = _mm_mul_ps(zmm9, zmm8)
        else
            zmm0 = _mm_add_ps(zmm4, zmm4)
            zmm2 = _mm_mul_ps(zmm4, zmm0)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 1)
            zmm2 = _mm_add_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1a), zmm1)
            zmm1 = data_142d3f670
            zmm14 = zmm1
            zmm1 = _mm_mul_ps(_mm_sub_ps(zmm1, zmm2), zmm8)
            zmm2 = _mm_shuffle_ps(zmm4, zmm4, 4)
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x29), zmm2)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x12), zmm4)
            zmm4 = _mm_mul_ps(_mm_add_ps(zmm11, zmm0), zmm8)
            zmm2 = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            zmm11 = _mm_mul_ps(_mm_sub_ps(zmm11, zmm0), zmm2)
            zmm0 = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm1, 0), _mm_shuffle_ps(zmm11, zmm7, 0x3a), 
                0x82)
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm1, zmm11, 5), _mm_shuffle_ps(zmm4, zmm7, 0x35), 
                0x82)
            zmm3 = _mm_shuffle_ps(_mm_shuffle_ps(zmm11, zmm4, 0xa5), 
                _mm_shuffle_ps(zmm1, zmm7, 0x3a), 0x82)
            zmm12 = zmm15
            zmm15 = data_142d3f660
            zmm15[0].q = zmm13.q
            float temp0_34[0x4] = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm13, zmm15, 0x3a), 0x84)
            uint32_t var_160_1[0x4] = zmm3
            uint32_t var_170_1[0x4] = zmm2
            uint32_t var_180_1[0x4] = zmm0
            zmm2 = _mm_add_ps(zmm5, zmm5)
            zmm3 = _mm_mul_ps(zmm5, zmm2)
            zmm0 = _mm_shuffle_ps(zmm3, zmm3, 0xc1)
            zmm0 = _mm_mul_ps(
                _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0xda), zmm0)), zmm9)
            zmm3 = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x29), zmm3)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x12), zmm5)
            zmm3 = _mm_mul_ps(_mm_add_ps(temp0_44, zmm2), zmm9)
            zmm5 = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
            float temp0_52[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_44, zmm2), zmm5)
            zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, zmm0, 0), 
                _mm_shuffle_ps(temp0_52, zx.o(0), 0x3a), 0x82)
            zmm5 = _mm_shuffle_ps(zmm0, temp0_52, 5)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_52, zmm3, 0xa5)
            zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm3, zx.o(0), 0x35), 0x82)
            float temp0_61[0x4] =
                _mm_shuffle_ps(temp0_57, _mm_shuffle_ps(zmm0, zx.o(0), 0x3a), 0x82)
            zmm0 = zmm15
            zmm15 = zmm12
            zmm12 = 0x3f000000
            zmm0[0].q = zmm10.q
            float temp0_63[0x4] = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm10, zmm0, 0x3a), 0x84)
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm14)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), temp0_61), zmm1)
            zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm5), zmm0)
            float temp0_73[0x4] = _mm_add_ps(_mm_mul_ps(temp0_63, zx.o(0)), zmm1)
            zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm14)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_61), zmm11)
            zmm0 = var_170_1[1]
            zmm1 = var_170_1[3]
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm5), zmm4)
            zmm1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_63), zmm0)
            zmm0 = var_160_1[0]
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
            zmm2 = var_160_1[2]
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_61), zmm0)
            zmm3 = var_160_1[1]
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm5), zmm2)
            zmm0 = var_160_1[3]
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_63), zmm3)
            zmm2 = temp0_34[0]
            zmm2 = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14)
            zmm3 = temp0_34[2]
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_61), zmm2)
            zmm2 = temp0_34[1]
            zmm2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm5), zmm3)
            zmm7 = temp0_34[3]
            float temp0_106[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_63), zmm2)
            zmm9 = _mm_mul_ps(zmm9, zmm8)
            zmm6 = zx.o(zmm1[0])
            zmm5 = zmm1
            zmm4 = zmm1
            zmm8 = zx.o(zmm0[0])
            zmm1[0] = zmm6[0]
            zmm2 = zmm0
            int96_t var_1f0_1 = zmm1[0].12
            zmm1 = zmm0
            zmm0[0] = zmm8[0]
            int96_t var_1e0_1 = zmm0[0].12
            zmm3 = _mm_shuffle_ps(temp0_73, temp0_73, 0xe5)
            int96_t var_1d0_1 = temp0_106[0].12
            zmm0 = temp0_73
            zmm0[0] = zmm0[0] f* temp0_73[0]
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f+ zmm0[0]
            zmm0 = _mm_unpackhi_pd(temp0_73, temp0_73[0].q)
            zmm5 = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
            zmm4[0].q = zmm4 u>> 0x40
            zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0xe5)
            zmm1[0].q = zmm1 u>> 0x40
            var_200 = temp0_73
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f+ zmm3[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm5[0] = zmm5[0] f* zmm5[0]
            zmm5[0] = zmm5[0] f+ zmm6[0]
            zmm4[0] = zmm4[0] f* zmm4[0]
            zmm4[0] = zmm4[0] f+ zmm5[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm2[0] = zmm2[0] f* zmm2[0]
            zmm2[0] = zmm2[0] f+ zmm8[0]
            zmm1[0] = zmm1[0] f* zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm2[0]
            zmm2 = zmm0
            zmm2[0] = zmm2[0] f+ -9.99999994e-09f
            zmm3 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] f* 0.5f
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f* zmm0[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f f- zmm3[0]
            zmm6[0] = zmm6[0] f* zmm3[0]
            zmm6[0] = zmm6[0] f+ zmm3[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm6[0] = zmm6[0] f* zmm0[0]
            zmm0 = 0x3f000000
            zmm0[0] = 0.5f f- zmm6[0]
            zmm0[0] = zmm0[0] f* zmm6[0]
            zmm0[0] = zmm0[0] f+ zmm6[0]
            zmm3 = _mm_cmpeq_ss(0, zmm2[0], 2)
            uint32_t temp0_114[0x4] = _mm_and_ps(zmm0, zmm3)
            uint32_t temp0_116[0x4] = _mm_or_ps(_mm_andnot_ps(zmm3, 0x3f800000), temp0_114)
            zmm2 = zmm4
            zmm2[0] = zmm2[0] f+ -9.99999994e-09f
            zmm0 = _mm_rsqrt_ss(zmm4[0], zmm4[0])
            zmm4[0] = zmm4[0] f* 0.5f
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f* zmm4[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f f- zmm0[0]
            zmm6[0] = zmm6[0] f* zmm0[0]
            zmm6[0] = zmm6[0] f+ zmm0[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm6[0] = zmm6[0] f* zmm4[0]
            zmm4 = 0x3f000000
            zmm4[0] = 0.5f f- zmm6[0]
            zmm4[0] = zmm4[0] f* zmm6[0]
            zmm4[0] = zmm4[0] f+ zmm6[0]
            zmm0 = _mm_cmpeq_ss(0, zmm2[0], 2)
            uint32_t temp0_119[0x4] = _mm_and_ps(zmm4, zmm0)
            uint32_t temp0_121[0x4] = _mm_or_ps(_mm_andnot_ps(zmm0, 0x3f800000), temp0_119)
            zmm1[0] = zmm1[0] f+ -9.99999994e-09f
            zmm4 = _mm_rsqrt_ss(zmm1[0], zmm1[0])
            zmm1[0] = zmm1[0] f* 0.5f
            zmm4[0] = zmm4[0] f* zmm4[0]
            zmm4[0] = zmm4[0] f* zmm1[0]
            zmm6 = 0x3f000000
            zmm6[0] = 0.5f f- zmm4[0]
            zmm6[0] = zmm6[0] f* zmm4[0]
            zmm6[0] = zmm6[0] f+ zmm4[0]
            zmm6[0] = zmm6[0] f* zmm6[0]
            zmm6[0] = zmm6[0] f* zmm1[0]
            zmm5 = 0x3f000000
            zmm5[0] = 0.5f f- zmm6[0]
            zmm5[0] = zmm5[0] f* zmm6[0]
            zmm5[0] = zmm5[0] f+ zmm6[0]
            zmm1 = _mm_cmpeq_ss(0, zmm1[0], 2)
            uint32_t temp0_124[0x4] = _mm_and_ps(zmm5, zmm1)
            uint32_t temp0_126[0x4] = _mm_or_ps(_mm_andnot_ps(zmm1, 0x3f800000), temp0_124)
            zmm2 = var_200[1]
            zmm2[0] = zmm2[0] f* temp0_116[0]
            zmm4 = var_1f8
            zmm4[0] = zmm4[0] f* temp0_116[0]
            temp0_116[0] = temp0_116[0] f* temp0_73[0]
            zmm3 = _mm_unpacklo_ps(temp0_116, zmm2[0].q)[0].q | zmm4[0].q << 0x40
            zmm2 = var_1f0_1.d
            zmm2[0] = zmm2[0] f* temp0_121[0]
            zmm4 = var_1f0_1:4.d
            zmm4[0] = zmm4[0] f* temp0_121[0]
            zmm2 = _mm_unpacklo_ps(zmm2, zmm4[0].q)
            temp0_121[0] = temp0_121[0] f* var_1f0_1:8.d
            zmm2 = zmm2[0].q | temp0_121[0].q << 0x40
            zmm6 = var_1e0_1.d
            zmm6[0] = zmm6[0] f* temp0_126[0]
            zmm0 = var_1e0_1:4.d
            zmm0[0] = zmm0[0] f* temp0_126[0]
            zmm6 = _mm_unpacklo_ps(zmm6, zmm0[0].q)
            temp0_126[0] = temp0_126[0] f* var_1e0_1:8.d
            zmm6 = zmm6[0].q | temp0_126[0].q << 0x40
            float temp0_130[0x4] = _mm_cmpeq_ps(zx.o(0), zmm9, 2)
            uint32_t temp0_131[0x4] = _mm_and_ps(data_142d3f670, temp0_130)
            zmm7 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_130, data_142d3f7e0), temp0_131)
            zmm1 = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0), zmm3)
            float temp0_136[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
            zmm8 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
            var_200[0] = zmm1[0]
            var_200[1] = temp0_136[0]
            var_1f8 = zmm8[0]
            zmm4 = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0x55), zmm2)
            zmm11 = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
            zmm5 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
            var_1f0_1.d = zmm4[0]
            var_1f0_1:4.d = zmm11[0]
            var_1f0_1:8.d = zmm5[0]
            zmm0 = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xaa), zmm6)
            float temp0_145[0x4] = _mm_shuffle_ps(zmm1, _mm_shuffle_ps(0x800000, zmm1, 0x20), 0x24)
            zmm6 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
            zmm14 = data_142d3f770
            char temp0_149 = _mm_movemask_ps(_mm_cmpeq_ps(_mm_and_ps(temp0_145, zmm14), zmm15, 2))
            zmm7 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            var_1e0_1.d = zmm0[0]
            var_1e0_1:4.d = zmm6[0]
            var_1e0_1:8.d = zmm7[0]
            
            if (temp0_149 == 0xf)
                zmm5 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(_mm_shuffle_ps(zmm4, _mm_shuffle_ps(0x800000, zmm4, 0x20), 0x24), 
                        zmm14), 
                    zmm15, 2)) == 0xf)
                zmm5 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(_mm_shuffle_ps(zmm0, _mm_shuffle_ps(0x800000, zmm0, 0x20), 0x24), 
                        zmm14), 
                    zmm15, 2)) == 0xf)
                zmm5 = data_142d3f660
            else
                zmm1[0] = zmm1[0] f+ zmm11[0]
                zmm1[0] = zmm1[0] f+ zmm7[0]
                
                if (zmm1[0] f<= 0f)
                    zmm11[0] f- zmm1[0]
                    int64_t r14_1
                    r14_1.b = zmm11[0] f> zmm1[0]
                    int64_t rax_1 = 0
                    
                    if (zmm11[0] f> zmm1[0])
                        rax_1 = 0x14
                    
                    if (zmm7[0] f> *(&var_200 + rax_1))
                        r14_1 = 2
                    
                    int64_t r15_1 = sx.q(*(&data_143443234 + (r14_1 << 2)))
                    int64_t rax_2 = sx.q(*(&data_143443234 + (r15_1 << 2)))
                    zmm0 = var_200[zx.q((r14_1 * 5).d)]
                    zmm0[0] = zmm0[0] f- var_200[sx.q((r15_1 * 5).d)]
                    zmm0[0] = zmm0[0] f- var_200[sx.q((rax_2 * 5).d)]
                    zmm0[0] = zmm0[0] f+ 1f
                    zmm1 = _mm_sqrt_ss(zmm1[0], zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f f/ zmm1[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f f/ zmm0[0]
                    zmm0[0] = zmm0[0] f* 0.5f
                    zmm1[0] = zmm1[0] f* 0.5f
                    var_190[r14_1] = zmm1[0]
                    zmm1 = var_200[sx.q((r15_1 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] f+ var_200[sx.q((r14_1 + (r15_1 << 2)).d)]
                    zmm1[0] = zmm1[0] f* zmm0[0]
                    var_190[r15_1] = zmm1[0]
                    zmm1 = var_200[sx.q((rax_2 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] f+ var_200[sx.q((r14_1 + (rax_2 << 2)).d)]
                    zmm1[0] = zmm1[0] f* zmm0[0]
                    zmm2 = var_200[sx.q((rax_2 + (r15_1 << 2)).d)]
                    zmm2[0] = zmm2[0] f- var_200[sx.q((r15_1 + (rax_2 << 2)).d)]
                    var_190[rax_2] = zmm1[0]
                    zmm2[0] = zmm2[0] f* zmm0[0]
                    uint32_t var_184_1 = zmm2[0]
                    zmm5 = var_190
                else
                    zmm1[0] = zmm1[0] f+ 1f
                    zmm2 = 0x3f800000
                    zmm2[0] = 1f f/ _mm_sqrt_ss(0, zmm1[0])[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f f/ zmm2[0]
                    zmm2[0] = zmm2[0] f* 0.5f
                    zmm5[0] = zmm5[0] f- zmm6[0]
                    zmm5[0] = zmm5[0] f* zmm2[0]
                    zmm0[0] = zmm0[0] f- zmm8[0]
                    zmm0[0] = zmm0[0] f* zmm2[0]
                    zmm5 = _mm_unpacklo_ps(zmm5, zmm0[0].q)
                    temp0_136[0] = temp0_136[0] f- zmm4[0]
                    temp0_136[0] = temp0_136[0] f* zmm2[0]
                    zmm1[0] = zmm1[0] f* 0.5f
                    float temp0_163[0x4] = _mm_unpacklo_ps(temp0_136, zmm1[0].q)
                    zmm5 = zmm5[0].q | temp0_163[0].q << 0x40
            
            zmm11 = 0x322bcc77
            zmm14 = 0xffffffff
            zmm6 = data_142d3f660
            zmm7 = zx.o(0)
            zmm0 = _mm_mul_ps(zmm5, zmm5)
            zmm1 = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
            zmm0[0] = zmm0[0] f+ zmm1[0]
            uint32_t temp0_169[0x4] =
                _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, zmm0[0], 6), 0xffffffff)
            zmm1 = zmm0
            zmm1[0] = zmm1[0] f* 0.5f
            zmm0 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f* zmm1[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f f- zmm0[0]
            zmm3[0] = zmm3[0] f* zmm0[0]
            zmm3[0] = zmm3[0] f+ zmm0[0]
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f* zmm1[0]
            zmm1 = 0x3f000000
            zmm1[0] = 0.5f f- zmm3[0]
            zmm1[0] = zmm1[0] f* zmm3[0]
            zmm1[0] = zmm1[0] f+ zmm3[0]
            zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5)
            zmm4 = _mm_shuffle_ps(temp0_169, temp0_169, 0)
            uint32_t temp0_174[0x4] = _mm_and_ps(zmm1, zmm4)
            zmm4 = _mm_or_ps(_mm_andnot_ps(zmm4, zmm6), temp0_174)
            zmm10 = zx.o(var_1d0_1.q)[0].q | var_1d0_1:8.d[0].q << 0x40
        
        zmm0 = _mm_mul_ps(zmm4, zmm4)
        zmm1 = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
        zmm2 = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
        zmm2[0] = zmm2[0] f+ zmm1[0]
        uint32_t temp0_218[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(zmm11[0], zmm2[0], 6), zmm14)
        zmm1 = zmm2
        zmm1[0] = zmm1[0] f* zmm12[0]
        zmm2 = _mm_rsqrt_ss(zmm2[0], zmm2[0])
        zmm2[0] = zmm2[0] f* zmm2[0]
        zmm2[0] = zmm2[0] f* zmm1[0]
        zmm12[0] = zmm12[0] f- zmm2[0]
        zmm12[0] = zmm12[0] f* zmm2[0]
        zmm12[0] = zmm12[0] f+ zmm2[0]
        zmm12[0] = zmm12[0] f* zmm12[0]
        zmm12[0] = zmm12[0] f* zmm1[0]
        zmm12[0] = zmm12[0] f- zmm12[0]
        zmm12[0] = zmm12[0] f* zmm12[0]
        zmm12[0] = zmm12[0] f+ zmm12[0]
        zmm1 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4)
        zmm0 = _mm_shuffle_ps(temp0_218, temp0_218, 0)
        uint32_t temp0_223[0x4] = _mm_and_ps(zmm1, zmm0)
        arg1[rbx_1 * 3] = _mm_or_ps(_mm_andnot_ps(zmm0, zmm6), temp0_223)
        result = rbx_1 * 0x30
        *(arg1 + result + 0x10) = zmm10
        *(arg1 + result + 0x20) = zmm9
        rsi_1 += 1
    while (r13_1 != rsi_1)
return result
