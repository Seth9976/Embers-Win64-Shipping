// 函数: sub_140333890
// 地址: 0x140333890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_18[0x4] = zmm15
float zmm13[0x4]
float var_38[0x4] = zmm13
uint32_t zmm8[0x4] = arg7
float temp0_1[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(*arg4, *(arg4 + 4), 0x10), *(arg4 + 8), 0x20)
float zmm1[0x4] = data_142d3f730
float temp0_2[0x4] = _mm_div_ps(temp0_1, zmm1)
uint32_t zmm4[0x4] = data_142d3f770
float zmm5[0x4] = _mm_and_ps(temp0_2, zmm4)
float zmm6[0x4] = data_142d3f740
float temp0_4[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 2)
float temp0_5[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 6)
zmm5 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_2)), temp0_5)
float temp0_13[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_1, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_4, temp0_2), zmm5), zmm1)), 
    data_142d3f5f0)
float zmm9[0x4] = arg6
float temp0_18[0x4] = _mm_sub_ps(temp0_13, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_13))), 
        data_142d3f6e0))
zmm5 = data_142d3f780
float temp0_21[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_18, zmm5), data_142d3f6d0), temp0_18)
uint32_t temp0_22[0x4] = _mm_and_ps(zmm4, temp0_18)
zmm6 = data_142d3f6a0
float temp0_23[0x4] = _mm_cmpeq_ps(zmm6, temp0_22, 1)
zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm6, temp0_22, 5), temp0_18)
float zmm3[0x4] = _mm_or_ps(_mm_and_ps(temp0_21, temp0_23), zmm6)
zmm1 = __orps_xmmxud_memxud(_mm_and_ps(temp0_23, zmm5), data_142d3f670)
zmm4 = _mm_mul_ps(zmm3, zmm3)
float temp0_39[0x4] = _mm_mul_ps(
    __addps_xmmps_memps(
        _mm_mul_ps(
            __addps_xmmps_memps(
                _mm_mul_ps(
                    __addps_xmmps_memps(
                        _mm_mul_ps(
                            __addps_xmmps_memps(_mm_mul_ps(data_143443100, zmm4), data_143443110), 
                            zmm4), 
                        data_143443120), 
                    zmm4), 
                data_143443130), 
            zmm4), 
        data_143443140), 
    zmm4)
float temp0_41[0x4] = __addps_xmmps_memps(_mm_mul_ps(data_143443150, zmm4), data_143443160)
float zmm12[0x4] = data_142d3f670
float temp0_43[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_41, zmm4), data_143443170)
float temp0_44[0x4] = _mm_add_ps(temp0_39, zmm12)
float temp0_46[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_43, zmm4), data_143443180)
float temp0_47[0x4] = _mm_mul_ps(temp0_44, zmm3)
float temp0_52[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(__addps_xmmps_memps(_mm_mul_ps(temp0_46, zmm4), data_142d3f790), zmm4), 
        zmm12), 
    zmm1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_47, temp0_52, 0)
zmm4 = _mm_shuffle_ps(temp0_47, temp0_52, 0x55)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_52, temp0_47, 0)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, temp0_47, 0x55)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xaa)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_52, temp0_52, 0xaa)
zmm4 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xd8), temp0_53), temp0_58)
float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xd8), temp0_55)
zmm4 ^= data_142e6d9e0
zmm6 = _mm_mul_ps(temp0_63, temp0_57) ^ data_142e6da10
float temp0_66[0x4] = __insertps_xmmps_memd_immb(
    __insertps_xmmps_memd_immb(*arg5, (*arg5)[1], 0x10), (*arg5)[2], 0x20)
float temp0_67[0x4] = _mm_add_ps(zmm6, zmm4)
float temp0_70[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg3, arg3, 0x1c), arg3, 0x20), temp0_66)
float zmm14[0x4] = arg2[2]
uint64_t result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm14, zx.o(0), 1)))
float zmm0[0x4]
float zmm11[0x4]
float zmm7[0x4]
float zmm10[0x4]

if (result.b == 0)
    zmm11 = (*arg2)[3]
    zmm7 = *arg2
    zmm10 = (*arg2)[1]
    zmm5 = (*arg2)[2]
    float temp0_248[0x4] = _mm_insert_ps(_mm_insert_ps(zx.o(*(arg2 + 4)), zmm7, 0x20), zmm11, 0x30)
    float temp0_251[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, zmm7, 0x10), zmm10, 0x20), zmm11, 0x30)
    float temp0_252[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_253[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
    zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0x1b), temp0_253)
    float temp0_256[0x4] = _mm_mul_ps(temp0_67, temp0_252)
    zmm4 = _mm_add_ps(__mulps_xmmps_memps(zmm4, data_142d3f7c0), temp0_256)
    float temp0_259[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    float temp0_263[0x4] = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_67, temp0_67, 1), temp0_259), 
            data_142d3f7d0), 
        zmm4)
    float temp0_264[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    zmm6 = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xb1), temp0_264), 
            data_142d3f7b0), 
        temp0_263)
    float temp0_269[0x4] = _mm_mul_ps(temp0_70, zmm14)
    float temp0_270[0x4] = _mm_shuffle_ps(temp0_269, temp0_269, 0xd2)
    zmm4 = _mm_shuffle_ps(temp0_269, temp0_269, 0xc9)
    float temp0_274[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_270, temp0_248), _mm_mul_ps(zmm4, temp0_251))
    float temp0_275[0x4] = _mm_add_ps(temp0_274, temp0_274)
    float temp0_277[0x4] = _mm_add_ps(_mm_mul_ps(temp0_252, temp0_275), temp0_269)
    float temp0_278[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0xd2)
    float temp0_279[0x4] = _mm_shuffle_ps(temp0_275, temp0_275, 0xc9)
    zmm0 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_278, temp0_248), _mm_mul_ps(temp0_279, temp0_251)), 
            temp0_277), 
        arg2[1])
    zmm11 = __mulps_xmmps_memps(zmm14, data_142e6da00)
else
    float temp0_73[0x4] = _mm_add_ps(temp0_67, temp0_67)
    float temp0_74[0x4] = _mm_mul_ps(temp0_67, temp0_73)
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 1)
    float temp0_78[0x4] =
        _mm_sub_ps(zmm12, _mm_add_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0x1a), temp0_75))
    zmm11 = data_142e6da00
    float temp0_79[0x4] = _mm_mul_ps(temp0_78, zmm11)
    float temp0_80[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 4)
    zmm4 = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0x29), temp0_80)
    float temp0_83[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xff)
    float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_73, temp0_73, 0x12), temp0_83)
    float temp0_87[0x4] = _mm_mul_ps(_mm_add_ps(zmm4, temp0_85), zmm11)
    zmm4 = _mm_mul_ps(_mm_sub_ps(zmm4, temp0_85), zmm11)
    zmm13 = data_142d3f660
    float temp0_91[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_79, temp0_87, 0x1c), zmm4, 4)
    float temp0_93[0x4] = _mm_insert_ps(_mm_insert_ps(zmm4, temp0_79, 0x5c), temp0_87, 0x68)
    float temp0_95[0x4] = _mm_blend_ps(_mm_insert_ps(zmm4, temp0_87, 0x8c), temp0_79, 4)
    float temp0_96[0x4] = _mm_blend_ps(temp0_70, zmm13, 8)
    float var_100_1[0x4] = temp0_91
    zmm0 = *arg2
    float temp0_98[0x4] =
        _mm_shuffle_ps(__insertps_xmmps_memd_immb(zmm0, (*arg2)[1], 0x10), zmm0, 4)
    float temp0_99[0x4] = _mm_add_ps(zmm0, zmm0)
    float temp0_100[0x4] = _mm_mul_ps(zmm0, temp0_99)
    float temp0_101[0x4] = _mm_shuffle_ps(temp0_100, temp0_100, 0xc1)
    float temp0_105[0x4] = _mm_mul_ps(
        _mm_sub_ps(zmm12, _mm_add_ps(_mm_shuffle_ps(temp0_100, temp0_100, 0xda), temp0_101)), zmm14)
    float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0x29), temp0_98)
    zmm1 = (*arg2)[3]
    float temp0_108[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_110[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0x12), temp0_108)
    float temp0_112[0x4] = _mm_mul_ps(_mm_add_ps(temp0_107, temp0_110), zmm14)
    float temp0_115[0x4] = __insertps_xmmps_memd_immb(
        _mm_blend_ps(_mm_broadcastsd_pd(zmm14[0].q), (*arg2)[9], 1), (*arg2)[0xa], 0x10)
    float temp0_117[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_107, temp0_110), temp0_115)
    zmm1 = arg2[1][0]
    float temp0_119[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_105, temp0_112, 0x1c), temp0_117, 4)
    float temp0_121[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_117, temp0_105, 0x5c), temp0_112, 0x68)
    float temp0_123[0x4] = _mm_blend_ps(_mm_insert_ps(temp0_117, temp0_112, 0x8c), temp0_105, 4)
    float temp0_126[0x4] = __insertps_xmmps_memd_immb(
        __insertps_xmmps_memd_immb(_mm_blend_ps(zmm1, zmm13, 0xc), (*arg2)[5], 0x10), (*arg2)[6], 
        0x20)
    zmm11 = __mulps_xmmps_memps(zmm11, arg2[2])
    float temp0_129[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_79, temp0_79, 0), temp0_119)
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), temp0_123), temp0_129)
    float temp0_135[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0), temp0_121), zmm4)
    int32_t var_f4
    zmm13 = var_f4
    zmm0 = temp0_93[0]
    float temp0_138[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0), temp0_126), temp0_135)
    float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_119)
    zmm4 = temp0_93[2]
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_123), temp0_140)
    zmm0 = temp0_93[1]
    float temp0_146[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_121), zmm4)
    zmm6 = temp0_93[3]
    float temp0_149[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_126), temp0_146)
    zmm0 = temp0_95[0]
    float temp0_151[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_119)
    zmm4 = temp0_95[2]
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_123), temp0_151)
    zmm5 = temp0_95[1]
    float temp0_157[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_121), zmm4)
    zmm0 = temp0_95[3]
    float temp0_160[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_126), temp0_157)
    zmm4 = temp0_96[0]
    zmm4 = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_119)
    zmm3 = temp0_96[2]
    float temp0_165[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_123), zmm4)
    zmm4 = temp0_96[1]
    zmm4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_121), temp0_165)
    zmm7 = temp0_96[3]
    float temp0_171[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_126), zmm4)
    zmm4 = _mm_movehdup_ps(temp0_138)
    int32_t temp0_173 = _mm_extract_ps(temp0_149, 0)
    zmm1 = _mm_unpackhi_pd(temp0_138, temp0_138[0].q)
    zmm8 = zx.o(temp0_173)
    float temp0_175[0x4] = _mm_movehdup_ps(temp0_149)
    zmm3 = _mm_unpackhi_pd(temp0_149, temp0_149[0].q)
    zmm12 = zx.o(_mm_extract_ps(temp0_160, 0))
    float temp0_178[0x4] = _mm_blend_ps(temp0_149, zmm8, 1)
    float temp0_179[0x4] = _mm_movehdup_ps(temp0_160)
    zmm14 = _mm_unpackhi_pd(temp0_160, temp0_160[0].q)
    float temp0_181[0x4] = _mm_blend_ps(temp0_160, zmm12, 1)
    float var_180[0x4] = temp0_138
    int96_t var_170_1 = temp0_178[0].12
    int96_t var_160_1 = temp0_181[0].12
    int96_t var_150_1 = temp0_171[0].12
    temp0_138[0] = temp0_138[0] * temp0_138[0]
    zmm4[0] = zmm4[0] f* zmm4[0]
    zmm4[0] = zmm4[0] f+ temp0_138[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    zmm1[0] = zmm1[0] f+ zmm4[0]
    zmm8[0] = zmm8[0] f* zmm8[0]
    temp0_175[0] = temp0_175[0] * temp0_175[0]
    temp0_175[0] = temp0_175[0] f+ zmm8[0]
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm3[0] = zmm3[0] + temp0_175[0]
    zmm12[0] = zmm12[0] * zmm12[0]
    temp0_179[0] = temp0_179[0] * temp0_179[0]
    temp0_179[0] = temp0_179[0] + zmm12[0]
    zmm14[0] = zmm14[0] * zmm14[0]
    zmm14[0] = zmm14[0] + temp0_179[0]
    zmm15 = 0xb22bcc77
    zmm1[0] = zmm1[0] + -9.99999994e-09f
    float temp0_182[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1[0])
    zmm8 = 0x3f000000
    zmm1[0] = zmm1[0] * 0.5f
    temp0_182[0] = temp0_182[0] * temp0_182[0]
    temp0_182[0] = temp0_182[0] * zmm1[0]
    zmm5 = 0x3f000000
    zmm5[0] = 0.5f - temp0_182[0]
    zmm5[0] = zmm5[0] * temp0_182[0]
    zmm5[0] = zmm5[0] + temp0_182[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm5[0] = zmm5[0] * zmm1[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - zmm5[0]
    zmm7[0] = zmm7[0] * zmm5[0]
    zmm7[0] = zmm7[0] + zmm5[0]
    float temp0_183[0x4] = _mm_cmpeq_ss(0, zmm1[0], 2)
    zmm7 = _mm_and_ps(zmm7, temp0_183)
    zmm12 = 0x3f800000
    zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_183, 0x3f800000), zmm7)
    zmm3[0] = zmm3[0] + -9.99999994e-09f
    float temp0_187[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3[0])
    zmm3[0] = zmm3[0] * 0.5f
    temp0_187[0] = temp0_187[0] * temp0_187[0]
    temp0_187[0] = temp0_187[0] * zmm3[0]
    zmm4 = 0x3f000000
    zmm4[0] = 0.5f - temp0_187[0]
    zmm4[0] = zmm4[0] f* temp0_187[0]
    zmm4[0] = zmm4[0] f+ temp0_187[0]
    zmm5 = zmm4
    zmm5[0] = zmm5[0] f* zmm4[0]
    zmm5[0] = zmm5[0] * zmm3[0]
    zmm7 = 0x3f000000
    zmm7[0] = 0.5f - zmm5[0]
    zmm7[0] = zmm7[0] f* zmm4[0]
    zmm7[0] = zmm7[0] f+ zmm4[0]
    float temp0_188[0x4] = _mm_cmpeq_ss(0, zmm3[0], 2)
    zmm7 = _mm_and_ps(zmm7, temp0_188)
    zmm3 = _mm_or_ps(_mm_andnot_ps(temp0_188, 0x3f800000), zmm7)
    zmm15[0] = -9.99999994e-09f + zmm14[0]
    float temp0_192[0x4] = _mm_rsqrt_ss(zmm14[0], zmm14[0])
    zmm14[0] = zmm14[0] * 0.5f
    zmm4 = temp0_192
    zmm4[0] = zmm4[0] f* temp0_192[0]
    zmm4[0] = zmm4[0] f* zmm14[0]
    zmm5 = 0x3f000000
    zmm5[0] = 0.5f f- zmm4[0]
    zmm5[0] = zmm5[0] * temp0_192[0]
    zmm5[0] = zmm5[0] + temp0_192[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm5[0] = zmm5[0] * zmm14[0]
    zmm4 = 0x3f000000
    zmm4[0] = 0.5f - zmm5[0]
    zmm4[0] = zmm4[0] f* zmm5[0]
    zmm4[0] = zmm4[0] f+ zmm5[0]
    float temp0_193[0x4] = _mm_cmpeq_ss(0, zmm15[0], 2)
    uint32_t temp0_194[0x4] = _mm_and_ps(zmm4, temp0_193)
    zmm1 = _mm_or_ps(_mm_andnot_ps(temp0_193, 0x3f800000), temp0_194)
    zmm0 = var_180[1]
    zmm0[0] = zmm0[0] * zmm6[0]
    int32_t var_178
    zmm4 = var_178
    zmm4[0] = zmm4[0] f* zmm6[0]
    zmm6[0] = zmm6[0] * temp0_138[0]
    float temp0_198[0x4] = _mm_insert_ps(_mm_insert_ps(zmm6, zmm0, 0x10), zmm4, 0x20)
    zmm0 = var_170_1.d
    zmm0[0] = zmm0[0] * zmm3[0]
    zmm4 = var_170_1:4.d
    zmm4[0] = zmm4[0] f* zmm3[0]
    zmm3[0] = zmm3[0] f* var_170_1:8.d
    float temp0_200[0x4] = _mm_insert_ps(_mm_insert_ps(zmm0, zmm4, 0x10), zmm3, 0x20)
    zmm3 = var_160_1.d
    zmm3[0] = zmm3[0] * zmm1[0]
    zmm4 = var_160_1:4.d
    zmm4[0] = zmm4[0] f* zmm1[0]
    zmm1[0] = zmm1[0] f* var_160_1:8.d
    float temp0_201[0x4] = _mm_insert_ps(zmm3, zmm4, 0x10)
    zmm10 = __andps_xmmxud_memxud(_mm_cmpeq_ps(zx.o(0), zmm11, 2), data_142d3f780)
    float temp0_204[0x4] = _mm_insert_ps(temp0_201, zmm1, 0x20)
    zmm10 ^= data_142d3f7e0
    zmm4 = _mm_mul_ps(_mm_shuffle_epi32(zmm10, 0), temp0_198)
    float temp0_207[0x4] = _mm_movehdup_ps(zmm4)
    zmm15 = _mm_unpackhi_pd(zmm4, zmm4[0].q)
    var_180[0] = zmm4[0]
    var_180[1] = temp0_207[0]
    float var_178_1 = zmm15[0]
    float temp0_210[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm10, 0x55), temp0_200)
    float temp0_211[0x4] = _mm_movehdup_ps(temp0_210)
    zmm7 = _mm_unpackhi_pd(temp0_210, temp0_210[0].q)
    var_170_1.d = temp0_210[0]
    var_170_1:4.d = temp0_211[0]
    var_170_1:8.d = zmm7[0]
    float temp0_214[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm10, 0xaa), temp0_204)
    float temp0_215[0x4] = _mm_movehdup_ps(temp0_214)
    zmm0 = _mm_unpackhi_pd(temp0_214, temp0_214[0].q)
    var_160_1.d = temp0_214[0]
    var_160_1:4.d = temp0_215[0]
    var_160_1:8.d = zmm0[0]
    result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(zmm4, 0x800000, 0x30), data_142d3f770), 
        data_142d3f5e0, 2)))
    
    if (result.b == 0xf)
        zmm7 = data_142d3f660
    else
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_210, 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm7 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_214, 0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm7 = data_142d3f660
            else
                zmm3 = zmm4
                zmm3[0] = zmm3[0] + temp0_211[0]
                zmm3[0] = zmm3[0] + zmm0[0]
                
                if (zmm3[0] <= 0f)
                    temp0_211[0] f- zmm4[0]
                    int32_t rdx
                    rdx.b = temp0_211[0] f> zmm4[0]
                    int64_t rax_3 = 0x14
                    
                    if (temp0_211[0] f<= zmm4[0])
                        rax_3 = 0
                    
                    uint64_t rax_4 = 2
                    
                    if (zmm0[0] f<= *(&var_180 + rax_3))
                        rax_4 = zx.q(rdx)
                    
                    int64_t r9 = sx.q(*(&data_1434431ec + (rax_4 << 2)))
                    int64_t r8_1 = sx.q(*(&data_1434431ec + (r9 << 2)))
                    zmm0 = var_180[zx.q((rax_4 * 5).d)]
                    zmm0[0] = zmm0[0] - var_180[sx.q((r9 * 5).d)]
                    zmm0[0] = zmm0[0] - var_180[sx.q((r8_1 * 5).d)]
                    zmm0[0] = zmm0[0] + 1f
                    float temp0_315[0x4] = _mm_sqrt_ss(0, zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / temp0_315[0]
                    zmm12[0] = 1f / zmm0[0]
                    zmm0[0] = zmm0[0] * 0.5f
                    zmm12[0] = zmm12[0] * 0.5f
                    float var_110[0x4]
                    var_110[rax_4] = zmm12[0]
                    zmm1 = var_180[sx.q((r9 + (rax_4 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_180[sx.q((rax_4 + (r9 << 2)).d)]
                    zmm1[0] = zmm1[0] * zmm0[0]
                    var_110[r9] = zmm1[0]
                    zmm1 = var_180[sx.q((r8_1 + (rax_4 << 2)).d)]
                    zmm1[0] = zmm1[0] + var_180[sx.q((rax_4 + (r8_1 << 2)).d)]
                    zmm1[0] = zmm1[0] * zmm0[0]
                    zmm3 = var_180[sx.q((r8_1 + (r9 << 2)).d)]
                    result = sx.q((r9 + (r8_1 << 2)).d)
                    zmm3[0] = zmm3[0] - var_180[result]
                    var_110[r8_1] = zmm1[0]
                    zmm3[0] = zmm3[0] * zmm0[0]
                    float var_104_1 = zmm3[0]
                    zmm7 = var_110
                else
                    zmm3[0] = zmm3[0] + 1f
                    float temp0_229[0x4] = _mm_sqrt_ss(0, zmm3[0])
                    zmm3 = 0x3f800000
                    zmm3[0] = 1f / temp0_229[0]
                    zmm12[0] = 1f / zmm3[0]
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm7[0] = zmm7[0] - temp0_215[0]
                    zmm7[0] = zmm7[0] * zmm3[0]
                    temp0_214[0] = temp0_214[0] - zmm15[0]
                    temp0_214[0] = temp0_214[0] * zmm3[0]
                    float temp0_230[0x4] = _mm_insert_ps(zmm7, temp0_214, 0x10)
                    temp0_207[0] = temp0_207[0] - temp0_210[0]
                    temp0_207[0] = temp0_207[0] * zmm3[0]
                    float temp0_231[0x4] = _mm_insert_ps(temp0_230, temp0_207, 0x20)
                    zmm12[0] = zmm12[0] * 0.5f
                    zmm7 = _mm_insert_ps(temp0_231, zmm12, 0x30)
    
    float temp0_233[0x4] = _mm_mul_ps(zmm7, zmm7)
    float temp0_235[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_233, temp0_233[0].q), temp0_233)
    float temp0_236[0x4] = _mm_movehdup_ps(temp0_235)
    temp0_236[0] = temp0_236[0] + temp0_235[0]
    zmm6 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_236[0], 6), 0xffffffff)
    temp0_236[0] = temp0_236[0] * 0.5f
    float temp0_239[0x4] = _mm_rsqrt_ss(temp0_236[0], temp0_236[0])
    temp0_239[0] = temp0_239[0] * temp0_239[0]
    temp0_239[0] = temp0_239[0] * temp0_236[0]
    zmm4 = 0x3f000000
    zmm4[0] = 0.5f - temp0_239[0]
    zmm4[0] = zmm4[0] f* temp0_239[0]
    zmm4[0] = zmm4[0] f+ temp0_239[0]
    zmm0 = zmm4
    zmm0[0] = zmm0[0] f* zmm4[0]
    zmm0[0] = zmm0[0] * temp0_236[0]
    zmm8[0] = 0.5f - zmm0[0]
    zmm8[0] = zmm8[0] f* zmm4[0]
    zmm8[0] = zmm8[0] f+ zmm4[0]
    zmm8 = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), zmm7)
    float temp0_242[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
    uint32_t temp0_243[0x4] = _mm_and_ps(zmm8, temp0_242)
    zmm6 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_242, data_142d3f660), temp0_243)
    zmm0 = __insertps_xmmps_memd_immb(zx.o(var_150_1.q), var_150_1:8.d, 0x28)
    zmm8 = arg7
float temp0_286[0x4] = __mulps_xmmps_memps(zmm11, data_142d4cc30)
zmm3 = _mm_shuffle_epi32(zmm6, 0xff)
uint32_t temp0_288[0x4] = _mm_shuffle_epi32(zmm6, 0xc9)
float temp0_289[0x4] = _mm_shuffle_ps(temp0_286, temp0_286, 0xd2)
zmm6 = _mm_shuffle_epi32(zmm6, 0xd2)
float temp0_291[0x4] = _mm_shuffle_ps(temp0_286, temp0_286, 0xc9)
float temp0_294[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_289, temp0_288), _mm_mul_ps(temp0_291, zmm6))
float temp0_295[0x4] = _mm_add_ps(temp0_294, temp0_294)
float temp0_297[0x4] = _mm_add_ps(_mm_mul_ps(zmm3, temp0_295), temp0_286)
float temp0_298[0x4] = _mm_shuffle_ps(temp0_295, temp0_295, 0xd2)
float temp0_299[0x4] = _mm_shuffle_ps(temp0_295, temp0_295, 0xc9)
float temp0_303[0x4] =
    _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_298, temp0_288), _mm_mul_ps(temp0_299, zmm6)), temp0_297)
zmm3 = 0x3f000000
zmm3[0] = 0.5f * arg3[0]
zmm3[0] = zmm3[0] f* zmm8[0]
float temp0_304[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
float temp0_306[0x4] = _mm_mul_ps(__andps_xmmxud_memxud(temp0_303, data_142d3f770), temp0_304)
zmm9[0] = zmm9[0] * arg3[0]
float temp0_307[0x4] = _mm_sub_ps(zmm0, temp0_306)
float temp0_308[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
float temp0_309[0x4] = _mm_sub_ps(temp0_307, temp0_308)
float temp0_311[0x4] = _mm_add_ps(_mm_add_ps(temp0_306, zmm0), temp0_308)
*arg1 = _mm_insert_ps(temp0_309, temp0_311, 0x30)
arg1[1][0] = __extractps_memd_xmmps_immb(temp0_311, 1)
(*arg1)[5] = __extractps_memd_xmmps_immb(temp0_311, 2)
(*arg1)[6].b = 1
return result
