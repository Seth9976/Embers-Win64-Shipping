// 函数: sub_140028a90
// 地址: 0x140028a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_98[0x4] = arg5
float var_cc = arg2[0]
float zmm0[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm0, zmm0)
float var_b8[0x4] = zmm0
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0)
float zmm5[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0)
float zmm6[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float zmm11[0x4] = data_142d3f670
float temp0_17[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float temp0_18[0x4] = _mm_sub_ps(zmm11, temp0_16)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float zmm9[0x4] = arg1[6][0]
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc0), zmm9)
float temp0_24[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_17), temp0_21)
float temp0_27[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_24)
float temp0_29[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_18, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_31[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm9)
float temp0_34[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd5), temp0_17), temp0_31)
float temp0_35[0x4] = _mm_insert_ps(temp0_18, temp0_12, 0x8c)
float temp0_38[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_34)
float temp0_40[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_34, temp0_11, 0x4e), temp0_12, 0x14)
float temp0_41[0x4] = _mm_insert_ps(temp0_35, temp0_11, 0x20)
float temp0_42[0x4] = _mm_blend_ps(temp0_40, temp0_18, 4)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm9)
float zmm10[0x4] = (*arg1)[0x1b]
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_17), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xc0), temp0_29)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xd5), temp0_41), temp0_52)
float temp0_58[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_27, temp0_27, 0xea), temp0_42), temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xc0), temp0_29)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xd5), temp0_41), temp0_60)
float temp0_66[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0xea), temp0_42), temp0_63)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_29)
float temp0_71[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_41), temp0_68)
float temp0_74[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_42), temp0_71)
arg5 = arg1[0xf]
float temp0_75[0x4] = _mm_add_ps(arg5, arg5)
float var_c8[0x4] = arg5
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), temp0_75)
float zmm8[0x4] = (*arg1)[0x3d]
float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), temp0_75)
zmm5 = (*arg1)[0x3f]
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_75)
temp0_75[0].q = temp0_75 u>> 0x40
temp0_75[0] = temp0_75[0] * (*arg1)[0x3e]
float temp0_83[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_68, temp0_79, 0x4e), temp0_77, 0xc)
float temp0_84[0x4] = _mm_insert_ps(temp0_77, temp0_79, 0x88)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xd8)
float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_85)
float temp0_87[0x4] = _mm_sub_ps(temp0_85, temp0_81)
float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x78)
float temp0_91[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_75, temp0_75, 0x1c), temp0_79, 0x60), temp0_88)
float temp0_92[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_93[0x4] = _mm_sub_ps(zmm11, temp0_91)
float temp0_94[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xc0), zmm10)
float temp0_99[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), temp0_92), temp0_96)
float temp0_102[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd5), temp0_94), temp0_99)
float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xea), zmm10)
float temp0_107[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xd5), temp0_92), temp0_104)
float temp0_110[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_94), temp0_107)
float temp0_112[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_93, temp0_86, 0x9c), temp0_87, 0x60)
float temp0_113[0x4] = _mm_insert_ps(temp0_93, temp0_87, 0x8c)
float temp0_115[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_107, temp0_86, 0x4e), temp0_87, 0x14)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), zmm10)
float temp0_118[0x4] = _mm_insert_ps(temp0_113, temp0_86, 0x20)
float temp0_121[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc0), temp0_92), temp0_117)
float temp0_122[0x4] = _mm_blend_ps(temp0_115, temp0_93, 4)
float temp0_125[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xea), temp0_94), temp0_121)
float temp0_127[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xc0), temp0_112)
float temp0_130[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xd5), temp0_118), temp0_127)
float temp0_133[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xea), temp0_122), temp0_130)
float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xc0), temp0_112)
float temp0_138[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xd5), temp0_118), temp0_135)
float temp0_141[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_110, temp0_110, 0xea), temp0_122), temp0_138)
float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xc0), temp0_112)
float temp0_146[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xd5), temp0_118), temp0_143)
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xea), temp0_122), temp0_146)
zmm6 = *arg7
arg2 = (*arg7)[1]
float temp0_150[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_151[0x4] = _mm_mul_ps(temp0_58, temp0_150)
float temp0_152[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_154[0x4] = _mm_add_ps(_mm_mul_ps(temp0_66, temp0_152), temp0_151)
arg5 = (*arg7)[2]
float temp0_155[0x4] = _mm_insert_ps(zx.o(*arg7), arg5, 0x20)
float temp0_156[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
float temp0_158[0x4] = _mm_add_ps(_mm_mul_ps(temp0_74, temp0_156), temp0_154)
float temp0_159[0x4] = _mm_mul_ps(temp0_150, temp0_133)
float temp0_161[0x4] = _mm_add_ps(_mm_mul_ps(temp0_152, temp0_141), temp0_159)
float temp0_163[0x4] = _mm_add_ps(_mm_mul_ps(temp0_156, temp0_149), temp0_161)
float temp0_164[0x4] = _mm_mul_ps(temp0_158, temp0_155)
float temp0_165[0x4] = _mm_movehdup_ps(temp0_164)
temp0_165[0] = temp0_165[0] + temp0_164[0]
temp0_164[0].q = temp0_164 u>> 0x40
temp0_165[0] = temp0_165[0] + temp0_164[0]
float temp0_166[0x4] = _mm_mul_ps(temp0_163, temp0_155)
float temp0_167[0x4] = _mm_movehdup_ps(temp0_166)
temp0_167[0] = temp0_167[0] + temp0_166[0]
temp0_166[0].q = temp0_166 u>> 0x40
temp0_167[0] = temp0_167[0] + temp0_166[0]
arg5 = zx.o(0)
float zmm13[0x4]
float zmm15[0x4]

if (not(arg4[0] <= 9.99999975e-05f))
    float zmm14[0x4] = arg1[0x15]
    zmm0 = arg1[0x16]
    float temp0_168[0x4] = _mm_mul_ps(var_b8, zmm14)
    float temp0_170[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_168, temp0_168[0].q), temp0_168)
    float temp0_171[0x4] = _mm_movehdup_ps(temp0_170)
    temp0_171[0] = temp0_171[0] + temp0_170[0]
    float temp0_172[0x4] = _mm_cmpeq_ss(0, temp0_171[0], 2)
    arg2 = _mm_and_ps(temp0_172, 0x3f800000)
    zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_172, 0xbf800000), arg2)
    float temp0_178[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), var_b8), zmm14)
    zmm8 = data_142d3f690
    float temp0_179[0x4] = _mm_mul_ps(zmm14, zmm8)
    float temp0_181[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0xff), temp0_179)
    float temp0_182[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xc0)
    float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0xdb), temp0_182)
    zmm13 = data_142fc92a0
    float temp0_186[0x4] = _mm_add_ps(_mm_mul_ps(temp0_184, zmm13), temp0_181)
    float temp0_187[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xd5)
    float temp0_189[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_179, temp0_179, 1), temp0_187)
    arg2 = data_142fc92b0
    float temp0_191[0x4] = _mm_add_ps(_mm_mul_ps(temp0_189, arg2), temp0_186)
    float temp0_192[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0xea)
    float temp0_194[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_179, temp0_179, 0xf1), temp0_192)
    zmm15 = data_142fc92c0
    float temp0_196[0x4] = _mm_add_ps(_mm_mul_ps(temp0_194, zmm15), temp0_191)
    float temp0_197[0x4] = _mm_add_ps(temp0_196, temp0_196)
    float temp0_198[0x4] = _mm_mul_ps(var_c8, zmm0)
    float temp0_200[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_198, temp0_198[0].q), temp0_198)
    float temp0_201[0x4] = _mm_movehdup_ps(temp0_200)
    temp0_201[0] = temp0_201[0] + temp0_200[0]
    float temp0_202[0x4] = _mm_cmpeq_ss(0, temp0_201[0], 2)
    float temp0_203[0x4] = _mm_and_ps(0x3f800000, temp0_202)
    arg5 = _mm_or_ps(_mm_andnot_ps(temp0_202, 0xbf800000), temp0_203)
    float temp0_208[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), var_c8), zmm0)
    float temp0_209[0x4] = _mm_mul_ps(zmm0, zmm8)
    float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_208, temp0_208, 0xff), temp0_209)
    float temp0_212[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xc0)
    float temp0_216[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_209, temp0_209, 0xdb), temp0_212), zmm13), 
        temp0_211)
    float temp0_217[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xd5)
    float temp0_221[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(temp0_209, temp0_209, 1), temp0_217), arg2), temp0_216)
    float temp0_222[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xea)
    float temp0_226[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_209, temp0_209, 0xf1), temp0_222), zmm15), 
        temp0_221)
    float temp0_227[0x4] = _mm_add_ps(temp0_226, temp0_226)
    float temp0_228[0x4] = _mm_mul_ps(temp0_197, temp0_155)
    arg5 = _mm_movehdup_ps(temp0_228)
    arg5[0] = arg5[0] + temp0_228[0]
    temp0_228[0].q = temp0_228 u>> 0x40
    arg5[0] = arg5[0] + temp0_228[0]
    float temp0_230[0x4] = _mm_mul_ps(temp0_227, temp0_155)
    float temp0_231[0x4] = _mm_movehdup_ps(temp0_230)
    temp0_231[0] = temp0_231[0] + temp0_230[0]
    temp0_230[0].q = temp0_230 u>> 0x40
    temp0_231[0] = temp0_231[0] + temp0_230[0]
    arg5[0] = arg5[0] - temp0_231[0]

temp0_165[0] = temp0_165[0] + temp0_167[0]
zmm5 = 0x3f800000

if ((arg6 & 1) != 0)
    zmm5[0] = 1f / temp0_165[0]

arg3[0] = arg3[0] * zmm5[0]
zmm0 = var_cc
arg3[0] = arg3[0] * zmm0[0]
arg3[0] = arg3[0] * zmm0[0]
arg4[0] = arg4[0] * zmm5[0]
arg4[0] = arg4[0] * zmm0[0]
arg4[0] = arg4[0] + arg3[0]
temp0_165[0] = temp0_165[0] * arg4[0]
temp0_165[0] = temp0_165[0] + 1f
zmm5 = 0x3f800000
zmm5[0] = 1f / temp0_165[0]
arg3[0] = arg3[0] * arg8[0]
arg4[0] = arg4[0] * arg5[0]
arg3[0] = arg3[0] - arg4[0]
zmm11 = *arg9
arg3[0] = arg3[0] - zmm11[0]
arg3[0] = arg3[0] * zmm5[0]
temp0_165[0] = temp0_165[0] * arg3[0]
float temp0_233[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xc0), temp0_155)
temp0_167[0] = temp0_167[0] * arg3[0]
float temp0_235[0x4] = _mm_mul_ps(_mm_shuffle_epi32(temp0_167 ^ data_142d3f780, 0xc0), temp0_155)
zmm0 = arg1[0xe]
float zmm12[0x4] = arg1[0xf]
float temp0_236[0x4] = _mm_mul_ps(zmm0, zx.o(0))
float temp0_237[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0)
float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_237)
zmm10 = data_142d3f7c0
float temp0_241[0x4] = _mm_add_ps(_mm_mul_ps(temp0_239, zmm10), temp0_236)
float temp0_242[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x55)
float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_242)
zmm13 = data_142d3f7d0
float temp0_246[0x4] = _mm_add_ps(_mm_mul_ps(temp0_244, zmm13), temp0_241)
float temp0_247[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0xaa)
float temp0_249[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_247)
zmm8 = data_142d3f7b0
float temp0_251[0x4] = _mm_add_ps(_mm_mul_ps(temp0_249, zmm8), temp0_246)
zmm9 = data_142d3f640
float temp0_252[0x4] = _mm_mul_ps(temp0_251, zmm9)
float temp0_253[0x4] = _mm_mul_ps(zx.o(0), zmm12)
float temp0_254[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
float temp0_258[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0x1b), temp0_254), zmm10), temp0_253)
float temp0_259[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
float temp0_263[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm12, zmm12, 1), temp0_259), zmm13), temp0_258)
float temp0_264[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xaa)
float temp0_269[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xb1), temp0_264), zmm8), 
        temp0_263), 
    zmm9)
float temp0_270[0x4] = _mm_add_ps(temp0_252, zmm0)
float temp0_271[0x4] = _mm_mul_ps(temp0_270, temp0_270)
float temp0_273[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_271, temp0_271[0].q), temp0_271)
float temp0_274[0x4] = _mm_movehdup_ps(temp0_273)
temp0_274[0] = temp0_274[0] + temp0_273[0]
float temp0_275[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_274[0], 6)
zmm6 = 0x3f000000
temp0_274[0] = temp0_274[0] * 0.5f
float temp0_276[0x4] = _mm_rsqrt_ss(temp0_274[0], temp0_274[0])
temp0_276[0] = temp0_276[0] * temp0_276[0]
temp0_276[0] = temp0_276[0] * temp0_274[0]
arg2 = 0x3f000000
arg2[0] = 0.5f - temp0_276[0]
arg2[0] = arg2[0] * temp0_276[0]
arg2[0] = arg2[0] + temp0_276[0]
arg2[0] = arg2[0] * arg2[0]
arg2[0] = arg2[0] * temp0_274[0]
arg4 = 0x3f000000
arg4[0] = 0.5f - arg2[0]
zmm15 = _mm_andnot_ps(temp0_275, 0xffffffff)
arg4[0] = arg4[0] * arg2[0]
arg4[0] = arg4[0] + arg2[0]
float temp0_279[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_270)
float temp0_280[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
float zmm4[0x4] = data_142d3f660
arg4 = _mm_and_ps(temp0_279, temp0_280)
zmm15 = _mm_or_ps(_mm_andnot_ps(temp0_280, zmm4), arg4)
float temp0_284[0x4] = _mm_add_ps(temp0_269, zmm12)
float temp0_285[0x4] = _mm_mul_ps(temp0_284, temp0_284)
float temp0_287[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_285, temp0_285[0].q), temp0_285)
float temp0_288[0x4] = _mm_movehdup_ps(temp0_287)
temp0_288[0] = temp0_288[0] + temp0_287[0]
zmm9 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_288[0], 6), 0xffffffff)
temp0_288[0] = temp0_288[0] * 0.5f
float temp0_291[0x4] = _mm_rsqrt_ss(temp0_288[0], temp0_288[0])
temp0_291[0] = temp0_291[0] * temp0_291[0]
temp0_291[0] = temp0_291[0] * temp0_288[0]
arg5 = 0x3f000000
arg5[0] = 0.5f - temp0_291[0]
arg5[0] = arg5[0] * temp0_291[0]
arg5[0] = arg5[0] + temp0_291[0]
arg5[0] = arg5[0] * arg5[0]
arg5[0] = arg5[0] * temp0_288[0]
zmm6[0] = 0.5f - arg5[0]
zmm6[0] = zmm6[0] * arg5[0]
zmm6[0] = zmm6[0] + arg5[0]
float temp0_293[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_284)
float temp0_294[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
zmm6 = _mm_and_ps(temp0_293, temp0_294)
zmm9 = _mm_or_ps(_mm_andnot_ps(temp0_294, zmm4), zmm6)
arg1[0xe] = zmm15
zmm12 = _mm_shuffle_epi32(zmm15, 0xc9)
zmm0 = _mm_shuffle_epi32(zmm15, 0xd2)
zmm4 = _mm_shuffle_epi32(zmm15, 0xff)
float temp0_301[0x4] = _mm_mul_ps(zmm15, zmm9)
float temp0_303[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_301, temp0_301[0].q), temp0_301)
float temp0_304[0x4] = _mm_movehdup_ps(temp0_303)
temp0_304[0] = temp0_304[0] + temp0_303[0]
float temp0_305[0x4] = _mm_cmpeq_ss(0, temp0_304[0], 2)
zmm5 = _mm_and_ps(temp0_305, 0x3f800000)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_305, 0xbf800000), zmm5)
float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm9)
arg1[0xf] = temp0_310
zmm5 = (*arg1)[6]
zmm6 = arg1[1][0]
float temp0_311[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), zmm5, 0x20)
float temp0_317[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(_mm_insert_ps(zmm5, zmm6, 0x10), (*arg1)[5], 0x20), 
        zmm12), 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x14)), zmm6, 0x20), zmm0))
float temp0_318[0x4] = _mm_add_ps(temp0_317, temp0_317)
float temp0_320[0x4] = _mm_add_ps(temp0_311, _mm_mul_ps(zmm4, temp0_318))
float temp0_326[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_318, temp0_318, 0xd2), zmm12), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_318, temp0_318, 0xc9), zmm0)), 
    temp0_320)
float temp0_328[0x4] =
    _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20), temp0_326)
arg1[8][0] = temp0_328[0]
(*arg1)[0x21] = __extractps_memd_xmmps_immb(temp0_328, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(temp0_328, 2)
zmm0 = (*arg1)[0x12]
arg4 = arg1[4][0]
float temp0_331[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0xc9)
float temp0_332[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), zmm0, 0x20)
float temp0_335[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm0, arg4, 0x10), (*arg1)[0x11], 0x20), temp0_331)
float temp0_336[0x4] = _mm_shuffle_ps(temp0_310, temp0_310, 0xd2)
float temp0_339[0x4] =
    _mm_sub_ps(temp0_335, _mm_mul_ps(_mm_insert_ps(zx.o(*(arg1 + 0x44)), arg4, 0x20), temp0_336))
float temp0_340[0x4] = _mm_add_ps(temp0_339, temp0_339)
arg4 = (*arg1)[0x3f]
float temp0_343[0x4] =
    _mm_add_ps(temp0_332, _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc0), temp0_340))
float temp0_349[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0xd2), temp0_331), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_340, temp0_340, 0xc9), temp0_336)), 
    temp0_343)
float temp0_351[0x4] =
    _mm_add_ps(__insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20), temp0_349)
(*arg1)[0x23] = temp0_351[0]
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_351, 1)
arg3[0] = arg3[0] + zmm11[0]
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_351, 2)
*arg9 = arg3[0]
zmm0 = (*arg1)[0x3b]
float temp0_354[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm4 = *arg1
float temp0_355[0x4] = _mm_mul_ps(temp0_354, zmm4)
zmm6 = arg1[0xe][0]
float temp0_356[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm5 = (*arg1)[3]
zmm9 = (*arg1)[2]
arg3 = (*arg1)[1]
float temp0_362[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, zmm9, 0x10), arg3, 0x20), zmm4, 0x30), 
            temp0_356), 
        zmm10), 
    temp0_355)
zmm0 = (*arg1)[0x39]
float temp0_363[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_368[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), zmm4, 0x20), arg3, 0x30), 
            temp0_363), 
        zmm13), 
    temp0_362)
zmm0 = (*arg1)[0x3a]
float temp0_369[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_375[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg3, zmm4, 0x10), zmm5, 0x20), zmm9, 0x30), 
            temp0_369), 
        zmm8), 
    temp0_368)
float temp0_376[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
zmm5 = arg1[3]
float temp0_377[0x4] = _mm_mul_ps(temp0_376, zmm5)
zmm0 = arg1[0xf][0]
float temp0_378[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
arg5 = (*arg1)[0xf]
zmm9 = (*arg1)[0xe]
zmm4 = (*arg1)[0xd]
float temp0_384[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg5, zmm9, 0x10), zmm4, 0x20), zmm5, 0x30), 
            temp0_378), 
        zmm10), 
    temp0_377)
zmm0 = (*arg1)[0x3d]
float temp0_385[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_390[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), zmm5, 0x20), zmm4, 0x30), 
            temp0_385), 
        zmm13), 
    temp0_384)
zmm0 = (*arg1)[0x3e]
float temp0_391[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_397[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm5, 0x10), arg5, 0x20), zmm9, 0x30), 
            temp0_391), 
        zmm8), 
    temp0_390)
arg1[0xa] = temp0_375
float temp0_398[0x4] = _mm_mul_ps(temp0_375, temp0_397)
float result[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_398, temp0_398[0].q), temp0_398)
float temp0_400[0x4] = _mm_movehdup_ps(result)
temp0_400[0] = temp0_400[0] + result[0]
float temp0_401[0x4] = _mm_cmpeq_ss(0, temp0_400[0], 2)
float temp0_402[0x4] = _mm_and_ps(0x3f800000, temp0_401)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_401, 0xbf800000), temp0_402)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_397)
return result
