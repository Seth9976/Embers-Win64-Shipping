// 函数: sub_1400f37a0
// 地址: 0x1400f37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float zmm13[0x4]
float var_78[0x4] = zmm13
float zmm12[0x4]
float var_88[0x4] = zmm12
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm10[0x4]
float var_a8[0x4] = zmm10
float zmm9[0x4]
float var_b8[0x4] = zmm9
float zmm8[0x4]
float var_c8[0x4] = zmm8
float zmm7[0x4]
float var_d8[0x4] = zmm7
float zmm6[0x4]
float var_e8[0x4] = zmm6
uint64_t result = zx.q(arg13)
float var_1e8[0x4]
float var_1d8[0x4]
float var_1c8[0x4]
float var_1b8[0x4]
float var_1a8[0x4]
float var_198[0x4]
float var_188[0x4]
float var_178[0x4]
float var_168[0x4]
float var_158[0x4]
float var_148[0x4]
float var_138[0x4]
float var_128[0x4]
float var_118[0x4]
float var_108[0x4]
float var_f8[0x4]
float zmm0[0x4]
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm4[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(*arg14) != 0xf)
    if (result.d s> 0)
        uint64_t rax_15 = zx.q(result.d)
        int64_t rbp_2 = 0
        zmm8 = data_142d3f7c0
        zmm11 = data_142d3f7b0
        zmm6 = zx.o(0)
        int64_t r13_2 = 0
        int64_t r12_2 = 0
        
        do
            int64_t rdi_3 = sx.q(*(arg11 + (r13_2 << 1)))
            int64_t rsi_2 = sx.q(*(arg12 + r13_2))
            zmm14 = *(arg2 + (rbp_2 << 2))
            float var_218_2[0x4] = *(arg2 + (rbp_2 << 2) + 0x10)
            zmm13 = *(arg2 + (rbp_2 << 2) + 0x20)
            float (* rax_20)[0x4] = sub_141df0be0(arg3, rdi_3.d, r12_2.d)
            zmm12 = *rax_20
            zmm9 = rax_20[1]
            zmm15 = rax_20[2]
            float rax_25
            float r8_3
            float r9_1
            float r10_2
            float r11_2
            float r15_2
            
            if (rsi_2 == -1)
                float temp0_260[0x4] = _mm_mul_ps(zmm14, zmm6)
                zmm0 = data_143205570
                float temp0_261[0x4] = _mm_mul_ps(temp0_260, zmm0)
                float temp0_263[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0x1b), zmm14)
                zmm2 = data_143442130
                float temp0_264[0x4] = _mm_mul_ps(temp0_260, zmm2)
                float temp0_266[0x4] =
                    _mm_add_ps(_mm_shuffle_pd(temp0_264, temp0_264, 1), temp0_263)
                zmm1 = data_142fc92f0
                float temp0_267[0x4] = _mm_mul_ps(temp0_260, zmm1)
                zmm10 = _mm_add_ps(_mm_shuffle_ps(temp0_267, temp0_267, 0xb1), temp0_266)
                float temp0_270[0x4] = _mm_mul_ps(zmm12, zmm6)
                float temp0_271[0x4] = _mm_mul_ps(temp0_270, zmm0)
                float temp0_273[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0x1b), zmm12)
                float temp0_274[0x4] = _mm_mul_ps(temp0_270, zmm2)
                float temp0_276[0x4] =
                    _mm_add_ps(_mm_shuffle_pd(temp0_274, temp0_274, 1), temp0_273)
                float temp0_277[0x4] = _mm_mul_ps(temp0_270, zmm1)
                zmm1 = _mm_add_ps(_mm_shuffle_ps(temp0_277, temp0_277, 0xb1), temp0_276)
                zmm2 = data_142e6da00
                float temp0_281[0x4] =
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_188, zmm2, 0x23), 0x24)
                float temp0_283[0x4] =
                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(var_178, zmm13, 0x23), 0x24)
                float temp0_284[0x4] = _mm_mul_ps(temp0_281, temp0_283)
                r11_2 = temp0_284[0]
                zmm6 = _mm_shuffle_epi32(temp0_284, 0x4e)
                r15_2 = _mm_shuffle_ps(temp0_284, temp0_284, 0xe5)[0]
                rax_25 = zmm6[0]
                float temp0_288[0x4] =
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_168, zmm2, 0x23), 0x24)
                float temp0_290[0x4] =
                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_158, zmm15, 0x23), 0x24)
                float temp0_291[0x4] = _mm_mul_ps(temp0_288, temp0_290)
                r8_3 = temp0_291[0]
                zmm7 = _mm_shuffle_epi32(temp0_291, 0x4e)
                r9_1 = _mm_shuffle_ps(temp0_291, temp0_291, 0xe5)[0]
                r10_2 = zmm7[0]
                zmm11 = data_142d3f7b0
                var_168 = temp0_288
                var_188 = temp0_281
                var_158 = temp0_290
                zmm6 = zx.o(0)
                var_178 = temp0_283
            else
                zmm0 = arg4[rsi_2][3]
                float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
                zmm1 = arg4[rsi_2][0]
                zmm5 = arg4[rsi_2][1]
                float temp0_212[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
                float temp0_216[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), temp0_212), zmm8), 
                    temp0_211)
                float temp0_217[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_217)
                zmm0 = data_142d3f7d0
                float temp0_221[0x4] = _mm_add_ps(_mm_mul_ps(temp0_219, zmm0), temp0_216)
                zmm5 = arg4[rsi_2][2]
                float temp0_222[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                zmm10 = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_222), zmm11), 
                    temp0_221)
                zmm1 = arg6[rsi_2][3]
                float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm12)
                zmm5 = arg6[rsi_2][0]
                zmm6 = arg6[rsi_2][1]
                float temp0_229[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
                float temp0_233[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_229), zmm8), 
                    temp0_228)
                float temp0_234[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                float temp0_238[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm12, zmm12, 1), temp0_234), zmm0), 
                    temp0_233)
                zmm4 = arg6[rsi_2][2]
                float temp0_239[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                zmm1 = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), temp0_239), zmm11), 
                    temp0_238)
                zmm4 = arg5[rsi_2 * 3]
                float temp0_244[0x4] = __shufps_xmmps_memps_immb(arg5[rsi_2 * 3 + 2], var_148, 0x30)
                float temp0_246[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(arg5[rsi_2 * 3 + 1], zmm4, 0), temp0_244, 0x82)
                float temp0_248[0x4] =
                    _mm_shuffle_ps(zmm13, _mm_shuffle_ps(var_138, zmm13, 0x23), 0x24)
                var_138 = temp0_248
                float temp0_249[0x4] = _mm_mul_ps(temp0_248, temp0_246)
                r11_2 = temp0_249[0]
                zmm4 = _mm_shuffle_epi32(temp0_249, 0x4e)
                r15_2 = _mm_shuffle_ps(temp0_249, temp0_249, 0xe5)[0]
                rax_25 = zmm4[0]
                zmm4 = arg7[rsi_2 * 3]
                float temp0_252[0x4] = __shufps_xmmps_memps_immb(arg7[rsi_2 * 3 + 2], var_108, 0x30)
                float temp0_254[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(arg7[rsi_2 * 3 + 1], zmm4, 0), temp0_252, 0x82)
                float temp0_256[0x4] =
                    _mm_shuffle_ps(zmm15, _mm_shuffle_ps(var_f8, zmm15, 0x23), 0x24)
                var_f8 = temp0_256
                float temp0_257[0x4] = _mm_mul_ps(temp0_256, temp0_254)
                r8_3 = temp0_257[0]
                zmm6 = _mm_shuffle_epi32(temp0_257, 0x4e)
                r9_1 = _mm_shuffle_ps(temp0_257, temp0_257, 0xe5)[0]
                r10_2 = zmm6[0]
                zmm6 = zx.o(0)
                var_108 = temp0_254
                var_148 = temp0_246
            
            float temp0_295[0x4] = __minss_xmmss_memss(
                _mm_max_ss((*(arg11 + (r13_2 << 1) + 4))[0], zmm6[0])[0], 0x3f800000)
            *(arg10 + (rdi_3 << 2)) = _mm_max_ss((*(arg10 + (rdi_3 << 2)))[0], temp0_295[0])[0]
            float rcx_15
            float rdx_6
            float rdi_4
            
            if (temp0_295[0] <= 9.99999975e-06f)
                zmm2 = zmm10
                rdx_6 = rax_25
                rcx_15 = r15_2
                rdi_4 = r11_2
                zmm9 = var_218_2
            else if (temp0_295[0] >= 0.999989986f)
                zmm13 = zmm15
                zmm14 = zmm12
                zmm2 = zmm1
                rdx_6 = r10_2
                rcx_15 = r9_1
                rdi_4 = r8_3
            else
                zmm6 = 0x3f800000
                zmm6[0] = 1f - temp0_295[0]
                float temp0_297[0x4] = _mm_mul_ps(zmm14, zmm12)
                float temp0_299[0x4] =
                    _mm_add_ps(_mm_shuffle_pd(temp0_297, temp0_297, 1), temp0_297)
                float temp0_301[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_299, temp0_299, 0x39), temp0_299)
                float temp0_302[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_301, 2)
                float temp0_303[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_301, 6)
                zmm2 = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm14), temp0_303)
                zmm3 = _mm_or_ps(_mm_and_ps(temp0_302, zmm14), zmm2)
                float temp0_308[0x4] = _mm_shuffle_ps(temp0_295, temp0_295, 0)
                float temp0_309[0x4] = _mm_mul_ps(zmm12, temp0_308)
                float temp0_312[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm3), temp0_309)
                float temp0_313[0x4] = _mm_mul_ps(temp0_312, temp0_312)
                float temp0_315[0x4] =
                    _mm_add_ps(_mm_unpackhi_pd(temp0_313, temp0_313[0].q), temp0_313)
                float temp0_316[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0xe5)
                temp0_316[0] = temp0_316[0] + temp0_315[0]
                float temp0_317[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_316[0], 6)
                temp0_316[0] = temp0_316[0] * 0.5f
                float temp0_318[0x4] = _mm_rsqrt_ss(temp0_316[0], temp0_316[0])
                temp0_318[0] = temp0_318[0] * temp0_318[0]
                temp0_318[0] = temp0_318[0] * temp0_316[0]
                zmm7 = 0x3f000000
                zmm7[0] = 0.5f - temp0_318[0]
                zmm7[0] = zmm7[0] * temp0_318[0]
                zmm7[0] = zmm7[0] + temp0_318[0]
                zmm7[0] = zmm7[0] * zmm7[0]
                zmm7[0] = zmm7[0] * temp0_316[0]
                zmm3 = 0x3f000000
                zmm3[0] = 0.5f - zmm7[0]
                zmm3[0] = zmm3[0] * zmm7[0]
                zmm3[0] = zmm3[0] + zmm7[0]
                zmm14 = _mm_andnot_ps(temp0_317, 0xffffffff)
                float temp0_321[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_312)
                float temp0_322[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                zmm3 = _mm_and_ps(temp0_321, temp0_322)
                zmm11 = data_142d3f660
                zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_322, zmm11), zmm3)
                zmm9 = _mm_add_ps(var_218_2, _mm_mul_ps(_mm_sub_ps(zmm9, var_218_2), temp0_308))
                zmm13 = _mm_add_ps(zmm13, _mm_mul_ps(_mm_sub_ps(zmm15, zmm13), temp0_308))
                zmm10[0] = zmm10[0] * zmm1[0]
                float temp0_332[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe5)
                float temp0_333[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
                temp0_333[0] = temp0_333[0] * temp0_332[0]
                temp0_333[0] = temp0_333[0] + zmm10[0]
                zmm2 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
                zmm3 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
                zmm3[0] = zmm3[0] * zmm2[0]
                zmm3[0] = zmm3[0] + temp0_333[0]
                float temp0_336[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
                float temp0_337[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
                temp0_337[0] = temp0_337[0] * temp0_336[0]
                temp0_337[0] = temp0_337[0] + zmm3[0]
                int64_t rcx_14
                rcx_14.b = temp0_337[0] >= 0f
                float temp0_338[0x4] = _mm_mul_ps(temp0_308, zmm1)
                zmm6[0] = zmm6[0] f* *(&data_143442128 + (rcx_14 << 2))
                float temp0_341[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm10), temp0_338)
                float temp0_342[0x4] = _mm_mul_ps(temp0_341, temp0_341)
                float temp0_344[0x4] =
                    _mm_add_ps(_mm_unpackhi_pd(temp0_342, temp0_342[0].q), temp0_342)
                float temp0_345[0x4] = _mm_shuffle_ps(temp0_344, temp0_344, 0xe5)
                temp0_345[0] = temp0_345[0] + temp0_344[0]
                float temp0_346[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_345[0], 6)
                temp0_345[0] = temp0_345[0] * 0.5f
                float temp0_347[0x4] = _mm_rsqrt_ss(temp0_345[0], temp0_345[0])
                temp0_347[0] = temp0_347[0] * temp0_347[0]
                temp0_347[0] = temp0_347[0] * temp0_345[0]
                zmm0 = 0x3f000000
                zmm0[0] = 0.5f - temp0_347[0]
                zmm0[0] = zmm0[0] * temp0_347[0]
                zmm0[0] = zmm0[0] + temp0_347[0]
                zmm0[0] = zmm0[0] * zmm0[0]
                zmm0[0] = zmm0[0] * temp0_345[0]
                zmm3 = 0x3f000000
                zmm3[0] = 0.5f - zmm0[0]
                zmm2 = _mm_andnot_ps(temp0_346, 0xffffffff)
                zmm3[0] = zmm3[0] * zmm0[0]
                zmm3[0] = zmm3[0] + zmm0[0]
                float temp0_350[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_341)
                float temp0_351[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                zmm3 = _mm_and_ps(temp0_350, temp0_351)
                zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_351, zmm11), zmm3)
                float temp0_357[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r9_1), zx.o(r8_3), 0), 
                    __shufps_xmmps_memps_immb(zx.o(r10_2), var_1e8, 0x30), 0x82)
                float temp0_358[0x4] = _mm_shuffle_ps(zx.o(r15_2), zx.o(r11_2), 0)
                zmm0 = zx.o(rax_25)
                float temp0_360[0x4] =
                    _mm_shuffle_ps(temp0_358, __shufps_xmmps_memps_immb(zmm0, var_198, 0x30), 0x82)
                var_198 = temp0_360
                float temp0_361[0x4] = _mm_sub_ps(temp0_357, temp0_360)
                float temp0_363[0x4] =
                    _mm_shuffle_ps(temp0_361, _mm_shuffle_ps(var_1d8, temp0_361, 0x23), 0x24)
                float temp0_365[0x4] =
                    _mm_shuffle_ps(temp0_295, _mm_shuffle_ps(var_1c8, temp0_295, 3), 0x20)
                float temp0_366[0x4] = __shufps_xmmps_memps_immb(zmm0, var_1b8, 0x30)
                float temp0_367[0x4] = _mm_mul_ps(temp0_365, temp0_363)
                float temp0_368[0x4] = _mm_shuffle_ps(temp0_358, temp0_366, 0x82)
                float temp0_370[0x4] =
                    _mm_shuffle_ps(temp0_367, _mm_shuffle_ps(var_1a8, temp0_367, 0x23), 0x24)
                float temp0_371[0x4] = _mm_add_ps(temp0_368, temp0_370)
                rdi_4 = temp0_371[0]
                zmm8 = _mm_shuffle_epi32(temp0_371, 0x4e)
                rcx_15 = _mm_shuffle_ps(temp0_371, temp0_371, 0xe5)[0]
                rdx_6 = zmm8[0]
                zmm8 = data_142d3f7c0
                var_1e8 = temp0_357
                var_1b8 = temp0_368
                var_1a8 = temp0_370
                zmm11 = data_142d3f7b0
                var_1c8 = temp0_365
                var_1d8 = temp0_363
                zmm6 = zx.o(0)
            
            *(arg4 + (r13_2 << 2)) = zmm10
            *(arg6 + (r13_2 << 2)) = zmm1
            *(arg5 + rbp_2) = r11_2
            *(arg5 + rbp_2 + 4) = r15_2
            *(arg5 + rbp_2 + 8) = rax_25
            *(arg7 + rbp_2) = r8_3
            *(arg7 + rbp_2 + 4) = r9_1
            *(arg7 + rbp_2 + 8) = r10_2
            float (* rbx_6)[0x4]
            float* rsi_3
            
            if (rsi_2.d == 0xffffffff)
                rsi_3 = arg9
                rbx_6 = arg8
            else
                rbx_6 = arg8
                float temp0_374[0x4] = __mulps_xmmps_memps(rbx_6[rsi_2], data_142d3f690)
                float temp0_376[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_374, temp0_374, 0xff), zmm2)
                float temp0_377[0x4] = _mm_shuffle_ps(temp0_374, temp0_374, 0)
                float temp0_381[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x1b), temp0_377), zmm8), 
                    temp0_376)
                float temp0_382[0x4] = _mm_shuffle_ps(temp0_374, temp0_374, 0x55)
                float temp0_386[0x4] = _mm_add_ps(
                    __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x4e), temp0_382), 
                        data_142d3f7d0), 
                    temp0_381)
                float temp0_387[0x4] = _mm_shuffle_ps(temp0_374, temp0_374, 0xaa)
                float temp0_391[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xb1), temp0_387), zmm11), 
                    temp0_386)
                float temp0_392[0x4] = _mm_mul_ps(temp0_391, temp0_391)
                float temp0_394[0x4] =
                    _mm_add_ps(_mm_unpackhi_pd(temp0_392, temp0_392[0].q), temp0_392)
                float temp0_395[0x4] = _mm_shuffle_ps(temp0_394, temp0_394, 0xe5)
                temp0_395[0] = temp0_395[0] + temp0_394[0]
                float temp0_396[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_395[0], 6)
                temp0_395[0] = temp0_395[0] * 0.5f
                float temp0_397[0x4] = _mm_rsqrt_ss(temp0_395[0], temp0_395[0])
                temp0_397[0] = temp0_397[0] * temp0_397[0]
                temp0_397[0] = temp0_397[0] * temp0_395[0]
                zmm5 = 0x3f000000
                zmm5[0] = 0.5f - temp0_397[0]
                zmm14 = _mm_andnot_ps(temp0_396, 0xffffffff)
                zmm5[0] = zmm5[0] * temp0_397[0]
                zmm5[0] = zmm5[0] + temp0_397[0]
                zmm5[0] = zmm5[0] * zmm5[0]
                zmm5[0] = zmm5[0] * temp0_395[0]
                zmm3 = 0x3f000000
                zmm3[0] = 0.5f - zmm5[0]
                zmm3[0] = zmm3[0] * zmm5[0]
                zmm3[0] = zmm3[0] + zmm5[0]
                float temp0_400[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_391)
                float temp0_401[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
                zmm3 = _mm_and_ps(temp0_400, temp0_401)
                zmm14 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_401, data_142d3f660), zmm3)
                int64_t rax_29 = rsi_2 * 3
                rsi_3 = arg9
                zmm1 = zx.o(*(rsi_3 + (rax_29 << 2)))[0].q | rsi_3[rax_29 + 2][0].q << 0x40
                float temp0_405[0x4] = _mm_rcp_ps(zmm1)
                float temp0_406[0x4] = _mm_mul_ps(zmm1, temp0_405)
                zmm4 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, temp0_406), temp0_405), 
                    __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm1, data_142d3f770), 
                        data_142d3f5c0, 6))
                float temp0_413[0x4] =
                    _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_128, zmm4, 0x23), 0x24)
                float temp0_416[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(rcx_15), zx.o(rdi_4), 0), 
                    __shufps_xmmps_memps_immb(zx.o(rdx_6), var_118, 0x30), 0x82)
                var_118 = temp0_416
                zmm13 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_416, temp0_413), data_142d3f5a0)
                var_128 = temp0_413
            
            *(rbx_6 + (r13_2 << 2)) = zmm2
            *(rsi_3 + rbp_2) = rdi_4
            *(rsi_3 + rbp_2 + 4) = rcx_15
            *(rsi_3 + rbp_2 + 8) = rdx_6
            result = arg1
            *(result + (rbp_2 << 2)) = zmm14
            *(result + (rbp_2 << 2) + 0x10) = zmm9
            *(result + (rbp_2 << 2) + 0x20) = zmm13
            r12_2 += 1
            r13_2 += 4
            rbp_2 += 0xc
        while (rax_15 != r12_2)
else if (result.d s> 0)
    uint64_t rax = zx.q(result.d)
    int64_t rbp_1 = 0
    zmm9 = data_142d3f7c0
    zmm15 = data_142d3f7d0
    zmm7 = data_142d3f7b0
    int64_t rsi_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t rdi_1 = sx.q(*(arg11 + (rsi_1 << 1)))
        int64_t r13_1 = sx.q(*(arg12 + rsi_1))
        zmm14 = *(arg2 + (rbp_1 << 2))
        float var_218_1[0x4] = *(arg2 + (rbp_1 << 2) + 0x10)
        zmm11 = *(arg2 + (rbp_1 << 2) + 0x20)
        int128_t* rax_5 = sub_141df0be0(arg3, rdi_1.d, r12_1.d)
        zmm12 = *rax_5
        zmm13 = rax_5[1]
        zmm8 = rax_5[2]
        float rax_10
        float rdx_2
        float r8_1
        float r9
        float r11_1
        float r15_1
        
        if (r13_1 == -1)
            float temp0_51[0x4] = _mm_mul_ps(zmm14, zx.o(0))
            zmm2 = data_143205570
            float temp0_52[0x4] = _mm_mul_ps(temp0_51, zmm2)
            float temp0_54[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_52, temp0_52, 0x1b), zmm14)
            zmm4 = data_143442130
            float temp0_55[0x4] = _mm_mul_ps(temp0_51, zmm4)
            float temp0_57[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_55, temp0_55, 1), temp0_54)
            zmm1 = data_142fc92f0
            float temp0_58[0x4] = _mm_mul_ps(temp0_51, zmm1)
            zmm10 = _mm_add_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xb1), temp0_57)
            float temp0_61[0x4] = _mm_mul_ps(zmm12, zx.o(0))
            float temp0_62[0x4] = _mm_mul_ps(temp0_61, zmm2)
            float temp0_64[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0x1b), zmm12)
            float temp0_65[0x4] = _mm_mul_ps(temp0_61, zmm4)
            float temp0_67[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_65, temp0_65, 1), temp0_64)
            float temp0_68[0x4] = _mm_mul_ps(temp0_61, zmm1)
            zmm1 = _mm_add_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xb1), temp0_67)
            zmm2 = data_142e6da00
            float temp0_72[0x4] = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_188, zmm2, 0x23), 0x24)
            float temp0_74[0x4] = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_178, zmm11, 0x23), 0x24)
            float temp0_75[0x4] = _mm_mul_ps(temp0_72, temp0_74)
            r11_1 = temp0_75[0]
            zmm4 = _mm_shuffle_epi32(temp0_75, 0x4e)
            r15_1 = _mm_shuffle_ps(temp0_75, temp0_75, 0xe5)[0]
            rax_10 = zmm4[0]
            float temp0_79[0x4] = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_168, zmm2, 0x23), 0x24)
            float temp0_81[0x4] = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(var_158, zmm8, 0x23), 0x24)
            float temp0_82[0x4] = _mm_mul_ps(temp0_79, temp0_81)
            r8_1 = temp0_82[0]
            zmm7 = _mm_shuffle_epi32(temp0_82, 0x4e)
            r9 = _mm_shuffle_ps(temp0_82, temp0_82, 0xe5)[0]
            rdx_2 = zmm7[0]
            zmm7 = data_142d3f7b0
            var_168 = temp0_79
            zmm0 = zx.o(0)
            var_188 = temp0_72
            var_158 = temp0_81
            var_178 = temp0_74
        else
            zmm0 = arg4[r13_1][3]
            float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm14)
            zmm1 = arg4[r13_1][0]
            zmm5 = arg4[r13_1][1]
            float temp0_3[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
            float temp0_7[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), temp0_3), zmm9), temp0_2)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_12[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_8), zmm15), temp0_7)
            zmm5 = arg4[r13_1][2]
            float temp0_13[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            zmm10 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_13), zmm7), 
                temp0_12)
            zmm1 = arg6[r13_1][3]
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm12)
            zmm5 = arg6[r13_1][0]
            zmm6 = arg6[r13_1][1]
            float temp0_20[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
            float temp0_24[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_20), zmm9), 
                temp0_19)
            float temp0_25[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_29[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm12, zmm12, 1), temp0_25), zmm15), temp0_24)
            zmm4 = arg6[r13_1][2]
            float temp0_30[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
            zmm1 = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), temp0_30), zmm7), 
                temp0_29)
            float (* rax_9)[0x4] = arg5
            zmm4 = (*rax_9)[r13_1 * 3]
            float temp0_35[0x4] = __shufps_xmmps_memps_immb((*rax_9)[r13_1 * 3 + 2], var_148, 0x30)
            float temp0_37[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps((*rax_9)[r13_1 * 3 + 1], zmm4, 0), temp0_35, 0x82)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm11, _mm_shuffle_ps(var_138, zmm11, 0x23), 0x24)
            var_138 = temp0_39
            float temp0_40[0x4] = _mm_mul_ps(temp0_39, temp0_37)
            r11_1 = temp0_40[0]
            zmm4 = _mm_shuffle_epi32(temp0_40, 0x4e)
            r15_1 = _mm_shuffle_ps(temp0_40, temp0_40, 0xe5)[0]
            rax_10 = zmm4[0]
            float (* rdx_1)[0x4] = arg7
            zmm4 = (*rdx_1)[r13_1 * 3]
            float temp0_43[0x4] = __shufps_xmmps_memps_immb((*rdx_1)[r13_1 * 3 + 2], var_108, 0x30)
            float temp0_45[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps((*rdx_1)[r13_1 * 3 + 1], zmm4, 0), temp0_43, 0x82)
            float temp0_47[0x4] = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(var_f8, zmm8, 0x23), 0x24)
            var_f8 = temp0_47
            float temp0_48[0x4] = _mm_mul_ps(temp0_47, temp0_45)
            r8_1 = temp0_48[0]
            zmm6 = _mm_shuffle_epi32(temp0_48, 0x4e)
            r9 = _mm_shuffle_ps(temp0_48, temp0_48, 0xe5)[0]
            rdx_2 = zmm6[0]
            var_148 = temp0_37
            var_108 = temp0_45
            zmm0 = zx.o(0)
        
        float temp0_86[0x4] = __minss_xmmss_memss(
            _mm_max_ss((*(arg11 + (rsi_1 << 1) + 4))[0], zmm0[0])[0], 0x3f800000)
        *(arg10 + (rdi_1 << 2)) = _mm_max_ss((*(arg10 + (rdi_1 << 2)))[0], temp0_86[0])[0]
        float rcx_8
        float rdi_2
        float r10_1
        
        if (temp0_86[0] <= 9.99999975e-06f)
            zmm2 = zmm10
            r10_1 = rax_10
            rcx_8 = r15_1
            rdi_2 = r11_1
            zmm13 = var_218_1
        else if (temp0_86[0] >= 0.999989986f)
            zmm11 = zmm8
            zmm14 = zmm12
            zmm2 = zmm1
            r10_1 = rdx_2
            rcx_8 = r9
            rdi_2 = r8_1
        else
            zmm6 = 0x3f800000
            zmm6[0] = 1f - temp0_86[0]
            float temp0_88[0x4] = _mm_mul_ps(zmm14, zmm12)
            float temp0_90[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_88, temp0_88, 1), temp0_88)
            float temp0_92[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0x39), temp0_90)
            float temp0_93[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_92, 2)
            float temp0_94[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_92, 6)
            zmm2 = _mm_and_ps(_mm_sub_ps(zx.o(0), zmm14), temp0_94)
            zmm3 = _mm_or_ps(_mm_and_ps(temp0_93, zmm14), zmm2)
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_86, temp0_86, 0)
            float temp0_100[0x4] = _mm_mul_ps(zmm12, temp0_99)
            float temp0_103[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm3), temp0_100)
            float temp0_104[0x4] = _mm_mul_ps(temp0_103, temp0_103)
            float temp0_106[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_104, temp0_104[0].q), temp0_104)
            float temp0_107[0x4] = _mm_shuffle_ps(temp0_106, temp0_106, 0xe5)
            temp0_107[0] = temp0_107[0] + temp0_106[0]
            float temp0_108[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_107[0], 6)
            temp0_107[0] = temp0_107[0] * 0.5f
            float temp0_109[0x4] = _mm_rsqrt_ss(temp0_107[0], temp0_107[0])
            temp0_109[0] = temp0_109[0] * temp0_109[0]
            temp0_109[0] = temp0_109[0] * temp0_107[0]
            zmm7 = 0x3f000000
            zmm7[0] = 0.5f - temp0_109[0]
            zmm7[0] = zmm7[0] * temp0_109[0]
            zmm7[0] = zmm7[0] + temp0_109[0]
            zmm7[0] = zmm7[0] * zmm7[0]
            zmm7[0] = zmm7[0] * temp0_107[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - zmm7[0]
            zmm3[0] = zmm3[0] * zmm7[0]
            zmm3[0] = zmm3[0] + zmm7[0]
            zmm14 = _mm_andnot_ps(temp0_108, 0xffffffff)
            float temp0_112[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_103)
            float temp0_113[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm3 = _mm_and_ps(temp0_112, temp0_113)
            zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_113, data_142d3f660), zmm3)
            zmm13 = _mm_add_ps(var_218_1, _mm_mul_ps(_mm_sub_ps(zmm13, var_218_1), temp0_99))
            zmm11 = _mm_add_ps(zmm11, _mm_mul_ps(_mm_sub_ps(zmm8, zmm11), temp0_99))
            zmm10[0] = zmm10[0] * zmm1[0]
            float temp0_123[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe5)
            float temp0_124[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe5)
            temp0_124[0] = temp0_124[0] * temp0_123[0]
            temp0_124[0] = temp0_124[0] + zmm10[0]
            zmm2 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
            zmm3 = _mm_unpackhi_pd(zmm1, zmm1[0].q)
            zmm3[0] = zmm3[0] * zmm2[0]
            zmm3[0] = zmm3[0] + temp0_124[0]
            float temp0_127[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
            float temp0_128[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xe7)
            temp0_128[0] = temp0_128[0] * temp0_127[0]
            temp0_128[0] = temp0_128[0] + zmm3[0]
            int64_t rcx_7
            rcx_7.b = temp0_128[0] >= 0f
            float temp0_129[0x4] = _mm_mul_ps(temp0_99, zmm1)
            zmm6[0] = zmm6[0] f* *(&data_143442128 + (rcx_7 << 2))
            float temp0_132[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm10), temp0_129)
            zmm15 = data_142d3f7d0
            float temp0_133[0x4] = _mm_mul_ps(temp0_132, temp0_132)
            float temp0_135[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_133, temp0_133[0].q), temp0_133)
            float temp0_136[0x4] = _mm_shuffle_ps(temp0_135, temp0_135, 0xe5)
            temp0_136[0] = temp0_136[0] + temp0_135[0]
            float temp0_137[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_136[0], 6)
            temp0_136[0] = temp0_136[0] * 0.5f
            float temp0_138[0x4] = _mm_rsqrt_ss(temp0_136[0], temp0_136[0])
            temp0_138[0] = temp0_138[0] * temp0_138[0]
            temp0_138[0] = temp0_138[0] * temp0_136[0]
            zmm0 = 0x3f000000
            zmm0[0] = 0.5f - temp0_138[0]
            zmm0[0] = zmm0[0] * temp0_138[0]
            zmm0[0] = zmm0[0] + temp0_138[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm0[0] = zmm0[0] * temp0_136[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - zmm0[0]
            zmm2 = _mm_andnot_ps(temp0_137, 0xffffffff)
            zmm3[0] = zmm3[0] * zmm0[0]
            zmm3[0] = zmm3[0] + zmm0[0]
            float temp0_141[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_132)
            float temp0_142[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            zmm3 = _mm_and_ps(temp0_141, temp0_142)
            zmm2 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_142, data_142d3f660), zmm3)
            float temp0_148[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(r9), zx.o(r8_1), 0), 
                __shufps_xmmps_memps_immb(zx.o(rdx_2), var_1e8, 0x30), 0x82)
            float temp0_149[0x4] = _mm_shuffle_ps(zx.o(r15_1), zx.o(r11_1), 0)
            zmm0 = zx.o(rax_10)
            float temp0_151[0x4] =
                _mm_shuffle_ps(temp0_149, __shufps_xmmps_memps_immb(zmm0, var_198, 0x30), 0x82)
            var_198 = temp0_151
            float temp0_152[0x4] = _mm_sub_ps(temp0_148, temp0_151)
            float temp0_154[0x4] =
                _mm_shuffle_ps(temp0_152, _mm_shuffle_ps(var_1d8, temp0_152, 0x23), 0x24)
            float temp0_156[0x4] =
                _mm_shuffle_ps(temp0_86, _mm_shuffle_ps(var_1c8, temp0_86, 3), 0x20)
            float temp0_157[0x4] = __shufps_xmmps_memps_immb(zmm0, var_1b8, 0x30)
            float temp0_158[0x4] = _mm_mul_ps(temp0_154, temp0_156)
            float temp0_159[0x4] = _mm_shuffle_ps(temp0_149, temp0_157, 0x82)
            float temp0_161[0x4] =
                _mm_shuffle_ps(temp0_158, _mm_shuffle_ps(var_1a8, temp0_158, 0x23), 0x24)
            float temp0_162[0x4] = _mm_add_ps(temp0_159, temp0_161)
            rdi_2 = temp0_162[0]
            zmm8 = _mm_shuffle_epi32(temp0_162, 0x4e)
            rcx_8 = _mm_shuffle_ps(temp0_162, temp0_162, 0xe5)[0]
            r10_1 = zmm8[0]
            var_1e8 = temp0_148
            var_1b8 = temp0_159
            var_1d8 = temp0_154
            var_1a8 = temp0_161
            zmm7 = data_142d3f7b0
            var_1c8 = temp0_156
        
        *(arg4 + (rsi_1 << 2)) = zmm10
        *(arg6 + (rsi_1 << 2)) = zmm1
        *(arg5 + rbp_1) = r11_1
        *(arg5 + rbp_1 + 4) = r15_1
        *(arg5 + rbp_1 + 8) = rax_10
        *(arg7 + rbp_1) = r8_1
        *(arg7 + rbp_1 + 4) = r9
        *(arg7 + rbp_1 + 8) = rdx_2
        float (* rdx_3)[0x4]
        float* rbx_3
        
        if (r13_1.d == 0xffffffff)
            rbx_3 = arg9
            rdx_3 = arg8
        else
            rdx_3 = arg8
            float temp0_165[0x4] = __mulps_xmmps_memps(rdx_3[r13_1], data_142d3f690)
            float temp0_167[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xff), zmm2)
            float temp0_168[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0)
            float temp0_172[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x1b), temp0_168), zmm9), temp0_167)
            float temp0_173[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0x55)
            float temp0_177[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0x4e), temp0_173), zmm15), temp0_172)
            float temp0_178[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xaa)
            float temp0_182[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xb1), temp0_178), zmm7), temp0_177)
            float temp0_183[0x4] = _mm_mul_ps(temp0_182, temp0_182)
            float temp0_185[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_183, temp0_183[0].q), temp0_183)
            float temp0_186[0x4] = _mm_shuffle_ps(temp0_185, temp0_185, 0xe5)
            temp0_186[0] = temp0_186[0] + temp0_185[0]
            float temp0_187[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_186[0], 6)
            temp0_186[0] = temp0_186[0] * 0.5f
            float temp0_188[0x4] = _mm_rsqrt_ss(temp0_186[0], temp0_186[0])
            temp0_188[0] = temp0_188[0] * temp0_188[0]
            temp0_188[0] = temp0_188[0] * temp0_186[0]
            zmm5 = 0x3f000000
            zmm5[0] = 0.5f - temp0_188[0]
            zmm14 = _mm_andnot_ps(temp0_187, 0xffffffff)
            zmm5[0] = zmm5[0] * temp0_188[0]
            zmm5[0] = zmm5[0] + temp0_188[0]
            zmm5[0] = zmm5[0] * zmm5[0]
            zmm5[0] = zmm5[0] * temp0_186[0]
            zmm3 = 0x3f000000
            zmm3[0] = 0.5f - zmm5[0]
            zmm3[0] = zmm3[0] * zmm5[0]
            zmm3[0] = zmm3[0] + zmm5[0]
            float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_182)
            float temp0_192[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
            zmm3 = _mm_and_ps(temp0_191, temp0_192)
            zmm14 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_192, data_142d3f660), zmm3)
            int64_t rax_14 = r13_1 * 3
            rbx_3 = arg9
            zmm1 = zx.o(*(rbx_3 + (rax_14 << 2)))[0].q | rbx_3[rax_14 + 2][0].q << 0x40
            float temp0_196[0x4] = _mm_rcp_ps(zmm1)
            float temp0_197[0x4] = _mm_mul_ps(zmm1, temp0_196)
            zmm4 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(data_142fc9600, temp0_197), temp0_196), 
                __cmpps_xmmps_memps_immb(__andps_xmmxud_memxud(zmm1, data_142d3f770), 
                    data_142d3f5c0, 6))
            float temp0_204[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(var_128, zmm4, 0x23), 0x24)
            float temp0_207[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zx.o(rcx_8), zx.o(rdi_2), 0), 
                __shufps_xmmps_memps_immb(zx.o(r10_1), var_118, 0x30), 0x82)
            var_118 = temp0_207
            zmm11 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_207, temp0_204), data_142d3f5a0)
            var_128 = temp0_204
        
        *(rdx_3 + (rsi_1 << 2)) = zmm2
        *(rbx_3 + rbp_1) = rdi_2
        *(rbx_3 + rbp_1 + 4) = rcx_8
        *(rbx_3 + rbp_1 + 8) = r10_1
        result = arg1
        *(result + (rbp_1 << 2)) = zmm14
        *(result + (rbp_1 << 2) + 0x10) = zmm13
        *(result + (rbp_1 << 2) + 0x20) = zmm11
        r12_1 += 1
        rsi_1 += 4
        rbp_1 += 0xc
    while (rax != r12_1)
return result
