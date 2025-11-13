// 函数: sub_14033dec0
// 地址: 0x14033dec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm15[0x4]
uint32_t var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
uint32_t zmm11[0x4]
uint32_t var_98[0x4] = zmm11
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
float zmm10[0x4] = *arg8
uint64_t result = zx.q(arg7)
float var_1c0[0x4]
uint32_t var_1b8
float var_150[0x4]
uint32_t zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
uint32_t zmm4[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(zmm10) != 0xf)
    if (result.d s>= 2)
        uint64_t r13_2 = zx.q(result.d)
        int64_t rsi_2 = 1
        zmm15 = zx.o(0)
        zmm8 = 0x322bcc77
        zmm7 = 0xffffffff
        zmm12 = 0x3f000000
        zmm11 = data_142d3f660
        float var_100_1[0x4] = zmm10
        
        do
            uint64_t rbx_2 = zx.q(*(arg3 + (rsi_2 << 1)))
            uint64_t rax_17 = rbx_2 * 0x30
            *(arg4 + sx.q(rbx_2.d * arg5 + arg6))
            zmm6 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3]
            zmm14 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3 + 1]
            zmm9 = arg1[sx.q(*(arg4 + sx.q(rbx_2.d * arg5 + arg6))) * 3 + 2]
            zmm0 = *(arg2 + rax_17)
            zmm5 = *(arg2 + rax_17 + 0x10)
            zmm13 = *(arg2 + rax_17 + 0x20)
            float temp0_223[0x4] = _mm_cmpeq_ps(zmm13, zmm15, 1)
            
            if (_mm_movemask_ps(_mm_and_ps(_mm_or_ps(_mm_cmpeq_ps(zmm9, zmm15, 1), temp0_223), 
                    zmm10)) == 0)
                float temp0_399[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_400[0x4] = _mm_mul_ps(temp0_399, zmm0)
                zmm3 = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm4 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), zmm3), 
                        data_142d3f7c0), 
                    temp0_400)
                float temp0_406[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                zmm3 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_406), 
                        data_142d3f7d0), 
                    zmm4)
                float temp0_411[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                zmm0 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_411), 
                        data_142d3f7b0), 
                    zmm3)
                float temp0_416[0x4] = _mm_mul_ps(zmm5, zmm9)
                float temp0_417[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                zmm3 = _mm_shuffle_ps(temp0_416, temp0_416, 0xd2)
                float temp0_419[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                zmm4 = _mm_shuffle_ps(temp0_416, temp0_416, 0xc9)
                zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, temp0_417), _mm_mul_ps(zmm4, temp0_419))
                zmm3 = _mm_add_ps(zmm3, zmm3)
                float temp0_426[0x4] = _mm_add_ps(_mm_mul_ps(temp0_399, zmm3), temp0_416)
                zmm4 = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                zmm14 = _mm_add_ps(zmm14, 
                    _mm_add_ps(
                        _mm_sub_ps(_mm_mul_ps(zmm4, temp0_417), _mm_mul_ps(zmm3, temp0_419)), 
                        temp0_426))
                zmm9 = _mm_mul_ps(zmm9, zmm13)
            else
                float temp0_228[0x4] = _mm_add_ps(zmm0, zmm0)
                float temp0_229[0x4] = _mm_mul_ps(zmm0, temp0_228)
                zmm3 = _mm_shuffle_ps(temp0_229, temp0_229, 1)
                float temp0_232[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0x1a), zmm3)
                zmm3 = data_142d3f670
                zmm4 = _mm_mul_ps(_mm_sub_ps(zmm3, temp0_232), zmm13)
                float temp0_235[0x4] = _mm_shuffle_ps(zmm0, zmm0, 4)
                zmm8 = zmm11
                zmm11 = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0x29), temp0_235)
                zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0x12), zmm0)
                float temp0_242[0x4] = _mm_mul_ps(_mm_add_ps(zmm11, temp0_240), zmm13)
                zmm0 = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                zmm11 = _mm_mul_ps(_mm_sub_ps(zmm11, temp0_240), zmm0)
                zmm0 = _mm_blend_ps(_mm_insert_ps(zmm4, temp0_242, 0x1c), zmm11, 4)
                float temp0_249[0x4] =
                    _mm_insert_ps(_mm_insert_ps(zmm11, zmm4, 0x5c), temp0_242, 0x68)
                float temp0_251[0x4] = _mm_blend_ps(_mm_insert_ps(zmm11, temp0_242, 0x8c), zmm4, 4)
                float temp0_252[0x4] = _mm_blend_ps(zmm5, zmm8, 8)
                uint32_t var_140_2[0x4] = zmm0
                float temp0_253[0x4] = _mm_add_ps(zmm6, zmm6)
                float temp0_254[0x4] = _mm_mul_ps(zmm6, temp0_253)
                zmm0 = _mm_shuffle_ps(temp0_254, temp0_254, 0xc1)
                zmm0 = _mm_mul_ps(
                    _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_254, temp0_254, 0xda), zmm0)), 
                    zmm9)
                float temp0_260[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
                float temp0_262[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_253, temp0_253, 0x29), temp0_260)
                float temp0_263[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_265[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_253, temp0_253, 0x12), temp0_263)
                float temp0_267[0x4] = _mm_mul_ps(_mm_add_ps(temp0_262, temp0_265), zmm9)
                zmm3 = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                float temp0_270[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_262, temp0_265), zmm3)
                zmm3 = _mm_blend_ps(_mm_insert_ps(zmm0, temp0_267, 0x1c), temp0_270, 4)
                float temp0_274[0x4] =
                    _mm_insert_ps(_mm_insert_ps(temp0_270, zmm0, 0x5c), temp0_267, 0x68)
                float temp0_275[0x4] = _mm_insert_ps(temp0_270, temp0_267, 0x8c)
                zmm10 = _mm_cmpeq_epi32(zmm10, zmm15)
                float temp0_277[0x4] = _mm_blend_ps(temp0_275, zmm0, 4)
                float temp0_278[0x4] = _mm_blend_ps(zmm14, zmm8, 8)
                zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm3)
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xaa), temp0_277), zmm4)
                float temp0_286[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_242, temp0_242, 0), temp0_274), zmm0)
                float temp0_288[0x4] = _mm_add_ps(_mm_mul_ps(temp0_278, zmm15), temp0_286)
                zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm3)
                float temp0_293[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_242, temp0_242, 0x55), temp0_277), zmm11)
                zmm0 = temp0_249[1]
                zmm2 = temp0_249[3]
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_274), temp0_293)
                float temp0_299[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_278), zmm0)
                zmm0 = temp0_251[0]
                zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm3)
                zmm1 = temp0_251[2]
                float temp0_304[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_277), zmm0)
                zmm4 = temp0_251[1]
                zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_274), temp0_304)
                zmm0 = temp0_251[3]
                zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_278), zmm4)
                zmm1 = temp0_252[0]
                float temp0_312[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm3)
                zmm3 = temp0_252[2]
                zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_277), temp0_312)
                zmm1 = temp0_252[1]
                float temp0_318[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_274), zmm3)
                zmm7 = temp0_252[3]
                float temp0_321[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_278), temp0_318)
                zmm9 = _mm_mul_ps(zmm9, zmm13)
                zmm3 = zx.o(_mm_extract_ps(temp0_299, 0))
                float temp0_324[0x4] = _mm_movehdup_ps(temp0_299)
                zmm4 = temp0_299
                zmm11 = zx.o(_mm_extract_ps(zmm0, 0))
                float temp0_326[0x4] = _mm_blend_ps(temp0_299, zmm3, 1)
                float temp0_327[0x4] = _mm_movehdup_ps(zmm0)
                int96_t var_1b0_2 = temp0_326[0].12
                zmm5 = zmm0
                int96_t var_1a0_2 = _mm_blend_ps(zmm0, zmm11, 1)[0].12
                float temp0_329[0x4] = _mm_movehdup_ps(temp0_288)
                int96_t var_190_2 = temp0_321[0].12
                zmm0 = temp0_288
                zmm0[0] = zmm0[0] f* temp0_288[0]
                temp0_329[0] = temp0_329[0] * temp0_329[0]
                temp0_329[0] = temp0_329[0] f+ zmm0[0]
                zmm0 = _mm_unpackhi_pd(temp0_288, temp0_288[0].q)
                zmm4[0].q = zmm4 u>> 0x40
                zmm5[0].q = zmm5 u>> 0x40
                var_1c0 = temp0_288
                zmm0[0] = zmm0[0] f* zmm0[0]
                zmm0[0] = zmm0[0] f+ temp0_329[0]
                zmm3[0] = zmm3[0] f* zmm3[0]
                temp0_324[0] = temp0_324[0] * temp0_324[0]
                temp0_324[0] = temp0_324[0] f+ zmm3[0]
                zmm4[0] = zmm4[0] f* zmm4[0]
                zmm4[0] = zmm4[0] f+ temp0_324[0]
                zmm11[0] = zmm11[0] f* zmm11[0]
                temp0_327[0] = temp0_327[0] * temp0_327[0]
                temp0_327[0] = temp0_327[0] f+ zmm11[0]
                zmm5[0] = zmm5[0] * zmm5[0]
                zmm5[0] = zmm5[0] + temp0_327[0]
                zmm1 = zmm0
                zmm1[0] = zmm1[0] + -9.99999994e-09f
                float temp0_331[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0[0])
                zmm0[0] = zmm0[0] f* zmm12[0]
                zmm3 = temp0_331
                zmm3[0] = zmm3[0] f* temp0_331[0]
                zmm3[0] = zmm3[0] f* zmm0[0]
                zmm12[0] = zmm12[0] f- zmm3[0]
                zmm12[0] = zmm12[0] * temp0_331[0]
                zmm12[0] = zmm12[0] + temp0_331[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm12[0] = zmm12[0] f* zmm0[0]
                zmm0 = zmm12
                zmm0[0] = zmm0[0] f- zmm12[0]
                zmm0[0] = zmm0[0] f* zmm12[0]
                zmm0[0] = zmm0[0] f+ zmm12[0]
                zmm3 = _mm_cmpeq_ss(0, zmm1[0], 2)
                uint32_t temp0_333[0x4] = _mm_and_ps(zmm0, zmm3)
                uint32_t temp0_335[0x4] = _mm_or_ps(_mm_andnot_ps(zmm3, 0x3f800000), temp0_333)
                zmm1 = zmm4
                zmm1[0] = zmm1[0] + -9.99999994e-09f
                zmm0 = _mm_rsqrt_ss(zmm4[0], zmm4[0])
                zmm4[0] = zmm4[0] f* zmm12[0]
                zmm2 = zmm0
                zmm2[0] = zmm2[0] f* zmm0[0]
                zmm2[0] = zmm2[0] f* zmm4[0]
                zmm12[0] = zmm12[0] - zmm2[0]
                zmm12[0] = zmm12[0] f* zmm0[0]
                zmm12[0] = zmm12[0] f+ zmm0[0]
                zmm0 = zmm12
                zmm0[0] = zmm0[0] f* zmm12[0]
                zmm0[0] = zmm0[0] f* zmm4[0]
                zmm12[0] = zmm12[0] f- zmm0[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm12[0] = zmm12[0] + zmm12[0]
                zmm0 = _mm_cmpeq_ss(0, zmm1[0], 2)
                zmm2 = _mm_and_ps(zmm12, zmm0)
                uint32_t temp0_340[0x4] = _mm_or_ps(_mm_andnot_ps(zmm0, 0x3f800000), zmm2)
                zmm5[0] = zmm5[0] + -9.99999994e-09f
                float temp0_341[0x4] = _mm_rsqrt_ss(zmm5[0], zmm5[0])
                zmm5[0] = zmm5[0] * zmm12[0]
                zmm4 = temp0_341
                zmm4[0] = zmm4[0] f* temp0_341[0]
                zmm4[0] = zmm4[0] f* zmm5[0]
                zmm12[0] = zmm12[0] f- zmm4[0]
                zmm12[0] = zmm12[0] * temp0_341[0]
                zmm12[0] = zmm12[0] + temp0_341[0]
                zmm12[0] = zmm12[0] * zmm12[0]
                zmm12[0] = zmm12[0] * zmm5[0]
                zmm4 = zmm12
                zmm4[0] = zmm4[0] f- zmm12[0]
                zmm4[0] = zmm4[0] f* zmm12[0]
                zmm4[0] = zmm4[0] f+ zmm12[0]
                float temp0_342[0x4] = _mm_cmpeq_ss(0, zmm5[0], 2)
                uint32_t temp0_343[0x4] = _mm_and_ps(zmm4, temp0_342)
                zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_342, 0x3f800000), temp0_343)
                zmm4 = var_1c0[1]
                zmm4[0] = zmm4[0] f* temp0_335[0]
                zmm5 = var_1b8
                zmm5[0] = zmm5[0] f* temp0_335[0]
                zmm2 = temp0_335
                zmm2[0] = zmm2[0] * temp0_288[0]
                float temp0_347[0x4] = _mm_insert_ps(_mm_insert_ps(zmm2, zmm4, 0x10), zmm5, 0x20)
                zmm5 = var_1b0_2.d
                zmm5[0] = zmm5[0] f* temp0_340[0]
                zmm3 = var_1b0_2:4.d
                zmm3[0] = zmm3[0] f* temp0_340[0]
                float temp0_348[0x4] = _mm_insert_ps(zmm5, zmm3, 0x10)
                temp0_340[0] = temp0_340[0] f* var_1b0_2:8.d
                float temp0_349[0x4] = _mm_insert_ps(temp0_348, temp0_340, 0x20)
                zmm0 = var_1a0_2.d
                zmm0[0] = zmm0[0] f* zmm1[0]
                zmm3 = var_1a0_2:4.d
                zmm3[0] = zmm3[0] f* zmm1[0]
                zmm0 = _mm_insert_ps(zmm0, zmm3, 0x10)
                zmm1[0] = zmm1[0] f* var_1a0_2:8.d
                zmm0 = _mm_insert_ps(zmm0, zmm1, 0x20)
                zmm1 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm9, 2), data_142d3f780)
                    ^ data_142d3f7e0
                zmm3 = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0), temp0_347)
                float temp0_356[0x4] = _mm_movehdup_ps(zmm3)
                zmm2 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
                var_1c0[0] = zmm3[0]
                var_1c0[1] = temp0_356[0]
                var_1b8 = zmm2[0]
                zmm4 = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0x55), temp0_349)
                float temp0_360[0x4] = _mm_movehdup_ps(zmm4)
                zmm6 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
                var_1b0_2.d = zmm4[0]
                var_1b0_2:4.d = temp0_360[0]
                var_1b0_2:8.d = zmm6[0]
                float temp0_363[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xaa), zmm0)
                zmm11 = _mm_movehdup_ps(temp0_363)
                zmm0 = __insertps_xmmps_memd_immb(zmm3, 0x800000, 0x30)
                zmm7 = data_142d3f770
                uint32_t temp0_366[0x4] = _mm_and_ps(zmm0, zmm7)
                zmm14 = data_142d3f5e0
                char temp0_369 =
                    _mm_movemask_ps(_mm_or_ps(_mm_cmpeq_ps(temp0_366, zmm14, 2), zmm10))
                zmm5 = _mm_unpackhi_pd(temp0_363, temp0_363[0].q)
                var_1a0_2.d = temp0_363[0]
                var_1a0_2:4.d = zmm11[0]
                var_1a0_2:8.d = zmm5[0]
                
                if (temp0_369 == 0xf)
                    zmm6 = data_142d3f660
                else if (_mm_movemask_ps(_mm_or_ps(
                        _mm_cmpeq_ps(
                            _mm_and_ps(__insertps_xmmps_memd_immb(zmm4, 0x800000, 0x30), zmm7), 
                            zmm14, 2), 
                        zmm10)) == 0xf)
                    zmm6 = data_142d3f660
                else if (_mm_movemask_ps(_mm_or_ps(
                        _mm_cmpeq_ps(
                            _mm_and_ps(__insertps_xmmps_memd_immb(temp0_363, 0x800000, 0x30), 
                                zmm7), 
                            zmm14, 2), 
                        zmm10)) == 0xf)
                    zmm6 = data_142d3f660
                else
                    zmm3[0] = zmm3[0] f+ temp0_360[0]
                    zmm3[0] = zmm3[0] f+ zmm5[0]
                    
                    if (zmm3[0] f<= 0f)
                        temp0_360[0] f- zmm3[0]
                        int64_t r14_2
                        r14_2.b = temp0_360[0] f> zmm3[0]
                        int64_t rax_13 = 0
                        
                        if (temp0_360[0] f> zmm3[0])
                            rax_13 = 0x14
                        
                        if (zmm5[0] f> *(&var_1c0 + rax_13))
                            r14_2 = 2
                        
                        int64_t r15_2 = sx.q(*(&data_143443228 + (r14_2 << 2)))
                        int64_t rax_14 = sx.q(*(&data_143443228 + (r15_2 << 2)))
                        zmm0 = var_1c0[zx.q((r14_2 * 5).d)]
                        zmm0[0] = zmm0[0] f- var_1c0[sx.q((r15_2 * 5).d)]
                        zmm0[0] = zmm0[0] f- var_1c0[sx.q((rax_14 * 5).d)]
                        zmm0[0] = zmm0[0] f+ 1f
                        float temp0_222[0x4] = _mm_sqrt_ss(0, zmm0[0])
                        zmm0 = 0x3f800000
                        zmm0[0] = 1f / temp0_222[0]
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f f/ zmm0[0]
                        zmm0[0] = zmm0[0] f* zmm12[0]
                        zmm1[0] = zmm1[0] * zmm12[0]
                        var_150[r14_2] = zmm1[0]
                        zmm1 = var_1c0[sx.q((r15_2 + (r14_2 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_2 + (r15_2 << 2)).d)]
                        zmm1[0] = zmm1[0] f* zmm0[0]
                        var_150[r15_2] = zmm1[0]
                        zmm1 = var_1c0[sx.q((rax_14 + (r14_2 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_2 + (rax_14 << 2)).d)]
                        zmm1[0] = zmm1[0] f* zmm0[0]
                        zmm2 = var_1c0[sx.q((rax_14 + (r15_2 << 2)).d)]
                        zmm2[0] = zmm2[0] - var_1c0[sx.q((r15_2 + (rax_14 << 2)).d)]
                        var_150[rax_14] = zmm1[0]
                        zmm2[0] = zmm2[0] f* zmm0[0]
                        float var_144_2 = zmm2[0]
                        zmm6 = var_150
                    else
                        zmm3[0] = zmm3[0] f+ 1f
                        zmm0 = _mm_sqrt_ss(zmm3[0], zmm3[0])
                        zmm3 = 0x3f800000
                        zmm3[0] = 1f f/ zmm0[0]
                        zmm0 = 0x3f800000
                        zmm0[0] = 1f f/ zmm3[0]
                        zmm3[0] = zmm3[0] f* zmm12[0]
                        zmm6[0] = zmm6[0] f- zmm11[0]
                        zmm6[0] = zmm6[0] f* zmm3[0]
                        temp0_363[0] = temp0_363[0] - zmm2[0]
                        temp0_363[0] = temp0_363[0] f* zmm3[0]
                        float temp0_382[0x4] = _mm_insert_ps(zmm6, temp0_363, 0x10)
                        temp0_356[0] = temp0_356[0] f- zmm4[0]
                        temp0_356[0] = temp0_356[0] f* zmm3[0]
                        float temp0_383[0x4] = _mm_insert_ps(temp0_382, temp0_356, 0x20)
                        zmm0[0] = zmm0[0] f* zmm12[0]
                        zmm6 = _mm_insert_ps(temp0_383, zmm0, 0x30)
                
                zmm10 = var_100_1
                zmm15 = zx.o(0)
                zmm8 = 0x322bcc77
                zmm7 = 0xffffffff
                zmm11 = data_142d3f660
                zmm0 = _mm_mul_ps(zmm6, zmm6)
                float temp0_387[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
                float temp0_388[0x4] = _mm_movehdup_ps(temp0_387)
                temp0_388[0] = temp0_388[0] + temp0_387[0]
                uint32_t temp0_390[0x4] =
                    _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_388[0], 6), 0xffffffff)
                temp0_388[0] = temp0_388[0] * zmm12[0]
                float temp0_391[0x4] = _mm_rsqrt_ss(temp0_388[0], temp0_388[0])
                zmm3 = temp0_391
                zmm3[0] = zmm3[0] f* temp0_391[0]
                zmm3[0] = zmm3[0] f* temp0_388[0]
                zmm4 = zmm12
                zmm4[0] = zmm4[0] f- zmm3[0]
                zmm4[0] = zmm4[0] f* temp0_391[0]
                zmm4[0] = zmm4[0] f+ temp0_391[0]
                zmm2 = zmm4
                zmm2[0] = zmm2[0] f* zmm4[0]
                zmm2[0] = zmm2[0] * temp0_388[0]
                zmm12[0] = zmm12[0] - zmm2[0]
                zmm12[0] = zmm12[0] f* zmm4[0]
                zmm12[0] = zmm12[0] f+ zmm4[0]
                float temp0_393[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm6)
                zmm0 = _mm_shuffle_ps(temp0_390, temp0_390, 0)
                zmm1 = _mm_and_ps(temp0_393, zmm0)
                zmm0 = _mm_or_ps(_mm_andnot_ps(zmm0, zmm11), zmm1)
                zmm14 = __insertps_xmmps_memd_immb(zx.o(var_190_2.q), var_190_2:8.d, 0x28)
            
            float temp0_435[0x4] = _mm_mul_ps(zmm0, zmm0)
            float temp0_437[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_435, temp0_435[0].q), temp0_435)
            zmm3 = _mm_movehdup_ps(temp0_437)
            zmm3[0] = zmm3[0] f+ temp0_437[0]
            zmm1 = _mm_andnot_ps(_mm_cmpeq_ss(zmm8[0], zmm3[0], 6), zmm7)
            zmm2 = zmm3
            zmm2[0] = zmm2[0] * zmm12[0]
            zmm3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm12[0] = zmm12[0] f- zmm3[0]
            zmm12[0] = zmm12[0] f* zmm3[0]
            zmm12[0] = zmm12[0] f+ zmm3[0]
            zmm3 = zmm12
            zmm3[0] = zmm3[0] f* zmm12[0]
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm12[0] = zmm12[0] f- zmm3[0]
            zmm12[0] = zmm12[0] * zmm12[0]
            zmm12[0] = zmm12[0] + zmm12[0]
            float temp0_443[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm0)
            float temp0_444[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm2 = _mm_and_ps(temp0_443, temp0_444)
            arg1[rbx_2 * 3] = _mm_or_ps(_mm_andnot_ps(temp0_444, zmm11), zmm2)
            result = rbx_2 * 0x30
            *(arg1 + result + 0x10) = zmm14
            *(arg1 + result + 0x20) = zmm9
            rsi_2 += 1
        while (r13_2 != rsi_2)
else if (result.d s>= 2)
    uint64_t r13_1 = zx.q(result.d)
    int64_t rsi_1 = 1
    zmm13 = zx.o(0)
    zmm7 = 0xffffffff
    zmm14 = 0x3f000000
    zmm9 = data_142d3f660
    
    do
        uint64_t rbx_1 = zx.q(*(arg3 + (rsi_1 << 1)))
        uint64_t rax_5 = rbx_1 * 0x30
        *(arg4 + sx.q(rbx_1.d * arg5 + arg6))
        zmm1 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3]
        zmm10 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 1]
        zmm8 = arg1[sx.q(*(arg4 + sx.q(rbx_1.d * arg5 + arg6))) * 3 + 2]
        zmm4 = *(arg2 + rax_5)
        zmm5 = *(arg2 + rax_5 + 0x10)
        zmm11 = *(arg2 + rax_5 + 0x20)
        zmm0 = _mm_cmpeq_ps(zmm11, zmm13, 1)
        
        if (_mm_movemask_ps(_mm_or_ps(_mm_cmpeq_ps(zmm8, zmm13, 1), zmm0)) == 0)
            zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            float temp0_174[0x4] = _mm_mul_ps(zmm0, zmm4)
            zmm3 = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_179[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), zmm3), 
                    data_142d3f7c0), 
                temp0_174)
            float temp0_180[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
            zmm3 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_180), 
                    data_142d3f7d0), 
                temp0_179)
            float temp0_185[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
            zmm4 = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_185), 
                    data_142d3f7b0), 
                zmm3)
            float temp0_190[0x4] = _mm_mul_ps(zmm5, zmm8)
            float temp0_191[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            zmm3 = _mm_shuffle_ps(temp0_190, temp0_190, 0xd2)
            float temp0_193[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
            float temp0_194[0x4] = _mm_shuffle_ps(temp0_190, temp0_190, 0xc9)
            zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, temp0_191), _mm_mul_ps(temp0_194, temp0_193))
            zmm3 = _mm_add_ps(zmm3, zmm3)
            zmm0 = _mm_add_ps(_mm_mul_ps(zmm0, zmm3), temp0_190)
            float temp0_201[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            zmm10 = _mm_add_ps(zmm10, 
                _mm_add_ps(
                    _mm_sub_ps(_mm_mul_ps(temp0_201, temp0_191), _mm_mul_ps(zmm3, temp0_193)), 
                    zmm0))
            zmm8 = _mm_mul_ps(zmm8, zmm11)
        else
            zmm0 = _mm_add_ps(zmm4, zmm4)
            zmm3 = _mm_mul_ps(zmm4, zmm0)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 1)
            zmm3 = _mm_add_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1a), temp0_8)
            zmm7 = data_142d3f670
            float temp0_12[0x4] = _mm_mul_ps(_mm_sub_ps(zmm7, zmm3), zmm11)
            zmm3 = _mm_shuffle_ps(zmm4, zmm4, 4)
            zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x29), zmm3)
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x12), zmm4)
            zmm4 = _mm_mul_ps(_mm_add_ps(zmm15, zmm0), zmm11)
            zmm3 = _mm_shuffle_ps(zmm11, zmm11, 0xc9)
            zmm15 = _mm_mul_ps(_mm_sub_ps(zmm15, zmm0), zmm3)
            zmm0 = _mm_blend_ps(_mm_insert_ps(temp0_12, zmm4, 0x1c), zmm15, 4)
            zmm3 = _mm_insert_ps(_mm_insert_ps(zmm15, temp0_12, 0x5c), zmm4, 0x68)
            float temp0_29[0x4] = _mm_blend_ps(_mm_insert_ps(zmm15, zmm4, 0x8c), temp0_12, 4)
            float temp0_30[0x4] = _mm_blend_ps(zmm5, zmm9, 8)
            uint32_t var_130_1[0x4] = zmm3
            uint32_t var_140_1[0x4] = zmm0
            zmm3 = _mm_add_ps(zmm1, zmm1)
            float temp0_32[0x4] = _mm_mul_ps(zmm1, zmm3)
            zmm0 = _mm_shuffle_ps(temp0_32, temp0_32, 0xc1)
            zmm0 = _mm_mul_ps(
                _mm_sub_ps(zmm7, _mm_add_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xda), zmm0)), zmm8)
            float temp0_38[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x29), temp0_38)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x12), temp0_41)
            float temp0_45[0x4] = _mm_mul_ps(_mm_add_ps(temp0_40, zmm3), zmm8)
            float temp0_46[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
            float temp0_48[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_40, zmm3), temp0_46)
            float temp0_50[0x4] = _mm_blend_ps(_mm_insert_ps(zmm0, temp0_45, 0x1c), temp0_48, 4)
            float temp0_52[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_48, zmm0, 0x5c), temp0_45, 0x68)
            float temp0_54[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_48, temp0_45, 0x8c), zmm0, 4)
            float temp0_55[0x4] = _mm_blend_ps(zmm10, zmm9, 8)
            float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0), temp0_50)
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), temp0_54), temp0_57)
            float temp0_63[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_52), zmm0)
            float temp0_65[0x4] = _mm_add_ps(_mm_mul_ps(temp0_55, zmm13), temp0_63)
            zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), temp0_50)
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_54), zmm15)
            zmm0 = var_130_1[1]
            zmm2 = var_130_1[3]
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_52), zmm4)
            float temp0_76[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_55), zmm0)
            zmm0 = temp0_29[0]
            zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_50)
            zmm3 = temp0_29[2]
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_54), zmm0)
            zmm4 = temp0_29[1]
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_52), zmm3)
            zmm0 = temp0_29[3]
            zmm0 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_55), zmm4)
            zmm3 = temp0_30[0]
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_50)
            zmm4 = temp0_30[2]
            zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_54), zmm3)
            zmm3 = temp0_30[1]
            zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_52), zmm4)
            zmm6 = temp0_30[3]
            float temp0_98[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_55), zmm3)
            int32_t temp0_99 = _mm_extract_ps(temp0_76, 0)
            zmm8 = _mm_mul_ps(zmm8, zmm11)
            zmm7 = zx.o(temp0_99)
            int32_t temp0_101 = _mm_extract_ps(zmm0, 0)
            zmm4 = _mm_movehdup_ps(temp0_76)
            zmm10 = zx.o(temp0_101)
            float temp0_103[0x4] = _mm_blend_ps(temp0_76, zmm7, 1)
            zmm3 = _mm_movehdup_ps(zmm0)
            int96_t var_1b0_1 = temp0_103[0].12
            zmm1 = zmm0
            int96_t var_1a0_1 = _mm_blend_ps(zmm0, zmm10, 1)[0].12
            float temp0_106[0x4] = _mm_movehdup_ps(temp0_65)
            int96_t var_190_1 = temp0_98[0].12
            zmm0 = temp0_65
            zmm0[0] = zmm0[0] f* temp0_65[0]
            temp0_106[0] = temp0_106[0] * temp0_106[0]
            temp0_106[0] = temp0_106[0] f+ zmm0[0]
            zmm0 = _mm_unpackhi_pd(temp0_65, temp0_65[0].q)
            temp0_76[0].q = temp0_76 u>> 0x40
            zmm1[0].q = zmm1 u>> 0x40
            var_1c0 = temp0_65
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f+ temp0_106[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm4[0] = zmm4[0] f* zmm4[0]
            zmm4[0] = zmm4[0] f+ zmm7[0]
            temp0_76[0] = temp0_76[0] * temp0_76[0]
            temp0_76[0] = temp0_76[0] f+ zmm4[0]
            zmm10[0] = zmm10[0] * zmm10[0]
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f+ zmm10[0]
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm1[0] = zmm1[0] f+ zmm3[0]
            zmm2 = zmm0
            zmm2[0] = zmm2[0] + -9.99999994e-09f
            zmm3 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] f* zmm14[0]
            zmm3[0] = zmm3[0] f* zmm3[0]
            zmm3[0] = zmm3[0] f* zmm0[0]
            zmm14[0] = zmm14[0] f- zmm3[0]
            zmm14[0] = zmm14[0] f* zmm3[0]
            zmm14[0] = zmm14[0] f+ zmm3[0]
            zmm3 = zmm14
            zmm3[0] = zmm3[0] f* zmm14[0]
            zmm3[0] = zmm3[0] f* zmm0[0]
            zmm0 = zmm14
            zmm0[0] = zmm0[0] f- zmm3[0]
            zmm0[0] = zmm0[0] f* zmm14[0]
            zmm0[0] = zmm0[0] f+ zmm14[0]
            zmm4 = _mm_cmpeq_ss(0, zmm2[0], 2)
            uint32_t temp0_110[0x4] = _mm_and_ps(zmm0, zmm4)
            uint32_t temp0_112[0x4] = _mm_or_ps(_mm_andnot_ps(zmm4, 0x3f800000), temp0_110)
            temp0_76[0] = temp0_76[0] + -9.99999994e-09f
            zmm0 = _mm_rsqrt_ss(temp0_76[0], temp0_76[0])
            temp0_76[0] = temp0_76[0] * zmm14[0]
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f* temp0_76[0]
            zmm14[0] = zmm14[0] f- zmm0[0]
            zmm14[0] = zmm14[0] f* zmm0[0]
            zmm14[0] = zmm14[0] f+ zmm0[0]
            zmm0 = zmm14
            zmm0[0] = zmm0[0] f* zmm14[0]
            zmm0[0] = zmm0[0] f* temp0_76[0]
            zmm3 = zmm14
            zmm3[0] = zmm3[0] f- zmm0[0]
            zmm3[0] = zmm3[0] f* zmm14[0]
            zmm3[0] = zmm3[0] f+ zmm14[0]
            zmm0 = _mm_cmpeq_ss(0, temp0_76[0], 2)
            uint32_t temp0_115[0x4] = _mm_and_ps(zmm3, zmm0)
            uint32_t temp0_117[0x4] = _mm_or_ps(_mm_andnot_ps(zmm0, 0x3f800000), temp0_115)
            zmm1[0] = zmm1[0] + -9.99999994e-09f
            zmm3 = _mm_rsqrt_ss(zmm1[0], zmm1[0])
            zmm1[0] = zmm1[0] * zmm14[0]
            zmm5 = zmm3
            zmm5[0] = zmm5[0] f* zmm3[0]
            zmm5[0] = zmm5[0] * zmm1[0]
            zmm14[0] = zmm14[0] - zmm5[0]
            zmm14[0] = zmm14[0] f* zmm3[0]
            zmm14[0] = zmm14[0] f+ zmm3[0]
            zmm3 = zmm14
            zmm3[0] = zmm3[0] f* zmm14[0]
            zmm3[0] = zmm3[0] f* zmm1[0]
            zmm14[0] = zmm14[0] f- zmm3[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_119[0x4] = _mm_cmpeq_ss(0, zmm1[0], 2)
            zmm5 = _mm_and_ps(zmm14, temp0_119)
            zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_119, 0x3f800000), zmm5)
            zmm2 = var_1c0[1]
            zmm2[0] = zmm2[0] f* temp0_112[0]
            zmm3 = var_1b8
            zmm3[0] = zmm3[0] f* temp0_112[0]
            temp0_112[0] = temp0_112[0] f* temp0_65[0]
            zmm4 = _mm_insert_ps(_mm_insert_ps(temp0_112, zmm2, 0x10), zmm3, 0x20)
            zmm2 = var_1b0_1.d
            zmm2[0] = zmm2[0] f* temp0_117[0]
            zmm3 = var_1b0_1:4.d
            zmm3[0] = zmm3[0] f* temp0_117[0]
            float temp0_125[0x4] = _mm_insert_ps(zmm2, zmm3, 0x10)
            temp0_117[0] = temp0_117[0] f* var_1b0_1:8.d
            float temp0_126[0x4] = _mm_insert_ps(temp0_125, temp0_117, 0x20)
            zmm6 = var_1a0_1.d
            zmm6[0] = zmm6[0] * zmm1[0]
            zmm0 = var_1a0_1:4.d
            zmm0[0] = zmm0[0] f* zmm1[0]
            float temp0_127[0x4] = _mm_insert_ps(zmm6, zmm0, 0x10)
            zmm1[0] = zmm1[0] f* var_1a0_1:8.d
            float temp0_128[0x4] = _mm_insert_ps(temp0_127, zmm1, 0x20)
            zmm0 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm8, 2), data_142d3f780)
                ^ data_142d3f7e0
            float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), zmm4)
            float temp0_133[0x4] = _mm_movehdup_ps(temp0_132)
            zmm3 = _mm_unpackhi_pd(temp0_132, temp0_132[0].q)
            var_1c0[0] = temp0_132[0]
            var_1c0[1] = temp0_133[0]
            var_1b8 = zmm3[0]
            zmm4 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), temp0_126)
            zmm11 = _mm_movehdup_ps(zmm4)
            zmm1 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
            var_1b0_1.d = zmm4[0]
            var_1b0_1:4.d = zmm11[0]
            var_1b0_1:8.d = zmm1[0]
            zmm0 = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), temp0_128)
            float temp0_141[0x4] = _mm_movehdup_ps(zmm0)
            float temp0_142[0x4] = __insertps_xmmps_memd_immb(temp0_132, 0x800000, 0x30)
            zmm7 = data_142d3f770
            zmm2 = _mm_and_ps(temp0_142, zmm7)
            zmm13 = data_142d3f5e0
            char temp0_145 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2, zmm13, 2))
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            var_1a0_1.d = zmm0[0]
            var_1a0_1:4.d = temp0_141[0]
            var_1a0_1:8.d = zmm2[0]
            
            if (temp0_145 == 0xf)
                zmm1 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(__insertps_xmmps_memd_immb(zmm4, 0x800000, 0x30), zmm7), zmm13, 2)) == 0xf)
                zmm1 = data_142d3f660
            else if (_mm_movemask_ps(_mm_cmpeq_ps(
                    _mm_and_ps(__insertps_xmmps_memd_immb(zmm0, 0x800000, 0x30), zmm7), zmm13, 2)) == 0xf)
                zmm1 = data_142d3f660
            else
                temp0_132[0] = temp0_132[0] f+ zmm11[0]
                temp0_132[0] = temp0_132[0] + zmm2[0]
                
                if (temp0_132[0] <= 0f)
                    zmm11[0] f- temp0_132[0]
                    int64_t r14_1
                    r14_1.b = zmm11[0] f> temp0_132[0]
                    int64_t rax_1 = 0
                    
                    if (zmm11[0] f> temp0_132[0])
                        rax_1 = 0x14
                    
                    if (zmm2[0] f> *(&var_1c0 + rax_1))
                        r14_1 = 2
                    
                    int64_t r15_1 = sx.q(*(&data_143443228 + (r14_1 << 2)))
                    int64_t rax_2 = sx.q(*(&data_143443228 + (r15_1 << 2)))
                    zmm0 = var_1c0[zx.q((r14_1 * 5).d)]
                    zmm0[0] = zmm0[0] f- var_1c0[sx.q((r15_1 * 5).d)]
                    zmm0[0] = zmm0[0] f- var_1c0[sx.q((rax_2 * 5).d)]
                    zmm0[0] = zmm0[0] f+ 1f
                    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / temp0_1[0]
                    zmm1 = 0x3f800000
                    zmm1[0] = 1f f/ zmm0[0]
                    zmm0[0] = zmm0[0] f* zmm14[0]
                    zmm1[0] = zmm1[0] * zmm14[0]
                    var_150[r14_1] = zmm1[0]
                    zmm1 = var_1c0[sx.q((r15_1 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_1 + (r15_1 << 2)).d)]
                    zmm1[0] = zmm1[0] f* zmm0[0]
                    var_150[r15_1] = zmm1[0]
                    zmm1 = var_1c0[sx.q((rax_2 + (r14_1 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_1c0[sx.q((r14_1 + (rax_2 << 2)).d)]
                    zmm1[0] = zmm1[0] f* zmm0[0]
                    zmm2 = var_1c0[sx.q((rax_2 + (r15_1 << 2)).d)]
                    zmm2[0] = zmm2[0] - var_1c0[sx.q((r15_1 + (rax_2 << 2)).d)]
                    var_150[rax_2] = zmm1[0]
                    zmm2[0] = zmm2[0] f* zmm0[0]
                    float var_144_1 = zmm2[0]
                    zmm1 = var_150
                else
                    temp0_132[0] = temp0_132[0] + 1f
                    zmm5 = 0x3f800000
                    zmm5[0] = 1f / _mm_sqrt_ss(0, temp0_132[0])[0]
                    zmm2 = 0x3f800000
                    zmm2[0] = 1f / zmm5[0]
                    zmm5[0] = zmm5[0] * zmm14[0]
                    zmm1[0] = zmm1[0] - temp0_141[0]
                    zmm1[0] = zmm1[0] * zmm5[0]
                    zmm0[0] = zmm0[0] f- zmm3[0]
                    zmm0[0] = zmm0[0] f* zmm5[0]
                    float temp0_156[0x4] = _mm_insert_ps(zmm1, zmm0, 0x10)
                    temp0_133[0] = temp0_133[0] f- zmm4[0]
                    temp0_133[0] = temp0_133[0] * zmm5[0]
                    float temp0_157[0x4] = _mm_insert_ps(temp0_156, temp0_133, 0x20)
                    zmm2[0] = zmm2[0] * zmm14[0]
                    zmm1 = _mm_insert_ps(temp0_157, zmm2, 0x30)
            
            zmm13 = zx.o(0)
            zmm7 = 0xffffffff
            zmm9 = data_142d3f660
            zmm0 = _mm_mul_ps(zmm1, zmm1)
            float temp0_161[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
            zmm0 = _mm_movehdup_ps(temp0_161)
            zmm0[0] = zmm0[0] f+ temp0_161[0]
            uint32_t temp0_164[0x4] =
                _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, zmm0[0], 6), 0xffffffff)
            zmm2 = zmm0
            zmm2[0] = zmm2[0] * zmm14[0]
            zmm0 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
            zmm0[0] = zmm0[0] f* zmm0[0]
            zmm0[0] = zmm0[0] f* zmm2[0]
            zmm14[0] = zmm14[0] f- zmm0[0]
            zmm14[0] = zmm14[0] f* zmm0[0]
            zmm14[0] = zmm14[0] f+ zmm0[0]
            zmm0 = zmm14
            zmm0[0] = zmm0[0] f* zmm14[0]
            zmm0[0] = zmm0[0] f* zmm2[0]
            zmm14[0] = zmm14[0] f- zmm0[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm14[0] = zmm14[0] + zmm14[0]
            float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm1)
            zmm4 = _mm_shuffle_ps(temp0_164, temp0_164, 0)
            zmm2 = _mm_and_ps(temp0_167, zmm4)
            zmm4 = _mm_or_ps(_mm_andnot_ps(zmm4, zmm9), zmm2)
            zmm10 = __insertps_xmmps_memd_immb(zx.o(var_190_1.q), var_190_1:8.d, 0x28)
        
        zmm0 = _mm_mul_ps(zmm4, zmm4)
        float temp0_211[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm0, zmm0[0].q), zmm0)
        float temp0_212[0x4] = _mm_movehdup_ps(temp0_211)
        temp0_212[0] = temp0_212[0] + temp0_211[0]
        uint32_t temp0_214[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_212[0], 6), zmm7)
        temp0_212[0] = temp0_212[0] * zmm14[0]
        float temp0_215[0x4] = _mm_rsqrt_ss(temp0_212[0], temp0_212[0])
        zmm3 = temp0_215
        zmm3[0] = zmm3[0] f* temp0_215[0]
        zmm3[0] = zmm3[0] f* temp0_212[0]
        zmm14[0] = zmm14[0] f- zmm3[0]
        zmm14[0] = zmm14[0] * temp0_215[0]
        zmm14[0] = zmm14[0] + temp0_215[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] * temp0_212[0]
        zmm14[0] = zmm14[0] - zmm14[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] + zmm14[0]
        float temp0_217[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4)
        zmm0 = _mm_shuffle_ps(temp0_214, temp0_214, 0)
        zmm1 = _mm_and_ps(temp0_217, zmm0)
        arg1[rbx_1 * 3] = _mm_or_ps(_mm_andnot_ps(zmm0, zmm9), zmm1)
        result = rbx_1 * 0x30
        *(arg1 + result + 0x10) = zmm10
        *(arg1 + result + 0x20) = zmm8
        rsi_1 += 1
    while (r13_1 != rsi_1)
return result
