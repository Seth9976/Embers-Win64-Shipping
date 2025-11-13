// 函数: sub_140022120
// 地址: 0x140022120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_98[0x4] = arg5
float var_cc = arg2[0]
uint32_t temp0 = _mm_movemask_ps(*arg10)
float zmm4[0x4] = arg1[0xe]
float temp0_1[0x4] = _mm_add_ps(zmm4, zmm4)
float var_b8[0x4] = zmm4
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_1)
arg2 = (*arg1)[0x39]
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_1)
float zmm6[0x4] = (*arg1)[0x3b]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_1)
temp0_1[0].q = temp0_1 u>> 0x40
temp0_1[0] = temp0_1[0] * (*arg1)[0x3a]
float temp0_9[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_5, 0x4e), temp0_3, 0xc)
float temp0_10[0x4] = _mm_insert_ps(temp0_3, temp0_5, 0x88)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xd8)
float temp0_12[0x4] = _mm_add_ps(temp0_7, temp0_11)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
float temp0_17[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_1, temp0_1, 0x1c), temp0_5, 0x60), temp0_14)
float zmm10[0x4] = data_142d3f670
float temp0_18[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_17)
float temp0_20[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float zmm8[0x4] = arg1[6][0]
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm8)
float temp0_25[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xea), temp0_18), temp0_22)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), temp0_20), temp0_25)
float temp0_30[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_19, temp0_12, 0x9c), temp0_13, 0x60)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), zmm8)
float temp0_35[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_18), temp0_32)
float temp0_36[0x4] = _mm_insert_ps(temp0_19, temp0_13, 0x8c)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc0), temp0_20), temp0_35)
float temp0_41[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_35, temp0_12, 0x4e), temp0_13, 0x14)
float temp0_42[0x4] = _mm_insert_ps(temp0_36, temp0_12, 0x20)
float temp0_43[0x4] = _mm_blend_ps(temp0_41, temp0_19, 4)
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd5), zmm8)
zmm8 = (*arg1)[0x1b]
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_18), temp0_45)
float temp0_51[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xea), temp0_20), temp0_48)
float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xc0), temp0_30)
float temp0_56[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xd5), temp0_42), temp0_53)
float temp0_59[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xea), temp0_43), temp0_56)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_30)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), temp0_42), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_43), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc0), temp0_30)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd5), temp0_42), temp0_69)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xea), temp0_43), temp0_72)
float zmm5[0x4] = arg1[0xf]
float temp0_76[0x4] = _mm_add_ps(zmm5, zmm5)
float var_c8[0x4] = zmm5
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_76)
float zmm9[0x4] = (*arg1)[0x3d]
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0), temp0_76)
arg5 = (*arg1)[0x3f]
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), temp0_76)
temp0_76[0].q = temp0_76 u>> 0x40
temp0_76[0] = temp0_76[0] * (*arg1)[0x3e]
float temp0_84[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_43, temp0_80, 0x4e), temp0_78, 0xc)
float temp0_85[0x4] = _mm_insert_ps(temp0_78, temp0_80, 0x88)
float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xd8)
float temp0_87[0x4] = _mm_add_ps(temp0_82, temp0_86)
float temp0_88[0x4] = _mm_sub_ps(temp0_86, temp0_82)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x78)
float temp0_92[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_76, temp0_76, 0x1c), temp0_80, 0x60), temp0_89)
float temp0_93[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_94[0x4] = _mm_sub_ps(zmm10, temp0_92)
float temp0_95[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc0), zmm8)
float temp0_100[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xea), temp0_93), temp0_97)
float temp0_103[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), temp0_95), temp0_100)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), zmm8)
float temp0_108[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd5), temp0_93), temp0_105)
float temp0_111[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xc0), temp0_95), temp0_108)
float temp0_113[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_94, temp0_87, 0x9c), temp0_88, 0x60)
float temp0_114[0x4] = _mm_insert_ps(temp0_94, temp0_88, 0x8c)
float temp0_116[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_80, temp0_87, 0x4e), temp0_88, 0x14)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xd5), zmm8)
float temp0_119[0x4] = _mm_insert_ps(temp0_114, temp0_87, 0x20)
float temp0_122[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_93), temp0_118)
float temp0_123[0x4] = _mm_blend_ps(temp0_116, temp0_94, 4)
float temp0_126[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xea), temp0_95), temp0_122)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xc0), temp0_113)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xd5), temp0_119), temp0_128)
float temp0_134[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xea), temp0_123), temp0_131)
float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0xc0), temp0_113)
float temp0_139[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0xd5), temp0_119), temp0_136)
float temp0_142[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0xea), temp0_123), temp0_139)
float temp0_144[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xc0), temp0_113)
float temp0_147[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xd5), temp0_119), temp0_144)
float temp0_150[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_126, temp0_126, 0xea), temp0_123), temp0_147)
zmm5 = *arg7
arg2 = (*arg7)[1]
float temp0_151[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_152[0x4] = _mm_mul_ps(temp0_59, temp0_151)
float temp0_153[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_155[0x4] = _mm_add_ps(_mm_mul_ps(temp0_67, temp0_153), temp0_152)
zmm4 = (*arg7)[2]
float temp0_156[0x4] = _mm_insert_ps(zx.o(*arg7), zmm4, 0x20)
float temp0_157[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
float temp0_159[0x4] = _mm_add_ps(_mm_mul_ps(temp0_75, temp0_157), temp0_155)
float temp0_160[0x4] = _mm_mul_ps(temp0_151, temp0_134)
float temp0_162[0x4] = _mm_add_ps(_mm_mul_ps(temp0_153, temp0_142), temp0_160)
zmm5 = arg8
float (* result)[0x4]
result.b = arg6
float temp0_164[0x4] = _mm_add_ps(_mm_mul_ps(temp0_157, temp0_150), temp0_162)
float temp0_165[0x4] = _mm_mul_ps(temp0_159, temp0_156)
float temp0_166[0x4] = _mm_movehdup_ps(temp0_165)
temp0_166[0] = temp0_166[0] + temp0_165[0]
temp0_165[0].q = temp0_165 u>> 0x40
temp0_166[0] = temp0_166[0] + temp0_165[0]
float temp0_167[0x4] = _mm_mul_ps(temp0_164, temp0_156)
float temp0_168[0x4] = _mm_movehdup_ps(temp0_167)
temp0_168[0] = temp0_168[0] + temp0_167[0]
temp0_167[0].q = temp0_167 u>> 0x40
temp0_168[0] = temp0_168[0] + temp0_167[0]
temp0_166[0] = temp0_166[0] + temp0_168[0]
zmm4 = zx.o(0)
float zmm0[0x4]
float zmm13[0x4]

if (temp0 != 0xf)
    if (not(arg4[0] f<= 9.99999975e-05f))
        zmm9 = arg1[0x15]
        zmm10 = arg1[0x16]
        float temp0_218[0x4] = _mm_mul_ps(var_b8, zmm9)
        float temp0_220[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_218, temp0_218[0].q), temp0_218)
        float temp0_221[0x4] = _mm_movehdup_ps(temp0_220)
        temp0_221[0] = temp0_221[0] + temp0_220[0]
        float temp0_222[0x4] = _mm_cmpeq_ss(0, temp0_221[0], 2)
        zmm0 = _mm_and_ps(temp0_222, 0x3f800000)
        zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_222, 0xbf800000), zmm0)
        float temp0_228[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), var_b8), zmm9)
        float temp0_229[0x4] = __mulps_xmmps_memps(zmm9, data_142d3f690)
        float temp0_231[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xff), temp0_229)
        float temp0_232[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xc0)
        float temp0_234[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xdb), temp0_232)
        zmm0 = data_142fc92a0
        float temp0_236[0x4] = _mm_add_ps(_mm_mul_ps(temp0_234, zmm0), temp0_231)
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xd5)
        float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_229, temp0_229, 1), temp0_237)
        arg2 = data_142fc92b0
        float temp0_241[0x4] = _mm_add_ps(_mm_mul_ps(temp0_239, arg2), temp0_236)
        float temp0_242[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xea)
        float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xf1), temp0_242)
        zmm8 = data_142fc92c0
        float temp0_246[0x4] = _mm_add_ps(_mm_mul_ps(temp0_244, zmm8), temp0_241)
        zmm9 = _mm_add_ps(temp0_246, temp0_246)
        float temp0_248[0x4] = _mm_mul_ps(var_c8, zmm10)
        float temp0_250[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_248, temp0_248[0].q), temp0_248)
        float temp0_251[0x4] = _mm_movehdup_ps(temp0_250)
        temp0_251[0] = temp0_251[0] + temp0_250[0]
        float temp0_252[0x4] = _mm_cmpeq_ss(0, temp0_251[0], 2)
        zmm13 = _mm_and_ps(0x3f800000, temp0_252)
        zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_252, 0xbf800000), zmm13)
        zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), var_c8), zmm10)
        zmm10 = __mulps_xmmps_memps(zmm10, data_142d3f690)
        float temp0_261[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm10)
        float temp0_262[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc0)
        arg5 = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xdb), temp0_262), zmm0), temp0_261)
    label_140022846:
        float temp0_267[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd5)
        float temp0_271[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm10, zmm10, 1), temp0_267), arg2), arg5)
        float temp0_272[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xea)
        float temp0_276[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xf1), temp0_272), zmm8), temp0_271)
        zmm5 = arg8
        float temp0_277[0x4] = _mm_add_ps(temp0_276, temp0_276)
        float temp0_278[0x4] = _mm_mul_ps(zmm9, temp0_156)
        zmm4 = _mm_movehdup_ps(temp0_278)
        zmm4[0] = zmm4[0] + temp0_278[0]
        temp0_278[0].q = temp0_278 u>> 0x40
        zmm4[0] = zmm4[0] + temp0_278[0]
        float temp0_280[0x4] = _mm_mul_ps(temp0_277, temp0_156)
        float temp0_281[0x4] = _mm_movehdup_ps(temp0_280)
        temp0_281[0] = temp0_281[0] + temp0_280[0]
        temp0_280[0].q = temp0_280 u>> 0x40
        temp0_281[0] = temp0_281[0] + temp0_280[0]
        zmm4[0] = zmm4[0] - temp0_281[0]
else if (not(arg4[0] f<= 9.99999975e-05f))
    zmm9 = arg1[0x15]
    zmm10 = arg1[0x16]
    float temp0_169[0x4] = _mm_mul_ps(var_b8, zmm9)
    float temp0_171[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_169, temp0_169[0].q), temp0_169)
    float temp0_172[0x4] = _mm_movehdup_ps(temp0_171)
    temp0_172[0] = temp0_172[0] + temp0_171[0]
    float temp0_173[0x4] = _mm_cmpeq_ss(0, temp0_172[0], 2)
    arg2 = _mm_and_ps(temp0_173, 0x3f800000)
    zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_173, 0xbf800000), arg2)
    float temp0_179[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), var_b8), zmm9)
    float temp0_180[0x4] = __mulps_xmmps_memps(zmm9, data_142d3f690)
    float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0xff), temp0_180)
    float temp0_183[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xc0)
    float temp0_185[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xdb), temp0_183)
    zmm6 = data_142fc92a0
    float temp0_187[0x4] = _mm_add_ps(_mm_mul_ps(temp0_185, zmm6), temp0_182)
    float temp0_188[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xd5)
    float temp0_190[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_180, temp0_180, 1), temp0_188)
    arg2 = data_142fc92b0
    float temp0_192[0x4] = _mm_add_ps(_mm_mul_ps(temp0_190, arg2), temp0_187)
    float temp0_193[0x4] = _mm_shuffle_ps(temp0_179, temp0_179, 0xea)
    float temp0_195[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xf1), temp0_193)
    zmm8 = data_142fc92c0
    float temp0_197[0x4] = _mm_add_ps(_mm_mul_ps(temp0_195, zmm8), temp0_192)
    zmm9 = _mm_add_ps(temp0_197, temp0_197)
    float temp0_199[0x4] = _mm_mul_ps(var_c8, zmm10)
    float temp0_201[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_199, temp0_199[0].q), temp0_199)
    float temp0_202[0x4] = _mm_movehdup_ps(temp0_201)
    temp0_202[0] = temp0_202[0] + temp0_201[0]
    float temp0_203[0x4] = _mm_cmpeq_ss(0, temp0_202[0], 2)
    zmm13 = _mm_and_ps(0x3f800000, temp0_203)
    zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_203, 0xbf800000), zmm13)
    zmm4 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), var_c8), zmm10)
    zmm10 = __mulps_xmmps_memps(zmm10, data_142d3f690)
    float temp0_212[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xff), zmm10)
    float temp0_213[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc0)
    arg5 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xdb), temp0_213), zmm6), 
        temp0_212)
    goto label_140022846

zmm0 = 0x3f800000

if ((result.b & 1) != 0)
    zmm0[0] = 1f / temp0_166[0]

arg3[0] = arg3[0] f* zmm0[0]
arg2 = var_cc
arg3[0] = arg3[0] f* arg2[0]
arg3[0] = arg3[0] f* arg2[0]
arg4[0] = arg4[0] f* zmm0[0]
arg4[0] = arg4[0] f* arg2[0]
zmm0 = arg4
zmm0[0] = zmm0[0] f+ arg3[0]
temp0_166[0] = temp0_166[0] * zmm0[0]
temp0_166[0] = temp0_166[0] + 1f
zmm0 = 0x3f800000
zmm0[0] = 1f / temp0_166[0]
arg3[0] = arg3[0] f* zmm5[0]
arg4[0] = arg4[0] f* zmm4[0]
arg3[0] = arg3[0] f- arg4[0]
zmm10 = *arg9
arg3[0] = arg3[0] f- zmm10[0]
arg3[0] = arg3[0] f* zmm0[0]
temp0_166[0] = temp0_166[0] f* arg3[0]
float temp0_283[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_166, temp0_166, 0xc0), temp0_156)
temp0_168[0] = temp0_168[0] f* arg3[0]
float temp0_285[0x4] = _mm_mul_ps(_mm_shuffle_epi32(temp0_168 ^ data_142d3f780, 0xc0), temp0_156)
arg4 = arg1[0xe]
float zmm14[0x4] = arg1[0xf]
float temp0_286[0x4] = _mm_mul_ps(arg4, zx.o(0))
float temp0_287[0x4] = _mm_shuffle_ps(temp0_283, temp0_283, 0)
float temp0_289[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0x1b), temp0_287)
zmm9 = data_142d3f7c0
float temp0_291[0x4] = _mm_add_ps(_mm_mul_ps(temp0_289, zmm9), temp0_286)
float temp0_292[0x4] = _mm_shuffle_ps(temp0_283, temp0_283, 0x55)
float temp0_294[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg4, arg4, 1), temp0_292)
zmm8 = data_142d3f7d0
float temp0_296[0x4] = _mm_add_ps(_mm_mul_ps(temp0_294, zmm8), temp0_291)
float temp0_297[0x4] = _mm_shuffle_ps(temp0_283, temp0_283, 0xaa)
float temp0_299[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xb1), temp0_297)
float zmm11[0x4] = data_142d3f7b0
float temp0_301[0x4] = _mm_add_ps(_mm_mul_ps(temp0_299, zmm11), temp0_296)
float zmm12[0x4] = data_142d3f640
float temp0_302[0x4] = _mm_mul_ps(temp0_301, zmm12)
float temp0_303[0x4] = _mm_mul_ps(zx.o(0), zmm14)
float temp0_304[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0)
float temp0_308[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), temp0_304), zmm9), temp0_303)
float temp0_309[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0x55)
float temp0_313[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_309), zmm8), temp0_308)
float temp0_314[0x4] = _mm_shuffle_ps(temp0_285, temp0_285, 0xaa)
float temp0_319[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_314), zmm11), 
        temp0_313), 
    zmm12)
float temp0_320[0x4] = _mm_add_ps(temp0_302, arg4)
float temp0_321[0x4] = _mm_mul_ps(temp0_320, temp0_320)
arg4 = _mm_add_ps(_mm_unpackhi_pd(temp0_321, temp0_321[0].q), temp0_321)
float temp0_324[0x4] = _mm_movehdup_ps(arg4)
temp0_324[0] = temp0_324[0] f+ arg4[0]
float temp0_325[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_324[0], 6)
zmm5 = 0x3f000000
arg4 = temp0_324
arg4[0] = arg4[0] f* 0.5f
float temp0_326[0x4] = _mm_rsqrt_ss(temp0_324[0], temp0_324[0])
temp0_326[0] = temp0_326[0] * temp0_326[0]
temp0_326[0] = temp0_326[0] f* arg4[0]
zmm0 = 0x3f000000
zmm0[0] = 0.5f - temp0_326[0]
zmm0[0] = zmm0[0] * temp0_326[0]
zmm0[0] = zmm0[0] + temp0_326[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm0[0] = zmm0[0] f* arg4[0]
arg4 = 0x3f000000
arg4[0] = 0.5f - zmm0[0]
float zmm15[0x4] = _mm_andnot_ps(temp0_325, 0xffffffff)
arg4[0] = arg4[0] f* zmm0[0]
arg4[0] = arg4[0] f+ zmm0[0]
arg4 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_320)
float temp0_330[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
zmm4 = data_142d3f660
uint32_t temp0_331[0x4] = _mm_and_ps(arg4, temp0_330)
zmm15 = _mm_or_ps(_mm_andnot_ps(temp0_330, zmm4), temp0_331)
float temp0_334[0x4] = _mm_add_ps(temp0_319, zmm14)
float temp0_335[0x4] = _mm_mul_ps(temp0_334, temp0_334)
arg4 = _mm_add_ps(_mm_unpackhi_pd(temp0_335, temp0_335[0].q), temp0_335)
float temp0_338[0x4] = _mm_movehdup_ps(arg4)
temp0_338[0] = temp0_338[0] f+ arg4[0]
zmm12 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_338[0], 6), 0xffffffff)
arg4 = temp0_338
arg4[0] = arg4[0] f* 0.5f
float temp0_341[0x4] = _mm_rsqrt_ss(temp0_338[0], temp0_338[0])
temp0_341[0] = temp0_341[0] * temp0_341[0]
temp0_341[0] = temp0_341[0] f* arg4[0]
arg5 = 0x3f000000
arg5[0] = 0.5f - temp0_341[0]
arg5[0] = arg5[0] * temp0_341[0]
arg5[0] = arg5[0] + temp0_341[0]
arg5[0] = arg5[0] * arg5[0]
arg5[0] = arg5[0] f* arg4[0]
zmm5[0] = 0.5f - arg5[0]
zmm5[0] = zmm5[0] * arg5[0]
zmm5[0] = zmm5[0] + arg5[0]
float temp0_343[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_334)
float temp0_344[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
zmm5 = _mm_and_ps(temp0_343, temp0_344)
zmm12 = _mm_or_ps(_mm_andnot_ps(temp0_344, zmm4), zmm5)
arg1[0xe] = zmm15
zmm14 = _mm_shuffle_epi32(zmm15, 0xc9)
uint32_t temp0_349[0x4] = _mm_shuffle_epi32(zmm15, 0xd2)
zmm4 = _mm_shuffle_epi32(zmm15, 0xff)
float temp0_351[0x4] = _mm_mul_ps(zmm15, zmm12)
float temp0_353[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_351, temp0_351[0].q), temp0_351)
float temp0_354[0x4] = _mm_movehdup_ps(temp0_353)
temp0_354[0] = temp0_354[0] + temp0_353[0]
float temp0_355[0x4] = _mm_cmpeq_ss(0, temp0_354[0], 2)
zmm6 = _mm_and_ps(temp0_355, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_355, 0xbf800000), zmm6)
float temp0_360[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm12)
arg1[0xf] = temp0_360
zmm6 = (*arg1)[6]
arg5 = arg1[1][0]
float temp0_361[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), zmm6, 0x20)
float temp0_367[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(_mm_insert_ps(zmm6, arg5, 0x10), (*arg1)[5], 0x20), 
        zmm14), 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x14)), arg5, 0x20), temp0_349))
float temp0_368[0x4] = _mm_add_ps(temp0_367, temp0_367)
float temp0_370[0x4] = _mm_add_ps(temp0_361, _mm_mul_ps(zmm4, temp0_368))
float temp0_376[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_368, temp0_368, 0xd2), zmm14), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_368, temp0_368, 0xc9), temp0_349)), 
    temp0_370)
arg4 = _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20), temp0_376)
arg1[8][0] = arg4[0]
(*arg1)[0x21] = __extractps_memd_xmmps_immb(arg4, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(arg4, 2)
arg4 = (*arg1)[0x12]
zmm4 = arg1[4][0]
float temp0_381[0x4] = _mm_shuffle_ps(temp0_360, temp0_360, 0xc9)
float temp0_382[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), arg4, 0x20)
float temp0_385[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(arg4, zmm4, 0x10), (*arg1)[0x11], 0x20), temp0_381)
float temp0_386[0x4] = _mm_shuffle_ps(temp0_360, temp0_360, 0xd2)
float temp0_389[0x4] =
    _mm_sub_ps(temp0_385, _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm4, 0x20), temp0_386))
float temp0_390[0x4] = _mm_add_ps(temp0_389, temp0_389)
arg4 = (*arg1)[0x3f]
float temp0_393[0x4] =
    _mm_add_ps(temp0_382, _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc0), temp0_390))
float temp0_399[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xd2), temp0_381), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_390, temp0_390, 0xc9), temp0_386)), 
    temp0_393)
float temp0_401[0x4] =
    _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20), temp0_399)
(*arg1)[0x23] = temp0_401[0]
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_401, 1)
arg3[0] = arg3[0] f+ zmm10[0]
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_401, 2)
*arg9 = arg3[0]
zmm5 = (*arg1)[0x3b]
float temp0_404[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm0 = *arg1
float temp0_405[0x4] = _mm_mul_ps(temp0_404, zmm0)
arg5 = arg1[0xe][0]
float temp0_406[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
zmm4 = (*arg1)[3]
zmm10 = (*arg1)[2]
arg2 = (*arg1)[1]
float temp0_412[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm10, 0x10), arg2, 0x20), zmm0, 0x30), 
            temp0_406), 
        zmm9), 
    temp0_405)
zmm5 = (*arg1)[0x39]
float temp0_413[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_418[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), zmm0, 0x20), arg2, 0x30), 
            temp0_413), 
        zmm8), 
    temp0_412)
zmm5 = (*arg1)[0x3a]
float temp0_419[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_425[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg2, zmm0, 0x10), zmm4, 0x20), zmm10, 0x30), 
            temp0_419), 
        zmm11), 
    temp0_418)
arg4 = _mm_shuffle_ps(arg4, arg4, 0)
zmm4 = arg1[3]
arg4 = _mm_mul_ps(arg4, zmm4)
zmm5 = arg1[0xf][0]
float temp0_428[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm6 = (*arg1)[0xf]
zmm10 = (*arg1)[0xe]
zmm0 = (*arg1)[0xd]
float temp0_434[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm10, 0x10), zmm0, 0x20), zmm4, 0x30), 
            temp0_428), 
        zmm9), 
    arg4)
arg4 = (*arg1)[0x3d]
arg4 = _mm_shuffle_ps(arg4, arg4, 0)
float temp0_440[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), zmm4, 0x20), zmm0, 0x30), 
            arg4), 
        zmm8), 
    temp0_434)
arg4 = (*arg1)[0x3e]
arg4 = _mm_shuffle_ps(arg4, arg4, 0)
float temp0_447[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm4, 0x10), zmm6, 0x20), zmm10, 0x30), 
            arg4), 
        zmm11), 
    temp0_440)
arg1[0xa] = temp0_425
float temp0_448[0x4] = _mm_mul_ps(temp0_425, temp0_447)
arg4 = _mm_add_ps(_mm_unpackhi_pd(temp0_448, temp0_448[0].q), temp0_448)
float temp0_451[0x4] = _mm_movehdup_ps(arg4)
temp0_451[0] = temp0_451[0] f+ arg4[0]
arg3 = _mm_cmpeq_ss(0, temp0_451[0], 2)
zmm13 = _mm_and_ps(0x3f800000, arg3)
uint32_t temp0_455[0x4] = _mm_or_ps(_mm_andnot_ps(arg3, 0xbf800000), zmm13)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(temp0_455, temp0_455, 0), temp0_447)
return result
