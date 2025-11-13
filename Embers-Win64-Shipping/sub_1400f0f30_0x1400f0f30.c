// 函数: sub_1400f0f30
// 地址: 0x1400f0f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_58[0x4] = arg8
float zmm14[0x4]
float var_68[0x4] = zmm14
uint32_t zmm13[0x4]
uint32_t var_78[0x4] = zmm13
float var_88[0x4] = arg7
float zmm11[0x4]
float var_98[0x4] = zmm11
float var_a8[0x4] = arg6
uint128_t zmm9
uint128_t var_b8 = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
uint32_t zmm7[0x4]
uint32_t var_d8[0x4] = zmm7
float var_e8[0x4] = arg5
uint64_t result = zx.q(arg17)
float var_1e8[0x4]
float var_1d8[0x4]
uint32_t var_1c8[0x4]
float var_1b8[0x4]
float var_1a8[0x4]
uint32_t var_168[0x4]
float var_158[0x4]
float var_138[0x4]
float var_118[0x4]
float var_108[0x4]
float var_f8[0x4]
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
uint32_t zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(*arg18) != 0xf)
    if (result.d s> 0)
        uint64_t rax_15 = zx.q(result.d)
        int64_t rbp_2 = 0
        int64_t r13_2 = 0
        int64_t r12_2 = 0
        
        do
            int64_t rdi_3 = sx.q(*(arg15 + (r13_2 << 1)))
            int64_t rsi_2 = sx.q(*(arg16 + r13_2))
            zmm9 = *(arg2 + (rbp_2 << 2))
            arg5 = *(arg2 + (rbp_2 << 2) + 0x10)
            zmm8 = *(arg2 + (rbp_2 << 2) + 0x20)
            float (* rax_20)[0x4] = sub_141df0be0(arg3, rdi_3.d, r12_2.d)
            zmm11 = *rax_20
            zmm13 = rax_20[1]
            zmm14 = rax_20[2]
            float var_228_2[0x4] = arg5
            int32_t rax_25
            int32_t r11_2
            int32_t r15_2
            
            if (rsi_2 == -1)
                zmm2 = zx.o(0)
                float temp0_251[0x4] = _mm_mul_ps(zmm9, zmm2)
                zmm3 = data_143205570
                float temp0_252[0x4] = _mm_mul_ps(temp0_251, zmm3)
                float temp0_254[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_252, temp0_252, 0x1b), zmm9)
                zmm5 = data_143442130
                float temp0_255[0x4] = _mm_mul_ps(temp0_251, zmm5)
                float temp0_257[0x4] =
                    _mm_add_ps(_mm_shuffle_pd(temp0_255, temp0_255, 1), temp0_254)
                zmm1 = data_142fc92f0
                float temp0_258[0x4] = _mm_mul_ps(temp0_251, zmm1)
                zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_258, temp0_258, 0xb1), temp0_257)
                float temp0_261[0x4] = _mm_mul_ps(zmm11, zmm2)
                float temp0_262[0x4] = _mm_mul_ps(temp0_261, zmm3)
                float temp0_264[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_262, temp0_262, 0x1b), zmm11)
                float temp0_265[0x4] = _mm_mul_ps(temp0_261, zmm5)
                float temp0_267[0x4] =
                    _mm_add_ps(_mm_shuffle_pd(temp0_265, temp0_265, 1), temp0_264)
                float temp0_268[0x4] = _mm_mul_ps(temp0_261, zmm1)
                float temp0_269[0x4] = _mm_shuffle_ps(temp0_268, temp0_268, 0xb1)
                zmm3 = data_142e6da00
                float temp0_270[0x4] = _mm_blend_ps(var_138, zmm3, 7)
                int64_t var_148
                float temp0_271[0x4] = _mm_blend_ps(var_148.o, zmm8, 7)
                var_138 = temp0_270
                var_148.o = temp0_271
                float temp0_272[0x4] = _mm_mul_ps(temp0_270, temp0_271)
                r11_2 = _mm_extract_ps(temp0_272, 0)
                r15_2 = _mm_extract_ps(temp0_272, 1)
                zmm1 = _mm_add_ps(temp0_269, temp0_267)
                rax_25 = _mm_extract_ps(temp0_272, 2)
                float temp0_277[0x4] = _mm_blend_ps(var_158, zmm3, 7)
                float temp0_278[0x4] = _mm_blend_ps(var_168, zmm14, 7)
                var_158 = temp0_277
                var_168 = temp0_278
                zmm4 = _mm_mul_ps(temp0_277, temp0_278)
            else
                zmm0 = arg4[rsi_2][3]
                float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm9)
                zmm1 = arg4[rsi_2][0]
                zmm5 = arg4[rsi_2][1]
                float temp0_206[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                zmm7 = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x1b), temp0_206)
                zmm2 = data_142d3f7c0
                zmm7 = _mm_add_ps(_mm_mul_ps(zmm7, zmm2), temp0_205)
                float temp0_211[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm9, zmm9, 1), temp0_211)
                arg5 = data_142d3f7d0
                float temp0_215[0x4] = _mm_add_ps(_mm_mul_ps(temp0_213, arg5), zmm7)
                zmm5 = arg4[rsi_2][2]
                float temp0_216[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_218[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xb1), temp0_216)
                zmm3 = data_142d3f7b0
                zmm0 = _mm_add_ps(_mm_mul_ps(temp0_218, zmm3), temp0_215)
                zmm1 = arg10[rsi_2][3]
                float temp0_222[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm11)
                zmm5 = arg10[rsi_2][0]
                zmm7 = arg10[rsi_2][1]
                float temp0_223[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_227[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_223), zmm2), 
                    temp0_222)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                float temp0_232[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm11, zmm11, 1), zmm7), arg5), temp0_227)
                zmm4 = arg10[rsi_2][2]
                float temp0_233[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm1 = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xb1), temp0_233), zmm3), 
                    temp0_232)
                arg8 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(_mm_blend_ps(arg8, arg9[rsi_2 * 3], 1), 
                        arg9[rsi_2 * 3 + 1], 0x10), 
                    arg9[rsi_2 * 3 + 2], 0x20)
                float temp0_241[0x4] = _mm_blend_ps(var_118, zmm8, 7)
                var_118 = temp0_241
                float temp0_242[0x4] = _mm_mul_ps(temp0_241, arg8)
                r11_2 = _mm_extract_ps(temp0_242, 0)
                r15_2 = _mm_extract_ps(temp0_242, 1)
                rax_25 = _mm_extract_ps(temp0_242, 2)
                arg6 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(_mm_blend_ps(arg6, arg11[rsi_2 * 3], 1), 
                        arg11[rsi_2 * 3 + 1], 0x10), 
                    arg11[rsi_2 * 3 + 2], 0x20)
                arg7 = _mm_blend_ps(arg7, zmm14, 7)
                zmm4 = _mm_mul_ps(arg7, arg6)
            
            int32_t temp0_280 = _mm_extract_ps(zmm4, 0)
            int32_t temp0_281 = _mm_extract_ps(zmm4, 1)
            int32_t temp0_282 = _mm_extract_ps(zmm4, 2)
            float temp0_284[0x4] = __minss_xmmss_memss(
                __maxss_xmmss_memss((*(arg15 + (r13_2 << 1) + 4))[0], 0)[0], 0x3f800000)
            *(arg14 + (rdi_3 << 2)) = _mm_max_ss((*(arg14 + (rdi_3 << 2)))[0], temp0_284[0])[0]
            int32_t rcx_12
            int32_t rdx_8
            int32_t rdi_4
            
            if (temp0_284[0] <= 9.99999975e-06f)
                zmm2 = zmm0
                rdx_8 = rax_25
                rdi_4 = r15_2
                rcx_12 = r11_2
                zmm13 = var_228_2
            else if (temp0_284[0] >= 0.999989986f)
                zmm8 = zmm14
                zmm9 = zmm11
                zmm2 = zmm1
                rdx_8 = temp0_282
                rdi_4 = temp0_281
                rcx_12 = temp0_280
            else
                float var_198_1[0x4] = arg7
                arg7 = 0x3f800000
                arg7[0] = 1f - temp0_284[0]
                float temp0_286[0x4] = _mm_mul_ps(zmm9, zmm11)
                zmm7 = _mm_add_ps(_mm_shuffle_pd(temp0_286, temp0_286, 1), temp0_286)
                float temp0_290[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm7, zmm7, 0x39), zmm7)
                zmm7 = _mm_cmpeq_ps(zx.o(0), temp0_290, 2)
                zmm3 = _mm_cmpeq_ps(zx.o(0), temp0_290, 6)
                zmm4 = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm9), zmm3)
                uint32_t temp0_296[0x4] = _mm_or_ps(_mm_and_ps(zmm7, zmm9), zmm4)
                float temp0_297[0x4] = _mm_shuffle_ps(temp0_284, temp0_284, 0)
                float temp0_298[0x4] = _mm_mul_ps(zmm11, temp0_297)
                zmm2 = zmm13
                zmm13 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), temp0_296), temp0_298)
                zmm3 = _mm_mul_ps(zmm13, zmm13)
                float temp0_304[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm3, zmm3[0].q), zmm3)
                zmm3 = _mm_movehdup_ps(temp0_304)
                zmm3[0] = zmm3[0] f+ temp0_304[0]
                zmm9 = _mm_cmpeq_ss(0x322bcc77, zmm3[0], 6)
                zmm4 = zmm3
                zmm4[0] = zmm4[0] * 0.5f
                zmm3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
                arg5 = zmm3
                arg5[0] = arg5[0] f* zmm3[0]
                arg5[0] = arg5[0] * zmm4[0]
                zmm7 = 0x3f000000
                zmm7[0] = 0.5f - arg5[0]
                zmm7[0] = zmm7[0] f* zmm3[0]
                zmm7[0] = zmm7[0] f+ zmm3[0]
                zmm7[0] = zmm7[0] f* zmm7[0]
                zmm7[0] = zmm7[0] f* zmm4[0]
                zmm4 = 0x3f000000
                zmm4[0] = 0.5f f- zmm7[0]
                zmm4[0] = zmm4[0] f* zmm7[0]
                zmm4[0] = zmm4[0] f+ zmm7[0]
                zmm9 = _mm_andnot_ps(zmm9, 0xffffffff)
                float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm13)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                zmm4 = _mm_and_ps(temp0_310, zmm9)
                zmm9 = _mm_or_ps(_mm_andnot_ps(zmm9, data_142d3f660), zmm4)
                zmm13 = var_228_2
                zmm13 = _mm_add_ps(zmm13, _mm_mul_ps(_mm_sub_ps(zmm2, zmm13), temp0_297))
                zmm8 = _mm_add_ps(zmm8, _mm_mul_ps(_mm_sub_ps(zmm14, zmm8), temp0_297))
                zmm0[0] = zmm0[0] * zmm1[0]
                zmm3 = _mm_movehdup_ps(zmm0)
                float temp0_322[0x4] = _mm_movehdup_ps(zmm1)
                temp0_322[0] = temp0_322[0] f* zmm3[0]
                temp0_322[0] = temp0_322[0] + zmm0[0]
                zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
                zmm3 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
                zmm3[0] = zmm3[0] f* zmm2[0]
                zmm3[0] = zmm3[0] f+ temp0_322[0]
                float temp0_325[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe7)
                float temp0_326[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
                temp0_326[0] = temp0_326[0] * temp0_325[0]
                temp0_326[0] = temp0_326[0] f+ zmm3[0]
                int64_t rcx_11
                rcx_11.b = temp0_326[0] >= 0f
                float temp0_327[0x4] = _mm_mul_ps(temp0_297, zmm1)
                arg7[0] = arg7[0] f* *(&data_143442128 + (rcx_11 << 2))
                float temp0_330[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm0), temp0_327)
                float temp0_331[0x4] = _mm_mul_ps(temp0_330, temp0_330)
                zmm3 = _mm_add_ps(_mm_unpackhi_pd(temp0_331, temp0_331[0].q), temp0_331)
                float temp0_334[0x4] = _mm_movehdup_ps(zmm3)
                temp0_334[0] = temp0_334[0] f+ zmm3[0]
                float temp0_335[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_334[0], 6)
                zmm3 = temp0_334
                zmm3[0] = zmm3[0] f* 0.5f
                float temp0_336[0x4] = _mm_rsqrt_ss(temp0_334[0], temp0_334[0])
                temp0_336[0] = temp0_336[0] * temp0_336[0]
                temp0_336[0] = temp0_336[0] f* zmm3[0]
                zmm7 = 0x3f000000
                zmm7[0] = 0.5f - temp0_336[0]
                zmm2 = _mm_andnot_ps(temp0_335, 0xffffffff)
                zmm7[0] = zmm7[0] f* temp0_336[0]
                zmm7[0] = zmm7[0] f+ temp0_336[0]
                zmm4 = zmm7
                zmm4[0] = zmm4[0] f* zmm7[0]
                zmm4[0] = zmm4[0] f* zmm3[0]
                zmm3 = 0x3f000000
                zmm3[0] = 0.5f - zmm4[0]
                zmm3[0] = zmm3[0] f* zmm7[0]
                zmm3[0] = zmm3[0] f+ zmm7[0]
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_330)
                arg7 = var_198_1
                float temp0_340[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                uint32_t temp0_341[0x4] = _mm_and_ps(zmm3, temp0_340)
                zmm2 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_340, data_142d3f660), temp0_341)
                zmm7 = _mm_insert_ps(
                    _mm_insert_ps(_mm_blend_epi16(var_1e8, zx.o(temp0_280), 3), zx.o(temp0_281), 
                        0x10), 
                    zx.o(temp0_282), 0x20)
                zmm11 = zx.o(r11_2)
                zmm3 = zx.o(r15_2)
                arg5 = zx.o(rax_25)
                float var_1f8[0x4]
                float temp0_349[0x4] = _mm_insert_ps(
                    _mm_insert_ps(_mm_blend_epi16(var_1f8, zmm11, 3), zmm3, 0x10), arg5, 0x20)
                var_1e8 = zmm7
                var_1f8 = temp0_349
                float temp0_351[0x4] = _mm_blend_ps(var_1a8, _mm_sub_ps(zmm7, temp0_349), 7)
                zmm7 = _mm_blend_ps(var_1b8, temp0_284, 3)
                float temp0_354[0x4] = _mm_insert_ps(_mm_blend_epi16(var_1c8, zmm11, 3), zmm3, 0x10)
                zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xc0)
                float temp0_356[0x4] = _mm_insert_ps(temp0_354, arg5, 0x20)
                var_1b8 = zmm7
                var_1a8 = temp0_351
                float temp0_358[0x4] = _mm_blend_ps(var_1d8, _mm_mul_ps(zmm7, temp0_351), 7)
                var_1c8 = temp0_356
                var_1d8 = temp0_358
                zmm3 = _mm_add_ps(temp0_356, temp0_358)
                rcx_12 = _mm_extract_ps(zmm3, 0)
                rdi_4 = _mm_extract_ps(zmm3, 1)
                rdx_8 = _mm_extract_ps(zmm3, 2)
            
            *(arg4 + (r13_2 << 2)) = zmm0
            *(arg10 + (r13_2 << 2)) = zmm1
            *(arg9 + rbp_2) = r11_2
            *(arg9 + rbp_2 + 4) = r15_2
            *(arg9 + rbp_2 + 8) = rax_25
            *(arg11 + rbp_2) = temp0_280
            *(arg11 + rbp_2 + 4) = temp0_281
            *(arg11 + rbp_2 + 8) = temp0_282
            float (* rbx_7)[0x4]
            int32_t* rsi_3
            
            if (rsi_2.d == 0xffffffff)
                rsi_3 = arg13
                rbx_7 = arg12
            else
                rbx_7 = arg12
                float temp0_363[0x4] = __mulps_xmmps_memps(rbx_7[rsi_2], data_142d3f690)
                float temp0_365[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_363, temp0_363, 0xff), zmm2)
                zmm3 = _mm_shuffle_ps(temp0_363, temp0_363, 0)
                float temp0_370[0x4] = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x1b), zmm3), 
                        data_142d3f7c0), 
                    temp0_365)
                float temp0_371[0x4] = _mm_shuffle_ps(temp0_363, temp0_363, 0x55)
                zmm3 = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x4e), temp0_371), 
                        data_142d3f7d0), 
                    temp0_370)
                float temp0_376[0x4] = _mm_shuffle_ps(temp0_363, temp0_363, 0xaa)
                float temp0_380[0x4] = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xb1), temp0_376), 
                        data_142d3f7b0), 
                    zmm3)
                float temp0_381[0x4] = _mm_mul_ps(temp0_380, temp0_380)
                zmm3 = _mm_add_ps(_mm_unpackhi_pd(temp0_381, temp0_381[0].q), temp0_381)
                float temp0_384[0x4] = _mm_movehdup_ps(zmm3)
                temp0_384[0] = temp0_384[0] f+ zmm3[0]
                uint128_t temp0_385 = _mm_cmpeq_ss(0x322bcc77, temp0_384[0], 6)
                zmm3 = temp0_384
                zmm3[0] = zmm3[0] f* 0.5f
                float temp0_386[0x4] = _mm_rsqrt_ss(temp0_384[0], temp0_384[0])
                temp0_386[0] = temp0_386[0] * temp0_386[0]
                temp0_386[0] = temp0_386[0] f* zmm3[0]
                zmm5 = 0x3f000000
                zmm5[0] = 0.5f - temp0_386[0]
                zmm9 = _mm_andnot_ps(temp0_385, 0xffffffff)
                zmm5[0] = zmm5[0] * temp0_386[0]
                zmm5[0] = zmm5[0] + temp0_386[0]
                zmm5[0] = zmm5[0] * zmm5[0]
                zmm5[0] = zmm5[0] f* zmm3[0]
                zmm3 = 0x3f000000
                zmm3[0] = 0.5f - zmm5[0]
                zmm3[0] = zmm3[0] f* zmm5[0]
                zmm3[0] = zmm3[0] f+ zmm5[0]
                zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_380)
                zmm9 = _mm_shuffle_ps(zmm9, zmm9, 0)
                uint32_t temp0_391[0x4] = _mm_and_ps(zmm3, zmm9)
                zmm9 = _mm_or_ps(__andnps_xmmxud_memxud(zmm9, data_142d3f660), temp0_391)
                int64_t rax_29 = rsi_2 * 3
                rsi_3 = arg13
                float temp0_394[0x4] = __insertps_xmmps_memd_immb(zx.o(*(rsi_3 + (rax_29 << 2))), 
                    rsi_3[rax_29 + 2], 0x28)
                zmm3 = _mm_rcp_ps(temp0_394)
                float temp0_396[0x4] = _mm_mul_ps(temp0_394, zmm3)
                float temp0_402[0x4] = _mm_blend_ps(var_f8, 
                    _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, temp0_396), zmm3), 
                        __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_394, data_142d3f770), 
                            data_142d3f5c0, 6)), 
                    7)
                float temp0_405[0x4] = _mm_insert_ps(
                    _mm_insert_ps(_mm_blend_epi16(var_108, zx.o(rcx_12), 3), zx.o(rdi_4), 0x10), 
                    zx.o(rdx_8), 0x20)
                var_108 = temp0_405
                var_f8 = temp0_402
                zmm8 =
                    __blendps_xmmdq_memdq_immb(_mm_mul_ps(temp0_405, temp0_402), data_142d8f750, 8)
            
            *(rbx_7 + (r13_2 << 2)) = zmm2
            *(rsi_3 + rbp_2) = rcx_12
            *(rsi_3 + rbp_2 + 4) = rdi_4
            *(rsi_3 + rbp_2 + 8) = rdx_8
            result = arg1
            *(result + (rbp_2 << 2)) = zmm9
            *(result + (rbp_2 << 2) + 0x10) = zmm13
            *(result + (rbp_2 << 2) + 0x20) = zmm8
            r12_2 += 1
            r13_2 += 4
            rbp_2 += 0xc
        while (rax_15 != r12_2)
else if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    arg6 = data_142d3f7c0
    zmm8 = data_142d3f7d0
    zmm14 = zx.o(0)
    int64_t rsi_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg15 + (rsi_1 << 1)))
        int64_t r13_1 = sx.q(*(arg16 + rsi_1))
        zmm13 = *(arg2 + (rbp_1 << 2))
        float var_228_1[0x4] = *(arg2 + (rbp_1 << 2) + 0x10)
        arg7 = *(arg2 + (rbp_1 << 2) + 0x20)
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        arg8 = *rax_5
        zmm11 = rax_5[1]
        zmm9 = rax_5[2]
        int32_t rax_10
        int32_t rcx_4
        int32_t r15_1
        
        if (r13_1 == -1)
            float temp0_47[0x4] = _mm_mul_ps(zmm13, zmm14)
            zmm2 = data_143205570
            float temp0_48[0x4] = _mm_mul_ps(temp0_47, zmm2)
            float temp0_50[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0x1b), zmm13)
            zmm3 = data_143442130
            float temp0_51[0x4] = _mm_mul_ps(temp0_47, zmm3)
            float temp0_53[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_51, temp0_51, 1), temp0_50)
            zmm1 = data_142fc92f0
            float temp0_54[0x4] = _mm_mul_ps(temp0_47, zmm1)
            zmm0 = _mm_add_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xb1), temp0_53)
            float temp0_57[0x4] = _mm_mul_ps(arg8, zmm14)
            float temp0_58[0x4] = _mm_mul_ps(temp0_57, zmm2)
            float temp0_60[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x1b), arg8)
            float temp0_61[0x4] = _mm_mul_ps(temp0_57, zmm3)
            float temp0_63[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_61, temp0_61, 1), temp0_60)
            float temp0_64[0x4] = _mm_mul_ps(temp0_57, zmm1)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0xb1)
            zmm2 = data_142e6da00
            float temp0_66[0x4] = _mm_blend_ps(var_158, zmm2, 7)
            zmm3 = _mm_blend_ps(var_168, arg7, 7)
            var_158 = temp0_66
            var_168 = zmm3
            float temp0_68[0x4] = _mm_mul_ps(temp0_66, zmm3)
            r15_1 = _mm_extract_ps(temp0_68, 0)
            rcx_4 = _mm_extract_ps(temp0_68, 1)
            zmm1 = _mm_add_ps(temp0_65, temp0_63)
            rax_10 = _mm_extract_ps(temp0_68, 2)
            float var_178[0x4]
            zmm4 = _mm_blend_ps(var_178, zmm2, 7)
            float var_188[0x4]
            zmm2 = _mm_blend_ps(var_188, zmm9, 7)
            var_178 = zmm4
            var_188 = zmm2
        else
            zmm0 = arg4[r13_1][3]
            float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm13)
            zmm1 = arg4[r13_1][0]
            zmm5 = arg4[r13_1][1]
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            zmm7 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_3), arg6), temp0_2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_12[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_8), zmm8), zmm7)
            zmm5 = arg4[r13_1][2]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_15[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_13)
            zmm2 = data_142d3f7b0
            zmm0 = _mm_add_ps(_mm_mul_ps(temp0_15, zmm2), temp0_12)
            zmm1 = arg10[r13_1][3]
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), arg8)
            zmm5 = arg10[r13_1][0]
            zmm7 = arg10[r13_1][1]
            float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_24[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0x1b), temp0_20), arg6), temp0_19)
            zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
            float temp0_29[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(arg8, arg8, 1), zmm7), zmm8), temp0_24)
            zmm4 = arg10[r13_1][2]
            float temp0_30[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0xb1), temp0_30), zmm2), temp0_29)
            float (* rax_9)[0x4] = arg9
            float temp0_37[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(_mm_blend_ps(var_118, (*rax_9)[r13_1 * 3], 1), 
                    (*rax_9)[r13_1 * 3 + 1], 0x10), 
                (*rax_9)[r13_1 * 3 + 2], 0x20)
            int64_t var_128
            float temp0_38[0x4] = _mm_blend_ps(var_128.o, arg7, 7)
            var_128.o = temp0_38
            var_118 = temp0_37
            float temp0_39[0x4] = _mm_mul_ps(temp0_38, temp0_37)
            r15_1 = _mm_extract_ps(temp0_39, 0)
            rcx_4 = _mm_extract_ps(temp0_39, 1)
            rax_10 = _mm_extract_ps(temp0_39, 2)
            float (* rbx_1)[0x4] = arg11
            zmm2 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(_mm_blend_ps(var_f8, (*rbx_1)[r13_1 * 3], 1), 
                    (*rbx_1)[r13_1 * 3 + 1], 0x10), 
                (*rbx_1)[r13_1 * 3 + 2], 0x20)
            zmm4 = _mm_blend_ps(var_108, zmm9, 7)
            var_108 = zmm4
            var_f8 = zmm2
        
        float temp0_75[0x4] = _mm_mul_ps(zmm4, zmm2)
        int32_t temp0_76 = _mm_extract_ps(temp0_75, 0)
        int32_t temp0_77 = _mm_extract_ps(temp0_75, 1)
        int32_t temp0_78 = _mm_extract_ps(temp0_75, 2)
        float temp0_80[0x4] = __minss_xmmss_memss(
            _mm_max_ss((*(arg15 + (rsi_1 << 1) + 4))[0], zmm14[0])[0], 0x3f800000)
        *(arg14 + (rdi_1 << 2)) = _mm_max_ss((*(arg14 + (rdi_1 << 2)))[0], temp0_80[0])[0]
        int32_t rdx_5
        int32_t rdi_2
        int32_t r11_1
        
        if (temp0_80[0] <= 9.99999975e-06f)
            zmm7 = zmm0
            rdx_5 = rax_10
            rdi_2 = rcx_4
            r11_1 = r15_1
            zmm11 = var_228_1
        else if (temp0_80[0] >= 0.999989986f)
            arg7 = zmm9
            zmm13 = arg8
            zmm7 = zmm1
            rdx_5 = temp0_78
            rdi_2 = temp0_77
            r11_1 = temp0_76
        else
            zmm8 = 0x3f800000
            zmm8[0] = 1f - temp0_80[0]
            float var_1f8_1[0x4] = arg5
            float temp0_82[0x4] = _mm_mul_ps(zmm13, arg8)
            float temp0_84[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_82, temp0_82, 1), temp0_82)
            float temp0_86[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0x39), temp0_84)
            float temp0_87[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_86, 2)
            zmm3 = _mm_cmpeq_ps(zx.o(0), temp0_86, 6)
            arg5 = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm13), zmm3)
            zmm4 = _mm_or_ps(_mm_and_ps(temp0_87, zmm13), arg5)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_80, temp0_80, 0)
            float temp0_94[0x4] = _mm_mul_ps(arg8, temp0_93)
            float temp0_97[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm4), temp0_94)
            zmm3 = _mm_mul_ps(temp0_97, temp0_97)
            float temp0_100[0x4] = _mm_add_ps(_mm_unpackhi_pd(zmm3, zmm3[0].q), zmm3)
            zmm3 = _mm_movehdup_ps(temp0_100)
            zmm3[0] = zmm3[0] f+ temp0_100[0]
            zmm13 = _mm_cmpeq_ss(0x322bcc77, zmm3[0], 6)
            zmm4 = zmm3
            zmm2 = 0x3f000000
            zmm4[0] = zmm4[0] * 0.5f
            zmm3 = _mm_rsqrt_ss(zmm3[0], zmm3[0])
            arg5 = zmm3
            arg5[0] = arg5[0] f* zmm3[0]
            arg5[0] = arg5[0] * zmm4[0]
            zmm2[0] = 0.5f - arg5[0]
            zmm2[0] = zmm2[0] f* zmm3[0]
            zmm2[0] = zmm2[0] f+ zmm3[0]
            zmm3 = zmm2
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm3[0] = zmm3[0] f* zmm4[0]
            zmm4 = 0x3f000000
            zmm4[0] = 0.5f f- zmm3[0]
            zmm4[0] = zmm4[0] * zmm2[0]
            zmm4[0] = zmm4[0] + zmm2[0]
            uint32_t temp0_104[0x4] = _mm_andnot_ps(zmm13, 0xffffffff)
            float temp0_106[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_97)
            zmm14 = zx.o(0)
            zmm13 = _mm_shuffle_ps(temp0_104, temp0_104, 0)
            zmm4 = _mm_and_ps(temp0_106, zmm13)
            zmm13 = _mm_or_ps(_mm_andnot_ps(zmm13, data_142d3f660), zmm4)
            zmm11 = _mm_add_ps(var_228_1, _mm_mul_ps(_mm_sub_ps(zmm11, var_228_1), temp0_93))
            arg7 = _mm_add_ps(arg7, _mm_mul_ps(_mm_sub_ps(zmm9, arg7), temp0_93))
            zmm0[0] = zmm0[0] * zmm1[0]
            zmm3 = _mm_movehdup_ps(zmm0)
            float temp0_118[0x4] = _mm_movehdup_ps(zmm1)
            temp0_118[0] = temp0_118[0] f* zmm3[0]
            temp0_118[0] = temp0_118[0] + zmm0[0]
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            zmm3 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm3[0] = zmm3[0] f+ temp0_118[0]
            float temp0_121[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xe7)
            float temp0_122[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
            temp0_122[0] = temp0_122[0] * temp0_121[0]
            temp0_122[0] = temp0_122[0] f+ zmm3[0]
            int64_t rdx_4
            rdx_4.b = temp0_122[0] >= 0f
            float temp0_123[0x4] = _mm_mul_ps(temp0_93, zmm1)
            zmm8[0] = zmm8[0] f* *(&data_143442128 + (rdx_4 << 2))
            float temp0_126[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm0), temp0_123)
            float temp0_127[0x4] = _mm_mul_ps(temp0_126, temp0_126)
            zmm3 = _mm_add_ps(_mm_unpackhi_pd(temp0_127, temp0_127[0].q), temp0_127)
            float temp0_130[0x4] = _mm_movehdup_ps(zmm3)
            temp0_130[0] = temp0_130[0] f+ zmm3[0]
            zmm7 = _mm_cmpeq_ss(0x322bcc77, temp0_130[0], 6)
            zmm3 = temp0_130
            zmm3[0] = zmm3[0] f* 0.5f
            float temp0_132[0x4] = _mm_rsqrt_ss(temp0_130[0], temp0_130[0])
            temp0_132[0] = temp0_132[0] * temp0_132[0]
            temp0_132[0] = temp0_132[0] f* zmm3[0]
            zmm2 = 0x3f000000
            zmm2[0] = 0.5f - temp0_132[0]
            uint32_t temp0_133[0x4] = _mm_andnot_ps(zmm7, 0xffffffff)
            zmm2[0] = zmm2[0] * temp0_132[0]
            zmm2[0] = zmm2[0] + temp0_132[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm2[0] = zmm2[0] f* zmm3[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - zmm2[0]
            zmm3[0] = zmm3[0] f* zmm2[0]
            zmm3[0] = zmm3[0] f+ zmm2[0]
            zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_126)
            zmm8 = data_142d3f7d0
            zmm7 = _mm_shuffle_ps(temp0_133, temp0_133, 0)
            uint32_t temp0_137[0x4] = _mm_and_ps(zmm3, zmm7)
            zmm7 = _mm_or_ps(__andnps_xmmxud_memxud(zmm7, data_142d3f660), temp0_137)
            float temp0_142[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_1d8, zx.o(temp0_76), 3), zx.o(temp0_77), 0x10), 
                zx.o(temp0_78), 0x20)
            zmm9 = zx.o(r15_1)
            zmm3 = zx.o(rcx_4)
            zmm4 = zx.o(rax_10)
            float temp0_145[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_1e8, zmm9, 3), zmm3, 0x10), zmm4, 0x20)
            var_1d8 = temp0_142
            var_1e8 = temp0_145
            float var_198[0x4]
            float temp0_147[0x4] = _mm_blend_ps(var_198, _mm_sub_ps(temp0_142, temp0_145), 7)
            arg6 = data_142d3f7c0
            float temp0_148[0x4] = _mm_blend_ps(var_1a8, temp0_80, 3)
            float temp0_150[0x4] = _mm_insert_ps(_mm_blend_epi16(var_1b8, zmm9, 3), zmm3, 0x10)
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_148, temp0_148, 0xc0)
            float temp0_152[0x4] = _mm_insert_ps(temp0_150, zmm4, 0x20)
            var_198 = temp0_147
            var_1a8 = temp0_151
            arg5 = var_1f8_1
            zmm3 = _mm_blend_ps(var_1c8, _mm_mul_ps(temp0_147, temp0_151), 7)
            var_1b8 = temp0_152
            var_1c8 = zmm3
            float temp0_155[0x4] = _mm_add_ps(temp0_152, zmm3)
            r11_1 = _mm_extract_ps(temp0_155, 0)
            rdi_2 = _mm_extract_ps(temp0_155, 1)
            rdx_5 = _mm_extract_ps(temp0_155, 2)
        
        *(arg4 + (rsi_1 << 2)) = zmm0
        *(arg10 + (rsi_1 << 2)) = zmm1
        *(arg9 + rbp_1) = r15_1
        *(arg9 + rbp_1 + 4) = rcx_4
        *(arg9 + rbp_1 + 8) = rax_10
        *(arg11 + rbp_1) = temp0_76
        *(arg11 + rbp_1 + 4) = temp0_77
        *(arg11 + rbp_1 + 8) = temp0_78
        int32_t* rcx_5
        float (* rbx_4)[0x4]
        
        if (r13_1.d == 0xffffffff)
            rcx_5 = arg13
            rbx_4 = arg12
        else
            rbx_4 = arg12
            float temp0_159[0x4] = __mulps_xmmps_memps(rbx_4[r13_1], data_142d3f690)
            float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xff), zmm7)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0)
            zmm3 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm7, 0x1b), temp0_162), arg6), temp0_161)
            float temp0_167[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0x55)
            float temp0_171[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm7, 0x4e), temp0_167), zmm8), zmm3)
            float temp0_172[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xaa)
            float temp0_176[0x4] = _mm_add_ps(
                __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xb1), temp0_172), 
                    data_142d3f7b0), 
                temp0_171)
            float temp0_177[0x4] = _mm_mul_ps(temp0_176, temp0_176)
            float temp0_179[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_177, temp0_177[0].q), temp0_177)
            float temp0_180[0x4] = _mm_movehdup_ps(temp0_179)
            temp0_180[0] = temp0_180[0] + temp0_179[0]
            zmm13 = _mm_cmpeq_ss(0x322bcc77, temp0_180[0], 6)
            temp0_180[0] = temp0_180[0] * 0.5f
            float temp0_182[0x4] = _mm_rsqrt_ss(temp0_180[0], temp0_180[0])
            zmm3 = temp0_182
            zmm3[0] = zmm3[0] f* temp0_182[0]
            zmm3[0] = zmm3[0] f* temp0_180[0]
            zmm4 = 0x3f000000
            zmm4[0] = 0.5f f- zmm3[0]
            uint32_t temp0_183[0x4] = _mm_andnot_ps(zmm13, 0xffffffff)
            zmm4[0] = zmm4[0] * temp0_182[0]
            zmm4[0] = zmm4[0] + temp0_182[0]
            zmm4[0] = zmm4[0] * zmm4[0]
            zmm4[0] = zmm4[0] * temp0_180[0]
            zmm2 = 0x3f000000
            zmm2[0] = 0.5f - zmm4[0]
            zmm2[0] = zmm2[0] * zmm4[0]
            zmm2[0] = zmm2[0] + zmm4[0]
            float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_176)
            zmm13 = _mm_shuffle_ps(temp0_183, temp0_183, 0)
            zmm2 = _mm_and_ps(temp0_185, zmm13)
            zmm13 = _mm_or_ps(__andnps_xmmxud_memxud(zmm13, data_142d3f660), zmm2)
            int64_t rax_14 = r13_1 * 3
            rcx_5 = arg13
            float temp0_190[0x4] =
                __insertps_xmmps_memd_immb(zx.o(*(rcx_5 + (rax_14 << 2))), rcx_5[rax_14 + 2], 0x28)
            float temp0_191[0x4] = _mm_rcp_ps(temp0_190)
            float temp0_192[0x4] = _mm_mul_ps(temp0_190, temp0_191)
            arg5 = _mm_blend_ps(arg5, 
                _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, temp0_192), temp0_191), 
                    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(temp0_190, data_142d3f770), 
                        data_142d3f5c0, 6)), 
                7)
            float temp0_201[0x4] = _mm_insert_ps(
                _mm_insert_ps(_mm_blend_epi16(var_138, zx.o(r11_1), 3), zx.o(rdi_2), 0x10), 
                zx.o(rdx_5), 0x20)
            var_138 = temp0_201
            arg7 = _mm_blend_ps(_mm_mul_ps(temp0_201, arg5), zmm14, 8)
        
        *(rbx_4 + (rsi_1 << 2)) = zmm7
        *(rcx_5 + rbp_1) = r11_1
        *(rcx_5 + rbp_1 + 4) = rdi_2
        *(rcx_5 + rbp_1 + 8) = rdx_5
        result = arg1
        *(result + (rbp_1 << 2)) = zmm13
        *(result + (rbp_1 << 2) + 0x10) = zmm11
        *(result + (rbp_1 << 2) + 0x20) = arg7
        r12_1 += 1
        rsi_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)
return result
