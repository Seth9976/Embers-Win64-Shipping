// 函数: sub_1403316e0
// 地址: 0x1403316e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm12[0x4]
float var_48[0x4] = zmm12
float zmm10[0x4]
float var_68[0x4] = zmm10
float zmm14[0x4] = arg3
float temp0_1[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(*arg4, *(arg4 + 4), 0x10), *(arg4 + 8), 0x20)
float zmm0[0x4] = data_142d3f730
float temp0_2[0x4] = _mm_div_ps(temp0_1, zmm0)
uint32_t zmm3[0x4] = data_142d3f770
float zmm4[0x4] = _mm_and_ps(temp0_2, zmm3)
float zmm5[0x4] = data_142d3f740
float temp0_4[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 2)
float temp0_5[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 6)
zmm4 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_2)), temp0_5)
float temp0_13[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_1, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_4, temp0_2), zmm4), zmm0)), 
    data_142d3f5f0)
float zmm11[0x4] = *arg8
float temp0_18[0x4] = _mm_sub_ps(temp0_13, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_13))), 
        data_142d3f6e0))
arg3 = data_142d3f780
float temp0_21[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_18, arg3), data_142d3f6d0), temp0_18)
uint32_t temp0_22[0x4] = _mm_and_ps(zmm3, temp0_18)
zmm5 = data_142d3f6a0
float temp0_23[0x4] = _mm_cmpeq_ps(zmm5, temp0_22, 1)
zmm5 = _mm_and_ps(_mm_cmpeq_ps(zmm5, temp0_22, 5), temp0_18)
zmm0 = _mm_or_ps(_mm_and_ps(temp0_21, temp0_23), zmm5)
zmm4 = __orps_xmmxud_memxud(_mm_and_ps(temp0_23, arg3), data_142d3f670)
float temp0_30[0x4] = _mm_mul_ps(zmm0, zmm0)
float zmm13[0x4] = arg7
float zmm15[0x4] = arg6
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
zmm3 = data_142d3f670
float temp0_45[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_43, temp0_30), data_143443180)
float temp0_46[0x4] = _mm_add_ps(temp0_41, zmm3)
float temp0_48[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_45, temp0_30), data_142d3f790)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm0)
float temp0_52[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_48, temp0_30), zmm3), zmm4)
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
zmm4 = temp0_61 ^ data_142e6d9e0
float zmm6[0x4] = temp0_64 ^ data_142e6da10
uint32_t temp0_65 = _mm_movemask_ps(zmm11)
float temp0_66[0x4] = __insertps_xmmps_memd_immb(*arg5, (*arg5)[1], 0x10)
float temp0_67[0x4] = _mm_add_ps(zmm6, zmm4)
float temp0_68[0x4] = __insertps_xmmps_memd_immb(temp0_66, (*arg5)[2], 0x20)
float temp0_71[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm14, zmm14, 0x1c), zmm14, 0x20), temp0_68)
float zmm9[0x4] = arg2[2]
uint64_t result
float var_180[0x4]
int32_t var_178
float var_110[0x4]
int32_t var_f4
float zmm1[0x4]
float zmm7[0x4]
float zmm8[0x4]

if (temp0_65 != 0xf)
    result = zx.q(_mm_movemask_ps(_mm_and_ps(_mm_cmpeq_ps(zmm9, zx.o(0), 1), zmm11)))
    
    if (result.d == 0)
        zmm1 = (*arg2)[3]
        zmm7 = *arg2
        zmm8 = (*arg2)[1]
        zmm4 = (*arg2)[2]
        zmm3 = zmm4
        float temp0_477[0x4] =
            _mm_insert_ps(_mm_insert_ps(zx.o(*(arg2 + 4)), zmm7, 0x20), zmm1, 0x30)
        float temp0_480[0x4] =
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm7, 0x10), zmm8, 0x20), zmm1, 0x30)
        float temp0_481[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_482[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_484[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_482)
        float temp0_485[0x4] = _mm_mul_ps(temp0_67, temp0_481)
        float temp0_487[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_484, data_142d3f7c0), temp0_485)
        float temp0_488[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_492[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_488), 
                data_142d3f7d0), 
            temp0_487)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm6 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), zmm3), 
                data_142d3f7b0), 
            temp0_492)
        float temp0_498[0x4] = _mm_mul_ps(temp0_71, zmm9)
        zmm3 = _mm_shuffle_ps(temp0_498, temp0_498, 0xd2)
        float temp0_500[0x4] = _mm_shuffle_ps(temp0_498, temp0_498, 0xc9)
        zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, temp0_477), _mm_mul_ps(temp0_500, temp0_480))
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_506[0x4] = _mm_add_ps(_mm_mul_ps(temp0_481, zmm3), temp0_498)
        float temp0_507[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm0 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_507, temp0_477), _mm_mul_ps(zmm3, temp0_480)), 
                temp0_506), 
            arg2[1])
        zmm12 = __mulps_xmmps_memps(zmm9, data_142e6da00)
    else
        float var_c0_1[0x4] = zmm14
        float temp0_235[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_236[0x4] = _mm_mul_ps(temp0_67, temp0_235)
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_236, temp0_236, 1)
        float temp0_240[0x4] =
            _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_236, temp0_236, 0x1a), temp0_237))
        zmm12 = data_142e6da00
        float temp0_241[0x4] = _mm_mul_ps(temp0_240, zmm12)
        float temp0_242[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0x29), temp0_242)
        float temp0_245[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0x12), temp0_245)
        float temp0_249[0x4] = _mm_mul_ps(_mm_add_ps(temp0_244, temp0_247), zmm12)
        float temp0_251[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_244, temp0_247), zmm12)
        zmm14 = data_142d3f660
        float temp0_253[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_241, temp0_249, 0x1c), temp0_251, 4)
        float temp0_255[0x4] =
            _mm_insert_ps(_mm_insert_ps(temp0_251, temp0_241, 0x5c), temp0_249, 0x68)
        float temp0_257[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_251, temp0_249, 0x8c), temp0_241, 4)
        float temp0_258[0x4] = _mm_blend_ps(temp0_71, zmm14, 8)
        float var_100_2[0x4] = temp0_253
        zmm0 = *arg2
        float temp0_260[0x4] =
            _mm_shuffle_ps(__insertps_xmmps_memd_immb(zmm0, (*arg2)[1], 0x10), zmm0, 4)
        float temp0_261[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_262[0x4] = _mm_mul_ps(zmm0, temp0_261)
        float temp0_263[0x4] = _mm_shuffle_ps(temp0_262, temp0_262, 0xc1)
        zmm3 = _mm_mul_ps(
            _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_262, temp0_262, 0xda), temp0_263)), 
            zmm9)
        float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0x29), temp0_260)
        arg3 = (*arg2)[3]
        float temp0_270[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
        float temp0_272[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0x12), temp0_270)
        float temp0_274[0x4] = _mm_mul_ps(_mm_add_ps(temp0_269, temp0_272), zmm9)
        float temp0_275[0x4] = _mm_insert_ps(zx.o(*(arg2 + 0x24)), zmm9, 0x20)
        float temp0_277[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_269, temp0_272), temp0_275)
        zmm5 = arg2[1][0]
        float temp0_279[0x4] = _mm_blend_ps(_mm_insert_ps(zmm3, temp0_274, 0x1c), temp0_277, 4)
        float temp0_281[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_277, zmm3, 0x5c), temp0_274, 0x68)
        float temp0_282[0x4] = _mm_insert_ps(temp0_277, temp0_274, 0x8c)
        float temp0_285[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(_mm_blend_ps(zmm5, zmm14, 0xc), (*arg2)[5], 0x10), 
            (*arg2)[6], 0x20)
        zmm12 = __mulps_xmmps_memps(zmm12, arg2[2])
        float temp0_287[0x4] = _mm_blend_ps(temp0_282, zmm3, 4)
        float temp0_289[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0), temp0_279)
        float temp0_292[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_251, temp0_251, 0xaa), temp0_287), temp0_289)
        float temp0_295[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_249, temp0_249, 0), temp0_281), temp0_292)
        zmm8 = var_f4
        zmm1 = temp0_255[0]
        float temp0_298[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_285), temp0_295)
        float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_279)
        arg3 = temp0_255[2]
        float temp0_303[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_287), temp0_300)
        zmm3 = temp0_255[1]
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_281), temp0_303)
        zmm1 = temp0_255[3]
        float temp0_309[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_285), zmm3)
        arg3 = temp0_257[0]
        float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_279)
        zmm3 = temp0_257[2]
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_287), temp0_311)
        arg3 = temp0_257[1]
        float temp0_317[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_281), zmm3)
        zmm4 = temp0_257[3]
        float temp0_320[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_285), temp0_317)
        arg3 = temp0_258[0]
        float temp0_322[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_279)
        zmm0 = temp0_258[2]
        float temp0_325[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_287), temp0_322)
        arg3 = temp0_258[1]
        float temp0_328[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_281), temp0_325)
        zmm6 = temp0_258[3]
        float temp0_331[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_285), temp0_328)
        float temp0_332[0x4] = _mm_movehdup_ps(temp0_298)
        zmm5 = _mm_unpackhi_pd(temp0_298, temp0_298[0].q)
        zmm13 = zx.o(_mm_extract_ps(temp0_309, 0))
        zmm3 = _mm_movehdup_ps(temp0_309)
        zmm0 = _mm_unpackhi_pd(temp0_309, temp0_309[0].q)
        zmm9 = zx.o(_mm_extract_ps(temp0_320, 0))
        float temp0_338[0x4] = _mm_blend_ps(temp0_309, zmm13, 1)
        float temp0_339[0x4] = _mm_movehdup_ps(temp0_320)
        zmm14 = _mm_unpackhi_pd(temp0_320, temp0_320[0].q)
        float temp0_341[0x4] = _mm_blend_ps(temp0_320, zmm9, 1)
        var_180 = temp0_298
        int96_t var_170_2 = temp0_338[0].12
        int96_t var_160_2 = temp0_341[0].12
        int96_t var_150_2 = temp0_331[0].12
        temp0_298[0] = temp0_298[0] * temp0_298[0]
        temp0_332[0] = temp0_332[0] * temp0_332[0]
        temp0_332[0] = temp0_332[0] + temp0_298[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] + temp0_332[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm3[0] = zmm3[0] f* zmm3[0]
        zmm3[0] = zmm3[0] f+ zmm13[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] f+ zmm3[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        temp0_339[0] = temp0_339[0] * temp0_339[0]
        temp0_339[0] = temp0_339[0] + zmm9[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm14[0] = zmm14[0] + temp0_339[0]
        zmm4 = 0xb22bcc77
        zmm5[0] = zmm5[0] + -9.99999994e-09f
        float temp0_342[0x4] = _mm_rsqrt_ss(zmm5[0], zmm5[0])
        zmm10 = 0x3f000000
        zmm5[0] = zmm5[0] * 0.5f
        zmm3 = temp0_342
        zmm3[0] = zmm3[0] f* temp0_342[0]
        zmm3[0] = zmm3[0] f* zmm5[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm3[0]
        zmm6[0] = zmm6[0] * temp0_342[0]
        zmm6[0] = zmm6[0] + temp0_342[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm5[0]
        zmm3 = 0x3f000000
        zmm3[0] = 0.5f - zmm6[0]
        zmm3[0] = zmm3[0] f* zmm6[0]
        zmm3[0] = zmm3[0] f+ zmm6[0]
        float temp0_343[0x4] = _mm_cmpeq_ss(0, zmm5[0], 2)
        uint32_t temp0_344[0x4] = _mm_and_ps(zmm3, temp0_343)
        zmm13 = 0x3f800000
        zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_343, 0x3f800000), temp0_344)
        zmm0[0] = zmm0[0] + -9.99999994e-09f
        zmm3 = _mm_rsqrt_ss(zmm0[0], zmm0[0])
        zmm0[0] = zmm0[0] * 0.5f
        zmm6 = zmm3
        zmm6[0] = zmm6[0] f* zmm3[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - zmm6[0]
        zmm7[0] = zmm7[0] f* zmm3[0]
        zmm7[0] = zmm7[0] f+ zmm3[0]
        zmm3 = zmm7
        zmm3[0] = zmm3[0] f* zmm7[0]
        zmm3[0] = zmm3[0] f* zmm0[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm3[0]
        zmm6[0] = zmm6[0] * zmm7[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        float temp0_348[0x4] = _mm_cmpeq_ss(0, zmm0[0], 2)
        zmm6 = _mm_and_ps(zmm6, temp0_348)
        zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_348, 0x3f800000), zmm6)
        zmm4[0] = -9.99999994e-09f + zmm14[0]
        float temp0_352[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
        zmm14[0] = zmm14[0] * 0.5f
        zmm3 = temp0_352
        zmm3[0] = zmm3[0] f* temp0_352[0]
        zmm3[0] = zmm3[0] f* zmm14[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm3[0]
        zmm6[0] = zmm6[0] * temp0_352[0]
        zmm6[0] = zmm6[0] + temp0_352[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm14[0]
        zmm3 = 0x3f000000
        zmm3[0] = 0.5f - zmm6[0]
        zmm3[0] = zmm3[0] f* zmm6[0]
        zmm3[0] = zmm3[0] f+ zmm6[0]
        float temp0_353[0x4] = _mm_cmpeq_ss(0, zmm4[0], 2)
        uint32_t temp0_354[0x4] = _mm_and_ps(zmm3, temp0_353)
        zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_353, 0x3f800000), temp0_354)
        zmm3 = var_180[1]
        zmm3[0] = zmm3[0] f* zmm1[0]
        zmm4 = var_178
        zmm4[0] = zmm4[0] * zmm1[0]
        zmm1[0] = zmm1[0] * temp0_298[0]
        float temp0_358[0x4] = _mm_insert_ps(_mm_insert_ps(zmm1, zmm3, 0x10), zmm4, 0x20)
        zmm1 = var_170_2.d
        zmm1[0] = zmm1[0] * zmm0[0]
        zmm3 = var_170_2:4.d
        zmm3[0] = zmm3[0] f* zmm0[0]
        float temp0_359[0x4] = _mm_insert_ps(zmm1, zmm3, 0x10)
        zmm0[0] = zmm0[0] f* var_170_2:8.d
        float temp0_360[0x4] = _mm_insert_ps(temp0_359, zmm0, 0x20)
        zmm3 = var_160_2.d
        zmm3[0] = zmm3[0] f* zmm5[0]
        zmm0 = var_160_2:4.d
        zmm0[0] = zmm0[0] * zmm5[0]
        zmm3 = _mm_insert_ps(zmm3, zmm0, 0x10)
        zmm5[0] = zmm5[0] f* var_160_2:8.d
        zmm7 =
            __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm12, 2), data_142d3f780) ^ data_142d3f7e0
        zmm3 = _mm_insert_ps(zmm3, zmm5, 0x20)
        float temp0_366[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0), temp0_358)
        float temp0_367[0x4] = _mm_movehdup_ps(temp0_366)
        zmm5 = _mm_unpackhi_pd(temp0_366, temp0_366[0].q)
        var_180[0] = temp0_366[0]
        var_180[1] = temp0_367[0]
        float var_178_2 = zmm5[0]
        float temp0_370[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0x55), temp0_360)
        float temp0_371[0x4] = _mm_movehdup_ps(temp0_370)
        zmm0 = _mm_unpackhi_pd(temp0_370, temp0_370[0].q)
        var_170_2.d = temp0_370[0]
        var_170_2:4.d = temp0_371[0]
        var_170_2:8.d = zmm0[0]
        float temp0_374[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm7, 0xaa), zmm3)
        float temp0_375[0x4] = _mm_movehdup_ps(temp0_374)
        zmm8 = _mm_unpackhi_pd(temp0_374, temp0_374[0].q)
        var_160_2.d = temp0_374[0]
        var_160_2:4.d = temp0_375[0]
        var_160_2:8.d = zmm8[0]
        float temp0_379[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_366, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5e0, 2)
        result = zx.q(_mm_movemask_ps(_mm_cmpeq_epi32(zx.o(0), zmm11) | temp0_379))
        
        if (result.b == 0xf)
            zmm0 = data_142d3f660
        else
            zmm3 = __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_370, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5e0, 2)
            zmm11 = _mm_cmpeq_epi32(zmm11, zx.o(0))
            result = zx.q(_mm_movemask_ps(_mm_or_ps(zmm3, zmm11)))
            
            if (result.b == 0xf)
                zmm0 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(_mm_or_ps(
                    __cmpps_xmmps_memps_immb(
                        __andps_xmmxud_memxud(
                            __insertps_xmmps_memd_immb(temp0_374, 0x800000, 0x30), data_142d3f770), 
                        data_142d3f5e0, 2), 
                    zmm11)))
                
                if (result.b == 0xf)
                    zmm0 = data_142d3f660
                else
                    temp0_366[0] = temp0_366[0] + temp0_371[0]
                    temp0_366[0] = temp0_366[0] + zmm8[0]
                    
                    if (temp0_366[0] <= 0f)
                        temp0_371[0] - temp0_366[0]
                        int32_t rdx_12
                        rdx_12.b = temp0_371[0] > temp0_366[0]
                        int64_t rax_13 = 0x14
                        
                        if (temp0_371[0] <= temp0_366[0])
                            rax_13 = 0
                        
                        uint64_t rax_14 = 2
                        
                        if (zmm8[0] f<= *(&var_180 + rax_13))
                            rax_14 = zx.q(rdx_12)
                        
                        int64_t r9_1 = sx.q(*(&data_1434431ec + (rax_14 << 2)))
                        int64_t r8_2 = sx.q(*(&data_1434431ec + (r9_1 << 2)))
                        zmm0 = var_180[zx.q((rax_14 * 5).d)]
                        zmm0[0] = zmm0[0] - var_180[sx.q((r9_1 * 5).d)]
                        zmm0[0] = zmm0[0] - var_180[sx.q((r8_2 * 5).d)]
                        zmm0[0] = zmm0[0] + 1f
                        float temp0_545[0x4] = _mm_sqrt_ss(0, zmm0[0])
                        zmm0 = 0x3f800000
                        zmm0[0] = 1f / temp0_545[0]
                        zmm13[0] = 1f / zmm0[0]
                        zmm0[0] = zmm0[0] * 0.5f
                        zmm13[0] = zmm13[0] * 0.5f
                        var_110[rax_14] = zmm13[0]
                        zmm1 = var_180[sx.q((r9_1 + (rax_14 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_180[sx.q((rax_14 + (r9_1 << 2)).d)]
                        zmm1[0] = zmm1[0] * zmm0[0]
                        var_110[r9_1] = zmm1[0]
                        zmm1 = var_180[sx.q((r8_2 + (rax_14 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_180[sx.q((rax_14 + (r8_2 << 2)).d)]
                        zmm1[0] = zmm1[0] * zmm0[0]
                        arg3 = var_180[sx.q((r8_2 + (r9_1 << 2)).d)]
                        result = sx.q((r9_1 + (r8_2 << 2)).d)
                        arg3[0] = arg3[0] - var_180[result]
                        var_110[r8_2] = zmm1[0]
                        arg3[0] = arg3[0] * zmm0[0]
                        float var_104_2 = arg3[0]
                        zmm0 = var_110
                    else
                        temp0_366[0] = temp0_366[0] + 1f
                        zmm3 = 0x3f800000
                        zmm3[0] = 1f / _mm_sqrt_ss(temp0_366[0], temp0_366[0])[0]
                        zmm13[0] = 1f f/ zmm3[0]
                        zmm3[0] = zmm3[0] f* 0.5f
                        zmm0[0] = zmm0[0] - temp0_375[0]
                        zmm0[0] = zmm0[0] f* zmm3[0]
                        temp0_374[0] = temp0_374[0] - zmm5[0]
                        temp0_374[0] = temp0_374[0] f* zmm3[0]
                        float temp0_394[0x4] = _mm_insert_ps(zmm0, temp0_374, 0x10)
                        temp0_367[0] = temp0_367[0] - temp0_370[0]
                        temp0_367[0] = temp0_367[0] f* zmm3[0]
                        float temp0_395[0x4] = _mm_insert_ps(temp0_394, temp0_367, 0x20)
                        zmm13[0] = zmm13[0] * 0.5f
                        zmm0 = _mm_insert_ps(temp0_395, zmm13, 0x30)
        
        zmm14 = var_c0_1
        zmm15 = arg6
        float temp0_411[0x4] = _mm_mul_ps(zmm0, zmm0)
        float temp0_413[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_411, temp0_411[0].q), temp0_411)
        float temp0_414[0x4] = _mm_movehdup_ps(temp0_413)
        temp0_414[0] = temp0_414[0] + temp0_413[0]
        zmm6 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_414[0], 6), 0xffffffff)
        temp0_414[0] = temp0_414[0] * 0.5f
        float temp0_417[0x4] = _mm_rsqrt_ss(temp0_414[0], temp0_414[0])
        zmm3 = temp0_417
        zmm3[0] = zmm3[0] f* temp0_417[0]
        zmm3[0] = zmm3[0] f* temp0_414[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f f- zmm3[0]
        zmm4[0] = zmm4[0] * temp0_417[0]
        zmm4[0] = zmm4[0] + temp0_417[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] * temp0_414[0]
        zmm10[0] = 0.5f - zmm4[0]
        zmm10[0] = zmm10[0] * zmm4[0]
        zmm10[0] = zmm10[0] + zmm4[0]
        float temp0_419[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), zmm0)
        float temp0_420[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm10 = _mm_and_ps(temp0_419, temp0_420)
        zmm6 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_420, data_142d3f660), zmm10)
        zmm0 = __insertps_xmmps_memd_immb(zx.o(var_150_2.q), var_150_2:8.d, 0x28)
        zmm13 = arg7
    
    float temp0_515[0x4] = __mulps_xmmps_memps(zmm12, data_142d4cc30)
    arg3 = _mm_shuffle_epi32(zmm6, 0xff)
    zmm3 = _mm_shuffle_epi32(zmm6, 0xc9)
    float temp0_518[0x4] = _mm_shuffle_ps(temp0_515, temp0_515, 0xd2)
    zmm5 = _mm_shuffle_epi32(zmm6, 0xd2)
    float temp0_520[0x4] = _mm_shuffle_ps(temp0_515, temp0_515, 0xc9)
    float temp0_523[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_518, zmm3), _mm_mul_ps(temp0_520, zmm5))
    zmm4 = _mm_add_ps(temp0_523, temp0_523)
    arg3 = _mm_add_ps(_mm_mul_ps(arg3, zmm4), temp0_515)
else
    result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm9, zx.o(0), 1)))
    
    if (result.b == 0)
        zmm1 = (*arg2)[3]
        zmm7 = *arg2
        zmm8 = (*arg2)[1]
        zmm4 = (*arg2)[2]
        zmm3 = zmm4
        float temp0_426[0x4] =
            _mm_insert_ps(_mm_insert_ps(zx.o(*(arg2 + 4)), zmm7, 0x20), zmm1, 0x30)
        float temp0_429[0x4] =
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm7, 0x10), zmm8, 0x20), zmm1, 0x30)
        float temp0_430[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_431[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        float temp0_433[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_431)
        float temp0_434[0x4] = _mm_mul_ps(temp0_67, temp0_430)
        float temp0_436[0x4] = _mm_add_ps(__mulps_xmmps_memps(temp0_433, data_142d3f7c0), temp0_434)
        float temp0_437[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_441[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_437), 
                data_142d3f7d0), 
            temp0_436)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm6 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), zmm3), 
                data_142d3f7b0), 
            temp0_441)
        float temp0_447[0x4] = _mm_mul_ps(temp0_71, zmm9)
        zmm3 = _mm_shuffle_ps(temp0_447, temp0_447, 0xd2)
        float temp0_449[0x4] = _mm_shuffle_ps(temp0_447, temp0_447, 0xc9)
        zmm3 = _mm_sub_ps(_mm_mul_ps(zmm3, temp0_426), _mm_mul_ps(temp0_449, temp0_429))
        zmm3 = _mm_add_ps(zmm3, zmm3)
        float temp0_455[0x4] = _mm_add_ps(_mm_mul_ps(temp0_430, zmm3), temp0_447)
        float temp0_456[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xd2)
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        zmm0 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_456, temp0_426), _mm_mul_ps(zmm3, temp0_429)), 
                temp0_455), 
            arg2[1])
        zmm10 = __mulps_xmmps_memps(zmm9, data_142e6da00)
    else
        float temp0_74[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_75[0x4] = _mm_mul_ps(temp0_67, temp0_74)
        float temp0_76[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 1)
        float temp0_79[0x4] =
            _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x1a), temp0_76))
        zmm10 = data_142e6da00
        float temp0_80[0x4] = _mm_mul_ps(temp0_79, zmm10)
        float temp0_81[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x29), temp0_81)
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x12), temp0_84)
        float temp0_88[0x4] = _mm_mul_ps(_mm_add_ps(temp0_83, temp0_86), zmm10)
        float temp0_90[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_83, temp0_86), zmm10)
        zmm13 = data_142d3f660
        float temp0_92[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_80, temp0_88, 0x1c), temp0_90, 4)
        float temp0_94[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_90, temp0_80, 0x5c), temp0_88, 0x68)
        float temp0_96[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_90, temp0_88, 0x8c), temp0_80, 4)
        float temp0_97[0x4] = _mm_blend_ps(temp0_71, zmm13, 8)
        float var_100_1[0x4] = temp0_92
        zmm0 = *arg2
        float temp0_99[0x4] =
            _mm_shuffle_ps(__insertps_xmmps_memd_immb(zmm0, (*arg2)[1], 0x10), zmm0, 4)
        float temp0_100[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_101[0x4] = _mm_mul_ps(zmm0, temp0_100)
        float temp0_102[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xc1)
        zmm3 = _mm_mul_ps(
            _mm_sub_ps(zmm3, _mm_add_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0xda), temp0_102)), 
            zmm9)
        float temp0_108[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0x29), temp0_99)
        arg3 = (*arg2)[3]
        float temp0_109[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
        float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0x12), temp0_109)
        float temp0_113[0x4] = _mm_mul_ps(_mm_add_ps(temp0_108, temp0_111), zmm9)
        float temp0_114[0x4] = _mm_insert_ps(zx.o(*(arg2 + 0x24)), zmm9, 0x20)
        float temp0_116[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_108, temp0_111), temp0_114)
        zmm7 = arg2[1][0]
        float temp0_118[0x4] = _mm_blend_ps(_mm_insert_ps(zmm3, temp0_113, 0x1c), temp0_116, 4)
        float temp0_120[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_116, zmm3, 0x5c), temp0_113, 0x68)
        float temp0_122[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_116, temp0_113, 0x8c), zmm3, 4)
        float temp0_125[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(_mm_blend_ps(zmm7, zmm13, 0xc), (*arg2)[5], 0x10), 
            (*arg2)[6], 0x20)
        zmm10 = __mulps_xmmps_memps(zmm10, arg2[2])
        float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_80, temp0_80, 0), temp0_118)
        float temp0_131[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0xaa), temp0_122), temp0_128)
        float temp0_134[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0), temp0_120), temp0_131)
        zmm8 = var_f4
        zmm1 = temp0_94[0]
        float temp0_137[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_125), temp0_134)
        float temp0_139[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_118)
        zmm3 = temp0_94[2]
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_122), temp0_139)
        zmm1 = temp0_94[1]
        float temp0_145[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_120), zmm3)
        zmm4 = temp0_94[3]
        float temp0_148[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_125), temp0_145)
        zmm1 = temp0_96[0]
        float temp0_150[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_118)
        zmm3 = temp0_96[2]
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_122), temp0_150)
        zmm1 = temp0_96[1]
        float temp0_156[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_120), zmm3)
        zmm6 = temp0_96[3]
        float temp0_159[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_125), temp0_156)
        zmm1 = temp0_97[0]
        float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_118)
        zmm3 = temp0_97[2]
        zmm3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_122), temp0_161)
        zmm0 = temp0_97[1]
        float temp0_167[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_120), zmm3)
        arg3 = temp0_97[3]
        float temp0_170[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_125), temp0_167)
        float temp0_171[0x4] = _mm_movehdup_ps(temp0_137)
        int32_t temp0_172 = _mm_extract_ps(temp0_148, 0)
        zmm0 = _mm_unpackhi_pd(temp0_137, temp0_137[0].q)
        zmm12 = zx.o(temp0_172)
        float temp0_174[0x4] = _mm_movehdup_ps(temp0_148)
        zmm3 = _mm_unpackhi_pd(temp0_148, temp0_148[0].q)
        zmm9 = zx.o(_mm_extract_ps(temp0_159, 0))
        float temp0_177[0x4] = _mm_blend_ps(temp0_148, zmm12, 1)
        float temp0_178[0x4] = _mm_movehdup_ps(temp0_159)
        zmm13 = _mm_unpackhi_pd(temp0_159, temp0_159[0].q)
        float temp0_180[0x4] = _mm_blend_ps(temp0_159, zmm9, 1)
        var_180 = temp0_137
        int96_t var_170_1 = temp0_177[0].12
        int96_t var_160_1 = temp0_180[0].12
        int96_t var_150_1 = temp0_170[0].12
        temp0_137[0] = temp0_137[0] * temp0_137[0]
        temp0_171[0] = temp0_171[0] * temp0_171[0]
        temp0_171[0] = temp0_171[0] + temp0_137[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] + temp0_171[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        temp0_174[0] = temp0_174[0] * temp0_174[0]
        temp0_174[0] = temp0_174[0] + zmm12[0]
        zmm3[0] = zmm3[0] f* zmm3[0]
        zmm3[0] = zmm3[0] f+ temp0_174[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        temp0_178[0] = temp0_178[0] * temp0_178[0]
        temp0_178[0] = temp0_178[0] + zmm9[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm13[0] = zmm13[0] + temp0_178[0]
        zmm9 = 0xb22bcc77
        zmm0[0] = zmm0[0] + -9.99999994e-09f
        float temp0_181[0x4] = _mm_rsqrt_ss(zmm0[0], zmm0[0])
        zmm4 = 0x3f000000
        zmm0[0] = zmm0[0] * 0.5f
        temp0_181[0] = temp0_181[0] * temp0_181[0]
        temp0_181[0] = temp0_181[0] * zmm0[0]
        zmm7 = 0x3f000000
        zmm7[0] = 0.5f - temp0_181[0]
        zmm7[0] = zmm7[0] * temp0_181[0]
        zmm7[0] = zmm7[0] + temp0_181[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm7[0] = zmm7[0] * zmm0[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - zmm7[0]
        zmm6[0] = zmm6[0] * zmm7[0]
        zmm6[0] = zmm6[0] + zmm7[0]
        float temp0_182[0x4] = _mm_cmpeq_ss(0, zmm0[0], 2)
        zmm6 = _mm_and_ps(zmm6, temp0_182)
        zmm12 = 0x3f800000
        zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_182, 0x3f800000), zmm6)
        zmm1 = zmm3
        zmm1[0] = zmm1[0] + -9.99999994e-09f
        float temp0_186[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] f* 0.5f
        temp0_186[0] = temp0_186[0] * temp0_186[0]
        temp0_186[0] = temp0_186[0] f* zmm3[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f - temp0_186[0]
        zmm5[0] = zmm5[0] * temp0_186[0]
        zmm5[0] = zmm5[0] + temp0_186[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] f* zmm3[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - zmm5[0]
        zmm6[0] = zmm6[0] * zmm5[0]
        zmm6[0] = zmm6[0] + zmm5[0]
        zmm3 = _mm_cmpeq_ss(0, zmm1[0], 2)
        zmm6 = _mm_and_ps(zmm6, zmm3)
        uint32_t temp0_190[0x4] = _mm_or_ps(_mm_andnot_ps(zmm3, 0x3f800000), zmm6)
        zmm9[0] = -9.99999994e-09f + zmm13[0]
        float temp0_191[0x4] = _mm_rsqrt_ss(zmm13[0], zmm13[0])
        zmm13[0] = zmm13[0] * 0.5f
        temp0_191[0] = temp0_191[0] * temp0_191[0]
        temp0_191[0] = temp0_191[0] * zmm13[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f - temp0_191[0]
        zmm5[0] = zmm5[0] * temp0_191[0]
        zmm5[0] = zmm5[0] + temp0_191[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] * zmm13[0]
        arg3 = 0x3f000000
        arg3[0] = 0.5f - zmm5[0]
        arg3[0] = arg3[0] * zmm5[0]
        arg3[0] = arg3[0] + zmm5[0]
        float temp0_192[0x4] = _mm_cmpeq_ss(0, zmm9[0], 2)
        arg3 = _mm_and_ps(arg3, temp0_192)
        zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_192, 0x3f800000), arg3)
        zmm1 = var_180[1]
        zmm1[0] = zmm1[0] * zmm0[0]
        arg3 = var_178
        arg3[0] = arg3[0] * zmm0[0]
        zmm0[0] = zmm0[0] * temp0_137[0]
        float temp0_197[0x4] = _mm_insert_ps(_mm_insert_ps(zmm0, zmm1, 0x10), arg3, 0x20)
        zmm1 = var_170_1.d
        zmm1[0] = zmm1[0] f* temp0_190[0]
        arg3 = var_170_1:4.d
        arg3[0] = arg3[0] f* temp0_190[0]
        temp0_190[0] = temp0_190[0] f* var_170_1:8.d
        float temp0_199[0x4] = _mm_insert_ps(_mm_insert_ps(zmm1, arg3, 0x10), temp0_190, 0x20)
        zmm3 = var_160_1.d
        zmm3[0] = zmm3[0] f* zmm7[0]
        arg3 = var_160_1:4.d
        arg3[0] = arg3[0] * zmm7[0]
        zmm7[0] = zmm7[0] f* var_160_1:8.d
        zmm3 = _mm_insert_ps(zmm3, arg3, 0x10)
        zmm11 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm10, 2), data_142d3f780)
        zmm3 = _mm_insert_ps(zmm3, zmm7, 0x20)
        zmm11 ^= data_142d3f7e0
        float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm11, 0), temp0_197)
        float temp0_206[0x4] = _mm_movehdup_ps(temp0_205)
        zmm9 = _mm_unpackhi_pd(temp0_205, temp0_205[0].q)
        var_180[0] = temp0_205[0]
        var_180[1] = temp0_206[0]
        float var_178_1 = zmm9[0]
        float temp0_209[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm11, 0x55), temp0_199)
        float temp0_210[0x4] = _mm_movehdup_ps(temp0_209)
        zmm1 = _mm_unpackhi_pd(temp0_209, temp0_209[0].q)
        var_170_1.d = temp0_209[0]
        var_170_1:4.d = temp0_210[0]
        var_170_1:8.d = zmm1[0]
        float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm11, 0xaa), zmm3)
        float temp0_214[0x4] = _mm_movehdup_ps(temp0_213)
        zmm3 = _mm_unpackhi_pd(temp0_213, temp0_213[0].q)
        var_160_1.d = temp0_213[0]
        var_160_1:4.d = temp0_214[0]
        var_160_1:8.d = zmm3[0]
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_205, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm1 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_209, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm1 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_213, 0x800000, 0x30), 
                        data_142d3f770), 
                    data_142d3f5e0, 2)))
                
                if (result.b == 0xf)
                    zmm1 = data_142d3f660
                else
                    temp0_205[0] = temp0_205[0] + temp0_210[0]
                    temp0_205[0] = temp0_205[0] f+ zmm3[0]
                    
                    if (temp0_205[0] <= 0f)
                        temp0_210[0] - temp0_205[0]
                        int32_t rdx
                        rdx.b = temp0_210[0] > temp0_205[0]
                        int64_t rax_6 = 0x14
                        
                        if (temp0_210[0] <= temp0_205[0])
                            rax_6 = 0
                        
                        uint64_t rax_7 = 2
                        
                        if (zmm3[0] f<= *(&var_180 + rax_6))
                            rax_7 = zx.q(rdx)
                        
                        int64_t r9 = sx.q(*(&data_1434431ec + (rax_7 << 2)))
                        int64_t r8_1 = sx.q(*(&data_1434431ec + (r9 << 2)))
                        zmm0 = var_180[zx.q((rax_7 * 5).d)]
                        zmm0[0] = zmm0[0] - var_180[sx.q((r9 * 5).d)]
                        zmm0[0] = zmm0[0] - var_180[sx.q((r8_1 * 5).d)]
                        zmm0[0] = zmm0[0] + 1f
                        float temp0_544[0x4] = _mm_sqrt_ss(0, zmm0[0])
                        zmm0 = 0x3f800000
                        zmm0[0] = 1f / temp0_544[0]
                        zmm12[0] = 1f / zmm0[0]
                        zmm0[0] = zmm0[0] * 0.5f
                        zmm12[0] = zmm12[0] * 0.5f
                        var_110[rax_7] = zmm12[0]
                        zmm1 = var_180[sx.q((r9 + (rax_7 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_180[sx.q((rax_7 + (r9 << 2)).d)]
                        zmm1[0] = zmm1[0] * zmm0[0]
                        var_110[r9] = zmm1[0]
                        zmm1 = var_180[sx.q((r8_1 + (rax_7 << 2)).d)]
                        zmm1[0] = zmm1[0] + var_180[sx.q((rax_7 + (r8_1 << 2)).d)]
                        zmm1[0] = zmm1[0] * zmm0[0]
                        arg3 = var_180[sx.q((r8_1 + (r9 << 2)).d)]
                        result = sx.q((r9 + (r8_1 << 2)).d)
                        arg3[0] = arg3[0] - var_180[result]
                        var_110[r8_1] = zmm1[0]
                        arg3[0] = arg3[0] * zmm0[0]
                        float var_104_1 = arg3[0]
                        zmm1 = var_110
                    else
                        temp0_205[0] = temp0_205[0] + 1f
                        zmm3 = 0x3f800000
                        zmm3[0] = 1f / _mm_sqrt_ss(temp0_205[0], temp0_205[0])[0]
                        zmm12[0] = 1f f/ zmm3[0]
                        zmm3[0] = zmm3[0] f* 0.5f
                        zmm1[0] = zmm1[0] - temp0_214[0]
                        zmm1[0] = zmm1[0] f* zmm3[0]
                        temp0_213[0] = temp0_213[0] - zmm9[0]
                        temp0_213[0] = temp0_213[0] f* zmm3[0]
                        float temp0_229[0x4] = _mm_insert_ps(zmm1, temp0_213, 0x10)
                        temp0_206[0] = temp0_206[0] - temp0_209[0]
                        temp0_206[0] = temp0_206[0] f* zmm3[0]
                        float temp0_230[0x4] = _mm_insert_ps(temp0_229, temp0_206, 0x20)
                        zmm12[0] = zmm12[0] * 0.5f
                        zmm1 = _mm_insert_ps(temp0_230, zmm12, 0x30)
        
        zmm13 = arg7
        float temp0_397[0x4] = _mm_mul_ps(zmm1, zmm1)
        float temp0_399[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_397, temp0_397[0].q), temp0_397)
        float temp0_400[0x4] = _mm_movehdup_ps(temp0_399)
        temp0_400[0] = temp0_400[0] + temp0_399[0]
        zmm6 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_400[0], 6), 0xffffffff)
        temp0_400[0] = temp0_400[0] * 0.5f
        float temp0_403[0x4] = _mm_rsqrt_ss(temp0_400[0], temp0_400[0])
        zmm3 = temp0_403
        zmm3[0] = zmm3[0] f* temp0_403[0]
        zmm3[0] = zmm3[0] f* temp0_400[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f f- zmm3[0]
        zmm5[0] = zmm5[0] * temp0_403[0]
        zmm5[0] = zmm5[0] + temp0_403[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] * temp0_400[0]
        zmm4[0] = 0.5f - zmm5[0]
        zmm4[0] = zmm4[0] * zmm5[0]
        zmm4[0] = zmm4[0] + zmm5[0]
        float temp0_405[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm1)
        float temp0_406[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        zmm4 = _mm_and_ps(temp0_405, temp0_406)
        zmm6 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_406, data_142d3f660), zmm4)
        zmm0 = __insertps_xmmps_memd_immb(zx.o(var_150_1.q), var_150_1:8.d, 0x28)
    
    float temp0_464[0x4] = __mulps_xmmps_memps(zmm10, data_142d4cc30)
    arg3 = _mm_shuffle_epi32(zmm6, 0xff)
    zmm3 = _mm_shuffle_epi32(zmm6, 0xc9)
    float temp0_467[0x4] = _mm_shuffle_ps(temp0_464, temp0_464, 0xd2)
    zmm5 = _mm_shuffle_epi32(zmm6, 0xd2)
    float temp0_469[0x4] = _mm_shuffle_ps(temp0_464, temp0_464, 0xc9)
    float temp0_472[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_467, zmm3), _mm_mul_ps(temp0_469, zmm5))
    zmm4 = _mm_add_ps(temp0_472, temp0_472)
    arg3 = _mm_add_ps(_mm_mul_ps(arg3, zmm4), temp0_464)
float temp0_527[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_528[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_532[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_527, zmm3), _mm_mul_ps(temp0_528, zmm5)), arg3)
arg3 = 0x3f000000
arg3[0] = 0.5f * zmm14[0]
arg3[0] = arg3[0] * zmm13[0]
float temp0_533[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_535[0x4] = _mm_mul_ps(__andps_xmmxud_memxud(temp0_532, data_142d3f770), temp0_533)
zmm15[0] = zmm15[0] * zmm14[0]
float temp0_536[0x4] = _mm_sub_ps(zmm0, temp0_535)
float temp0_537[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
float temp0_538[0x4] = _mm_sub_ps(temp0_536, temp0_537)
float temp0_540[0x4] = _mm_add_ps(_mm_add_ps(temp0_535, zmm0), temp0_537)
*arg1 = _mm_insert_ps(temp0_538, temp0_540, 0x30)
arg1[1][0] = __extractps_memd_xmmps_immb(temp0_540, 1)
(*arg1)[5] = __extractps_memd_xmmps_immb(temp0_540, 2)
(*arg1)[6].b = 1
return result
