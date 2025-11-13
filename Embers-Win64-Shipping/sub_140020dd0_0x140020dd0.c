// 函数: sub_140020dd0
// 地址: 0x140020dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_98[0x4] = arg5
uint32_t var_f0 = arg4[0]
float var_ec = arg2[0]
float zmm0[0x4] = *arg10
float zmm4[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
float zmm5[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0)
float zmm6[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
_mm_movemask_ps(zmm0)
float temp0_9[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_10[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_11[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0xd8)
float temp0_12[0x4] = _mm_add_ps(temp0_6, temp0_11)
float temp0_13[0x4] = _mm_sub_ps(temp0_11, temp0_6)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
float temp0_17[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_14)
float zmm8[0x4] = data_142d3f670
float temp0_18[0x4] = _mm_sub_ps(zmm8, temp0_17)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float zmm9[0x4] = arg1[6][0]
float temp0_20[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float temp0_22[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc0), zmm9)
float temp0_24[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_18, temp0_12, 0x9c), temp0_13, 0x60)
float temp0_27[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xea), temp0_19), temp0_22)
float temp0_30[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), temp0_20), temp0_27)
float temp0_31[0x4] = _mm_insert_ps(temp0_18, temp0_13, 0x8c)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), zmm9)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd5), temp0_19), temp0_33)
float temp0_38[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_27, temp0_12, 0x4e), temp0_13, 0x14)
float temp0_39[0x4] = _mm_insert_ps(temp0_31, temp0_12, 0x20)
float temp0_40[0x4] = _mm_blend_ps(temp0_38, temp0_18, 4)
float temp0_43[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc0), temp0_20), temp0_36)
arg4 = (*arg1)[0x1b]
float temp0_45[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xd5), zmm9)
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_45)
float temp0_51[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xea), temp0_20), temp0_48)
float temp0_53[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xc0), temp0_24)
float temp0_56[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xd5), temp0_39), temp0_53)
float temp0_59[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_30, temp0_30, 0xea), temp0_40), temp0_56)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xc0), temp0_24)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xd5), temp0_39), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_43, temp0_43, 0xea), temp0_40), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xc0), temp0_24)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xd5), temp0_39), temp0_69)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xea), temp0_40), temp0_72)
zmm5 = arg1[0xf]
float temp0_76[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_76)
zmm4 = (*arg1)[0x3d]
float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_76)
zmm6 = (*arg1)[0x3f]
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_76)
temp0_76[0].q = temp0_76 u>> 0x40
temp0_76[0] = temp0_76[0] * (*arg1)[0x3e]
float temp0_84[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_64, temp0_80, 0x4e), temp0_78, 0xc)
float temp0_85[0x4] = _mm_insert_ps(temp0_78, temp0_80, 0x88)
float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xd8)
float temp0_87[0x4] = _mm_add_ps(temp0_82, temp0_86)
float temp0_88[0x4] = _mm_sub_ps(temp0_86, temp0_82)
float temp0_89[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0x78)
float temp0_93[0x4] = _mm_sub_ps(zmm8, 
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_76, temp0_76, 0x1c), temp0_80, 0x60), temp0_89))
float temp0_94[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_95[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xc0), arg4)
float temp0_100[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xea), temp0_94), temp0_97)
float temp0_103[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), temp0_95), temp0_100)
float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), arg4)
float temp0_108[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xd5), temp0_94), temp0_105)
float temp0_110[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_93, temp0_87, 0x9c), temp0_88, 0x60)
float temp0_113[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xc0), temp0_95), temp0_108)
float temp0_114[0x4] = _mm_insert_ps(temp0_93, temp0_88, 0x8c)
float temp0_116[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_48, temp0_87, 0x4e), temp0_88, 0x14)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_88, temp0_88, 0xd5), arg4)
float temp0_119[0x4] = _mm_insert_ps(temp0_114, temp0_87, 0x20)
float temp0_120[0x4] = _mm_blend_ps(temp0_116, temp0_93, 4)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_94), temp0_118)
arg4 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_93, temp0_93, 0xea), temp0_95), temp0_123)
float temp0_128[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xc0), temp0_110)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xd5), temp0_119), temp0_128)
float temp0_134[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xea), temp0_120), temp0_131)
float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xc0), temp0_110)
float temp0_139[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xd5), temp0_119), temp0_136)
float temp0_142[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0xea), temp0_120), temp0_139)
float temp0_144[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xc0), temp0_110)
float temp0_147[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xd5), temp0_119), temp0_144)
arg4 = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0xea), temp0_120)
float temp0_150[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
arg4 = _mm_add_ps(arg4, temp0_147)
float temp0_152[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
float temp0_153[0x4] = _mm_sub_ps(temp0_150, temp0_152)
zmm5 = (*arg7)[2]
float zmm13[0x4] = *arg7
float temp0_154[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xc9)
float var_d8[0x4] = zmm5
float temp0_155[0x4] = _mm_insert_ps(zmm5, zmm13, 0x10)
zmm6 = (*arg7)[1]
float var_e8 = zmm6[0]
float temp0_156[0x4] = _mm_insert_ps(temp0_155, zmm6, 0x20)
float temp0_157[0x4] = _mm_mul_ps(temp0_154, temp0_156)
float temp0_158[0x4] = _mm_shuffle_ps(temp0_153, temp0_153, 0xd2)
float temp0_159[0x4] = _mm_insert_ps(zx.o(*(arg7 + 4)), zmm13, 0x20)
float temp0_161[0x4] = _mm_sub_ps(temp0_157, _mm_mul_ps(temp0_158, temp0_159))
float temp0_162[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
float temp0_163[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_164[0x4] = _mm_sub_ps(temp0_162, temp0_163)
float temp0_169[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_shuffle_ps(temp0_164, temp0_164, 0xc9), temp0_156), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_164, temp0_164, 0xd2), temp0_159))
float temp0_171[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xc0), temp0_59)
float temp0_174[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xd5), temp0_67), temp0_171)
float temp0_177[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_161, temp0_161, 0xea), temp0_75), temp0_174)
float temp0_179[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0xc0), temp0_134)
float temp0_182[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0xd5), temp0_142), temp0_179)
float temp0_185[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0xea), arg4), temp0_182)
float temp0_186[0x4] = _mm_mul_ps(temp0_161, temp0_177)
float temp0_187[0x4] = _mm_movehdup_ps(temp0_186)
temp0_187[0] = temp0_187[0] + temp0_186[0]
temp0_186[0].q = temp0_186 u>> 0x40
temp0_187[0] = temp0_187[0] + temp0_186[0]
float temp0_188[0x4] = _mm_mul_ps(temp0_169, temp0_185)
float temp0_189[0x4] = _mm_movehdup_ps(temp0_188)
temp0_189[0] = temp0_189[0] + temp0_188[0]
temp0_188[0].q = temp0_188 u>> 0x40
temp0_189[0] = temp0_189[0] + temp0_188[0]
zmm0 = (*arg1)[0x1e]
temp0_187[0] = temp0_187[0] + zmm0[0]
float zmm14[0x4] = (*arg1)[0x1f]
temp0_187[0] = temp0_187[0] + zmm14[0]
temp0_187[0] = temp0_187[0] + temp0_189[0]
float (* result)[0x4]
result.b = arg6
zmm6 = zx.o(0)
zmm5 = var_f0

if (not(zmm5[0] <= 9.99999975e-05f))
    float temp0_190[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0x17][0].q), (*arg1)[0x5e], 0x20)
    arg4 = zx.o(*(arg1 + 0x17c))
    float temp0_191[0x4] = _mm_sub_ps(temp0_150, temp0_190)
    arg2 = data_142e6da00
    float temp0_196[0x4] = _mm_sub_ps(_mm_div_ps(temp0_191, arg2), 
        _mm_div_ps(_mm_sub_ps(temp0_162, __insertps_xmmps_memd_immb(arg4, (*arg1)[0x61], 0x20)), 
            arg2))
    float temp0_199[0x4] = _mm_mul_ps(
        _mm_insert_ps(__insertps_xmmps_memd_immb(zmm13, var_e8, 0x10), var_d8, 0x20), temp0_196)
    zmm6 = _mm_movehdup_ps(temp0_199)
    zmm6[0] = zmm6[0] + temp0_199[0]
    temp0_199[0].q = temp0_199 u>> 0x40
    zmm6[0] = zmm6[0] + temp0_199[0]

arg5 = 0x3f800000

if ((result.b & 1) != 0)
    zmm0[0] = zmm0[0] + zmm14[0]
    arg5 = 0x3f800000
    arg5[0] = 1f / zmm0[0]

arg3[0] = arg3[0] * arg5[0]
zmm5[0] = zmm5[0] * arg5[0]
arg2 = var_ec
arg3[0] = arg3[0] * arg2[0]
arg3[0] = arg3[0] * arg2[0]
zmm5[0] = zmm5[0] * arg2[0]
zmm6[0] = zmm6[0] * zmm5[0]
zmm5[0] = zmm5[0] + arg3[0]
temp0_187[0] = temp0_187[0] * zmm5[0]
temp0_187[0] = temp0_187[0] + 1f
arg2 = 0x3f800000
arg2[0] = 1f / temp0_187[0]
arg3[0] = arg3[0] * arg8[0]
arg3[0] = arg3[0] - zmm6[0]
arg4 = *arg9
arg3[0] = arg3[0] f- arg4[0]
arg3[0] = arg3[0] * arg2[0]
zmm0[0] = zmm0[0] * arg3[0]
float temp0_201[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc0)
float temp0_203[0x4] = _mm_insert_ps(__insertps_xmmps_memd_immb(zmm13, var_e8, 0x10), var_d8, 0x20)
float temp0_204[0x4] = _mm_mul_ps(temp0_201, temp0_203)
zmm14[0] = zmm14[0] * arg3[0]
arg2 = data_142d3f780
float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm14 ^ arg2, 0xc0), temp0_203)
float temp0_208[0x4] = _mm_mul_ps(temp0_177, _mm_shuffle_ps(arg3, arg3, 0xc0))
arg2 = _mm_shuffle_epi32(arg2 ^ arg3, 0xc0)
float temp0_210[0x4] = _mm_add_ps(temp0_152, temp0_204)
float temp0_211[0x4] = __addps_xmmps_memps(temp0_206, temp0_163)
arg1[0xc] = _mm_insert_ps(temp0_210, temp0_211, 0x30)
arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_211, 1)
float temp0_214[0x4] = _mm_mul_ps(temp0_185, arg2)
(*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_211, 2)
arg3[0] = arg3[0] f+ arg4[0]
zmm4 = arg1[0xe]
zmm13 = arg1[0xf]
float temp0_216[0x4] = _mm_mul_ps(zmm4, zx.o(0))
float temp0_217[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0)
float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_217)
float zmm12[0x4] = data_142d3f7c0
float temp0_221[0x4] = _mm_add_ps(_mm_mul_ps(temp0_219, zmm12), temp0_216)
float temp0_222[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0x55)
float temp0_224[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_222)
arg2 = data_142d3f7d0
float temp0_226[0x4] = _mm_add_ps(_mm_mul_ps(temp0_224, arg2), temp0_221)
float temp0_227[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xaa)
float temp0_229[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_227)
zmm9 = data_142d3f7b0
float temp0_231[0x4] = _mm_add_ps(_mm_mul_ps(temp0_229, zmm9), temp0_226)
zmm5 = data_142d3f640
float temp0_232[0x4] = _mm_mul_ps(temp0_231, zmm5)
float temp0_233[0x4] = _mm_mul_ps(zx.o(0), zmm13)
float temp0_234[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0)
arg4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_234), zmm12), 
    temp0_233)
float temp0_239[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0x55)
float temp0_243[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_239), arg2), arg4)
float temp0_244[0x4] = _mm_shuffle_ps(temp0_214, temp0_214, 0xaa)
float temp0_249[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_244), zmm9), 
        temp0_243), 
    zmm5)
float temp0_250[0x4] = _mm_add_ps(temp0_232, zmm4)
arg4 = _mm_mul_ps(temp0_250, temp0_250)
float temp0_253[0x4] = _mm_add_ps(_mm_unpackhi_pd(arg4, arg4[0].q), arg4)
arg4 = _mm_movehdup_ps(temp0_253)
arg4[0] = arg4[0] f+ temp0_253[0]
float temp0_255[0x4] = _mm_cmpeq_ss(0x322bcc77, arg4[0], 6)
zmm4 = 0x3f000000
arg5 = arg4
arg5[0] = arg5[0] * 0.5f
arg4 = _mm_rsqrt_ss(arg4[0], arg4[0])
zmm5 = arg4
zmm5[0] = zmm5[0] f* arg4[0]
zmm5[0] = zmm5[0] * arg5[0]
zmm6 = 0x3f000000
zmm6[0] = 0.5f - zmm5[0]
zmm6[0] = zmm6[0] f* arg4[0]
zmm6[0] = zmm6[0] f+ arg4[0]
arg4 = zmm6
arg4[0] = arg4[0] f* zmm6[0]
arg4[0] = arg4[0] f* arg5[0]
zmm5 = 0x3f000000
zmm5[0] = 0.5f f- arg4[0]
float zmm15[0x4] = _mm_andnot_ps(temp0_255, 0xffffffff)
zmm5[0] = zmm5[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm6[0]
float temp0_259[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_250)
float temp0_260[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
arg2 = data_142d3f660
zmm5 = _mm_and_ps(temp0_259, temp0_260)
zmm15 = _mm_or_ps(_mm_andnot_ps(temp0_260, arg2), zmm5)
float temp0_264[0x4] = _mm_add_ps(temp0_249, zmm13)
float temp0_265[0x4] = _mm_mul_ps(temp0_264, temp0_264)
float temp0_267[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_265, temp0_265[0].q), temp0_265)
float temp0_268[0x4] = _mm_movehdup_ps(temp0_267)
temp0_268[0] = temp0_268[0] + temp0_267[0]
float zmm11[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_268[0], 6), 0xffffffff)
arg4 = temp0_268
arg4[0] = arg4[0] f* 0.5f
float temp0_271[0x4] = _mm_rsqrt_ss(temp0_268[0], temp0_268[0])
temp0_271[0] = temp0_271[0] * temp0_271[0]
temp0_271[0] = temp0_271[0] f* arg4[0]
arg5 = 0x3f000000
arg5[0] = 0.5f - temp0_271[0]
arg5[0] = arg5[0] * temp0_271[0]
arg5[0] = arg5[0] + temp0_271[0]
arg5[0] = arg5[0] * arg5[0]
arg5[0] = arg5[0] f* arg4[0]
zmm4[0] = 0.5f - arg5[0]
zmm4[0] = zmm4[0] * arg5[0]
zmm4[0] = zmm4[0] + arg5[0]
float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_264)
float temp0_274[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0)
zmm4 = _mm_and_ps(temp0_273, temp0_274)
zmm11 = _mm_or_ps(_mm_andnot_ps(temp0_274, arg2), zmm4)
arg1[0xe] = zmm15
zmm4 = _mm_shuffle_epi32(zmm15, 0xc9)
float temp0_279[0x4] = _mm_mul_ps(zmm15, zmm11)
float temp0_281[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_279, temp0_279[0].q), temp0_279)
float temp0_282[0x4] = _mm_movehdup_ps(temp0_281)
temp0_282[0] = temp0_282[0] + temp0_281[0]
float temp0_283[0x4] = _mm_cmpeq_ss(0, temp0_282[0], 2)
uint32_t temp0_284[0x4] = _mm_and_ps(temp0_283, 0x3f800000)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_283, 0xbf800000), temp0_284)
float temp0_288[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm11)
arg1[0xf] = temp0_288
arg4 = (*arg1)[6]
zmm5 = arg1[1][0]
float temp0_289[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), arg4, 0x20)
float temp0_290[0x4] = _mm_insert_ps(arg4, zmm5, 0x10)
arg4 = _mm_insert_ps(zx.o(*(arg1 + 0x14)), zmm5, 0x20)
zmm5 = _mm_shuffle_epi32(zmm15, 0xd2)
float temp0_296[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_290, (*arg1)[5], 0x20), zmm4), 
    _mm_mul_ps(arg4, zmm5))
uint32_t temp0_297[0x4] = _mm_shuffle_epi32(zmm15, 0xff)
float temp0_298[0x4] = _mm_add_ps(temp0_296, temp0_296)
float temp0_300[0x4] = _mm_add_ps(temp0_289, _mm_mul_ps(temp0_297, temp0_298))
arg4 = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0xd2), zmm4), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0xc9), zmm5)), 
        temp0_300), 
    temp0_210)
zmm5 = (*arg1)[0x12]
zmm6 = arg1[4][0]
float temp0_308[0x4] = _mm_shuffle_ps(temp0_288, temp0_288, 0xc9)
float temp0_309[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), zmm5, 0x20)
float temp0_312[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm5, zmm6, 0x10), (*arg1)[0x11], 0x20), temp0_308)
float temp0_313[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm6, 0x20)
float temp0_314[0x4] = _mm_shuffle_ps(temp0_288, temp0_288, 0xd2)
float temp0_316[0x4] = _mm_sub_ps(temp0_312, _mm_mul_ps(temp0_313, temp0_314))
float temp0_317[0x4] = _mm_add_ps(temp0_316, temp0_316)
float temp0_320[0x4] =
    _mm_add_ps(temp0_309, _mm_mul_ps(_mm_shuffle_ps(temp0_288, temp0_288, 0xff), temp0_317))
float temp0_327[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_317, temp0_317, 0xd2), temp0_308), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_317, temp0_317, 0xc9), temp0_314)), 
        temp0_320), 
    temp0_211)
arg1[8] = _mm_insert_ps(arg4, temp0_327, 0x30)
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_327, 1)
*arg9 = arg3[0]
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_327, 2)
zmm0 = (*arg1)[0x3b]
float temp0_331[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
arg3 = *arg1
float temp0_332[0x4] = _mm_mul_ps(temp0_331, arg3)
zmm5 = arg1[0xe][0]
float temp0_333[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm4 = (*arg1)[3]
arg4 = (*arg1)[2]
arg2 = (*arg1)[1]
float temp0_337[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, arg4, 0x10), arg2, 0x20), arg3, 0x30), 
    temp0_333)
zmm5 = (*arg1)[0x39]
float temp0_339[0x4] = _mm_add_ps(_mm_mul_ps(temp0_337, zmm12), temp0_332)
float temp0_340[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_343[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), arg3, 0x20), arg2, 0x30), temp0_340)
zmm8 = data_142d3f7d0
float temp0_345[0x4] = _mm_add_ps(_mm_mul_ps(temp0_343, zmm8), temp0_339)
zmm5 = (*arg1)[0x3a]
float temp0_346[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_352[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg2, arg3, 0x10), zmm4, 0x20), arg4, 0x30), 
            temp0_346), 
        zmm9), 
    temp0_345)
arg4 = arg1[3]
zmm0 = arg1[0xf][0]
float temp0_353[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
zmm5 = (*arg1)[0xf]
zmm4 = (*arg1)[0xe]
arg3 = (*arg1)[0xd]
float temp0_357[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, zmm4, 0x10), arg3, 0x20), arg4, 0x30), 
    temp0_353)
zmm0 = (*arg1)[0x3f]
float temp0_359[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg4)
float temp0_360[0x4] = _mm_mul_ps(temp0_357, zmm12)
arg5 = (*arg1)[0x3d]
float temp0_361[0x4] = _mm_add_ps(temp0_360, temp0_359)
float temp0_362[0x4] = _mm_shuffle_ps(arg5, arg5, 0)
float temp0_367[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), arg4, 0x20), arg3, 0x30), 
            temp0_362), 
        zmm8), 
    temp0_361)
float temp0_370[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg3, arg4, 0x10), zmm5, 0x20), zmm4, 0x30)
arg4 = (*arg1)[0x3e]
float temp0_374[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_370, _mm_shuffle_ps(arg4, arg4, 0)), zmm9), temp0_367)
arg1[0xa] = temp0_352
float temp0_375[0x4] = _mm_mul_ps(temp0_352, temp0_374)
float temp0_377[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_375, temp0_375[0].q), temp0_375)
float temp0_378[0x4] = _mm_movehdup_ps(temp0_377)
temp0_378[0] = temp0_378[0] + temp0_377[0]
float temp0_379[0x4] = _mm_cmpeq_ss(0, temp0_378[0], 2)
float zmm10[0x4] = _mm_and_ps(0x3f800000, temp0_379)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_379, 0xbf800000), zmm10)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_374)
return result
