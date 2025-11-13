// 函数: sub_140330050
// 地址: 0x140330050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4] = *arg9
float temp0_1[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(*arg4, *(arg4 + 4), 0x10), *(arg4 + 8), 0x20)
float zmm0[0x4] = data_142d3f730
float temp0_2[0x4] = _mm_div_ps(temp0_1, zmm0)
uint32_t zmm11[0x4] = data_142d3f770
float zmm4[0x4] = _mm_and_ps(temp0_2, zmm11)
float zmm5[0x4] = data_142d3f740
float temp0_4[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 2)
float temp0_5[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 6)
zmm4 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_2)), temp0_5)
float temp0_13[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_1, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_4, temp0_2), zmm4), zmm0)), 
    data_142d3f5f0)
uint128_t zmm12 = arg8
float temp0_18[0x4] = _mm_sub_ps(temp0_13, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_13))), 
        data_142d3f6e0))
float zmm3[0x4] = data_142d3f780
float temp0_21[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_18, zmm3), data_142d3f6d0), temp0_18)
zmm5 = _mm_and_ps(temp0_18, zmm11)
float zmm6[0x4] = data_142d3f6a0
float temp0_23[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 1)
zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm6, zmm5, 5), temp0_18)
zmm0 = _mm_or_ps(_mm_and_ps(temp0_21, temp0_23), zmm6)
zmm4 = __orps_xmmxud_memxud(_mm_and_ps(temp0_23, zmm3), data_142d3f670)
float temp0_30[0x4] = _mm_mul_ps(zmm0, zmm0)
float zmm13[0x4] = arg6
float temp0_38[0x4] = __addps_xmmps_memps(
    _mm_mul_ps(
        __addps_xmmps_memps(
            _mm_mul_ps(
                __addps_xmmps_memps(
                    _mm_mul_ps(
                        __addps_xmmps_memps(_mm_mul_ps(data_143443100, temp0_30), data_143443110), 
                        temp0_30), 
                    data_143443120), 
                temp0_30), 
            data_143443130), 
        temp0_30), 
    data_143443140)
float temp0_40[0x4] = __addps_xmmps_memps(_mm_mul_ps(data_143443150, temp0_30), data_143443160)
float temp0_41[0x4] = _mm_mul_ps(temp0_38, temp0_30)
float temp0_43[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_40, temp0_30), data_143443170)
float zmm14[0x4] = data_142d3f670
float temp0_45[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_43, temp0_30), data_143443180)
float temp0_46[0x4] = _mm_add_ps(temp0_41, zmm14)
float temp0_48[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_45, temp0_30), data_142d3f790)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm0)
float temp0_52[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_48, temp0_30), zmm14), zmm4)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_49, temp0_52, 0)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_49, temp0_52, 0x55)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_49, 0)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, temp0_49, 0x55)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
float temp0_61[0x4] =
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xd8), temp0_53), temp0_58)
float temp0_64[0x4] =
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xd8), temp0_55), temp0_57)
zmm5 = temp0_61 ^ data_142e6d9e0
zmm3 = temp0_64 ^ data_142e6da10
uint32_t temp0_65 = _mm_movemask_ps(zmm7)
float temp0_66[0x4] = __insertps_xmmps_memd_immb(*arg5, (*arg5)[1], 0x10)
float temp0_67[0x4] = _mm_add_ps(zmm3, zmm5)
float temp0_68[0x4] = __insertps_xmmps_memd_immb(temp0_66, (*arg5)[2], 0x20)
float temp0_71[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg3, arg3, 0x1c), arg3, 0x20), temp0_68)
float zmm10[0x4] = arg2[2]
uint64_t result
float zmm1[0x4]
float var_1c0[0x4]
int32_t var_1b8
float var_150[0x4]
int32_t var_134
float zmm8[0x4]
float zmm9[0x4]
float zmm15[0x4]

if (temp0_65 != 0xf)
    result = zx.q(_mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm10, zx.o(0), 1), zmm7)))
    
    if (result.d == 0)
        zmm9 = (*arg2)[3]
        zmm7 = *arg2
        zmm8 = (*arg2)[1]
        zmm6 = (*arg2)[2]
        float temp0_487[0x4] =
            _mm_insert_ps(_mm_insert_ps(zx.o(*(arg2 + 4)), zmm7, 0x20), zmm9, 0x30)
        float temp0_490[0x4] =
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm7, 0x10), zmm8, 0x20), zmm9, 0x30)
        float temp0_491[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_492[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_494[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_492)
        float temp0_495[0x4] = _mm_mul_ps(temp0_67, temp0_491)
        float temp0_497[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_494, data_142d3f7c0), temp0_495)
        float temp0_498[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_502[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_498), 
                data_142d3f7d0), 
            temp0_497)
        float temp0_503[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm3 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_503), 
                data_142d3f7b0), 
            temp0_502)
        float temp0_508[0x4] = _mm_mul_ps(temp0_71, zmm10)
        float temp0_509[0x4] = _mm_shuffle_ps(temp0_508, temp0_508, 0xd2)
        float temp0_510[0x4] = _mm_shuffle_ps(temp0_508, temp0_508, 0xc9)
        float temp0_513[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_509, temp0_487), _mm_mul_ps(temp0_510, temp0_490))
        float temp0_514[0x4] = _mm_add_ps(temp0_513, temp0_513)
        float temp0_516[0x4] = _mm_add_ps(_mm_mul_ps(temp0_491, temp0_514), temp0_508)
        float temp0_517[0x4] = _mm_shuffle_ps(temp0_514, temp0_514, 0xd2)
        float temp0_518[0x4] = _mm_shuffle_ps(temp0_514, temp0_514, 0xc9)
        zmm1 = __addps_xmmps_memps(
            _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_517, temp0_487), _mm_mul_ps(temp0_518, temp0_490)), 
                temp0_516), 
            arg2[1])
        zmm15 = __mulps_xmmps_memps(zmm10, data_142e6da00)
        zmm7 = arg7
    else
        float temp0_235[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_236[0x4] = _mm_mul_ps(temp0_67, temp0_235)
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_236, temp0_236, 1)
        zmm11 = _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_236, temp0_236, 0x1a), temp0_237))
        zmm15 = data_142e6da00
        zmm11 = _mm_mul_ps(zmm11, zmm15)
        float temp0_242[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float var_c0_1[0x4] = zmm7
        float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0x29), temp0_242)
        float temp0_245[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0x12), temp0_245)
        float temp0_249[0x4] = _mm_mul_ps(_mm_add_ps(temp0_244, temp0_247), zmm15)
        float temp0_251[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_244, temp0_247), zmm15)
        zmm9 = data_142d3f660
        float temp0_253[0x4] = _mm_blend_ps(_mm_insert_ps(zmm11, temp0_249, 0x1c), temp0_251, 4)
        float temp0_255[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_251, zmm11, 0x5c), temp0_249, 0x68)
        float temp0_257[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_251, temp0_249, 0x8c), zmm11, 4)
        float temp0_258[0x4] = _mm_blend_ps(temp0_71, zmm9, 8)
        float var_140_2[0x4] = temp0_253
        zmm0 = *arg2
        float temp0_260[0x4] =
            _mm_shuffle_ps(__insertps_xmmps_memd_immb(zmm0, (*arg2)[1], 0x10), zmm0, 4)
        float temp0_261[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_262[0x4] = _mm_mul_ps(zmm0, temp0_261)
        float temp0_263[0x4] = _mm_shuffle_ps(temp0_262, temp0_262, 0xc1)
        float temp0_267[0x4] = _mm_mul_ps(
            _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_262, temp0_262, 0xda), temp0_263)), 
            zmm10)
        float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0x29), temp0_260)
        zmm6 = (*arg2)[3]
        float temp0_270[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_272[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0x12), temp0_270)
        float temp0_274[0x4] = _mm_mul_ps(_mm_add_ps(temp0_269, temp0_272), zmm10)
        float temp0_275[0x4] = _mm_insert_ps(zx.o(*(arg2 + 0x24)), zmm10, 0x20)
        float temp0_277[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_269, temp0_272), temp0_275)
        zmm0 = arg2[1][0]
        float temp0_279[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_267, temp0_274, 0x1c), temp0_277, 4)
        float temp0_281[0x4] =
            _mm_insert_ps(_mm_insert_ps(temp0_277, temp0_267, 0x5c), temp0_274, 0x68)
        float temp0_282[0x4] = _mm_insert_ps(temp0_277, temp0_274, 0x8c)
        float temp0_285[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(_mm_blend_ps(zmm0, zmm9, 0xc), (*arg2)[5], 0x10), 
            (*arg2)[6], 0x20)
        zmm15 = __mulps_xmmps_memps(zmm15, arg2[2])
        float temp0_287[0x4] = _mm_blend_ps(temp0_282, temp0_267, 4)
        zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_279)
        float temp0_292[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_251, temp0_251, 0xaa), temp0_287), zmm11)
        float temp0_295[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_249, temp0_249, 0), temp0_281), temp0_292)
        zmm9 = var_134
        zmm3 = temp0_255[0]
        float temp0_298[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_285), temp0_295)
        float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_279)
        zmm4 = temp0_255[2]
        float temp0_303[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_287), temp0_300)
        zmm3 = temp0_255[1]
        float temp0_306[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_281), temp0_303)
        zmm5 = temp0_255[3]
        float temp0_309[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_285), temp0_306)
        zmm3 = temp0_257[0]
        float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_279)
        zmm4 = temp0_257[2]
        float temp0_314[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_287), temp0_311)
        zmm3 = temp0_257[1]
        float temp0_317[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_281), temp0_314)
        zmm7 = temp0_257[3]
        float temp0_320[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_285), temp0_317)
        zmm3 = temp0_258[0]
        float temp0_322[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_279)
        zmm4 = temp0_258[2]
        float temp0_325[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_287), temp0_322)
        zmm1 = temp0_258[1]
        float temp0_328[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_281), temp0_325)
        zmm4 = temp0_258[3]
        float temp0_331[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_285), temp0_328)
        float temp0_332[0x4] = _mm_movehdup_ps(temp0_298)
        zmm3 = _mm_unpackhi_pd(temp0_298, temp0_298[0].q)
        zmm12 = zx.o(_mm_extract_ps(temp0_309, 0))
        float temp0_335[0x4] = _mm_movehdup_ps(temp0_309)
        zmm1 = _mm_unpackhi_pd(temp0_309, temp0_309[0].q)
        zmm8 = zx.o(_mm_extract_ps(temp0_320, 0))
        float temp0_338[0x4] = _mm_blend_ps(temp0_309, zmm12, 1)
        zmm11 = _mm_movehdup_ps(temp0_320)
        zmm10 = _mm_unpackhi_pd(temp0_320, temp0_320[0].q)
        float temp0_341[0x4] = _mm_blend_ps(temp0_320, zmm8, 1)
        var_1c0 = temp0_298
        int96_t var_1b0_2 = temp0_338[0].12
        int96_t var_1a0_2 = temp0_341[0].12
        int96_t var_190_2 = temp0_331[0].12
        temp0_298[0] = temp0_298[0] * temp0_298[0]
        temp0_332[0] = temp0_332[0] * temp0_332[0]
        temp0_332[0] = temp0_332[0] + temp0_298[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm3[0] = zmm3[0] + temp0_332[0]
        zmm12.d = zmm12.d f* zmm12.d
        temp0_335[0] = temp0_335[0] * temp0_335[0]
        temp0_335[0] = temp0_335[0] f+ zmm12.d
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] + temp0_335[0]
        zmm8[0] = zmm8[0] * zmm8[0]
        zmm11[0] = zmm11[0] f* zmm11[0]
        zmm11[0] = zmm11[0] f+ zmm8[0]
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm10[0] = zmm10[0] f+ zmm11[0]
        zmm11 = 0xb22bcc77
        zmm3[0] = zmm3[0] + -9.99999994e-09f
        float temp0_342[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm13 = 0x3f000000
        zmm3[0] = zmm3[0] * 0.5f
        temp0_342[0] = temp0_342[0] * temp0_342[0]
        temp0_342[0] = temp0_342[0] * zmm3[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - temp0_342[0]
        zmm0[0] = zmm0[0] * temp0_342[0]
        zmm0[0] = zmm0[0] + temp0_342[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - zmm0[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm7[0] = zmm7[0] + zmm0[0]
        float temp0_343[0x4] = _mm_cmpeq_ss(0, zmm3[0], 2)
        zmm7 = _mm_and_ps(zmm7, temp0_343)
        zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_343, 0x3f800000), zmm7)
        zmm1[0] = zmm1[0] + -9.99999994e-09f
        float temp0_347[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1[0])
        zmm1[0] = zmm1[0] * 0.5f
        temp0_347[0] = temp0_347[0] * temp0_347[0]
        temp0_347[0] = temp0_347[0] * zmm1[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_347[0]
        zmm6[0] = zmm6[0] * temp0_347[0]
        zmm6[0] = zmm6[0] + temp0_347[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm1[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - zmm6[0]
        zmm7[0] = zmm7[0] * zmm6[0]
        zmm7[0] = zmm7[0] + zmm6[0]
        float temp0_348[0x4] = _mm_cmpeq_ss(0, zmm1[0], 2)
        zmm7 = _mm_and_ps(zmm7, temp0_348)
        zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_348, 0x3f800000), zmm7)
        zmm11[0] = -9.99999994e-09f + zmm10[0]
        float temp0_352[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
        zmm10[0] = zmm10[0] * 0.5f
        temp0_352[0] = temp0_352[0] * temp0_352[0]
        temp0_352[0] = temp0_352[0] * zmm10[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_352[0]
        zmm6[0] = zmm6[0] * temp0_352[0]
        zmm6[0] = zmm6[0] + temp0_352[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm10[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f - zmm6[0]
        zmm4[0] = zmm4[0] * zmm6[0]
        zmm4[0] = zmm4[0] + zmm6[0]
        float temp0_353[0x4] = _mm_cmpeq_ss(0, zmm11[0], 2)
        zmm4 = _mm_and_ps(zmm4, temp0_353)
        zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_353, 0x3f800000), zmm4)
        zmm0 = var_1c0[1]
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm6 = var_1b8
        zmm6[0] = zmm6[0] * zmm3[0]
        zmm3[0] = zmm3[0] * temp0_298[0]
        float temp0_358[0x4] = _mm_insert_ps(_mm_insert_ps(zmm3, zmm0, 0x10), zmm6, 0x20)
        zmm3 = var_1b0_2.d
        zmm3[0] = zmm3[0] * zmm1[0]
        zmm0 = var_1b0_2:4.d
        zmm0[0] = zmm0[0] * zmm1[0]
        float temp0_359[0x4] = _mm_insert_ps(zmm3, zmm0, 0x10)
        zmm1[0] = zmm1[0] f* var_1b0_2:8.d
        float temp0_360[0x4] = _mm_insert_ps(temp0_359, zmm1, 0x20)
        zmm1 = var_1a0_2.d
        zmm1[0] = zmm1[0] * zmm5[0]
        zmm0 = var_1a0_2:4.d
        zmm0[0] = zmm0[0] * zmm5[0]
        float temp0_361[0x4] = _mm_insert_ps(zmm1, zmm0, 0x10)
        zmm5[0] = zmm5[0] f* var_1a0_2:8.d
        zmm0 =
            __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm15, 2), data_142d3f780) ^ data_142d3f7e0
        float temp0_364[0x4] = _mm_insert_ps(temp0_361, zmm5, 0x20)
        float temp0_366[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0), temp0_358)
        float temp0_367[0x4] = _mm_movehdup_ps(temp0_366)
        zmm14 = _mm_unpackhi_pd(temp0_366, temp0_366[0].q)
        var_1c0[0] = temp0_366[0]
        var_1c0[1] = temp0_367[0]
        float var_1b8_2 = zmm14[0]
        float temp0_370[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0x55), temp0_360)
        float temp0_371[0x4] = _mm_movehdup_ps(temp0_370)
        zmm4 = _mm_unpackhi_pd(temp0_370, temp0_370[0].q)
        var_1b0_2.d = temp0_370[0]
        var_1b0_2:4.d = temp0_371[0]
        var_1b0_2:8.d = zmm4[0]
        float temp0_374[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm0, 0xaa), temp0_364)
        float temp0_375[0x4] = _mm_movehdup_ps(temp0_374)
        zmm11 = _mm_unpackhi_pd(temp0_374, temp0_374[0].q)
        var_1a0_2.d = temp0_374[0]
        var_1a0_2:4.d = temp0_375[0]
        var_1a0_2:8.d = zmm11[0]
        float temp0_379[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_366, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5e0, 2)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_epi32(zx.o(0), var_c0_1) | temp0_379))
        
        if (result.b == 0xf)
            zmm4 = data_142d3f660
        else
            float temp0_384[0x4] = __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_370, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5e0, 2)
            zmm8 = _mm_cmpeq_epi32(var_c0_1, zx.o(0))
            result = zx.q(_mm_movemask_ps(_mm_or_ps(temp0_384, zmm8)))
            
            if (result.b == 0xf)
                zmm4 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(_mm_or_ps(
                    __cmpps_xmmps_memps_immb(
                        __andps_xmmxud_memxud(
                            __insertps_xmmps_memd_immb(temp0_374, 0x800000, 0x30), data_142d3f770), 
                        data_142d3f5e0, 2), 
                    zmm8)))
                
                if (result.b == 0xf)
                    zmm4 = data_142d3f660
                else
                    temp0_366[0] = temp0_366[0] + temp0_371[0]
                    temp0_366[0] = temp0_366[0] f+ zmm11[0]
                    
                    if (temp0_366[0] <= 0f)
                        temp0_371[0] - temp0_366[0]
                        int32_t rdx_12
                        rdx_12.b = temp0_371[0] > temp0_366[0]
                        int64_t rax_13 = 0x14
                        
                        if (temp0_371[0] <= temp0_366[0])
                            rax_13 = 0
                        
                        uint64_t rax_14 = 2
                        
                        if (zmm11[0] f<= *(&var_1c0 + rax_13))
                            rax_14 = zx.q(rdx_12)
                        
                        int64_t r9_1 = sx.q(*(&data_1434431ec + (rax_14 << 2)))
                        int64_t r8_2 = sx.q(*(&data_1434431ec + (r9_1 << 2)))
                        zmm0 = var_1c0[zx.q((rax_14 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r9_1 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r8_2 * 5).d)]
                        zmm3 = 0x3f800000
                        zmm0[0] = zmm0[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
                        zmm3[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm3[0] = zmm3[0] * 0.5f
                        var_150[rax_14] = zmm3[0]
                        zmm0 = var_1c0[sx.q((r9_1 + (rax_14 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_14 + (r9_1 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        var_150[r9_1] = zmm0[0]
                        zmm0 = var_1c0[sx.q((r8_2 + (rax_14 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_14 + (r8_2 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        zmm3 = var_1c0[sx.q((r8_2 + (r9_1 << 2)).d)]
                        result = sx.q((r9_1 + (r8_2 << 2)).d)
                        zmm3[0] = zmm3[0] - var_1c0[result]
                        var_150[r8_2] = zmm0[0]
                        zmm3[0] = zmm3[0] * zmm1[0]
                        float var_144_2 = zmm3[0]
                        zmm4 = var_150
                    else
                        zmm6 = 0x3f800000
                        temp0_366[0] = temp0_366[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(0, temp0_366[0])[0]
                        zmm6[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm4[0] = zmm4[0] - temp0_375[0]
                        zmm4[0] = zmm4[0] * zmm1[0]
                        temp0_374[0] = temp0_374[0] - zmm14[0]
                        temp0_374[0] = temp0_374[0] * zmm1[0]
                        float temp0_394[0x4] = _mm_insert_ps(zmm4, temp0_374, 0x10)
                        temp0_367[0] = temp0_367[0] - temp0_370[0]
                        temp0_367[0] = temp0_367[0] * zmm1[0]
                        float temp0_395[0x4] = _mm_insert_ps(temp0_394, temp0_367, 0x20)
                        zmm6[0] = zmm6[0] * 0.5f
                        zmm4 = _mm_insert_ps(temp0_395, zmm6, 0x30)
        
        zmm11 = data_142d3f770
        zmm12 = arg8
        zmm7 = arg7
        zmm14 = data_142d3f670
        float temp0_411[0x4] = _mm_mul_ps(zmm4, zmm4)
        float temp0_413[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_411, temp0_411[0].q), temp0_411)
        float temp0_414[0x4] = _mm_movehdup_ps(temp0_413)
        temp0_414[0] = temp0_414[0] + temp0_413[0]
        zmm3 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_414[0], 6), 0xffffffff)
        temp0_414[0] = temp0_414[0] * 0.5f
        float temp0_417[0x4] = _mm_rsqrt_ss(temp0_414[0], temp0_414[0])
        temp0_417[0] = temp0_417[0] * temp0_417[0]
        temp0_417[0] = temp0_417[0] * temp0_414[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_417[0]
        zmm6[0] = zmm6[0] * temp0_417[0]
        zmm6[0] = zmm6[0] + temp0_417[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * temp0_414[0]
        zmm13[0] = 0.5f - zmm6[0]
        zmm13[0] = zmm13[0] * zmm6[0]
        zmm13[0] = zmm13[0] + zmm6[0]
        float temp0_419[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), zmm4)
        float temp0_420[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm13 = _mm_and_ps(temp0_419, temp0_420)
        zmm3 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_420, data_142d3f660), zmm13)
        zmm1 = __insertps_xmmps_memd_immb(zx.o(var_190_2.q), var_190_2:8.d, 0x28)
        zmm13 = arg6
    
    arg3[0] = arg3[0] * 0.5f
    float temp0_526[0x4] = _mm_insert_ps(_mm_unpacklo_ps(zmm13, zmm7[0].q), zmm12, 0x28)
    arg3 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_526)
    float temp0_529[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_530[0x4] = _mm_mul_ps(temp0_529, zmm3)
    float temp0_531[0x4] = _mm_shuffle_ps(temp0_530, temp0_530, 1)
    zmm14 = _mm_mul_ps(
        _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_530, temp0_530, 0x1a), temp0_531)), zmm15)
    zmm5 = _mm_shuffle_epi32(zmm3, 4)
    float temp0_538[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_529, temp0_529, 0x29), zmm5)
    zmm3 = _mm_shuffle_epi32(zmm3, 0xff)
    float temp0_541[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_529, temp0_529, 0x12), zmm3)
    zmm3 = _mm_mul_ps(_mm_add_ps(temp0_538, temp0_541), zmm15)
    float temp0_544[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xc9)
    zmm0 = _mm_mul_ps(_mm_sub_ps(temp0_538, temp0_541), temp0_544)
else
    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm10, zx.o(0), 1)))
    
    if (result.b == 0)
        zmm9 = (*arg2)[3]
        zmm7 = *arg2
        zmm8 = (*arg2)[1]
        zmm6 = (*arg2)[2]
        float temp0_426[0x4] =
            _mm_insert_ps(_mm_insert_ps(zx.o(*(arg2 + 4)), zmm7, 0x20), zmm9, 0x30)
        float temp0_429[0x4] =
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm7, 0x10), zmm8, 0x20), zmm9, 0x30)
        float temp0_430[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_431[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_433[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_431)
        float temp0_434[0x4] = _mm_mul_ps(temp0_67, temp0_430)
        float temp0_436[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_433, data_142d3f7c0), temp0_434)
        float temp0_437[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_441[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_437), 
                data_142d3f7d0), 
            temp0_436)
        float temp0_442[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm3 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_442), 
                data_142d3f7b0), 
            temp0_441)
        float temp0_447[0x4] = _mm_mul_ps(temp0_71, zmm10)
        float temp0_448[0x4] = _mm_shuffle_ps(temp0_447, temp0_447, 0xd2)
        float temp0_449[0x4] = _mm_shuffle_ps(temp0_447, temp0_447, 0xc9)
        float temp0_452[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_448, temp0_426), _mm_mul_ps(temp0_449, temp0_429))
        float temp0_453[0x4] = _mm_add_ps(temp0_452, temp0_452)
        float temp0_455[0x4] = _mm_add_ps(_mm_mul_ps(temp0_430, temp0_453), temp0_447)
        float temp0_456[0x4] = _mm_shuffle_ps(temp0_453, temp0_453, 0xd2)
        float temp0_457[0x4] = _mm_shuffle_ps(temp0_453, temp0_453, 0xc9)
        zmm1 = __addps_xmmps_memps(
            _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_456, temp0_426), _mm_mul_ps(temp0_457, temp0_429)), 
                temp0_455), 
            arg2[1])
        zmm13 = __mulps_xmmps_memps(zmm10, data_142e6da00)
        zmm7 = arg7
    else
        float temp0_74[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_75[0x4] = _mm_mul_ps(temp0_67, temp0_74)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 1)
        zmm11 = _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x1a), temp0_76))
        zmm13 = data_142e6da00
        zmm11 = _mm_mul_ps(zmm11, zmm13)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x29), temp0_81)
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x12), temp0_84)
        float temp0_88[0x4] = _mm_mul_ps(_mm_add_ps(temp0_83, temp0_86), zmm13)
        float temp0_90[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_83, temp0_86), zmm13)
        zmm8 = data_142d3f660
        float temp0_92[0x4] = _mm_blend_ps(_mm_insert_ps(zmm11, temp0_88, 0x1c), temp0_90, 4)
        float temp0_94[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_90, zmm11, 0x5c), temp0_88, 0x68)
        float temp0_96[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_90, temp0_88, 0x8c), zmm11, 4)
        float temp0_97[0x4] = _mm_blend_ps(temp0_71, zmm8, 8)
        float var_140_1[0x4] = temp0_92
        zmm1 = *arg2
        float temp0_99[0x4] =
            _mm_shuffle_ps(__insertps_xmmps_memd_immb(zmm1, (*arg2)[1], 0x10), zmm1, 4)
        float temp0_100[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_101[0x4] = _mm_mul_ps(zmm1, temp0_100)
        float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xc1)
        float temp0_106[0x4] = _mm_mul_ps(
            _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xda), temp0_102)), 
            zmm10)
        float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0x29), temp0_99)
        zmm4 = (*arg2)[3]
        float temp0_109[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0x12), temp0_109)
        float temp0_113[0x4] = _mm_mul_ps(_mm_add_ps(temp0_108, temp0_111), zmm10)
        float temp0_114[0x4] = _mm_insert_ps(zx.o(*(arg2 + 0x24)), zmm10, 0x20)
        float temp0_116[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_108, temp0_111), temp0_114)
        zmm1 = arg2[1][0]
        float temp0_118[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_106, temp0_113, 0x1c), temp0_116, 4)
        float temp0_120[0x4] =
            _mm_insert_ps(_mm_insert_ps(temp0_116, temp0_106, 0x5c), temp0_113, 0x68)
        float temp0_122[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_116, temp0_113, 0x8c), temp0_106, 4)
        float temp0_125[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(_mm_blend_ps(zmm1, zmm8, 0xc), (*arg2)[5], 0x10), 
            (*arg2)[6], 0x20)
        zmm13 = __mulps_xmmps_memps(zmm13, arg2[2])
        zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_118)
        float temp0_131[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xaa), temp0_122), zmm11)
        float temp0_134[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0), temp0_120), temp0_131)
        zmm8 = var_134
        zmm3 = temp0_94[0]
        float temp0_137[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_125), temp0_134)
        float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_118)
        zmm5 = temp0_94[2]
        float temp0_142[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_122), temp0_139)
        zmm3 = temp0_94[1]
        float temp0_145[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_120), temp0_142)
        zmm6 = temp0_94[3]
        float temp0_148[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_125), temp0_145)
        zmm3 = temp0_96[0]
        float temp0_150[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_118)
        zmm5 = temp0_96[2]
        float temp0_153[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_122), temp0_150)
        zmm3 = temp0_96[1]
        float temp0_156[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_120), temp0_153)
        zmm7 = temp0_96[3]
        float temp0_159[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_125), temp0_156)
        zmm3 = temp0_97[0]
        float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_118)
        zmm4 = temp0_97[2]
        float temp0_164[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_122), temp0_161)
        zmm0 = temp0_97[1]
        float temp0_167[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_120), temp0_164)
        zmm5 = temp0_97[3]
        float temp0_170[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_125), temp0_167)
        float temp0_171[0x4] = _mm_movehdup_ps(temp0_137)
        int32_t temp0_172 = _mm_extract_ps(temp0_148, 0)
        zmm3 = _mm_unpackhi_pd(temp0_137, temp0_137[0].q)
        zmm12 = zx.o(temp0_172)
        float temp0_174[0x4] = _mm_movehdup_ps(temp0_148)
        zmm1 = _mm_unpackhi_pd(temp0_148, temp0_148[0].q)
        zmm9 = zx.o(_mm_extract_ps(temp0_159, 0))
        float temp0_177[0x4] = _mm_blend_ps(temp0_148, zmm12, 1)
        zmm11 = _mm_movehdup_ps(temp0_159)
        zmm10 = _mm_unpackhi_pd(temp0_159, temp0_159[0].q)
        float temp0_180[0x4] = _mm_blend_ps(temp0_159, zmm9, 1)
        var_1c0 = temp0_137
        int96_t var_1b0_1 = temp0_177[0].12
        int96_t var_1a0_1 = temp0_180[0].12
        int96_t var_190_1 = temp0_170[0].12
        temp0_137[0] = temp0_137[0] * temp0_137[0]
        temp0_171[0] = temp0_171[0] * temp0_171[0]
        temp0_171[0] = temp0_171[0] + temp0_137[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm3[0] = zmm3[0] + temp0_171[0]
        zmm12.d = zmm12.d f* zmm12.d
        temp0_174[0] = temp0_174[0] * temp0_174[0]
        temp0_174[0] = temp0_174[0] f+ zmm12.d
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] + temp0_174[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm11[0] = zmm11[0] f* zmm11[0]
        zmm11[0] = zmm11[0] f+ zmm9[0]
        zmm10[0] = zmm10[0] * zmm10[0]
        zmm10[0] = zmm10[0] f+ zmm11[0]
        zmm9 = 0xb22bcc77
        zmm3[0] = zmm3[0] + -9.99999994e-09f
        float temp0_181[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_181[0] = temp0_181[0] * temp0_181[0]
        temp0_181[0] = temp0_181[0] * zmm3[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - temp0_181[0]
        zmm0[0] = zmm0[0] * temp0_181[0]
        zmm0[0] = zmm0[0] + temp0_181[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - zmm0[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm7[0] = zmm7[0] + zmm0[0]
        float temp0_182[0x4] = _mm_cmpeq_ss(0, zmm3[0], 2)
        zmm7 = _mm_and_ps(zmm7, temp0_182)
        zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_182, 0x3f800000), zmm7)
        zmm1[0] = zmm1[0] + -9.99999994e-09f
        float temp0_186[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1[0])
        zmm1[0] = zmm1[0] * 0.5f
        temp0_186[0] = temp0_186[0] * temp0_186[0]
        temp0_186[0] = temp0_186[0] * zmm1[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_186[0]
        zmm6[0] = zmm6[0] * temp0_186[0]
        zmm6[0] = zmm6[0] + temp0_186[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm1[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - zmm6[0]
        zmm7[0] = zmm7[0] * zmm6[0]
        zmm7[0] = zmm7[0] + zmm6[0]
        float temp0_187[0x4] = _mm_cmpeq_ss(0, zmm1[0], 2)
        zmm7 = _mm_and_ps(zmm7, temp0_187)
        zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_187, 0x3f800000), zmm7)
        zmm9[0] = -9.99999994e-09f + zmm10[0]
        float temp0_191[0x4] = _mm_rsqrt_ss(zmm10[0], zmm10[0])
        zmm10[0] = zmm10[0] * 0.5f
        temp0_191[0] = temp0_191[0] * temp0_191[0]
        temp0_191[0] = temp0_191[0] * zmm10[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_191[0]
        zmm6[0] = zmm6[0] * temp0_191[0]
        zmm6[0] = zmm6[0] + temp0_191[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm10[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f - zmm6[0]
        zmm5[0] = zmm5[0] * zmm6[0]
        zmm5[0] = zmm5[0] + zmm6[0]
        float temp0_192[0x4] = _mm_cmpeq_ss(0, zmm9[0], 2)
        zmm5 = _mm_and_ps(zmm5, temp0_192)
        zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_192, 0x3f800000), zmm5)
        zmm0 = var_1c0[1]
        zmm0[0] = zmm0[0] * zmm4[0]
        zmm6 = var_1b8
        zmm6[0] = zmm6[0] * zmm4[0]
        zmm4[0] = zmm4[0] * temp0_137[0]
        float temp0_197[0x4] = _mm_insert_ps(_mm_insert_ps(zmm4, zmm0, 0x10), zmm6, 0x20)
        zmm4 = var_1b0_1.d
        zmm4[0] = zmm4[0] * zmm1[0]
        zmm0 = var_1b0_1:4.d
        zmm0[0] = zmm0[0] * zmm1[0]
        zmm1[0] = zmm1[0] f* var_1b0_1:8.d
        float temp0_199[0x4] = _mm_insert_ps(_mm_insert_ps(zmm4, zmm0, 0x10), zmm1, 0x20)
        zmm1 = var_1a0_1.d
        zmm1[0] = zmm1[0] * zmm3[0]
        zmm0 = var_1a0_1:4.d
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm3[0] = zmm3[0] f* var_1a0_1:8.d
        float temp0_200[0x4] = _mm_insert_ps(zmm1, zmm0, 0x10)
        zmm15 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm13, 2), data_142d3f780)
        float temp0_203[0x4] = _mm_insert_ps(temp0_200, zmm3, 0x20)
        zmm15 ^= data_142d3f7e0
        float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm15, 0), temp0_197)
        float temp0_206[0x4] = _mm_movehdup_ps(temp0_205)
        zmm11 = _mm_unpackhi_pd(temp0_205, temp0_205[0].q)
        var_1c0[0] = temp0_205[0]
        var_1c0[1] = temp0_206[0]
        uint32_t var_1b8_1 = zmm11[0]
        float temp0_209[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm15, 0x55), temp0_199)
        float temp0_210[0x4] = _mm_movehdup_ps(temp0_209)
        zmm4 = _mm_unpackhi_pd(temp0_209, temp0_209[0].q)
        var_1b0_1.d = temp0_209[0]
        var_1b0_1:4.d = temp0_210[0]
        var_1b0_1:8.d = zmm4[0]
        float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm15, 0xaa), temp0_203)
        float temp0_214[0x4] = _mm_movehdup_ps(temp0_213)
        zmm1 = _mm_unpackhi_pd(temp0_213, temp0_213[0].q)
        var_1a0_1.d = temp0_213[0]
        var_1a0_1:4.d = temp0_214[0]
        var_1a0_1:8.d = zmm1[0]
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_205, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm4 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_209, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm4 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_213, 0x800000, 0x30), 
                        data_142d3f770), 
                    data_142d3f5e0, 2)))
                
                if (result.b == 0xf)
                    zmm4 = data_142d3f660
                else
                    temp0_205[0] = temp0_205[0] + temp0_210[0]
                    temp0_205[0] = temp0_205[0] + zmm1[0]
                    
                    if (temp0_205[0] <= 0f)
                        temp0_210[0] - temp0_205[0]
                        int32_t rdx
                        rdx.b = temp0_210[0] > temp0_205[0]
                        int64_t rax_6 = 0x14
                        
                        if (temp0_210[0] <= temp0_205[0])
                            rax_6 = 0
                        
                        uint64_t rax_7 = 2
                        
                        if (zmm1[0] f<= *(&var_1c0 + rax_6))
                            rax_7 = zx.q(rdx)
                        
                        int64_t r9 = sx.q(*(&data_1434431ec + (rax_7 << 2)))
                        int64_t r8_1 = sx.q(*(&data_1434431ec + (r9 << 2)))
                        zmm0 = var_1c0[zx.q((rax_7 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r9 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r8_1 * 5).d)]
                        zmm3 = 0x3f800000
                        zmm0[0] = zmm0[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
                        zmm3[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm3[0] = zmm3[0] * 0.5f
                        var_150[rax_7] = zmm3[0]
                        zmm0 = var_1c0[sx.q((r9 + (rax_7 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_7 + (r9 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        var_150[r9] = zmm0[0]
                        zmm0 = var_1c0[sx.q((r8_1 + (rax_7 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_7 + (r8_1 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        zmm3 = var_1c0[sx.q((r8_1 + (r9 << 2)).d)]
                        result = sx.q((r9 + (r8_1 << 2)).d)
                        zmm3[0] = zmm3[0] - var_1c0[result]
                        var_150[r8_1] = zmm0[0]
                        zmm3[0] = zmm3[0] * zmm1[0]
                        float var_144_1 = zmm3[0]
                        zmm4 = var_150
                    else
                        zmm6 = 0x3f800000
                        temp0_205[0] = temp0_205[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(0, temp0_205[0])[0]
                        zmm6[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm4[0] = zmm4[0] - temp0_214[0]
                        zmm4[0] = zmm4[0] * zmm1[0]
                        temp0_213[0] = temp0_213[0] f- zmm11[0]
                        temp0_213[0] = temp0_213[0] * zmm1[0]
                        float temp0_229[0x4] = _mm_insert_ps(zmm4, temp0_213, 0x10)
                        temp0_206[0] = temp0_206[0] - temp0_209[0]
                        temp0_206[0] = temp0_206[0] * zmm1[0]
                        float temp0_230[0x4] = _mm_insert_ps(temp0_229, temp0_206, 0x20)
                        zmm6[0] = zmm6[0] * 0.5f
                        zmm4 = _mm_insert_ps(temp0_230, zmm6, 0x30)
        
        zmm11 = data_142d3f770
        zmm7 = arg7
        float temp0_397[0x4] = _mm_mul_ps(zmm4, zmm4)
        float temp0_399[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_397, temp0_397[0].q), temp0_397)
        float temp0_400[0x4] = _mm_movehdup_ps(temp0_399)
        temp0_400[0] = temp0_400[0] + temp0_399[0]
        zmm3 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_400[0], 6), 0xffffffff)
        temp0_400[0] = temp0_400[0] * 0.5f
        float temp0_403[0x4] = _mm_rsqrt_ss(temp0_400[0], temp0_400[0])
        temp0_403[0] = temp0_403[0] * temp0_403[0]
        temp0_403[0] = temp0_403[0] * temp0_400[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_403[0]
        zmm6[0] = zmm6[0] * temp0_403[0]
        zmm6[0] = zmm6[0] + temp0_403[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * temp0_400[0]
        zmm12.d = 0.5f - zmm6[0]
        zmm12.d = zmm12.d f* zmm6[0]
        zmm12.d = zmm12.d f+ zmm6[0]
        zmm12 = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4)
        float temp0_406[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm12 = _mm_and_ps(zmm12, temp0_406)
        zmm3 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_406, data_142d3f660), zmm12)
        zmm1 = __insertps_xmmps_memd_immb(zx.o(var_190_1.q), var_190_1:8.d, 0x28)
        zmm12 = arg8
    
    arg3[0] = arg3[0] * 0.5f
    float temp0_465[0x4] = _mm_insert_ps(_mm_unpacklo_ps(arg6, zmm7[0].q), zmm12, 0x28)
    arg3 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_465)
    float temp0_468[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_469[0x4] = _mm_mul_ps(temp0_468, zmm3)
    float temp0_470[0x4] = _mm_shuffle_ps(temp0_469, temp0_469, 1)
    zmm14 = _mm_mul_ps(
        _mm_sub_ps(zmm14, _mm_add_ps(_mm_shuffle_ps(temp0_469, temp0_469, 0x1a), temp0_470)), zmm13)
    zmm5 = _mm_shuffle_epi32(zmm3, 4)
    float temp0_477[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_468, temp0_468, 0x29), zmm5)
    zmm3 = _mm_shuffle_epi32(zmm3, 0xff)
    float temp0_480[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_468, temp0_468, 0x12), zmm3)
    zmm3 = _mm_mul_ps(_mm_add_ps(temp0_477, temp0_480), zmm13)
    float temp0_483[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
    zmm0 = _mm_mul_ps(_mm_sub_ps(temp0_477, temp0_480), temp0_483)
float temp0_547[0x4] = _mm_insert_ps(zmm14, zmm3, 0x1c)
float temp0_549[0x4] = _mm_insert_ps(_mm_insert_ps(zmm0, zmm14, 0x5c), zmm3, 0x68)
float temp0_550[0x4] = _mm_blend_ps(temp0_547, zmm0, 4)
float temp0_552[0x4] = _mm_blend_ps(_mm_insert_ps(zmm0, zmm3, 0x8c), zmm14, 4)
float temp0_553[0x4] = __blendps_xmmdq_memdq_immb(zmm1, data_142d3f660, 8)
float temp0_554[0x4] = _mm_sub_ps(arg3, arg3)
zmm6 = data_142e6d9f0
float temp0_555[0x4] = _mm_mul_ps(temp0_554, zmm6)
float temp0_557[0x4] = _mm_mul_ps(_mm_add_ps(arg3, arg3), zmm6)
float temp0_559[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_555, temp0_555, 0), temp0_550)
float temp0_562[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_555, temp0_555, 0x55), temp0_549), temp0_559)
float temp0_566[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_555, temp0_555, 0xaa), temp0_552), temp0_562), 
    temp0_553)
float temp0_568[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_557, temp0_557, 0), temp0_550)
float temp0_570[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_557, temp0_557, 0x55), temp0_549)
zmm1 = _mm_and_ps(temp0_568, zmm11)
float temp0_573[0x4] = _mm_add_ps(_mm_and_ps(temp0_570, zmm11), zmm1)
float temp0_577[0x4] = _mm_add_ps(
    _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_557, temp0_557, 0xaa), temp0_552), zmm11), temp0_573)
float temp0_578[0x4] = _mm_sub_ps(temp0_566, temp0_577)
float temp0_579[0x4] = _mm_add_ps(temp0_577, temp0_566)
*arg1 = _mm_blend_ps(_mm_shuffle_ps(temp0_579, temp0_579, 0x24), temp0_578, 7)
arg1[1][0] = __extractps_memd_xmmps_immb(temp0_579, 1)
(*arg1)[5] = __extractps_memd_xmmps_immb(temp0_579, 2)
(*arg1)[6].b = 1
return result
