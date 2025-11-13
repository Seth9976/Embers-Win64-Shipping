// 函数: sub_140334480
// 地址: 0x140334480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm10[0x4] = *arg9
float temp0_2[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(*(arg4 + 4), *arg4, 0), 
    _mm_shuffle_ps(*(arg4 + 8), zx.o(0), 0x30), 0x82)
float zmm1[0x4] = data_142d3f730
float temp0_3[0x4] = _mm_div_ps(temp0_2, zmm1)
uint32_t zmm4[0x4] = data_142d3f770
float zmm5[0x4] = _mm_and_ps(temp0_3, zmm4)
float zmm6[0x4] = data_142d3f740
float temp0_5[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 2)
float temp0_6[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 6)
zmm5 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), temp0_6)
float temp0_14[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_5, temp0_3), zmm5), zmm1)), 
    data_142d3f5f0)
float temp0_19[0x4] = _mm_sub_ps(temp0_14, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_14))), 
        data_142d3f6e0))
float zmm3[0x4] = data_142d3f780
float temp0_22[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_19, zmm3), data_142d3f6d0), temp0_19)
zmm6 = _mm_and_ps(temp0_19, zmm4)
float zmm7[0x4] = data_142d3f6a0
float temp0_24[0x4] = _mm_cmpeq_ps(zmm7, zmm6, 1)
zmm7 = _mm_and_ps(_mm_cmpeq_ps(zmm7, zmm6, 5), temp0_19)
zmm5 = _mm_or_ps(_mm_and_ps(temp0_22, temp0_24), zmm7)
zmm1 = __orps_xmmxud_memxud(_mm_and_ps(temp0_24, zmm3), data_142d3f670)
float temp0_31[0x4] = _mm_mul_ps(zmm5, zmm5)
float temp0_35[0x4] = __addps_xmmps_memps(
    _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(data_143443100, temp0_31), data_143443110), 
        temp0_31), 
    data_143443120)
uint32_t temp0_36 = _mm_movemask_ps(zmm10)
float temp0_41[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(temp0_35, temp0_31), data_143443130), temp0_31), 
        data_143443140), 
    temp0_31)
float temp0_43[0x4] = __addps_xmmps_memps(_mm_mul_ps(data_143443150, temp0_31), data_143443160)
float zmm8[0x4] = data_142d3f670
float temp0_45[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_43, temp0_31), data_143443170)
float temp0_46[0x4] = _mm_add_ps(temp0_41, zmm8)
float temp0_48[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_45, temp0_31), data_143443180)
float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm5)
float temp0_54[0x4] = _mm_mul_ps(
    _mm_add_ps(
        _mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(temp0_48, temp0_31), data_142d3f790), temp0_31), 
        zmm8), 
    zmm1)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, temp0_54, 0)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_49, temp0_54, 0x55)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_49, 0)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_54, temp0_49, 0x55)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xaa)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0xaa)
float temp0_63[0x4] =
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xd8), temp0_55), temp0_60)
float temp0_67[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xd8), temp0_57), temp0_59)
        ^ data_142e6da10, 
    temp0_63 ^ data_142e6d9e0)
float temp0_70[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg5)[1], *arg5, 0), 
    _mm_shuffle_ps((*arg5)[2], zx.o(0), 0x30), 0x82)
float temp0_73[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(arg3, _mm_shuffle_ps(arg3, zx.o(arg3[0].q), 0x30), 0x80), temp0_70)
float zmm12[0x4] = arg2[2]
float temp0_74[0x4] = _mm_cmpeq_ps(zmm12, zx.o(0), 1)
uint64_t result
float zmm0[0x4]
float zmm9[0x4]
float var_1c0[0x4]
int32_t var_1b8
float var_150[0x4]
int32_t var_134
float zmm11[0x4]
float zmm13[0x4]
float zmm14[0x4]

if (temp0_36 != 0xf)
    result = zx.q(_mm_movemask_ps(_mm_and_ps(temp0_74, zmm10)))
    
    if (result.d == 0)
        zmm13 = (*arg2)[3]
        float temp0_493[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        float temp0_494[0x4] = _mm_mul_ps(temp0_67, temp0_493)
        zmm11 = *arg2
        zmm9 = (*arg2)[1]
        zmm5 = (*arg2)[2]
        zmm6 = zx.o(*(arg2 + 4))
        zmm4 = _mm_shuffle_ps(zmm6, zmm11, 0x84)
        float temp0_496[0x4] = _mm_unpacklo_ps(zmm5, zmm11[0].q)
        float temp0_497[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_501[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_497), 
                data_142d3f7c0), 
            temp0_494)
        float temp0_502[0x4] = _mm_shuffle_ps(temp0_496, zmm9, 0x84)
        float temp0_503[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_507[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_503), 
                data_142d3f7d0), 
            temp0_501)
        float temp0_508[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_508), 
                data_142d3f7b0), 
            temp0_507)
        float temp0_513[0x4] = _mm_mul_ps(temp0_73, zmm12)
        float temp0_515[0x4] = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm13, zmm4, 0x20), 0x24)
        float temp0_516[0x4] = _mm_shuffle_ps(temp0_513, temp0_513, 0xd2)
        float temp0_518[0x4] =
            _mm_shuffle_ps(temp0_496, _mm_shuffle_ps(zmm13, temp0_502, 0x20), 0x24)
        zmm4 = _mm_shuffle_ps(temp0_513, temp0_513, 0xc9)
        float temp0_522[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_516, temp0_515), _mm_mul_ps(zmm4, temp0_518))
        float temp0_523[0x4] = _mm_add_ps(temp0_522, temp0_522)
        float temp0_525[0x4] = _mm_add_ps(_mm_mul_ps(temp0_493, temp0_523), temp0_513)
        float temp0_526[0x4] = _mm_shuffle_ps(temp0_523, temp0_523, 0xd2)
        float temp0_527[0x4] = _mm_shuffle_ps(temp0_523, temp0_523, 0xc9)
        zmm10 = __addps_xmmps_memps(
            _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_526, temp0_515), _mm_mul_ps(temp0_527, temp0_518)), 
                temp0_525), 
            arg2[1])
        zmm12 = __mulps_xmmps_memps(zmm12, data_142e6da00)
    else
        float temp0_239[0x4] = _mm_add_ps(temp0_67, temp0_67)
        zmm4 = _mm_mul_ps(temp0_67, temp0_239)
        float temp0_241[0x4] = _mm_shuffle_ps(zmm4, zmm4, 1)
        float temp0_244[0x4] =
            _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), temp0_241))
        zmm13 = data_142e6da00
        float temp0_245[0x4] = _mm_mul_ps(temp0_244, zmm13)
        zmm4 = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0x29), zmm4)
        float temp0_249[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_251[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_239, temp0_239, 0x12), temp0_249)
        zmm4 = _mm_mul_ps(_mm_add_ps(temp0_248, temp0_251), zmm13)
        float temp0_255[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_248, temp0_251), zmm13)
        zmm14 = data_142d3f660
        float temp0_258[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, temp0_245, 0), 
            _mm_shuffle_ps(temp0_255, zx.o(0), 0x3a), 0x82)
        float temp0_261[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_245, temp0_255, 5), 
            _mm_shuffle_ps(zmm4, zx.o(0), 0x35), 0x82)
        float temp0_264[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_255, zmm4, 0xa5), 
            _mm_shuffle_ps(temp0_245, zx.o(0), 0x3a), 0x82)
        float var_c0_1[0x4] = zmm10
        float temp0_265[0x4] = _mm_shuffle_ps((*arg2)[6], zmm14, 0x30)
        zmm14[0].q = temp0_73.q
        float temp0_267[0x4] = _mm_shuffle_ps(temp0_73, _mm_shuffle_ps(temp0_73, zmm14, 0x3a), 0x84)
        float var_140_2[0x4] = temp0_258
        zmm0 = *arg2
        float temp0_269[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[1], zmm0, 0), zmm0, 2)
        float temp0_270[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_271[0x4] = _mm_mul_ps(zmm0, temp0_270)
        float temp0_272[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xc1)
        float temp0_276[0x4] = _mm_mul_ps(
            _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(temp0_271, temp0_271, 0xda), temp0_272)), 
            zmm12)
        float temp0_278[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x29), temp0_269)
        zmm1 = (*arg2)[3]
        float temp0_279[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
        float temp0_281[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0x12), temp0_279)
        float temp0_283[0x4] = _mm_mul_ps(_mm_add_ps(temp0_278, temp0_281), zmm12)
        float temp0_285[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_278, temp0_281), 
            zx.o(*(arg2 + 0x24))[0].q | zmm12[0].q << 0x40)
        float temp0_286[0x4] = _mm_shuffle_ps((*arg2)[5], arg2[1][0], 0)
        float temp0_289[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_283, temp0_276, 0), 
            _mm_shuffle_ps(temp0_285, zx.o(0), 0x3a), 0x82)
        float temp0_290[0x4] = _mm_shuffle_ps(temp0_276, temp0_285, 5)
        float temp0_291[0x4] = _mm_shuffle_ps(temp0_285, temp0_283, 0xa5)
        float temp0_293[0x4] =
            _mm_shuffle_ps(temp0_290, _mm_shuffle_ps(temp0_283, zx.o(0), 0x35), 0x82)
        float temp0_295[0x4] =
            _mm_shuffle_ps(temp0_291, _mm_shuffle_ps(temp0_276, zx.o(0), 0x3a), 0x82)
        float temp0_296[0x4] = _mm_shuffle_ps(temp0_286, temp0_265, 0x82)
        float temp0_297[0x4] = __mulps_xmmps_memps(zmm13, arg2[2])
        float temp0_299[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_245, temp0_245, 0), temp0_289)
        float temp0_302[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_255, temp0_255, 0xaa), temp0_295), temp0_299)
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_293), temp0_302)
        zmm10 = var_134
        zmm3 = temp0_261[0]
        float temp0_308[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_296), zmm4)
        float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_289)
        zmm4 = temp0_261[2]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_295), temp0_310)
        zmm3 = temp0_261[1]
        float temp0_316[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_293), zmm4)
        zmm6 = temp0_261[3]
        float temp0_319[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_296), temp0_316)
        zmm3 = temp0_264[0]
        float temp0_321[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_289)
        zmm4 = temp0_264[2]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_295), temp0_321)
        zmm3 = temp0_264[1]
        float temp0_327[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_293), zmm4)
        zmm4 = temp0_264[3]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_296), temp0_327)
        zmm3 = temp0_267[0]
        float temp0_332[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_289)
        zmm5 = temp0_267[2]
        float temp0_335[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_295), temp0_332)
        zmm3 = temp0_267[1]
        float temp0_338[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_293), temp0_335)
        zmm5 = temp0_267[3]
        float temp0_341[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_296), temp0_338)
        float temp0_342[0x4] = _mm_shuffle_ps(temp0_308, temp0_308, 0xe5)
        zmm1 = _mm_unpackhi_pd(temp0_308, temp0_308[0].q)
        zmm12 = zx.o(temp0_319[0])
        float temp0_344[0x4] = _mm_shuffle_ps(temp0_319, temp0_319, 0xe5)
        zmm3 = _mm_unpackhi_pd(temp0_319, temp0_319[0].q)
        zmm11 = zx.o(zmm4[0])
        temp0_319[0] = zmm12[0]
        float temp0_346[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
        int96_t var_1b0_2 = temp0_319[0].12
        zmm6 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
        zmm4[0] = zmm11[0]
        var_1c0 = temp0_308
        int96_t var_1a0_2 = zmm4[0].12
        int96_t var_190_2 = temp0_341[0].12
        zmm4 = temp0_308
        zmm4[0] = zmm4[0] f* temp0_308[0]
        temp0_342[0] = temp0_342[0] * temp0_342[0]
        temp0_342[0] = temp0_342[0] f+ zmm4[0]
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm1[0] = zmm1[0] + temp0_342[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        temp0_344[0] = temp0_344[0] * temp0_344[0]
        temp0_344[0] = temp0_344[0] + zmm12[0]
        zmm3[0] = zmm3[0] * zmm3[0]
        zmm3[0] = zmm3[0] + temp0_344[0]
        zmm11[0] = zmm11[0] * zmm11[0]
        temp0_346[0] = temp0_346[0] * temp0_346[0]
        temp0_346[0] = temp0_346[0] + zmm11[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] + temp0_346[0]
        zmm9 = 0xb22bcc77
        zmm4 = zmm1
        zmm4[0] = zmm4[0] f+ -9.99999994e-09f
        float temp0_348[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1[0])
        zmm14 = 0x3f000000
        zmm1[0] = zmm1[0] * 0.5f
        temp0_348[0] = temp0_348[0] * temp0_348[0]
        temp0_348[0] = temp0_348[0] * zmm1[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - temp0_348[0]
        zmm0[0] = zmm0[0] * temp0_348[0]
        zmm0[0] = zmm0[0] + temp0_348[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] * zmm1[0]
        zmm1 = 0x3f000000
        zmm1[0] = 0.5f - zmm0[0]
        zmm1[0] = zmm1[0] * zmm0[0]
        zmm1[0] = zmm1[0] + zmm0[0]
        float temp0_349[0x4] = _mm_cmpeq_ss(0, zmm4[0], 2)
        zmm1 = _mm_and_ps(zmm1, temp0_349)
        zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_349, 0x3f800000), zmm1)
        float temp0_353[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
        zmm3[0] = zmm3[0] * 0.5f
        temp0_353[0] = temp0_353[0] * temp0_353[0]
        temp0_353[0] = temp0_353[0] * zmm3[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - temp0_353[0]
        zmm3[0] = zmm3[0] + -9.99999994e-09f
        zmm0[0] = zmm0[0] * temp0_353[0]
        zmm0[0] = zmm0[0] + temp0_353[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f - zmm0[0]
        zmm4[0] = zmm4[0] f* zmm0[0]
        zmm4[0] = zmm4[0] f+ zmm0[0]
        float temp0_354[0x4] = _mm_cmpeq_ss(0, zmm3[0], 2)
        uint32_t temp0_355[0x4] = _mm_and_ps(zmm4, temp0_354)
        zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_354, 0x3f800000), temp0_355)
        zmm9[0] = -9.99999994e-09f + zmm6[0]
        float temp0_358[0x4] = _mm_rsqrt_ss(zmm6[0], zmm6[0])
        zmm6[0] = zmm6[0] * 0.5f
        zmm4 = temp0_358
        zmm4[0] = zmm4[0] f* temp0_358[0]
        zmm4[0] = zmm4[0] f* zmm6[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f f- zmm4[0]
        zmm5[0] = zmm5[0] * temp0_358[0]
        zmm5[0] = zmm5[0] + temp0_358[0]
        zmm5[0] = zmm5[0] * zmm5[0]
        zmm5[0] = zmm5[0] * zmm6[0]
        zmm4 = 0x3f000000
        zmm4[0] = 0.5f - zmm5[0]
        zmm4[0] = zmm4[0] f* zmm5[0]
        zmm4[0] = zmm4[0] f+ zmm5[0]
        float temp0_359[0x4] = _mm_cmpeq_ss(0, zmm9[0], 2)
        uint32_t temp0_360[0x4] = _mm_and_ps(zmm4, temp0_359)
        zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_359, 0x3f800000), temp0_360)
        zmm0 = var_1c0[1]
        zmm0[0] = zmm0[0] * zmm7[0]
        zmm4 = var_1b8
        zmm4[0] = zmm4[0] f* zmm7[0]
        zmm7[0] = zmm7[0] * temp0_308[0]
        zmm7 = _mm_unpacklo_ps(zmm7, zmm0[0].q)[0].q | zmm4[0].q << 0x40
        zmm5 = var_1b0_2.d
        zmm5[0] = zmm5[0] * zmm3[0]
        zmm0 = var_1b0_2:4.d
        zmm0[0] = zmm0[0] * zmm3[0]
        zmm3[0] = zmm3[0] f* var_1b0_2:8.d
        zmm5 = _mm_unpacklo_ps(zmm5, zmm0[0].q)[0].q | zmm3[0].q << 0x40
        zmm3 = var_1a0_2.d
        zmm3[0] = zmm3[0] * zmm1[0]
        zmm0 = var_1a0_2:4.d
        zmm0[0] = zmm0[0] * zmm1[0]
        zmm1[0] = zmm1[0] f* var_1a0_2:8.d
        zmm3 = _mm_unpacklo_ps(zmm3, zmm0[0].q)[0].q | zmm1[0].q << 0x40
        float temp0_366[0x4] = _mm_cmpeq_ps(zx.o(0), temp0_297, 2)
        zmm0 = _mm_and_ps(zmm8, temp0_366)
        zmm1 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_366, data_142d3f7e0), zmm0)
        zmm4 = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0), zmm7)
        float temp0_372[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
        zmm12 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
        var_1c0[0] = zmm4[0]
        var_1c0[1] = temp0_372[0]
        float var_1b8_2 = zmm12[0]
        float temp0_375[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0x55), zmm5)
        float temp0_376[0x4] = _mm_shuffle_ps(temp0_375, temp0_375, 0xe5)
        zmm5 = _mm_unpackhi_pd(temp0_375, temp0_375[0].q)
        var_1b0_2.d = temp0_375[0]
        var_1b0_2:4.d = temp0_376[0]
        var_1b0_2:8.d = zmm5[0]
        float temp0_379[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xaa), zmm3)
        float temp0_381[0x4] = _mm_shuffle_ps(zmm4, _mm_shuffle_ps(0x800000, zmm4, 0x20), 0x24)
        float temp0_382[0x4] = _mm_shuffle_ps(temp0_379, temp0_379, 0xe5)
        float temp0_384[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(temp0_381, data_142d3f770), data_142d3f5e0, 2)
        float temp0_385[0x4] = _mm_cmpeq_epi32(zx.o(0), var_c0_1)
        result = zx.q(_mm_movemask_ps(_mm_or_ps(temp0_384, temp0_385)))
        zmm11 = _mm_unpackhi_pd(temp0_379, temp0_379[0].q)
        var_1a0_2.d = temp0_379[0]
        var_1a0_2:4.d = temp0_382[0]
        var_1a0_2:8.d = zmm11[0]
        
        if (result.b == 0xf)
            zmm5 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(_mm_or_ps(
                __cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        _mm_shuffle_ps(temp0_375, _mm_shuffle_ps(0x800000, temp0_375, 0x20), 0x24), 
                        data_142d3f770), 
                    data_142d3f5e0, 2), 
                temp0_385)))
            
            if (result.b == 0xf)
                zmm5 = data_142d3f660
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
                    zmm5 = data_142d3f660
                else
                    zmm6 = zmm4
                    zmm6[0] = zmm6[0] + temp0_376[0]
                    zmm6[0] = zmm6[0] + zmm11[0]
                    
                    if (zmm6[0] <= 0f)
                        temp0_376[0] f- zmm4[0]
                        int32_t rdx_12
                        rdx_12.b = temp0_376[0] f> zmm4[0]
                        int64_t rax_13 = 0x14
                        
                        if (temp0_376[0] f<= zmm4[0])
                            rax_13 = 0
                        
                        uint64_t rax_14 = 2
                        
                        if (zmm11[0] f<= *(&var_1c0 + rax_13))
                            rax_14 = zx.q(rdx_12)
                        
                        int64_t r9_1 = sx.q(*(&data_1434431f8 + (rax_14 << 2)))
                        int64_t r8_2 = sx.q(*(&data_1434431f8 + (r9_1 << 2)))
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
                        zmm5 = var_150
                    else
                        zmm0 = 0x3f800000
                        zmm6[0] = zmm6[0] + 1f
                        zmm4 = 0x3f800000
                        zmm4[0] = 1f / _mm_sqrt_ss(zmm6[0], zmm6[0])[0]
                        zmm0[0] = 1f f/ zmm4[0]
                        zmm4[0] = zmm4[0] f* 0.5f
                        zmm5[0] = zmm5[0] - temp0_382[0]
                        zmm5[0] = zmm5[0] f* zmm4[0]
                        temp0_379[0] = temp0_379[0] - zmm12[0]
                        temp0_379[0] = temp0_379[0] f* zmm4[0]
                        float temp0_403[0x4] = _mm_unpacklo_ps(zmm5, temp0_379[0].q)
                        temp0_372[0] = temp0_372[0] - temp0_375[0]
                        temp0_372[0] = temp0_372[0] f* zmm4[0]
                        zmm0[0] = zmm0[0] * 0.5f
                        float temp0_404[0x4] = _mm_unpacklo_ps(temp0_372, zmm0[0].q)
                        zmm5 = temp0_403[0].q | temp0_404[0].q << 0x40
        
        zmm12 = temp0_297
        float temp0_418[0x4] = _mm_mul_ps(zmm5, zmm5)
        float temp0_420[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_418, temp0_418[0].q), temp0_418)
        float temp0_421[0x4] = _mm_shuffle_ps(temp0_420, temp0_420, 0xe5)
        temp0_421[0] = temp0_421[0] + temp0_420[0]
        zmm3 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_421[0], 6), 0xffffffff)
        temp0_421[0] = temp0_421[0] * 0.5f
        float temp0_424[0x4] = _mm_rsqrt_ss(temp0_421[0], temp0_421[0])
        zmm4 = temp0_424
        zmm4[0] = zmm4[0] f* temp0_424[0]
        zmm4[0] = zmm4[0] f* temp0_421[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm4[0]
        zmm6[0] = zmm6[0] * temp0_424[0]
        zmm6[0] = zmm6[0] + temp0_424[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * temp0_421[0]
        zmm14[0] = 0.5f - zmm6[0]
        zmm14[0] = zmm14[0] * zmm6[0]
        zmm14[0] = zmm14[0] + zmm6[0]
        float temp0_426[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm5)
        float temp0_427[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm14 = _mm_and_ps(temp0_426, temp0_427)
        zmm3 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_427, data_142d3f660), zmm14)
        zmm10 = zx.o(var_190_2.q)[0].q | var_190_2:8.d[0].q << 0x40
    
    arg3[0] = arg3[0] * 0.5f
    zmm9 = zx.o(0)
    zmm1 = zx.o(0)
    zmm1[0] = arg8[0]
    zmm4 = _mm_unpacklo_ps(arg6, arg7[0].q)[0].q | zmm1[0].q << 0x40
    arg3 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm4)
    float temp0_537[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_538[0x4] = _mm_mul_ps(temp0_537, zmm3)
    float temp0_539[0x4] = _mm_shuffle_ps(temp0_538, temp0_538, 1)
    zmm8 = _mm_mul_ps(
        _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(temp0_538, temp0_538, 0x1a), temp0_539)), zmm12)
    zmm5 = _mm_shuffle_epi32(zmm3, 4)
    float temp0_546[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_537, temp0_537, 0x29), zmm5)
    zmm3 = _mm_shuffle_epi32(zmm3, 0xff)
    float temp0_549[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_537, temp0_537, 0x12), zmm3)
    zmm7 = _mm_mul_ps(_mm_add_ps(temp0_546, temp0_549), zmm12)
    float temp0_552[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
    zmm6 = _mm_mul_ps(_mm_sub_ps(temp0_546, temp0_549), temp0_552)
else
    result = zx.q(_mm_movemask_ps(temp0_74))
    
    if (result.b == 0)
        zmm13 = (*arg2)[3]
        float temp0_431[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
        float temp0_432[0x4] = _mm_mul_ps(temp0_67, temp0_431)
        zmm11 = *arg2
        zmm9 = (*arg2)[1]
        zmm5 = (*arg2)[2]
        zmm6 = zx.o(*(arg2 + 4))
        zmm4 = _mm_shuffle_ps(zmm6, zmm11, 0x84)
        float temp0_434[0x4] = _mm_unpacklo_ps(zmm5, zmm11[0].q)
        float temp0_435[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
        float temp0_439[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_435), 
                data_142d3f7c0), 
            temp0_432)
        float temp0_440[0x4] = _mm_shuffle_ps(temp0_434, zmm9, 0x84)
        float temp0_441[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
        float temp0_445[0x4] = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_441), 
                data_142d3f7d0), 
            temp0_439)
        float temp0_446[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
        zmm3 = _mm_add_ps(
            __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_446), 
                data_142d3f7b0), 
            temp0_445)
        float temp0_451[0x4] = _mm_mul_ps(temp0_73, zmm12)
        float temp0_453[0x4] = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm13, zmm4, 0x20), 0x24)
        float temp0_454[0x4] = _mm_shuffle_ps(temp0_451, temp0_451, 0xd2)
        float temp0_456[0x4] =
            _mm_shuffle_ps(temp0_434, _mm_shuffle_ps(zmm13, temp0_440, 0x20), 0x24)
        zmm4 = _mm_shuffle_ps(temp0_451, temp0_451, 0xc9)
        float temp0_460[0x4] =
            _mm_sub_ps(_mm_mul_ps(temp0_454, temp0_453), _mm_mul_ps(zmm4, temp0_456))
        float temp0_461[0x4] = _mm_add_ps(temp0_460, temp0_460)
        float temp0_463[0x4] = _mm_add_ps(_mm_mul_ps(temp0_431, temp0_461), temp0_451)
        float temp0_464[0x4] = _mm_shuffle_ps(temp0_461, temp0_461, 0xd2)
        float temp0_465[0x4] = _mm_shuffle_ps(temp0_461, temp0_461, 0xc9)
        zmm10 = __addps_xmmps_memps(
            _mm_add_ps(
                _mm_sub_ps(_mm_mul_ps(temp0_464, temp0_453), _mm_mul_ps(temp0_465, temp0_456)), 
                temp0_463), 
            arg2[1])
        zmm14 = __mulps_xmmps_memps(zmm12, data_142e6da00)
    else
        float temp0_76[0x4] = _mm_add_ps(temp0_67, temp0_67)
        zmm4 = _mm_mul_ps(temp0_67, temp0_76)
        float temp0_78[0x4] = _mm_shuffle_ps(zmm4, zmm4, 1)
        float temp0_81[0x4] =
            _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1a), temp0_78))
        zmm14 = data_142e6da00
        float temp0_82[0x4] = _mm_mul_ps(temp0_81, zmm14)
        zmm4 = _mm_shuffle_ps(temp0_67, temp0_67, 4)
        float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x29), zmm4)
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
        float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x12), temp0_86)
        zmm4 = _mm_mul_ps(_mm_add_ps(temp0_85, temp0_88), zmm14)
        float temp0_92[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_85, temp0_88), zmm14)
        zmm13 = data_142d3f660
        float temp0_95[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, temp0_82, 0), 
            _mm_shuffle_ps(temp0_92, zx.o(0), 0x3a), 0x82)
        float temp0_98[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_82, temp0_92, 5), 
            _mm_shuffle_ps(zmm4, zx.o(0), 0x35), 0x82)
        float temp0_101[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_92, zmm4, 0xa5), 
            _mm_shuffle_ps(temp0_82, zx.o(0), 0x3a), 0x82)
        float temp0_102[0x4] = _mm_shuffle_ps((*arg2)[6], zmm13, 0x30)
        zmm13[0].q = temp0_73.q
        float temp0_104[0x4] = _mm_shuffle_ps(temp0_73, _mm_shuffle_ps(temp0_73, zmm13, 0x3a), 0x84)
        float var_140_1[0x4] = temp0_95
        zmm0 = *arg2
        float temp0_106[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[1], zmm0, 0), zmm0, 2)
        float temp0_107[0x4] = _mm_add_ps(zmm0, zmm0)
        float temp0_108[0x4] = _mm_mul_ps(zmm0, temp0_107)
        float temp0_109[0x4] = _mm_shuffle_ps(temp0_108, temp0_108, 0xc1)
        float temp0_113[0x4] = _mm_mul_ps(
            _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(temp0_108, temp0_108, 0xda), temp0_109)), 
            zmm12)
        float temp0_115[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0x29), temp0_106)
        zmm3 = (*arg2)[3]
        float temp0_116[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0x12), temp0_116)
        float temp0_120[0x4] = _mm_mul_ps(_mm_add_ps(temp0_115, temp0_118), zmm12)
        float temp0_122[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_115, temp0_118), 
            zx.o(*(arg2 + 0x24))[0].q | zmm12[0].q << 0x40)
        float temp0_123[0x4] = _mm_shuffle_ps((*arg2)[5], arg2[1][0], 0)
        float temp0_126[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_120, temp0_113, 0), 
            _mm_shuffle_ps(temp0_122, zx.o(0), 0x3a), 0x82)
        float temp0_127[0x4] = _mm_shuffle_ps(temp0_113, temp0_122, 5)
        float temp0_128[0x4] = _mm_shuffle_ps(temp0_122, temp0_120, 0xa5)
        float temp0_130[0x4] =
            _mm_shuffle_ps(temp0_127, _mm_shuffle_ps(temp0_120, zx.o(0), 0x35), 0x82)
        float temp0_132[0x4] =
            _mm_shuffle_ps(temp0_128, _mm_shuffle_ps(temp0_113, zx.o(0), 0x3a), 0x82)
        zmm14 = __mulps_xmmps_memps(zmm14, arg2[2])
        float temp0_134[0x4] = _mm_shuffle_ps(temp0_123, temp0_102, 0x82)
        float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0), temp0_126)
        float temp0_139[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xaa), temp0_132), temp0_136)
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_130), temp0_139)
        zmm10 = var_134
        zmm1 = temp0_98[0]
        float temp0_145[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), temp0_134), zmm4)
        float temp0_147[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_126)
        zmm4 = temp0_98[2]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_132), temp0_147)
        zmm1 = temp0_98[1]
        float temp0_153[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_130), zmm4)
        zmm6 = temp0_98[3]
        float temp0_156[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_134), temp0_153)
        zmm1 = temp0_101[0]
        float temp0_158[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_126)
        zmm4 = temp0_101[2]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_132), temp0_158)
        zmm1 = temp0_101[1]
        float temp0_164[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_130), zmm4)
        zmm4 = temp0_101[3]
        zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_134), temp0_164)
        zmm1 = temp0_104[0]
        float temp0_169[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_126)
        zmm0 = temp0_104[2]
        float temp0_172[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_132), temp0_169)
        zmm1 = temp0_104[1]
        float temp0_175[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_130), temp0_172)
        zmm0 = temp0_104[3]
        float temp0_178[0x4] =
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_134), temp0_175)
        float temp0_179[0x4] = _mm_shuffle_ps(temp0_145, temp0_145, 0xe5)
        zmm7 = _mm_unpackhi_pd(temp0_145, temp0_145[0].q)
        zmm13 = zx.o(temp0_156[0])
        float temp0_181[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xe5)
        float zmm15[0x4] = _mm_unpackhi_pd(temp0_156, temp0_156[0].q)
        zmm11 = zx.o(zmm4[0])
        temp0_156[0] = zmm13[0]
        float temp0_183[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe5)
        zmm12 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
        zmm4[0] = zmm11[0]
        var_1c0 = temp0_145
        int96_t var_1b0_1 = temp0_156[0].12
        int96_t var_1a0_1 = zmm4[0].12
        int96_t var_190_1 = temp0_178[0].12
        temp0_145[0] = temp0_145[0] * temp0_145[0]
        temp0_179[0] = temp0_179[0] * temp0_179[0]
        temp0_179[0] = temp0_179[0] + temp0_145[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm7[0] = zmm7[0] + temp0_179[0]
        zmm13[0] = zmm13[0] * zmm13[0]
        temp0_181[0] = temp0_181[0] * temp0_181[0]
        temp0_181[0] = temp0_181[0] + zmm13[0]
        zmm15[0] = zmm15[0] * zmm15[0]
        zmm15[0] = zmm15[0] + temp0_181[0]
        zmm11[0] = zmm11[0] * zmm11[0]
        temp0_183[0] = temp0_183[0] * temp0_183[0]
        temp0_183[0] = temp0_183[0] + zmm11[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm12[0] = zmm12[0] + temp0_183[0]
        zmm4 = 0xb22bcc77
        zmm7[0] = zmm7[0] + -9.99999994e-09f
        float temp0_185[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm11 = 0x3f000000
        zmm7[0] = zmm7[0] * 0.5f
        temp0_185[0] = temp0_185[0] * temp0_185[0]
        temp0_185[0] = temp0_185[0] * zmm7[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_185[0]
        zmm6[0] = zmm6[0] * temp0_185[0]
        zmm6[0] = zmm6[0] + temp0_185[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm7[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f - zmm6[0]
        zmm5[0] = zmm5[0] * zmm6[0]
        zmm5[0] = zmm5[0] + zmm6[0]
        float temp0_186[0x4] = _mm_cmpeq_ss(0, zmm7[0], 2)
        zmm5 = _mm_and_ps(zmm5, temp0_186)
        zmm13 = 0x3f800000
        zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_186, 0x3f800000), zmm5)
        zmm15[0] = zmm15[0] + -9.99999994e-09f
        float temp0_190[0x4] = _mm_rsqrt_ss(zmm15[0], zmm15[0])
        zmm15[0] = zmm15[0] * 0.5f
        temp0_190[0] = temp0_190[0] * temp0_190[0]
        temp0_190[0] = temp0_190[0] * zmm15[0]
        zmm0 = 0x3f000000
        zmm0[0] = 0.5f - temp0_190[0]
        zmm0[0] = zmm0[0] * temp0_190[0]
        zmm0[0] = zmm0[0] + temp0_190[0]
        zmm0[0] = zmm0[0] * zmm0[0]
        zmm0[0] = zmm0[0] * zmm15[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - zmm0[0]
        zmm6[0] = zmm6[0] * zmm0[0]
        zmm6[0] = zmm6[0] + zmm0[0]
        float temp0_191[0x4] = _mm_cmpeq_ss(0, zmm15[0], 2)
        zmm6 = _mm_and_ps(zmm6, temp0_191)
        zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_191, 0x3f800000), zmm6)
        zmm4[0] = -9.99999994e-09f + zmm12[0]
        float temp0_195[0x4] = _mm_rsqrt_ss(zmm12[0], zmm12[0])
        zmm12[0] = zmm12[0] * 0.5f
        temp0_195[0] = temp0_195[0] * temp0_195[0]
        temp0_195[0] = temp0_195[0] * zmm12[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f - temp0_195[0]
        zmm6[0] = zmm6[0] * temp0_195[0]
        zmm6[0] = zmm6[0] + temp0_195[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * zmm12[0]
        zmm5 = 0x3f000000
        zmm5[0] = 0.5f - zmm6[0]
        zmm5[0] = zmm5[0] * zmm6[0]
        zmm5[0] = zmm5[0] + zmm6[0]
        float temp0_196[0x4] = _mm_cmpeq_ss(0, zmm4[0], 2)
        zmm5 = _mm_and_ps(zmm5, temp0_196)
        zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_196, 0x3f800000), zmm5)
        zmm4 = var_1c0[1]
        zmm4[0] = zmm4[0] f* zmm3[0]
        zmm5 = var_1b8
        zmm5[0] = zmm5[0] * zmm3[0]
        zmm3[0] = zmm3[0] * temp0_145[0]
        zmm1 = _mm_unpacklo_ps(zmm3, zmm4[0].q)[0].q | zmm5[0].q << 0x40
        zmm3 = var_1b0_1.d
        zmm3[0] = zmm3[0] * zmm0[0]
        zmm4 = var_1b0_1:4.d
        zmm4[0] = zmm4[0] f* zmm0[0]
        float temp0_201[0x4] = _mm_unpacklo_ps(zmm3, zmm4[0].q)
        zmm0[0] = zmm0[0] f* var_1b0_1:8.d
        zmm3 = temp0_201[0].q | zmm0[0].q << 0x40
        zmm4 = var_1a0_1.d
        zmm4[0] = zmm4[0] f* zmm7[0]
        zmm0 = var_1a0_1:4.d
        zmm0[0] = zmm0[0] * zmm7[0]
        zmm4 = _mm_unpacklo_ps(zmm4, zmm0[0].q)
        zmm7[0] = zmm7[0] f* var_1a0_1:8.d
        float temp0_203[0x4] = _mm_cmpeq_ps(zx.o(0), zmm14, 2)
        zmm0 = _mm_and_ps(zmm8, temp0_203)
        zmm9 = __andnps_xmmxud_memxud(temp0_203, data_142d3f7e0)
        zmm4 = zmm4[0].q | zmm7[0].q << 0x40
        zmm9 = _mm_or_ps(zmm9, zmm0)
        float temp0_208[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm9, 0), zmm1)
        float temp0_209[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xe5)
        zmm12 = _mm_unpackhi_pd(temp0_208, temp0_208[0].q)
        var_1c0[0] = temp0_208[0]
        var_1c0[1] = temp0_209[0]
        float var_1b8_1 = zmm12[0]
        float temp0_212[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm9, 0x55), zmm3)
        float temp0_213[0x4] = _mm_shuffle_ps(temp0_212, temp0_212, 0xe5)
        zmm5 = _mm_unpackhi_pd(temp0_212, temp0_212[0].q)
        var_1b0_1.d = temp0_212[0]
        var_1b0_1:4.d = temp0_213[0]
        var_1b0_1:8.d = zmm5[0]
        float temp0_216[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm9, 0xaa), zmm4)
        float temp0_217[0x4] = _mm_shuffle_ps(temp0_216, temp0_216, 0xe5)
        zmm6 = _mm_unpackhi_pd(temp0_216, temp0_216[0].q)
        var_1a0_1.d = temp0_216[0]
        var_1a0_1:4.d = temp0_217[0]
        var_1a0_1:8.d = zmm6[0]
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_shuffle_ps(temp0_208, _mm_shuffle_ps(0x800000, temp0_208, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm5 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    _mm_shuffle_ps(temp0_212, _mm_shuffle_ps(0x800000, temp0_212, 0x20), 0x24), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm5 = data_142d3f660
            else
                result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                    __andps_xmmxud_memxud(
                        _mm_shuffle_ps(temp0_216, _mm_shuffle_ps(0x800000, temp0_216, 0x20), 0x24), 
                        data_142d3f770), 
                    data_142d3f5e0, 2)))
                
                if (result.b == 0xf)
                    zmm5 = data_142d3f660
                else
                    zmm4 = temp0_208
                    zmm4[0] = zmm4[0] f+ temp0_213[0]
                    zmm4[0] = zmm4[0] f+ zmm6[0]
                    
                    if (zmm4[0] f<= 0f)
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
                        zmm13[0] = 1f / zmm1[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm13[0] = zmm13[0] * 0.5f
                        var_150[rax_7] = zmm13[0]
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
                        zmm5 = var_150
                    else
                        zmm4[0] = zmm4[0] f+ 1f
                        float temp0_234[0x4] = _mm_sqrt_ss(0, zmm4[0])
                        zmm4 = 0x3f800000
                        zmm4[0] = 1f / temp0_234[0]
                        zmm13[0] = 1f f/ zmm4[0]
                        zmm4[0] = zmm4[0] f* 0.5f
                        zmm5[0] = zmm5[0] - temp0_217[0]
                        zmm5[0] = zmm5[0] f* zmm4[0]
                        temp0_216[0] = temp0_216[0] - zmm12[0]
                        temp0_216[0] = temp0_216[0] f* zmm4[0]
                        float temp0_235[0x4] = _mm_unpacklo_ps(zmm5, temp0_216[0].q)
                        temp0_209[0] = temp0_209[0] - temp0_212[0]
                        temp0_209[0] = temp0_209[0] f* zmm4[0]
                        zmm13[0] = zmm13[0] * 0.5f
                        float temp0_236[0x4] = _mm_unpacklo_ps(temp0_209, zmm13[0].q)
                        zmm5 = temp0_235[0].q | temp0_236[0].q << 0x40
        
        float temp0_405[0x4] = _mm_mul_ps(zmm5, zmm5)
        float temp0_407[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_405, temp0_405[0].q), temp0_405)
        float temp0_408[0x4] = _mm_shuffle_ps(temp0_407, temp0_407, 0xe5)
        temp0_408[0] = temp0_408[0] + temp0_407[0]
        zmm3 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_408[0], 6), 0xffffffff)
        temp0_408[0] = temp0_408[0] * 0.5f
        float temp0_411[0x4] = _mm_rsqrt_ss(temp0_408[0], temp0_408[0])
        zmm4 = temp0_411
        zmm4[0] = zmm4[0] f* temp0_411[0]
        zmm4[0] = zmm4[0] f* temp0_408[0]
        zmm6 = 0x3f000000
        zmm6[0] = 0.5f f- zmm4[0]
        zmm6[0] = zmm6[0] * temp0_411[0]
        zmm6[0] = zmm6[0] + temp0_411[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm6[0] = zmm6[0] * temp0_408[0]
        zmm11[0] = 0.5f - zmm6[0]
        zmm11[0] = zmm11[0] * zmm6[0]
        zmm11[0] = zmm11[0] + zmm6[0]
        float temp0_413[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm5)
        float temp0_414[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        zmm11 = _mm_and_ps(temp0_413, temp0_414)
        zmm3 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_414, data_142d3f660), zmm11)
        zmm10 = zx.o(var_190_1.q)[0].q | var_190_1:8.d[0].q << 0x40
    
    arg3[0] = arg3[0] * 0.5f
    zmm9 = zx.o(0)
    zmm1 = zx.o(0)
    zmm1[0] = arg8[0]
    zmm4 = _mm_unpacklo_ps(arg6, arg7[0].q)[0].q | zmm1[0].q << 0x40
    arg3 = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm4)
    float temp0_475[0x4] = _mm_add_ps(zmm3, zmm3)
    float temp0_476[0x4] = _mm_mul_ps(temp0_475, zmm3)
    float temp0_477[0x4] = _mm_shuffle_ps(temp0_476, temp0_476, 1)
    zmm8 = _mm_mul_ps(
        _mm_sub_ps(zmm8, _mm_add_ps(_mm_shuffle_ps(temp0_476, temp0_476, 0x1a), temp0_477)), zmm14)
    zmm5 = _mm_shuffle_epi32(zmm3, 4)
    float temp0_484[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_475, temp0_475, 0x29), zmm5)
    zmm3 = _mm_shuffle_epi32(zmm3, 0xff)
    float temp0_487[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_475, temp0_475, 0x12), zmm3)
    zmm7 = _mm_mul_ps(_mm_add_ps(temp0_484, temp0_487), zmm14)
    float temp0_490[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
    zmm6 = _mm_mul_ps(_mm_sub_ps(temp0_484, temp0_487), temp0_490)
zmm4 = data_142d3f660
float temp0_555[0x4] = _mm_shuffle_ps(zmm7, zmm8, 0)
float temp0_556[0x4] = _mm_shuffle_ps(temp0_555, zmm9, 0x42)
float temp0_557[0x4] = _mm_shuffle_ps(zmm8, zmm6, 1)
float temp0_558[0x4] = _mm_shuffle_ps(temp0_557, zmm9, 0x42)
float temp0_559[0x4] = _mm_shuffle_ps(zmm6, zmm7, 0xa1)
float temp0_561[0x4] = _mm_shuffle_ps(temp0_557, _mm_shuffle_ps(zmm7, temp0_558, 0x31), 0x82)
float temp0_564[0x4] = _mm_shuffle_ps(temp0_559, 
    _mm_shuffle_ps(zmm8, _mm_shuffle_ps(temp0_559, zmm9, 0x42), 0x32), 0x82)
float temp0_566[0x4] = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(zmm4, zmm10, 0x23), 0x24)
zmm4 = _mm_sub_ps(arg3, arg3)
zmm3 = data_142e6d9f0
zmm4 = _mm_mul_ps(zmm4, zmm3)
float temp0_570[0x4] = _mm_mul_ps(_mm_add_ps(arg3, arg3), zmm3)
float temp0_572[0x4] = _mm_shuffle_ps(temp0_555, _mm_shuffle_ps(zmm6, temp0_556, 0x32), 0x82)
float temp0_574[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_572)
float temp0_577[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x55), temp0_561), temp0_574)
zmm4 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_564), temp0_577), 
    temp0_566)
float temp0_583[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_570, temp0_570, 0), temp0_572)
float temp0_585[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_570, temp0_570, 0x55), temp0_561)
zmm0 = data_142d3f770
zmm3 = _mm_and_ps(temp0_583, zmm0)
float temp0_588[0x4] = _mm_add_ps(_mm_and_ps(temp0_585, zmm0), zmm3)
float temp0_592[0x4] = _mm_add_ps(
    _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_570, temp0_570, 0xaa), temp0_564), zmm0), temp0_588)
float temp0_593[0x4] = _mm_sub_ps(zmm4, temp0_592)
float temp0_594[0x4] = _mm_add_ps(temp0_592, zmm4)
*arg1 = _mm_shuffle_ps(temp0_593, _mm_shuffle_ps(temp0_594, temp0_593, 0x20), 0x24)
zmm0 = _mm_shuffle_epi32(temp0_594, 0x4e)
arg1[1][0] = _mm_shuffle_ps(temp0_594, temp0_594, 0xe5)[0]
(*arg1)[5] = zmm0[0]
(*arg1)[6].b = 1
return result
