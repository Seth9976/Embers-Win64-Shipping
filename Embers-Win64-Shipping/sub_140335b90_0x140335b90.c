// 函数: sub_140335b90
// 地址: 0x140335b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm14[0x4] = arg3
float zmm8[0x4] = *arg8
float temp0_2[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(*(arg4 + 4), *arg4, 0), 
    _mm_shuffle_ps(*(arg4 + 8), zx.o(0), 0x30), 0x82)
arg3 = data_142d3f730
float temp0_3[0x4] = _mm_div_ps(temp0_2, arg3)
uint32_t zmm5[0x4] = data_142d3f770
float zmm4[0x4] = _mm_and_ps(temp0_3, zmm5)
float zmm6[0x4] = data_142d3f740
float temp0_5[0x4] = _mm_cmpeq_ps(zmm6, zmm4, 2)
float temp0_6[0x4] = _mm_cmpeq_ps(zmm6, zmm4, 6)
zmm4 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), temp0_6)
float temp0_14[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_5, temp0_3), zmm4), arg3)), 
    data_142d3f5f0)
float temp0_19[0x4] = _mm_sub_ps(temp0_14, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_14))), 
        data_142d3f6e0))
arg3 = data_142d3f780
float temp0_22[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_19, arg3), data_142d3f6d0), temp0_19)
uint32_t temp0_23[0x4] = _mm_and_ps(zmm5, temp0_19)
zmm6 = data_142d3f6a0
float temp0_24[0x4] = _mm_cmpeq_ps(zmm6, temp0_23, 1)
zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm6, temp0_23, 5), temp0_19)
zmm4 = _mm_or_ps(_mm_and_ps(temp0_22, temp0_24), zmm6)
float zmm3[0x4] = __orps_xmmxud_memxud(_mm_and_ps(temp0_24, arg3), data_142d3f670)
zmm5 = _mm_mul_ps(zmm4, zmm4)
float temp0_35[0x4] = __addps_xmmps_memps(
    _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(data_143443100, zmm5), data_143443110), zmm5), 
    data_143443120)
uint32_t temp0_36 = _mm_movemask_ps(zmm8)
float temp0_41[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(temp0_35, zmm5), data_143443130), zmm5), 
        data_143443140), 
    zmm5)
float temp0_43[0x4] = __addps_xmmps_memps(_mm_mul_ps(data_143443150, zmm5), data_143443160)
float zmm10[0x4] = data_142d3f670
float temp0_45[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_43, zmm5), data_143443170)
float temp0_46[0x4] = _mm_add_ps(temp0_41, zmm10)
float temp0_48[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_45, zmm5), data_143443180)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm4)
float temp0_54[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(temp0_48, zmm5), data_142d3f790), zmm5), 
        zmm10), 
    zmm3)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, temp0_54, 0)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_49, temp0_54, 0x55)
zmm5 = _mm_shuffle_ps(temp0_54, temp0_49, 0)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_54, temp0_49, 0x55)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
float temp0_63[0x4] =
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xd8), temp0_55), temp0_60)
float temp0_67[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xd8), zmm5), temp0_59)
        ^ data_142e6da10, 
    temp0_63 ^ data_142e6d9e0)
float temp0_70[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg5)[1], *arg5, 0), 
    _mm_shuffle_ps((*arg5)[2], zx.o(0), 0x30), 0x82)
float temp0_73[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(zmm14, _mm_shuffle_ps(zmm14, zx.o(zmm14[0].q), 0x30), 0x80), temp0_70)
float zmm15[0x4] = arg2[2]
float temp0_74[0x4] = _mm_cmpeq_ps(zmm15, zx.o(0), 1)
uint64_t result
float zmm0[0x4]
float var_1c0[0x4]
int32_t var_1b8
float var_150[0x4]
int32_t var_134
float zmm1[0x4]
float zmm7[0x4]
float zmm9[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm13[0x4]

if (temp0_36 != 0xf)
    result = zx.q(_mm_movemask_ps(_mm_and_ps(temp0_74, zmm8)))
    
    if (result.d == 0)
        zmm11 = (*arg2)[3]
        float temp0_484[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_485[0x4] = _mm_mul_ps(temp0_67, temp0_484)
        zmm9 = *arg2
        zmm8 = (*arg2)[1]
        zmm4 = (*arg2)[2]
        zmm5 = zx.o(*(arg2 + 4))
        float temp0_486[0x4] = _mm_shuffle_ps(zmm5, zmm9, 0x84)
        float temp0_487[0x4] = _mm_unpacklo_ps(zmm4, zmm9[0].q)
        float temp0_488[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_492[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_488), 
                data_142d3f7c0), 
            temp0_485)
        float temp0_493[0x4] = _mm_shuffle_ps(temp0_487, zmm8, 0x84)
        float temp0_494[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_498[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_494), 
                data_142d3f7d0), 
            temp0_492)
        float temp0_499[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm7 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_499), 
                data_142d3f7b0), 
            temp0_498)
        float temp0_504[0x4] = _mm_mul_ps(temp0_73, zmm15)
        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, temp0_486, 0x20), 0x24)
        float temp0_507[0x4] = _mm_shuffle_ps(temp0_504, temp0_504, 0xd2)
        float temp0_509[0x4] =
            _mm_shuffle_ps(temp0_487, _mm_shuffle_ps(zmm11, temp0_493, 0x20), 0x24)
        float temp0_510[0x4] = _mm_shuffle_ps(temp0_504, temp0_504, 0xc9)
        float temp0_513[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_507, zmm5), _mm_mul_ps(temp0_510, temp0_509))
        float temp0_514[0x4] = _mm_add_ps(temp0_513, temp0_513)
        float temp0_516[0x4] = _mm_add_ps(_mm_mul_ps(temp0_484, temp0_514), temp0_504)
        float temp0_517[0x4] = _mm_shuffle_ps(temp0_514, temp0_514, 0xd2)
        float temp0_518[0x4] = _mm_shuffle_ps(temp0_514, temp0_514, 0xc9)
        zmm0 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_517, zmm5), _mm_mul_ps(temp0_518, temp0_509)), 
                temp0_516), 
            arg2[1])
        zmm13 = __mulps_xmmps_memps(zmm15, data_142e6da00)
        zmm8 = arg7
        zmm6 = arg6
    else
        float var_d0_2[0x4] = zmm14
        float temp0_239[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_240[0x4] = _mm_mul_ps(temp0_67, temp0_239)
        float temp0_241[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 1)
        float temp0_244[0x4] =
            _mm_sub_ps(zmm10, _mm_add_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0x1a), temp0_241))
        zmm13 = data_142e6da00
        float temp0_245[0x4] = _mm_mul_ps(temp0_244, zmm13)
        float temp0_246[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0x29), temp0_246)
        float temp0_249[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_251[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0x12), temp0_249)
        float temp0_253[0x4] = _mm_mul_ps(_mm_add_ps(temp0_248, temp0_251), zmm13)
        float temp0_255[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_248, temp0_251), zmm13)
        zmm12 = data_142d3f660
        float temp0_258[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_253, temp0_245, 0), 
            _mm_shuffle_ps(temp0_255, zx.o(0), 0x3a), 0x82)
        float temp0_261[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_245, temp0_255, 5), 
            _mm_shuffle_ps(temp0_253, zx.o(0), 0x35), 0x82)
        float temp0_264[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_255, temp0_253, 0xa5), 
            _mm_shuffle_ps(temp0_245, zx.o(0), 0x3a), 0x82)
        float var_c0_1[0x4] = zmm8
        float temp0_265[0x4] = _mm_shuffle_ps((*arg2)[6], zmm12, 0x30)
        zmm12[0].q = temp0_73.q
        float temp0_267[0x4] = _mm_shuffle_ps(temp0_73, _mm_shuffle_ps(temp0_73, zmm12, 0x3a), 0x84)
        float var_140_2[0x4] = temp0_258
        zmm0 = *arg2
        float temp0_269[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[1], zmm0, 0), zmm0, 2)
        float temp0_270[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_271[0x4] = _mm_mul_ps(zmm0, temp0_270)
        float temp0_272[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xc1)
        float temp0_276[0x4] = _mm_mul_ps(
            _mm_sub_ps(zmm10, _mm_add_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0xda), temp0_272)), 
            zmm15)
        zmm5 = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x29), temp0_269)
        arg3 = (*arg2)[3]
        float temp0_279[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
        float temp0_281[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x12), temp0_279)
        float temp0_283[0x4] = _mm_mul_ps(_mm_add_ps(zmm5, temp0_281), zmm15)
        zmm5 =
            _mm_mul_ps(_mm_sub_ps(zmm5, temp0_281), zx.o(*(arg2 + 0x24))[0].q | zmm15[0].q << 0x40)
        float temp0_286[0x4] = _mm_shuffle_ps((*arg2)[5], arg2[1][0], 0)
        float temp0_289[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_283, temp0_276, 0), 
            _mm_shuffle_ps(zmm5, zx.o(0), 0x3a), 0x82)
        float temp0_290[0x4] = _mm_shuffle_ps(temp0_276, zmm5, 5)
        zmm5 = _mm_shuffle_ps(zmm5, temp0_283, 0xa5)
        float temp0_293[0x4] =
            _mm_shuffle_ps(temp0_290, _mm_shuffle_ps(temp0_283, zx.o(0), 0x35), 0x82)
        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(temp0_276, zx.o(0), 0x3a), 0x82)
        float temp0_296[0x4] = _mm_shuffle_ps(temp0_286, temp0_265, 0x82)
        zmm13 = __mulps_xmmps_memps(zmm13, arg2[2])
        float temp0_299[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_245, temp0_245, 0), temp0_289)
        float temp0_302[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_255, temp0_255, 0xaa), zmm5), temp0_299)
        float temp0_305[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_253, temp0_253, 0), temp0_293), temp0_302)
        zmm8 = var_134
        zmm3 = temp0_261[0]
        float temp0_308[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_296), temp0_305)
        float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_289)
        zmm1 = temp0_261[2]
        float temp0_313[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm5), temp0_310)
        zmm3 = temp0_261[1]
        float temp0_316[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_293), temp0_313)
        zmm1 = temp0_261[3]
        float temp0_319[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_296), temp0_316)
        zmm3 = temp0_264[0]
        float temp0_321[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_289)
        zmm4 = temp0_264[2]
        float temp0_324[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm5), temp0_321)
        zmm6 = temp0_264[1]
        float temp0_327[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_293), temp0_324)
        zmm3 = temp0_264[3]
        float temp0_330[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_296), temp0_327)
        zmm4 = temp0_267[0]
        float temp0_332[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_289)
        zmm6 = temp0_267[2]
        float temp0_335[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm5), temp0_332)
        zmm4 = temp0_267[1]
        float temp0_338[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_293), temp0_335)
        zmm6 = temp0_267[3]
        float temp0_341[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_296), temp0_338)
        float temp0_342[0x4] = _mm_shuffle_ps(temp0_308, temp0_308, 0xe5)
        zmm7 = _mm_unpackhi_pd(temp0_308, temp0_308[0].q)
        zmm9 = zx.o(temp0_319[0])
        zmm5 = _mm_shuffle_ps(temp0_319, temp0_319, 0xe5)
        zmm4 = _mm_unpackhi_pd(temp0_319, temp0_319[0].q)
        zmm12 = zx.o(temp0_330[0])
        temp0_319[0] = zmm9[0]
        float temp0_346[0x4] = _mm_shuffle_ps(temp0_330, temp0_330, 0xe5)
        zmm15 = _mm_unpackhi_pd(temp0_330, temp0_330[0].q)
        temp0_330[0] = zmm12[0]
        var_1c0 = temp0_308
        int96_t var_1b0_2 = temp0_319[0].12
        int96_t var_1a0_2 = temp0_330[0].12
        int96_t var_190_2 = temp0_341[0].12
        temp0_308[0] = temp0_308[0] * temp0_308[0]
        temp0_342[0] = temp0_342[0] * temp0_342[0]
        temp0_342[0] = temp0_342[0] + temp0_308[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm7[0] = zmm7[0] + temp0_342[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm5[0] = zmm5[0] f+ zmm9[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] f+ zmm5[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        temp0_346[0] = temp0_346[0] * temp0_346[0]
        temp0_346[0] = temp0_346[0] + zmm12[0]
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm15[0] = zmm15[0] + temp0_346[0]
        zmm1 = 0xb22bcc77
        zmm7[0] = zmm7[0] + -9.99999994e-09f
        float temp0_348[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm11 = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        zmm5 = temp0_348
        zmm5[0] = zmm5[0] f* temp0_348[0]
        zmm5[0] = zmm5[0] f* zmm7[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm5[0]
        zmm6[0] = zmm6[0] * temp0_348[0]
        zmm6[0] = zmm6[0] + temp0_348[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm7[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - zmm6[0]
        zmm0[0] = zmm0[0] * zmm6[0]
        zmm0[0] = zmm0[0] + zmm6[0]
        float temp0_349[0x4] = _mm_cmpeq_ss(0, zmm7[0], 2)
        zmm0 = _mm_and_ps(zmm0, temp0_349)
        zmm12 = 0x3f800000
        zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_349, 0x3f800000), zmm0)
        zmm4[0] = zmm4[0] + -9.99999994e-09f
        float temp0_353[0x4] = _mm_rsqrt_ss(zmm4[0], zmm4[0])
        zmm4[0] = zmm4[0] * 0.5f
        temp0_353[0] = temp0_353[0] * temp0_353[0]
        temp0_353[0] = temp0_353[0] * zmm4[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_353[0]
        zmm6[0] = zmm6[0] * temp0_353[0]
        zmm6[0] = zmm6[0] + temp0_353[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm4[0]
        zmm3 = 0x3f000000
        zmm3[0] = 0.5f - zmm6[0]
        zmm3[0] = zmm3[0] * zmm6[0]
        zmm3[0] = zmm3[0] + zmm6[0]
        float temp0_354[0x4] = _mm_cmpeq_ss(0, zmm4[0], 2)
        zmm3 = _mm_and_ps(zmm3, temp0_354)
        zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_354, 0x3f800000), zmm3)
        zmm1[0] = -9.99999994e-09f + zmm15[0]
        float temp0_358[0x4] = _mm_rsqrt_ss(zmm15[0], zmm15[0])
        zmm15[0] = zmm15[0] * 0.5f
        temp0_358[0] = temp0_358[0] * temp0_358[0]
        temp0_358[0] = temp0_358[0] * zmm15[0]
        zmm3 = 0x3f000000
        zmm3[0] = 0.5f - temp0_358[0]
        zmm3[0] = zmm3[0] * temp0_358[0]
        zmm3[0] = zmm3[0] + temp0_358[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm3[0] = zmm3[0] * zmm15[0]
        arg3 = 0x3f000000
        arg3[0] = 0.5f - zmm3[0]
        arg3[0] = arg3[0] * zmm3[0]
        arg3[0] = arg3[0] + zmm3[0]
        zmm5 = _mm_cmpeq_ss(0, zmm1[0], 2)
        arg3 = _mm_and_ps(arg3, zmm5)
        uint32_t temp0_362[0x4] = _mm_or_ps(_mm_andnot_ps(zmm5, 0x3f800000), arg3)
        zmm0 = var_1c0[1]
        zmm0[0] = zmm0[0] * zmm7[0]
        zmm1 = var_1b8
        zmm1[0] = zmm1[0] * zmm7[0]
        zmm7[0] = zmm7[0] * temp0_308[0]
        zmm7 = _mm_unpacklo_ps(zmm7, zmm0[0].q)[0].q | zmm1[0].q << 0x40
        zmm1 = var_1b0_2.d
        zmm1[0] = zmm1[0] * zmm4[0]
        zmm0 = var_1b0_2:4.d
        zmm0[0] = zmm0[0] * zmm4[0]
        zmm4[0] = zmm4[0] f* var_1b0_2:8.d
        zmm1 = _mm_unpacklo_ps(zmm1, zmm0[0].q)[0].q | zmm4[0].q << 0x40
        zmm4 = var_1a0_2.d
        zmm4[0] = zmm4[0] f* temp0_362[0]
        zmm0 = var_1a0_2:4.d
        zmm0[0] = zmm0[0] f* temp0_362[0]
        temp0_362[0] = temp0_362[0] f* var_1a0_2:8.d
        zmm4 = _mm_unpacklo_ps(zmm4, zmm0[0].q)[0].q | temp0_362[0].q << 0x40
        float temp0_366[0x4] = _mm_cmpeq_ps(zx.o(0), zmm13, 2)
        zmm10 = _mm_and_ps(zmm10, temp0_366)
        zmm6 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_366, data_142d3f7e0), zmm10)
        float temp0_371[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm6, 0), zmm7)
        float temp0_372[0x4] = _mm_shuffle_ps(temp0_371, temp0_371, 0xe5)
        zmm10 = _mm_unpackhi_pd(temp0_371, temp0_371[0].q)
        var_1c0[0] = temp0_371[0]
        var_1c0[1] = temp0_372[0]
        float var_1b8_2 = zmm10[0]
        zmm5 = _mm_mul_ps(_mm_shuffle_epi32(zmm6, 0x55), zmm1)
        float temp0_376[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
        zmm1 = _mm_unpackhi_pd(zmm5, zmm5[0].q)
        var_1b0_2.d = zmm5[0]
        var_1b0_2:4.d = temp0_376[0]
        var_1b0_2:8.d = zmm1[0]
        float temp0_379[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm6, 0xaa), zmm4)
        float temp0_380[0x4] = _mm_shuffle_ps(temp0_379, temp0_379, 0xe5)
        zmm8 = _mm_unpackhi_pd(temp0_379, temp0_379[0].q)
        var_1a0_2.d = temp0_379[0]
        var_1a0_2:4.d = temp0_380[0]
        var_1a0_2:8.d = zmm8[0]
        float temp0_385[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_shuffle_ps(temp0_371, _mm_shuffle_ps(0x800000, temp0_371, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5e0, 2)
        zmm14 = _mm_cmpeq_epi32(zx.o(0), var_c0_1)
        result = zx.q(_mm_movemask_ps(_mm_or_ps(temp0_385, zmm14)))
        
        if (result.b == 0xf)
            zmm1 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(_mm_or_ps(
                __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        _mm_shuffle_ps(zmm5, _mm_shuffle_ps(0x800000, zmm5, 0x20), 0x24), 
                        data_142d3f770), 
                    data_142d3f5e0, 2), 
                zmm14)))
            
            if (result.b == 0xf)
                zmm1 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(_mm_or_ps(
                    __cmpps_xmmps_memps_immb(
                        __andps_xmmxud_memxud(
                            _mm_shuffle_ps(temp0_379, _mm_shuffle_ps(0x800000, temp0_379, 0x20), 
                                0x24), 
                            data_142d3f770), 
                        data_142d3f5e0, 2), 
                    _mm_cmpeq_epi32(var_c0_1, zx.o(0)))))
                
                if (result.b == 0xf)
                    zmm1 = data_142d3f660
                else
                    temp0_371[0] = temp0_371[0] + temp0_376[0]
                    temp0_371[0] = temp0_371[0] + zmm8[0]
                    
                    if (temp0_371[0] <= 0f)
                        temp0_376[0] - temp0_371[0]
                        int32_t rdx_12
                        rdx_12.b = temp0_376[0] > temp0_371[0]
                        int64_t rax_13 = 0x14
                        
                        if (temp0_376[0] <= temp0_371[0])
                            rax_13 = 0
                        
                        uint64_t rax_14 = 2
                        
                        if (zmm8[0] f<= *(&var_1c0 + rax_13))
                            rax_14 = zx.q(rdx_12)
                        
                        int64_t r9_1 = sx.q(*(&data_1434431f8 + (rax_14 << 2)))
                        int64_t r8_2 = sx.q(*(&data_1434431f8 + (r9_1 << 2)))
                        zmm0 = var_1c0[zx.q((rax_14 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r9_1 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r8_2 * 5).d)]
                        zmm0[0] = zmm0[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
                        zmm12[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm12[0] = zmm12[0] * 0.5f
                        var_150[rax_14] = zmm12[0]
                        zmm0 = var_1c0[sx.q((r9_1 + (rax_14 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_14 + (r9_1 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        var_150[r9_1] = zmm0[0]
                        zmm0 = var_1c0[sx.q((r8_2 + (rax_14 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_14 + (r8_2 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        arg3 = var_1c0[sx.q((r8_2 + (r9_1 << 2)).d)]
                        result = sx.q((r9_1 + (r8_2 << 2)).d)
                        arg3[0] = arg3[0] - var_1c0[result]
                        var_150[r8_2] = zmm0[0]
                        arg3[0] = arg3[0] * zmm1[0]
                        float var_144_2 = arg3[0]
                        zmm1 = var_150
                    else
                        temp0_371[0] = temp0_371[0] + 1f
                        arg3 = 0x3f800000
                        arg3[0] = 1f / _mm_sqrt_ss(0, temp0_371[0])[0]
                        zmm12[0] = 1f / arg3[0]
                        arg3[0] = arg3[0] * 0.5f
                        zmm1[0] = zmm1[0] - temp0_380[0]
                        zmm1[0] = zmm1[0] * arg3[0]
                        temp0_379[0] = temp0_379[0] - zmm10[0]
                        temp0_379[0] = temp0_379[0] * arg3[0]
                        float temp0_403[0x4] = _mm_unpacklo_ps(zmm1, temp0_379[0].q)
                        temp0_372[0] = temp0_372[0] f- zmm5[0]
                        temp0_372[0] = temp0_372[0] * arg3[0]
                        zmm12[0] = zmm12[0] * 0.5f
                        float temp0_404[0x4] = _mm_unpacklo_ps(temp0_372, zmm12[0].q)
                        zmm1 = temp0_403[0].q | temp0_404[0].q << 0x40
        
        zmm14 = var_d0_2
        zmm8 = arg7
        zmm6 = arg6
        float temp0_418[0x4] = _mm_mul_ps(zmm1, zmm1)
        float temp0_420[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_418, temp0_418[0].q), temp0_418)
        float temp0_421[0x4] = _mm_shuffle_ps(temp0_420, temp0_420, 0xe5)
        temp0_421[0] = temp0_421[0] + temp0_420[0]
        zmm7 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_421[0], 6), 0xffffffff)
        temp0_421[0] = temp0_421[0] * 0.5f
        float temp0_424[0x4] = _mm_rsqrt_ss(temp0_421[0], temp0_421[0])
        temp0_424[0] = temp0_424[0] * temp0_424[0]
        temp0_424[0] = temp0_424[0] * temp0_421[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f - temp0_424[0]
        zmm4[0] = zmm4[0] * temp0_424[0]
        zmm4[0] = zmm4[0] + temp0_424[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] * temp0_421[0]
        zmm11[0] = 0.5f - zmm4[0]
        zmm11[0] = zmm11[0] * zmm4[0]
        zmm11[0] = zmm11[0] + zmm4[0]
        float temp0_426[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm1)
        float temp0_427[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm11 = _mm_and_ps(temp0_426, temp0_427)
        zmm7 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_427, data_142d3f660), zmm11)
        zmm0 = zx.o(var_190_2.q)[0].q | var_190_2:8.d[0].q << 0x40
    
    float temp0_525[0x4] = __mulps_xmmps_memps(zmm13, data_142d4cc30)
    arg3 = _mm_shuffle_epi32(zmm7, 0xff)
    zmm3 = _mm_shuffle_epi32(zmm7, 0xc9)
    float temp0_528[0x4] = _mm_shuffle_ps(temp0_525, temp0_525, 0xd2)
    zmm5 = _mm_shuffle_epi32(zmm7, 0xd2)
    float temp0_530[0x4] = _mm_shuffle_ps(temp0_525, temp0_525, 0xc9)
    float temp0_533[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_528, zmm3), _mm_mul_ps(temp0_530, zmm5))
    zmm4 = _mm_add_ps(temp0_533, temp0_533)
    arg3 = _mm_add_ps(_mm_mul_ps(arg3, zmm4), temp0_525)
else
    result = zx.q(_mm_movemask_ps(temp0_74))
    
    if (result.b == 0)
        zmm11 = (*arg2)[3]
        float temp0_431[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_432[0x4] = _mm_mul_ps(temp0_67, temp0_431)
        zmm9 = *arg2
        zmm8 = (*arg2)[1]
        zmm4 = (*arg2)[2]
        zmm5 = zx.o(*(arg2 + 4))
        float temp0_433[0x4] = _mm_shuffle_ps(zmm5, zmm9, 0x84)
        float temp0_434[0x4] = _mm_unpacklo_ps(zmm4, zmm9[0].q)
        float temp0_435[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_439[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_435), 
                data_142d3f7c0), 
            temp0_432)
        float temp0_440[0x4] = _mm_shuffle_ps(temp0_434, zmm8, 0x84)
        float temp0_441[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
        float temp0_445[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_441), 
                data_142d3f7d0), 
            temp0_439)
        float temp0_446[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
        zmm7 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_446), 
                data_142d3f7b0), 
            temp0_445)
        float temp0_451[0x4] = _mm_mul_ps(temp0_73, zmm15)
        zmm5 = _mm_shuffle_ps(zmm5, _mm_shuffle_ps(zmm11, temp0_433, 0x20), 0x24)
        float temp0_454[0x4] = _mm_shuffle_ps(temp0_451, temp0_451, 0xd2)
        float temp0_456[0x4] =
            _mm_shuffle_ps(temp0_434, _mm_shuffle_ps(zmm11, temp0_440, 0x20), 0x24)
        float temp0_457[0x4] = _mm_shuffle_ps(temp0_451, temp0_451, 0xc9)
        float temp0_460[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_454, zmm5), _mm_mul_ps(temp0_457, temp0_456))
        float temp0_461[0x4] = _mm_add_ps(temp0_460, temp0_460)
        float temp0_463[0x4] = _mm_add_ps(_mm_mul_ps(temp0_431, temp0_461), temp0_451)
        float temp0_464[0x4] = _mm_shuffle_ps(temp0_461, temp0_461, 0xd2)
        float temp0_465[0x4] = _mm_shuffle_ps(temp0_461, temp0_461, 0xc9)
        zmm0 = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_464, zmm5), _mm_mul_ps(temp0_465, temp0_456)), 
                temp0_463), 
            arg2[1])
        zmm12 = __mulps_xmmps_memps(zmm15, data_142e6da00)
        zmm8 = arg7
        zmm6 = arg6
    else
        float var_d0_1[0x4] = zmm14
        float temp0_76[0x4] = _mm_add_ps(temp0_67, temp0_67)
        float temp0_77[0x4] = _mm_mul_ps(temp0_67, temp0_76)
        float temp0_78[0x4] = _mm_shuffle_ps(temp0_77, temp0_77, 1)
        float temp0_81[0x4] =
            _mm_sub_ps(zmm10, _mm_add_ps(_mm_shuffle_ps(temp0_77, temp0_77, 0x1a), temp0_78))
        zmm12 = data_142e6da00
        float temp0_82[0x4] = _mm_mul_ps(temp0_81, zmm12)
        float temp0_83[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x29), temp0_83)
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x12), temp0_86)
        float temp0_90[0x4] = _mm_mul_ps(_mm_add_ps(temp0_85, temp0_88), zmm12)
        float temp0_92[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_85, temp0_88), zmm12)
        zmm11 = data_142d3f660
        float temp0_95[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_90, temp0_82, 0), 
            _mm_shuffle_ps(temp0_92, zx.o(0), 0x3a), 0x82)
        zmm5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_82, temp0_92, 5), 
            _mm_shuffle_ps(temp0_90, zx.o(0), 0x35), 0x82)
        float temp0_101[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_92, temp0_90, 0xa5), 
            _mm_shuffle_ps(temp0_82, zx.o(0), 0x3a), 0x82)
        float temp0_102[0x4] = _mm_shuffle_ps((*arg2)[6], zmm11, 0x30)
        zmm11[0].q = temp0_73.q
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_73, _mm_shuffle_ps(temp0_73, zmm11, 0x3a), 0x84)
        uint32_t var_130_1[0x4] = zmm5
        float var_140_1[0x4] = temp0_95
        zmm0 = *arg2
        float temp0_106[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[1], zmm0, 0), zmm0, 2)
        float temp0_107[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_108[0x4] = _mm_mul_ps(zmm0, temp0_107)
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc1)
        zmm5 = _mm_mul_ps(
            _mm_sub_ps(zmm10, _mm_add_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xda), temp0_109)), 
            zmm15)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0x29), temp0_106)
        zmm1 = (*arg2)[3]
        float temp0_116[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0x12), temp0_116)
        float temp0_120[0x4] = _mm_mul_ps(_mm_add_ps(temp0_115, temp0_118), zmm15)
        float temp0_122[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_115, temp0_118), 
            zx.o(*(arg2 + 0x24))[0].q | zmm15[0].q << 0x40)
        float temp0_123[0x4] = _mm_shuffle_ps((*arg2)[5], arg2[1][0], 0)
        float temp0_126[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_120, zmm5, 0), 
            _mm_shuffle_ps(temp0_122, zx.o(0), 0x3a), 0x82)
        float temp0_127[0x4] = _mm_shuffle_ps(zmm5, temp0_122, 5)
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_122, temp0_120, 0xa5)
        float temp0_130[0x4] =
            _mm_shuffle_ps(temp0_127, _mm_shuffle_ps(temp0_120, zx.o(0), 0x35), 0x82)
        float temp0_132[0x4] = _mm_shuffle_ps(temp0_128, _mm_shuffle_ps(zmm5, zx.o(0), 0x3a), 0x82)
        zmm12 = __mulps_xmmps_memps(zmm12, arg2[2])
        float temp0_134[0x4] = _mm_shuffle_ps(temp0_123, temp0_102, 0x82)
        float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0), temp0_126)
        float temp0_139[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xaa), temp0_132), temp0_136)
        float temp0_142[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0), temp0_130), temp0_139)
        zmm8 = var_134
        zmm3 = var_130_1[0]
        float temp0_145[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_134), temp0_142)
        float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_126)
        zmm4 = var_130_1[2]
        float temp0_150[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_132), temp0_147)
        zmm3 = var_130_1[1]
        float temp0_153[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_130), temp0_150)
        zmm6 = var_130_1[3]
        float temp0_156[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_134), temp0_153)
        zmm3 = temp0_101[0]
        float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_126)
        zmm4 = temp0_101[2]
        float temp0_161[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_132), temp0_158)
        zmm5 = temp0_101[1]
        zmm5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_130), temp0_161)
        zmm3 = temp0_101[3]
        float temp0_167[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_134), zmm5)
        zmm4 = temp0_104[0]
        float temp0_169[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_126)
        zmm1 = temp0_104[2]
        float temp0_172[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_132), temp0_169)
        zmm4 = temp0_104[1]
        float temp0_175[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_130), temp0_172)
        arg3 = temp0_104[3]
        float temp0_178[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_134), temp0_175)
        float temp0_179[0x4] = _mm_shuffle_ps(temp0_145, temp0_145, 0xe5)
        zmm7 = _mm_unpackhi_pd(temp0_145, temp0_145[0].q)
        zmm14 = zx.o(temp0_156[0])
        zmm5 = _mm_shuffle_ps(temp0_156, temp0_156, 0xe5)
        zmm4 = _mm_unpackhi_pd(temp0_156, temp0_156[0].q)
        zmm11 = zx.o(temp0_167[0])
        temp0_156[0] = zmm14[0]
        float temp0_183[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xe5)
        zmm9 = _mm_unpackhi_pd(temp0_167, temp0_167[0].q)
        temp0_167[0] = zmm11[0]
        var_1c0 = temp0_145
        int96_t var_1b0_1 = temp0_156[0].12
        int96_t var_1a0_1 = temp0_167[0].12
        int96_t var_190_1 = temp0_178[0].12
        temp0_145[0] = temp0_145[0] * temp0_145[0]
        temp0_179[0] = temp0_179[0] * temp0_179[0]
        temp0_179[0] = temp0_179[0] + temp0_145[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm7[0] = zmm7[0] + temp0_179[0]
        zmm14[0] = zmm14[0] * zmm14[0]
        zmm5[0] = zmm5[0] f* zmm5[0]
        zmm5[0] = zmm5[0] f+ zmm14[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] f+ zmm5[0]
        zmm11[0] = zmm11[0] * zmm11[0]
        temp0_183[0] = temp0_183[0] * temp0_183[0]
        temp0_183[0] = temp0_183[0] + zmm11[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm9[0] = zmm9[0] + temp0_183[0]
        zmm3 = 0xb22bcc77
        zmm7[0] = zmm7[0] + -9.99999994e-09f
        float temp0_185[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm15 = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        zmm5 = temp0_185
        zmm5[0] = zmm5[0] f* temp0_185[0]
        zmm5[0] = zmm5[0] f* zmm7[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm5[0]
        zmm6[0] = zmm6[0] * temp0_185[0]
        zmm6[0] = zmm6[0] + temp0_185[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm7[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - zmm6[0]
        zmm0[0] = zmm0[0] * zmm6[0]
        zmm0[0] = zmm0[0] + zmm6[0]
        zmm5 = _mm_cmpeq_ss(0, zmm7[0], 2)
        zmm0 = _mm_and_ps(zmm0, zmm5)
        zmm11 = 0x3f800000
        uint32_t temp0_189[0x4] = _mm_or_ps(_mm_andnot_ps(zmm5, 0x3f800000), zmm0)
        zmm4[0] = zmm4[0] + -9.99999994e-09f
        float temp0_190[0x4] = _mm_rsqrt_ss(zmm4[0], zmm4[0])
        zmm4[0] = zmm4[0] * 0.5f
        temp0_190[0] = temp0_190[0] * temp0_190[0]
        temp0_190[0] = temp0_190[0] * zmm4[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_190[0]
        zmm6[0] = zmm6[0] * temp0_190[0]
        zmm6[0] = zmm6[0] + temp0_190[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm4[0]
        arg3 = 0x3f000000
        arg3[0] = 0.5f - zmm6[0]
        arg3[0] = arg3[0] * zmm6[0]
        arg3[0] = arg3[0] + zmm6[0]
        float temp0_191[0x4] = _mm_cmpeq_ss(0, zmm4[0], 2)
        arg3 = _mm_and_ps(arg3, temp0_191)
        zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_191, 0x3f800000), arg3)
        zmm3[0] = -9.99999994e-09f + zmm9[0]
        float temp0_195[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
        zmm9[0] = zmm9[0] * 0.5f
        temp0_195[0] = temp0_195[0] * temp0_195[0]
        temp0_195[0] = temp0_195[0] * zmm9[0]
        arg3 = 0x3f000000
        arg3[0] = 0.5f - temp0_195[0]
        arg3[0] = arg3[0] * temp0_195[0]
        arg3[0] = arg3[0] + temp0_195[0]
        arg3[0] = arg3[0] * arg3[0]
        arg3[0] = arg3[0] * zmm9[0]
        zmm1 = 0x3f000000
        zmm1[0] = 0.5f - arg3[0]
        zmm1[0] = zmm1[0] * arg3[0]
        zmm1[0] = zmm1[0] + arg3[0]
        float temp0_196[0x4] = _mm_cmpeq_ss(0, zmm3[0], 2)
        zmm1 = _mm_and_ps(zmm1, temp0_196)
        zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_196, 0x3f800000), zmm1)
        zmm0 = var_1c0[1]
        zmm0[0] = zmm0[0] f* temp0_189[0]
        zmm1 = var_1b8
        zmm1[0] = zmm1[0] f* temp0_189[0]
        temp0_189[0] = temp0_189[0] f* temp0_145[0]
        zmm5 = _mm_unpacklo_ps(temp0_189, zmm0[0].q)[0].q | zmm1[0].q << 0x40
        zmm1 = var_1b0_1.d
        zmm1[0] = zmm1[0] * zmm6[0]
        zmm0 = var_1b0_1:4.d
        zmm0[0] = zmm0[0] * zmm6[0]
        float temp0_201[0x4] = _mm_unpacklo_ps(zmm1, zmm0[0].q)
        zmm6[0] = zmm6[0] f* var_1b0_1:8.d
        zmm1 = temp0_201[0].q | zmm6[0].q << 0x40
        zmm3 = var_1a0_1.d
        zmm3[0] = zmm3[0] * zmm7[0]
        zmm0 = var_1a0_1:4.d
        zmm0[0] = zmm0[0] * zmm7[0]
        float temp0_202[0x4] = _mm_unpacklo_ps(zmm3, zmm0[0].q)
        zmm7[0] = zmm7[0] f* var_1a0_1:8.d
        float temp0_203[0x4] = _mm_cmpeq_ps(zx.o(0), zmm12, 2)
        zmm10 = _mm_and_ps(zmm10, temp0_203)
        zmm13 = __andnps_xmmxud_memxud(temp0_203, data_142d3f7e0)
        zmm3 = temp0_202[0].q | zmm7[0].q << 0x40
        zmm13 = _mm_or_ps(zmm13, zmm10)
        float temp0_208[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm13, 0), zmm5)
        float temp0_209[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xe5)
        zmm8 = _mm_unpackhi_pd(temp0_208, temp0_208[0].q)
        var_1c0[0] = temp0_208[0]
        var_1c0[1] = temp0_209[0]
        float var_1b8_1 = zmm8[0]
        float temp0_212[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm13, 0x55), zmm1)
        float temp0_213[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xe5)
        zmm1 = _mm_unpackhi_pd(temp0_212, temp0_212[0].q)
        var_1b0_1.d = temp0_212[0]
        var_1b0_1:4.d = temp0_213[0]
        var_1b0_1:8.d = zmm1[0]
        zmm5 = _mm_mul_ps(_mm_shuffle_epi32(zmm13, 0xaa), zmm3)
        float temp0_217[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe5)
        zmm6 = _mm_unpackhi_pd(zmm5, zmm5[0].q)
        var_1a0_1.d = zmm5[0]
        var_1a0_1:4.d = temp0_217[0]
        var_1a0_1:8.d = zmm6[0]
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_shuffle_ps(temp0_208, _mm_shuffle_ps(0x800000, temp0_208, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm1 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    _mm_shuffle_ps(temp0_212, _mm_shuffle_ps(0x800000, temp0_212, 0x20), 0x24), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm1 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        _mm_shuffle_ps(zmm5, _mm_shuffle_ps(0x800000, zmm5, 0x20), 0x24), 
                        data_142d3f770), 
                    data_142d3f5e0, 2)))
                
                if (result.b == 0xf)
                    zmm1 = data_142d3f660
                else
                    temp0_208[0] = temp0_208[0] + temp0_213[0]
                    temp0_208[0] = temp0_208[0] + zmm6[0]
                    
                    if (temp0_208[0] <= 0f)
                        temp0_213[0] - temp0_208[0]
                        int32_t rdx
                        rdx.b = temp0_213[0] > temp0_208[0]
                        int64_t rax_6 = 0x14
                        
                        if (temp0_213[0] <= temp0_208[0])
                            rax_6 = 0
                        
                        uint64_t rax_7 = 2
                        
                        if (zmm6[0] f<= *(&var_1c0 + rax_6))
                            rax_7 = zx.q(rdx)
                        
                        int64_t r9 = sx.q(*(&data_1434431f8 + (rax_7 << 2)))
                        int64_t r8_1 = sx.q(*(&data_1434431f8 + (r9 << 2)))
                        zmm0 = var_1c0[zx.q((rax_7 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r9 * 5).d)]
                        zmm0[0] = zmm0[0] - var_1c0[sx.q((r8_1 * 5).d)]
                        zmm0[0] = zmm0[0] + 1f
                        zmm1 = 0x3f800000
                        zmm1[0] = 1f / _mm_sqrt_ss(zmm0[0], zmm0[0])[0]
                        zmm11[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm11[0] = zmm11[0] * 0.5f
                        var_150[rax_7] = zmm11[0]
                        zmm0 = var_1c0[sx.q((r9 + (rax_7 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_7 + (r9 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        var_150[r9] = zmm0[0]
                        zmm0 = var_1c0[sx.q((r8_1 + (rax_7 << 2)).d)]
                        zmm0[0] = zmm0[0] + var_1c0[sx.q((rax_7 + (r8_1 << 2)).d)]
                        zmm0[0] = zmm0[0] * zmm1[0]
                        arg3 = var_1c0[sx.q((r8_1 + (r9 << 2)).d)]
                        result = sx.q((r9 + (r8_1 << 2)).d)
                        arg3[0] = arg3[0] - var_1c0[result]
                        var_150[r8_1] = zmm0[0]
                        arg3[0] = arg3[0] * zmm1[0]
                        float var_144_1 = arg3[0]
                        zmm1 = var_150
                    else
                        temp0_208[0] = temp0_208[0] + 1f
                        arg3 = 0x3f800000
                        arg3[0] = 1f / _mm_sqrt_ss(0, temp0_208[0])[0]
                        zmm11[0] = 1f / arg3[0]
                        arg3[0] = arg3[0] * 0.5f
                        zmm1[0] = zmm1[0] - temp0_217[0]
                        zmm1[0] = zmm1[0] * arg3[0]
                        zmm5[0] = zmm5[0] f- zmm8[0]
                        zmm5[0] = zmm5[0] f* arg3[0]
                        float temp0_235[0x4] = _mm_unpacklo_ps(zmm1, zmm5[0].q)
                        temp0_209[0] = temp0_209[0] - temp0_212[0]
                        temp0_209[0] = temp0_209[0] * arg3[0]
                        zmm11[0] = zmm11[0] * 0.5f
                        float temp0_236[0x4] = _mm_unpacklo_ps(temp0_209, zmm11[0].q)
                        zmm1 = temp0_235[0].q | temp0_236[0].q << 0x40
        
        zmm14 = var_d0_1
        zmm8 = arg7
        zmm6 = arg6
        float temp0_405[0x4] = _mm_mul_ps(zmm1, zmm1)
        float temp0_407[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_405, temp0_405[0].q), temp0_405)
        float temp0_408[0x4] = _mm_shuffle_ps(temp0_407, temp0_407, 0xe5)
        temp0_408[0] = temp0_408[0] + temp0_407[0]
        zmm7 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_408[0], 6), 0xffffffff)
        temp0_408[0] = temp0_408[0] * 0.5f
        float temp0_411[0x4] = _mm_rsqrt_ss(temp0_408[0], temp0_408[0])
        temp0_411[0] = temp0_411[0] * temp0_411[0]
        temp0_411[0] = temp0_411[0] * temp0_408[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f - temp0_411[0]
        zmm4[0] = zmm4[0] * temp0_411[0]
        zmm4[0] = zmm4[0] + temp0_411[0]
        zmm4[0] = zmm4[0] * zmm4[0]
        zmm4[0] = zmm4[0] * temp0_408[0]
        zmm15[0] = 0.5f - zmm4[0]
        zmm15[0] = zmm15[0] * zmm4[0]
        zmm15[0] = zmm15[0] + zmm4[0]
        float temp0_413[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), zmm1)
        float temp0_414[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
        zmm15 = _mm_and_ps(temp0_413, temp0_414)
        zmm7 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_414, data_142d3f660), zmm15)
        zmm0 = zx.o(var_190_1.q)[0].q | var_190_1:8.d[0].q << 0x40
    
    float temp0_472[0x4] = __mulps_xmmps_memps(zmm12, data_142d4cc30)
    arg3 = _mm_shuffle_epi32(zmm7, 0xff)
    zmm3 = _mm_shuffle_epi32(zmm7, 0xc9)
    float temp0_475[0x4] = _mm_shuffle_ps(temp0_472, temp0_472, 0xd2)
    zmm5 = _mm_shuffle_epi32(zmm7, 0xd2)
    float temp0_477[0x4] = _mm_shuffle_ps(temp0_472, temp0_472, 0xc9)
    float temp0_480[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_475, zmm3), _mm_mul_ps(temp0_477, zmm5))
    zmm4 = _mm_add_ps(temp0_480, temp0_480)
    arg3 = _mm_add_ps(_mm_mul_ps(arg3, zmm4), temp0_472)
float temp0_537[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
float temp0_538[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
float temp0_542[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_537, zmm3), _mm_mul_ps(temp0_538, zmm5)), arg3)
arg3 = 0x3f000000
arg3[0] = 0.5f * zmm14[0]
arg3[0] = arg3[0] * zmm8[0]
float temp0_545[0x4] =
    _mm_mul_ps(__andps_xmmxud_memxud(temp0_542, data_142d3f770), _mm_shuffle_ps(arg3, arg3, 0))
zmm6[0] = zmm6[0] * zmm14[0]
float temp0_546[0x4] = _mm_sub_ps(zmm0, temp0_545)
float temp0_547[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_548[0x4] = _mm_sub_ps(temp0_546, temp0_547)
float temp0_550[0x4] = _mm_add_ps(_mm_add_ps(temp0_545, zmm0), temp0_547)
*arg1 = _mm_shuffle_ps(temp0_548, _mm_shuffle_ps(temp0_550, temp0_548, 0x20), 0x24)
float temp0_553[0x4] = _mm_shuffle_ps(temp0_550, temp0_550, 0xe5)
temp0_550[0].q = temp0_550 u>> 0x40
arg1[1][0] = temp0_553[0]
(*arg1)[5] = temp0_550[0]
(*arg1)[6].b = 1
return result
