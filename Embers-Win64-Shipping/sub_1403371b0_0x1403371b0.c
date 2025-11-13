// 函数: sub_1403371b0
// 地址: 0x1403371b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float temp0_2[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(*(arg4 + 4), *arg4, 0), 
    _mm_shuffle_ps(*(arg4 + 8), zx.o(0), 0x30), 0x82)
float zmm0[0x4] = data_142d3f730
float temp0_3[0x4] = _mm_div_ps(temp0_2, zmm0)
uint32_t zmm7[0x4] = data_142d3f770
float zmm4[0x4] = _mm_and_ps(temp0_3, zmm7)
float zmm5[0x4] = data_142d3f740
float temp0_5[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 2)
float temp0_6[0x4] = _mm_cmpeq_ps(zmm5, zmm4, 6)
zmm4 = _mm_and_ps(_mm_cvtepi32_ps(_mm_cvttps_epi32(temp0_3)), temp0_6)
float temp0_14[0x4] = __mulps_xmmps_memps(
    _mm_sub_ps(temp0_2, _mm_mul_ps(_mm_or_ps(_mm_and_ps(temp0_5, temp0_3), zmm4), zmm0)), 
    data_142d3f5f0)
float zmm14[0x4] = arg3
float temp0_19[0x4] = _mm_sub_ps(temp0_14, 
    __mulps_xmmps_memps(_mm_cvtepi32_ps(_mm_cvttps_epi32(_mm_mul_ps(data_142d3f620, temp0_14))), 
        data_142d3f6e0))
zmm4 = data_142d3f780
float temp0_22[0x4] =
    _mm_sub_ps(__orps_xmmxud_memxud(_mm_and_ps(temp0_19, zmm4), data_142d3f6d0), temp0_19)
zmm5 = _mm_and_ps(temp0_19, zmm7)
float zmm6[0x4] = data_142d3f6a0
float temp0_24[0x4] = _mm_cmpeq_ps(zmm6, zmm5, 1)
zmm6 = _mm_and_ps(_mm_cmpeq_ps(zmm6, zmm5, 5), temp0_19)
zmm0 = _mm_or_ps(_mm_and_ps(temp0_22, temp0_24), zmm6)
float zmm3[0x4] = __orps_xmmxud_memxud(_mm_and_ps(temp0_24, zmm4), data_142d3f670)
float temp0_31[0x4] = _mm_mul_ps(zmm0, zmm0)
float temp0_39[0x4] = __addps_xmmps_memps(
    _mm_mul_ps(
        __addps_xmmps_memps(
            _mm_mul_ps(
                __addps_xmmps_memps(
                    _mm_mul_ps(
                        __addps_xmmps_memps(_mm_mul_ps(data_143443100, temp0_31), data_143443110), 
                        temp0_31), 
                    data_143443120), 
                temp0_31), 
            data_143443130), 
        temp0_31), 
    data_143443140)
float temp0_41[0x4] = __addps_xmmps_memps(_mm_mul_ps(data_143443150, temp0_31), data_143443160)
float temp0_42[0x4] = _mm_mul_ps(temp0_39, temp0_31)
float temp0_44[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_41, temp0_31), data_143443170)
zmm7 = data_142d3f670
float temp0_46[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_44, temp0_31), data_143443180)
float temp0_47[0x4] = _mm_add_ps(temp0_42, zmm7)
float temp0_49[0x4] = __addps_xmmps_memps(_mm_mul_ps(temp0_46, temp0_31), data_142d3f790)
float temp0_50[0x4] = _mm_mul_ps(temp0_47, zmm0)
float temp0_53[0x4] = _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_49, temp0_31), zmm7), zmm3)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_50, temp0_53, 0)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_50, temp0_53, 0x55)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_53, temp0_50, 0)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, temp0_50, 0x55)
float temp0_58[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xaa)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_53, temp0_53, 0xaa)
float temp0_62[0x4] =
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xd8), temp0_54), temp0_59)
float temp0_66[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xd8), temp0_56), temp0_58)
        ^ data_142e6da10, 
    temp0_62 ^ data_142e6d9e0)
float temp0_69[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg5)[1], *arg5, 0), 
    _mm_shuffle_ps((*arg5)[2], zx.o(0), 0x30), 0x82)
float temp0_72[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(arg3, _mm_shuffle_ps(arg3, zx.o(arg3[0].q), 0x30), 0x80), temp0_69)
float zmm15[0x4] = arg2[2]
uint64_t result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm15, zx.o(0), 1)))
float zmm1[0x4]
float zmm8[0x4]
float zmm10[0x4]
float zmm12[0x4]
uint32_t zmm11[0x4]

if (result.b == 0)
    zmm11 = (*arg2)[3]
    float temp0_251[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
    float temp0_252[0x4] = _mm_mul_ps(temp0_66, temp0_251)
    zmm10 = *arg2
    zmm8 = (*arg2)[1]
    zmm4 = (*arg2)[2]
    zmm6 = zx.o(*(arg2 + 4))
    float temp0_253[0x4] = _mm_shuffle_ps(zmm6, zmm10, 0x84)
    float temp0_254[0x4] = _mm_unpacklo_ps(zmm4, zmm10[0].q)
    float temp0_255[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
    zmm10 = zmm7
    zmm7 = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x1b), temp0_255), 
            data_142d3f7c0), 
        temp0_252)
    float temp0_260[0x4] = _mm_shuffle_ps(temp0_254, zmm8, 0x84)
    float temp0_261[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0)
    float temp0_265[0x4] = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_pd(temp0_66, temp0_66, 1), temp0_261), 
            data_142d3f7d0), 
        zmm7)
    float temp0_266[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
    zmm5 = _mm_add_ps(
        __mulps_xmmps_memps(_mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xb1), temp0_266), 
            data_142d3f7b0), 
        temp0_265)
    float temp0_271[0x4] = _mm_mul_ps(temp0_72, zmm15)
    float temp0_273[0x4] = _mm_shuffle_ps(zmm6, _mm_shuffle_ps(zmm11, temp0_253, 0x20), 0x24)
    float temp0_274[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xd2)
    float temp0_276[0x4] = _mm_shuffle_ps(temp0_254, _mm_shuffle_ps(zmm11, temp0_260, 0x20), 0x24)
    float temp0_277[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xc9)
    float temp0_280[0x4] =
        _mm_sub_ps(_mm_mul_ps(temp0_274, temp0_273), _mm_mul_ps(temp0_277, temp0_276))
    float temp0_281[0x4] = _mm_add_ps(temp0_280, temp0_280)
    float temp0_283[0x4] = _mm_add_ps(_mm_mul_ps(temp0_251, temp0_281), temp0_271)
    float temp0_284[0x4] = _mm_shuffle_ps(temp0_281, temp0_281, 0xd2)
    float temp0_285[0x4] = _mm_shuffle_ps(temp0_281, temp0_281, 0xc9)
    zmm8 = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_284, temp0_273), _mm_mul_ps(temp0_285, temp0_276)), 
            temp0_283), 
        arg2[1])
    zmm12 = __mulps_xmmps_memps(zmm15, data_142e6da00)
else
    float temp0_75[0x4] = _mm_add_ps(temp0_66, temp0_66)
    float temp0_76[0x4] = _mm_mul_ps(temp0_66, temp0_75)
    float temp0_77[0x4] = _mm_shuffle_ps(temp0_76, temp0_76, 1)
    zmm11 = zmm7
    float temp0_80[0x4] =
        _mm_sub_ps(zmm7, _mm_add_ps(_mm_shuffle_ps(temp0_76, temp0_76, 0x1a), temp0_77))
    zmm12 = data_142e6da00
    float temp0_81[0x4] = _mm_mul_ps(temp0_80, zmm12)
    float temp0_82[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 4)
    float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x29), temp0_82)
    float temp0_85[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
    float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x12), temp0_85)
    float temp0_89[0x4] = _mm_mul_ps(_mm_add_ps(temp0_84, temp0_87), zmm12)
    float temp0_91[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_84, temp0_87), zmm12)
    float zmm13[0x4] = data_142d3f660
    float temp0_94[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, temp0_81, 0), 
        _mm_shuffle_ps(temp0_91, zx.o(0), 0x3a), 0x82)
    float temp0_97[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_81, temp0_91, 5), 
        _mm_shuffle_ps(temp0_89, zx.o(0), 0x35), 0x82)
    zmm7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_91, temp0_89, 0xa5), 
        _mm_shuffle_ps(temp0_81, zx.o(0), 0x3a), 0x82)
    float temp0_101[0x4] = _mm_shuffle_ps((*arg2)[6], zmm13, 0x30)
    zmm13[0].q = temp0_72.q
    float temp0_103[0x4] = _mm_shuffle_ps(temp0_72, _mm_shuffle_ps(temp0_72, zmm13, 0x3a), 0x84)
    uint32_t var_e0_1[0x4] = zmm7
    float var_100_1[0x4] = temp0_94
    zmm0 = *arg2
    float temp0_105[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[1], zmm0, 0), zmm0, 2)
    float temp0_106[0x4] = _mm_add_ps(zmm0, zmm0)
    float temp0_107[0x4] = _mm_mul_ps(zmm0, temp0_106)
    float temp0_108[0x4] = _mm_shuffle_ps(temp0_107, temp0_107, 0xc1)
    arg3 = zmm11
    zmm7 = _mm_mul_ps(
        _mm_sub_ps(zmm11, _mm_add_ps(_mm_shuffle_ps(temp0_107, temp0_107, 0xda), temp0_108)), zmm15)
    float temp0_114[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0x29), temp0_105)
    zmm1 = (*arg2)[3]
    float temp0_115[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
    float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_106, temp0_106, 0x12), temp0_115)
    float temp0_119[0x4] = _mm_mul_ps(_mm_add_ps(temp0_114, temp0_117), zmm15)
    float temp0_121[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg2)[0xa], (*arg2)[9], 0), zmm15, 0x42)
    float temp0_123[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_114, temp0_117), temp0_121)
    float temp0_124[0x4] = _mm_shuffle_ps((*arg2)[5], arg2[1][0], 0)
    float temp0_127[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_119, zmm7, 0), 
        _mm_shuffle_ps(temp0_123, zx.o(0), 0x3a), 0x82)
    float temp0_128[0x4] = _mm_shuffle_ps(zmm7, temp0_123, 5)
    float temp0_129[0x4] = _mm_shuffle_ps(temp0_123, temp0_119, 0xa5)
    float temp0_131[0x4] = _mm_shuffle_ps(temp0_128, _mm_shuffle_ps(temp0_119, zx.o(0), 0x35), 0x82)
    float temp0_133[0x4] = _mm_shuffle_ps(temp0_129, _mm_shuffle_ps(zmm7, zx.o(0), 0x3a), 0x82)
    zmm12 = __mulps_xmmps_memps(zmm12, arg2[2])
    float temp0_135[0x4] = _mm_shuffle_ps(temp0_124, temp0_101, 0x82)
    float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_81, temp0_81, 0), temp0_127)
    float temp0_140[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xaa), temp0_133), temp0_137)
    float temp0_143[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_89, temp0_89, 0), temp0_131), temp0_140)
    int32_t var_f4
    float zmm9[0x4] = var_f4
    zmm1 = temp0_97[0]
    float temp0_146[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_135), temp0_143)
    float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_127)
    zmm5 = temp0_97[2]
    float temp0_151[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_133), temp0_148)
    zmm1 = temp0_97[1]
    float temp0_154[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_131), temp0_151)
    zmm6 = temp0_97[3]
    float temp0_157[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_135), temp0_154)
    zmm1 = var_e0_1[0]
    float temp0_159[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_127)
    zmm5 = var_e0_1[2]
    float temp0_162[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_133), temp0_159)
    zmm7 = var_e0_1[1]
    zmm7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_131), temp0_162)
    zmm1 = var_e0_1[3]
    float temp0_168[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_135), zmm7)
    zmm5 = temp0_103[0]
    float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_127)
    zmm0 = temp0_103[2]
    float temp0_173[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_133), temp0_170)
    zmm4 = temp0_103[1]
    float temp0_176[0x4] =
        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_131), temp0_173)
    zmm11 = temp0_103[3]
    zmm11 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), temp0_135), temp0_176)
    float temp0_180[0x4] = _mm_shuffle_ps(temp0_146, temp0_146, 0xe5)
    zmm7 = _mm_unpackhi_pd(temp0_146, temp0_146[0].q)
    zmm13 = zx.o(temp0_157[0])
    float temp0_182[0x4] = _mm_shuffle_ps(temp0_157, temp0_157, 0xe5)
    zmm5 = _mm_unpackhi_pd(temp0_157, temp0_157[0].q)
    zmm10 = zx.o(temp0_168[0])
    temp0_157[0] = zmm13[0]
    float temp0_184[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xe5)
    zmm15 = _mm_unpackhi_pd(temp0_168, temp0_168[0].q)
    temp0_168[0] = zmm10[0]
    float var_180[0x4] = temp0_146
    int96_t var_170_1 = temp0_157[0].12
    int96_t var_160_1 = temp0_168[0].12
    int96_t var_150_1 = zmm11[0].12
    temp0_146[0] = temp0_146[0] * temp0_146[0]
    temp0_180[0] = temp0_180[0] * temp0_180[0]
    temp0_180[0] = temp0_180[0] + temp0_146[0]
    zmm7[0] = zmm7[0] f* zmm7[0]
    zmm7[0] = zmm7[0] f+ temp0_180[0]
    zmm13[0] = zmm13[0] * zmm13[0]
    temp0_182[0] = temp0_182[0] * temp0_182[0]
    temp0_182[0] = temp0_182[0] + zmm13[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm5[0] = zmm5[0] + temp0_182[0]
    zmm10[0] = zmm10[0] * zmm10[0]
    temp0_184[0] = temp0_184[0] * temp0_184[0]
    temp0_184[0] = temp0_184[0] + zmm10[0]
    zmm15[0] = zmm15[0] * zmm15[0]
    zmm15[0] = zmm15[0] + temp0_184[0]
    zmm10 = 0xb22bcc77
    zmm0 = zmm7
    zmm0[0] = zmm0[0] + -9.99999994e-09f
    float temp0_186[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
    zmm11 = 0x3f000000
    zmm7[0] = zmm7[0] f* 0.5f
    temp0_186[0] = temp0_186[0] * temp0_186[0]
    temp0_186[0] = temp0_186[0] f* zmm7[0]
    zmm3 = 0x3f000000
    zmm3[0] = 0.5f - temp0_186[0]
    zmm3[0] = zmm3[0] * temp0_186[0]
    zmm3[0] = zmm3[0] + temp0_186[0]
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm3[0] = zmm3[0] f* zmm7[0]
    zmm4 = 0x3f000000
    zmm4[0] = 0.5f - zmm3[0]
    zmm4[0] = zmm4[0] * zmm3[0]
    zmm4[0] = zmm4[0] + zmm3[0]
    zmm7 = _mm_cmpeq_ss(0, zmm0[0], 2)
    zmm4 = _mm_and_ps(zmm4, zmm7)
    zmm13 = 0x3f800000
    uint32_t temp0_190[0x4] = _mm_or_ps(_mm_andnot_ps(zmm7, 0x3f800000), zmm4)
    zmm5[0] = zmm5[0] + -9.99999994e-09f
    float temp0_191[0x4] = _mm_rsqrt_ss(zmm5[0], zmm5[0])
    zmm5[0] = zmm5[0] * 0.5f
    temp0_191[0] = temp0_191[0] * temp0_191[0]
    temp0_191[0] = temp0_191[0] * zmm5[0]
    zmm4 = 0x3f000000
    zmm4[0] = 0.5f - temp0_191[0]
    zmm4[0] = zmm4[0] * temp0_191[0]
    zmm4[0] = zmm4[0] + temp0_191[0]
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm4[0] = zmm4[0] * zmm5[0]
    zmm3 = 0x3f000000
    zmm3[0] = 0.5f - zmm4[0]
    zmm3[0] = zmm3[0] * zmm4[0]
    zmm3[0] = zmm3[0] + zmm4[0]
    float temp0_192[0x4] = _mm_cmpeq_ss(0, zmm5[0], 2)
    zmm3 = _mm_and_ps(zmm3, temp0_192)
    zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_192, 0x3f800000), zmm3)
    zmm10[0] = -9.99999994e-09f + zmm15[0]
    float temp0_196[0x4] = _mm_rsqrt_ss(zmm15[0], zmm15[0])
    zmm15[0] = zmm15[0] * 0.5f
    temp0_196[0] = temp0_196[0] * temp0_196[0]
    temp0_196[0] = temp0_196[0] * zmm15[0]
    zmm3 = 0x3f000000
    zmm3[0] = 0.5f - temp0_196[0]
    zmm3[0] = zmm3[0] * temp0_196[0]
    zmm3[0] = zmm3[0] + temp0_196[0]
    zmm3[0] = zmm3[0] * zmm3[0]
    zmm3[0] = zmm3[0] * zmm15[0]
    zmm1 = 0x3f000000
    zmm1[0] = 0.5f - zmm3[0]
    zmm1[0] = zmm1[0] * zmm3[0]
    zmm1[0] = zmm1[0] + zmm3[0]
    float temp0_197[0x4] = _mm_cmpeq_ss(0, zmm10[0], 2)
    zmm1 = _mm_and_ps(zmm1, temp0_197)
    zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_197, 0x3f800000), zmm1)
    zmm0 = var_180[1]
    zmm0[0] = zmm0[0] f* temp0_190[0]
    int32_t var_178
    zmm1 = var_178
    zmm1[0] = zmm1[0] f* temp0_190[0]
    temp0_190[0] = temp0_190[0] f* temp0_146[0]
    zmm7 = _mm_unpacklo_ps(temp0_190, zmm0[0].q)[0].q | zmm1[0].q << 0x40
    zmm0 = var_170_1.d
    zmm0[0] = zmm0[0] * zmm5[0]
    zmm1 = var_170_1:4.d
    zmm1[0] = zmm1[0] * zmm5[0]
    float temp0_202[0x4] = _mm_unpacklo_ps(zmm0, zmm1[0].q)
    zmm5[0] = zmm5[0] f* var_170_1:8.d
    zmm0 = temp0_202[0].q | zmm5[0].q << 0x40
    zmm1 = var_160_1.d
    zmm1[0] = zmm1[0] * zmm6[0]
    zmm3 = var_160_1:4.d
    zmm3[0] = zmm3[0] * zmm6[0]
    float temp0_203[0x4] = _mm_unpacklo_ps(zmm1, zmm3[0].q)
    zmm6[0] = zmm6[0] f* var_160_1:8.d
    float temp0_204[0x4] = _mm_cmpeq_ps(zx.o(0), zmm12, 2)
    zmm3 = _mm_and_ps(arg3, temp0_204)
    zmm8 = __andnps_xmmxud_memxud(temp0_204, data_142d3f7e0)
    zmm1 = temp0_203[0].q | zmm6[0].q << 0x40
    zmm8 = _mm_or_ps(zmm8, zmm3)
    float temp0_209[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm8, 0), zmm7)
    float temp0_210[0x4] = _mm_shuffle_ps(temp0_209, temp0_209, 0xe5)
    zmm15 = _mm_unpackhi_pd(temp0_209, temp0_209[0].q)
    var_180[0] = temp0_209[0]
    var_180[1] = temp0_210[0]
    float var_178_1 = zmm15[0]
    float temp0_213[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm8, 0x55), zmm0)
    float temp0_214[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0xe5)
    zmm0 = _mm_unpackhi_pd(temp0_213, temp0_213[0].q)
    var_170_1.d = temp0_213[0]
    var_170_1:4.d = temp0_214[0]
    var_170_1:8.d = zmm0[0]
    zmm7 = _mm_mul_ps(_mm_shuffle_epi32(zmm8, 0xaa), zmm1)
    float temp0_218[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe5)
    zmm5 = _mm_unpackhi_pd(zmm7, zmm7[0].q)
    var_160_1.d = zmm7[0]
    var_160_1:4.d = temp0_218[0]
    var_160_1:8.d = zmm5[0]
    result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            _mm_shuffle_ps(temp0_209, _mm_shuffle_ps(0x800000, temp0_209, 0x20), 0x24), 
            data_142d3f770), 
        data_142d3f5e0, 2)))
    
    if (result.b == 0xf)
        zmm0 = data_142d3f660
    else
        result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                _mm_shuffle_ps(temp0_213, _mm_shuffle_ps(0x800000, temp0_213, 0x20), 0x24), 
                data_142d3f770), 
            data_142d3f5e0, 2)))
        
        if (result.b == 0xf)
            zmm0 = data_142d3f660
        else
            result = zx.q(_mm_movemask_ps(__cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    _mm_shuffle_ps(zmm7, _mm_shuffle_ps(0x800000, zmm7, 0x20), 0x24), 
                    data_142d3f770), 
                data_142d3f5e0, 2)))
            
            if (result.b == 0xf)
                zmm0 = data_142d3f660
            else
                temp0_209[0] = temp0_209[0] + temp0_214[0]
                temp0_209[0] = temp0_209[0] + zmm5[0]
                
                if (temp0_209[0] <= 0f)
                    temp0_214[0] - temp0_209[0]
                    int32_t rdx
                    rdx.b = temp0_214[0] > temp0_209[0]
                    int64_t rax_3 = 0x14
                    
                    if (temp0_214[0] <= temp0_209[0])
                        rax_3 = 0
                    
                    uint64_t rax_4 = 2
                    
                    if (zmm5[0] f<= *(&var_180 + rax_3))
                        rax_4 = zx.q(rdx)
                    
                    int64_t r9 = sx.q(*(&data_1434431f8 + (rax_4 << 2)))
                    int64_t r8_1 = sx.q(*(&data_1434431f8 + (r9 << 2)))
                    zmm0 = var_180[zx.q((rax_4 * 5).d)]
                    zmm0[0] = zmm0[0] - var_180[sx.q((r9 * 5).d)]
                    zmm0[0] = zmm0[0] - var_180[sx.q((r8_1 * 5).d)]
                    zmm0[0] = zmm0[0] + 1f
                    float temp0_357[0x4] = _mm_sqrt_ss(0, zmm0[0])
                    zmm0 = 0x3f800000
                    zmm0[0] = 1f / temp0_357[0]
                    zmm13[0] = 1f / zmm0[0]
                    zmm0[0] = zmm0[0] * 0.5f
                    zmm13[0] = zmm13[0] * 0.5f
                    float var_110[0x4]
                    var_110[rax_4] = zmm13[0]
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
                    zmm0 = var_110
                else
                    temp0_209[0] = temp0_209[0] + 1f
                    zmm3 = 0x3f800000
                    zmm3[0] = 1f / _mm_sqrt_ss(temp0_209[0], temp0_209[0])[0]
                    zmm13[0] = 1f / zmm3[0]
                    zmm3[0] = zmm3[0] * 0.5f
                    zmm0[0] = zmm0[0] - temp0_218[0]
                    zmm0[0] = zmm0[0] * zmm3[0]
                    zmm7[0] = zmm7[0] f- zmm15[0]
                    zmm7[0] = zmm7[0] f* zmm3[0]
                    float temp0_236[0x4] = _mm_unpacklo_ps(zmm0, zmm7[0].q)
                    temp0_210[0] = temp0_210[0] - temp0_213[0]
                    temp0_210[0] = temp0_210[0] * zmm3[0]
                    zmm13[0] = zmm13[0] * 0.5f
                    float temp0_237[0x4] = _mm_unpacklo_ps(temp0_210, zmm13[0].q)
                    zmm0 = temp0_236[0].q | temp0_237[0].q << 0x40
    
    zmm10 = arg3
    float temp0_238[0x4] = _mm_mul_ps(zmm0, zmm0)
    float temp0_240[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_238, temp0_238[0].q), temp0_238)
    float temp0_241[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0xe5)
    temp0_241[0] = temp0_241[0] + temp0_240[0]
    zmm5 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_241[0], 6), 0xffffffff)
    temp0_241[0] = temp0_241[0] * 0.5f
    float temp0_244[0x4] = _mm_rsqrt_ss(temp0_241[0], temp0_241[0])
    temp0_244[0] = temp0_244[0] * temp0_244[0]
    temp0_244[0] = temp0_244[0] * temp0_241[0]
    zmm6 = 0x3f000000
    zmm6[0] = 0.5f - temp0_244[0]
    zmm6[0] = zmm6[0] * temp0_244[0]
    zmm6[0] = zmm6[0] + temp0_244[0]
    zmm6[0] = zmm6[0] * zmm6[0]
    zmm6[0] = zmm6[0] * temp0_241[0]
    zmm11[0] = 0.5f - zmm6[0]
    zmm11[0] = zmm11[0] f* zmm6[0]
    zmm11[0] = zmm11[0] f+ zmm6[0]
    zmm11 = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0), zmm0)
    float temp0_247[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    uint32_t temp0_248[0x4] = _mm_and_ps(zmm11, temp0_247)
    zmm5 = _mm_or_ps(__andnps_xmmxud_memxud(temp0_247, data_142d3f660), temp0_248)
    zmm8 = zx.o(var_150_1.q)[0].q | var_150_1:8.d[0].q << 0x40
zmm14[0] = zmm14[0] * 0.5f
zmm1 = zx.o(0)
zmm1[0] = arg8[0]
zmm0 = _mm_unpacklo_ps(arg6, arg7[0].q)[0].q | zmm1[0].q << 0x40
float temp0_294[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm0)
float temp0_295[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_296[0x4] = _mm_mul_ps(temp0_295, zmm5)
float temp0_297[0x4] = _mm_shuffle_ps(temp0_296, temp0_296, 1)
float temp0_301[0x4] = _mm_mul_ps(
    _mm_sub_ps(zmm10, _mm_add_ps(_mm_shuffle_ps(temp0_296, temp0_296, 0x1a), temp0_297)), zmm12)
arg3 = _mm_shuffle_epi32(zmm5, 4)
float temp0_304[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_295, temp0_295, 0x29), arg3)
arg3 = _mm_shuffle_epi32(zmm5, 0xff)
float temp0_307[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_295, temp0_295, 0x12), arg3)
float temp0_309[0x4] = _mm_mul_ps(_mm_add_ps(temp0_304, temp0_307), zmm12)
float temp0_310[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
float temp0_312[0x4] = _mm_mul_ps(_mm_sub_ps(temp0_304, temp0_307), temp0_310)
zmm7 = data_142d3f660
float temp0_313[0x4] = _mm_shuffle_ps(temp0_309, temp0_301, 0)
float temp0_314[0x4] = _mm_shuffle_ps(temp0_313, zx.o(0), 0x42)
float temp0_315[0x4] = _mm_shuffle_ps(temp0_301, temp0_312, 1)
float temp0_316[0x4] = _mm_shuffle_ps(temp0_315, zx.o(0), 0x42)
float temp0_317[0x4] = _mm_shuffle_ps(temp0_312, temp0_309, 0xa1)
float temp0_319[0x4] = _mm_shuffle_ps(temp0_315, _mm_shuffle_ps(temp0_309, temp0_316, 0x31), 0x82)
float temp0_322[0x4] = _mm_shuffle_ps(temp0_317, 
    _mm_shuffle_ps(temp0_301, _mm_shuffle_ps(temp0_317, zx.o(0), 0x42), 0x32), 0x82)
float temp0_324[0x4] = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm7, zmm8, 0x23), 0x24)
float temp0_325[0x4] = _mm_sub_ps(temp0_294, temp0_294)
arg3 = data_142e6d9f0
float temp0_326[0x4] = _mm_mul_ps(temp0_325, arg3)
float temp0_328[0x4] = _mm_mul_ps(_mm_add_ps(temp0_294, temp0_294), arg3)
float temp0_330[0x4] = _mm_shuffle_ps(temp0_313, _mm_shuffle_ps(temp0_312, temp0_314, 0x32), 0x82)
float temp0_332[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_326, temp0_326, 0), temp0_330)
float temp0_335[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_326, temp0_326, 0x55), temp0_319), temp0_332)
float temp0_339[0x4] = _mm_add_ps(
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_326, temp0_326, 0xaa), temp0_322), temp0_335), 
    temp0_324)
float temp0_341[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_328, temp0_328, 0), temp0_330)
float temp0_343[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_328, temp0_328, 0x55), temp0_319)
zmm0 = data_142d3f770
arg3 = _mm_and_ps(temp0_341, zmm0)
float temp0_346[0x4] = _mm_add_ps(_mm_and_ps(temp0_343, zmm0), arg3)
float temp0_350[0x4] = _mm_add_ps(
    _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_328, temp0_328, 0xaa), temp0_322), zmm0), temp0_346)
float temp0_351[0x4] = _mm_sub_ps(temp0_339, temp0_350)
float temp0_352[0x4] = _mm_add_ps(temp0_350, temp0_339)
*arg1 = _mm_shuffle_ps(temp0_351, _mm_shuffle_ps(temp0_352, temp0_351, 0x20), 0x24)
zmm0 = _mm_shuffle_epi32(temp0_352, 0x4e)
arg1[1][0] = _mm_shuffle_ps(temp0_352, temp0_352, 0xe5)[0]
(*arg1)[5] = zmm0[0]
(*arg1)[6].b = 1
return result
