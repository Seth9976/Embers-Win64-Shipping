// 函数: sub_140027770
// 地址: 0x140027770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm0, zmm0)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0)
float zmm6[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
float zmm7[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float var_e0 = arg4[0]
float var_d8[0x4] = arg3
float var_dc = arg2[0]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg2, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float zmm8[0x4] = data_142d3f670
float temp0_17[0x4] = _mm_sub_ps(zmm8, temp0_16)
float temp0_18[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float zmm9[0x4] = arg1[6][0]
float temp0_19[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float temp0_21[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc0), zmm9)
float temp0_23[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_17, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_26[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_18), temp0_21)
float temp0_29[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_26)
float temp0_30[0x4] = _mm_insert_ps(temp0_17, temp0_12, 0x8c)
float temp0_32[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm9)
float temp0_35[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd5), temp0_18), temp0_32)
float temp0_37[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_32, temp0_11, 0x4e), temp0_12, 0x14)
float temp0_38[0x4] = _mm_insert_ps(temp0_30, temp0_11, 0x20)
float temp0_39[0x4] = _mm_blend_ps(temp0_37, temp0_17, 4)
float temp0_42[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_35)
float zmm15[0x4] = (*arg1)[0x1b]
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm9)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_18), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xc0), temp0_23)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xd5), temp0_38), temp0_52)
float temp0_58[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_29, temp0_29, 0xea), temp0_39), temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc0), temp0_23)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd5), temp0_38), temp0_60)
float temp0_66[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xea), temp0_39), temp0_63)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_23)
float temp0_71[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_38), temp0_68)
float temp0_74[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_39), temp0_71)
float zmm5[0x4] = arg1[0xf]
float temp0_75[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_75)
float zmm4[0x4] = (*arg1)[0x3d]
float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_75)
zmm6 = (*arg1)[0x3f]
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_75)
temp0_75[0].q = temp0_75 u>> 0x40
temp0_75[0] = temp0_75[0] * (*arg1)[0x3e]
float temp0_83[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_23, temp0_79, 0x4e), temp0_77, 0xc)
float temp0_84[0x4] = _mm_insert_ps(temp0_77, temp0_79, 0x88)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xd8)
float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_85)
float temp0_87[0x4] = _mm_sub_ps(temp0_85, temp0_81)
float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x78)
float temp0_92[0x4] = _mm_sub_ps(zmm8, 
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_75, temp0_75, 0x1c), temp0_79, 0x60), temp0_88))
float temp0_93[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_94[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xc0), zmm15)
float temp0_99[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), temp0_93), temp0_96)
float temp0_102[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd5), temp0_94), temp0_99)
float temp0_104[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xea), zmm15)
float temp0_107[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xd5), temp0_93), temp0_104)
float temp0_109[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_92, temp0_86, 0x9c), temp0_87, 0x60)
float temp0_112[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_94), temp0_107)
float temp0_113[0x4] = _mm_insert_ps(temp0_92, temp0_87, 0x8c)
float temp0_115[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_104, temp0_86, 0x4e), temp0_87, 0x14)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), zmm15)
float temp0_118[0x4] = _mm_insert_ps(temp0_113, temp0_86, 0x20)
float temp0_119[0x4] = _mm_blend_ps(temp0_115, temp0_92, 4)
float temp0_122[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc0), temp0_93), temp0_117)
float temp0_125[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xea), temp0_94), temp0_122)
float temp0_127[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xc0), temp0_109)
float temp0_130[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xd5), temp0_118), temp0_127)
float temp0_133[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xea), temp0_119), temp0_130)
float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xc0), temp0_109)
float temp0_138[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xd5), temp0_118), temp0_135)
float temp0_141[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_112, temp0_112, 0xea), temp0_119), temp0_138)
float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xc0), temp0_109)
float temp0_146[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xd5), temp0_118), temp0_143)
float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xea), temp0_119)
float temp0_149[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_150[0x4] = _mm_add_ps(temp0_148, temp0_146)
float temp0_151[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
float temp0_152[0x4] = _mm_sub_ps(temp0_149, temp0_151)
zmm8 = (*arg6)[2]
arg3 = *arg6
float temp0_153[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xc9)
float temp0_154[0x4] = _mm_insert_ps(zmm8, arg3, 0x10)
float zmm12[0x4] = (*arg6)[1]
float temp0_155[0x4] = _mm_insert_ps(temp0_154, zmm12, 0x20)
float temp0_156[0x4] = _mm_mul_ps(temp0_153, temp0_155)
float temp0_157[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xd2)
float temp0_158[0x4] = _mm_insert_ps(zx.o(*(arg6 + 4)), arg3, 0x20)
float temp0_160[0x4] = _mm_sub_ps(temp0_156, _mm_mul_ps(temp0_157, temp0_158))
float temp0_161[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
float temp0_162[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_163[0x4] = _mm_sub_ps(temp0_161, temp0_162)
float temp0_168[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_shuffle_ps(temp0_163, temp0_163, 0xc9), temp0_155), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_163, temp0_163, 0xd2), temp0_158))
float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xc0), temp0_58)
zmm6 = var_e0
float temp0_173[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xd5), temp0_66), temp0_170)
float temp0_176[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_160, temp0_160, 0xea), temp0_74), temp0_173)
float temp0_178[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xc0), temp0_133)
float temp0_181[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xd5), temp0_141), temp0_178)
float temp0_184[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xea), temp0_150), temp0_181)
float temp0_185[0x4] = _mm_mul_ps(temp0_160, temp0_176)
float temp0_186[0x4] = _mm_movehdup_ps(temp0_185)
temp0_186[0] = temp0_186[0] + temp0_185[0]
temp0_185[0].q = temp0_185 u>> 0x40
temp0_186[0] = temp0_186[0] + temp0_185[0]
float temp0_187[0x4] = _mm_mul_ps(temp0_168, temp0_184)
float temp0_188[0x4] = _mm_movehdup_ps(temp0_187)
temp0_188[0] = temp0_188[0] + temp0_187[0]
temp0_187[0].q = temp0_187 u>> 0x40
temp0_188[0] = temp0_188[0] + temp0_187[0]
zmm5 = (*arg1)[0x1e]
temp0_186[0] = temp0_186[0] + zmm5[0]
zmm9 = (*arg1)[0x1f]
temp0_186[0] = temp0_186[0] + zmm9[0]
zmm7 = zx.o(0)

if (not(zmm6[0] <= 9.99999975e-05f))
    float temp0_189[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0x17][0].q), (*arg1)[0x5e], 0x20)
    zmm7 = zx.o(*(arg1 + 0x17c))
    float temp0_190[0x4] = _mm_sub_ps(temp0_149, temp0_189)
    arg4 = data_142e6da00
    float temp0_195[0x4] = _mm_sub_ps(_mm_div_ps(temp0_190, arg4), 
        _mm_div_ps(_mm_sub_ps(temp0_161, __insertps_xmmps_memd_immb(zmm7, (*arg1)[0x61], 0x20)), 
            arg4))
    float temp0_198[0x4] =
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg3, zmm12, 0x10), zmm8, 0x20), temp0_195)
    zmm7 = _mm_movehdup_ps(temp0_198)
    zmm7[0] = zmm7[0] + temp0_198[0]
    temp0_198[0].q = temp0_198 u>> 0x40
    zmm7[0] = zmm7[0] + temp0_198[0]

temp0_186[0] = temp0_186[0] + temp0_188[0]
arg2 = 0x3f800000

if ((arg5 & 1) != 0)
    zmm5[0] = zmm5[0] + zmm9[0]
    arg2 = 0x3f800000
    arg2[0] = 1f / zmm5[0]

var_d8[0] = var_d8[0] * arg2[0]
zmm6[0] = zmm6[0] * arg2[0]
arg2 = var_dc
var_d8[0] = var_d8[0] * arg2[0]
var_d8[0] = var_d8[0] * arg2[0]
zmm6[0] = zmm6[0] * arg2[0]
zmm7[0] = zmm7[0] * zmm6[0]
zmm6[0] = zmm6[0] + var_d8[0]
temp0_186[0] = temp0_186[0] * zmm6[0]
temp0_186[0] = temp0_186[0] + 1f
arg2 = 0x3f800000
arg2[0] = 1f / temp0_186[0]
var_d8[0] = var_d8[0] * arg7[0]
var_d8[0] = var_d8[0] - zmm7[0]
zmm0 = *arg8
var_d8[0] = var_d8[0] - zmm0[0]
var_d8[0] = var_d8[0] * arg2[0]
zmm5[0] = zmm5[0] * var_d8[0]
float temp0_200[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc0)
float temp0_202[0x4] = _mm_insert_ps(_mm_insert_ps(arg3, zmm12, 0x10), zmm8, 0x20)
float temp0_203[0x4] = _mm_mul_ps(temp0_200, temp0_202)
zmm9[0] = zmm9[0] * var_d8[0]
arg2 = data_142d3f780
float temp0_205[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm9 ^ arg2, 0xc0), temp0_202)
float temp0_207[0x4] = _mm_mul_ps(temp0_176, _mm_shuffle_ps(var_d8, var_d8, 0xc0))
arg2 = _mm_shuffle_epi32(arg2 ^ var_d8, 0xc0)
float temp0_209[0x4] = _mm_add_ps(temp0_151, temp0_203)
float temp0_210[0x4] = __addps_xmmps_memps(temp0_205, temp0_162)
arg1[0xc] = _mm_insert_ps(temp0_209, temp0_210, 0x30)
arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_210, 1)
float temp0_213[0x4] = _mm_mul_ps(temp0_184, arg2)
(*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_210, 2)
var_d8[0] = var_d8[0] + zmm0[0]
zmm4 = arg1[0xe]
zmm9 = arg1[0xf]
float temp0_215[0x4] = _mm_mul_ps(zmm4, zx.o(0))
float temp0_216[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0)
float temp0_218[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_216)
arg2 = data_142d3f7c0
float temp0_220[0x4] = _mm_add_ps(_mm_mul_ps(temp0_218, arg2), temp0_215)
float temp0_221[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0x55)
float temp0_223[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_221)
zmm0 = data_142d3f7d0
float temp0_225[0x4] = _mm_add_ps(_mm_mul_ps(temp0_223, zmm0), temp0_220)
float temp0_226[0x4] = _mm_shuffle_ps(temp0_207, temp0_207, 0xaa)
float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_226)
float zmm11[0x4] = data_142d3f7b0
float temp0_230[0x4] = _mm_add_ps(_mm_mul_ps(temp0_228, zmm11), temp0_225)
zmm5 = data_142d3f640
float temp0_231[0x4] = _mm_mul_ps(temp0_230, zmm5)
float temp0_232[0x4] = _mm_mul_ps(zx.o(0), zmm9)
float temp0_233[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0)
float temp0_237[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0x1b), temp0_233), arg2), temp0_232)
float temp0_238[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0x55)
float temp0_242[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm9, zmm9, 1), temp0_238), zmm0), temp0_237)
float temp0_243[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0xaa)
float temp0_248[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm9, zmm9, 0xb1), temp0_243), zmm11), 
        temp0_242), 
    zmm5)
float temp0_249[0x4] = _mm_add_ps(temp0_231, zmm4)
float temp0_250[0x4] = _mm_mul_ps(temp0_249, temp0_249)
float temp0_252[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_250, temp0_250[0].q), temp0_250)
float temp0_253[0x4] = _mm_movehdup_ps(temp0_252)
temp0_253[0] = temp0_253[0] + temp0_252[0]
float temp0_254[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_253[0], 6)
zmm4 = 0x3f000000
temp0_253[0] = temp0_253[0] * 0.5f
float temp0_255[0x4] = _mm_rsqrt_ss(temp0_253[0], temp0_253[0])
temp0_255[0] = temp0_255[0] * temp0_255[0]
temp0_255[0] = temp0_255[0] * temp0_253[0]
zmm5 = 0x3f000000
zmm5[0] = 0.5f - temp0_255[0]
zmm5[0] = zmm5[0] * temp0_255[0]
zmm5[0] = zmm5[0] + temp0_255[0]
zmm5[0] = zmm5[0] * zmm5[0]
zmm5[0] = zmm5[0] * temp0_253[0]
arg2 = 0x3f000000
arg2[0] = 0.5f - zmm5[0]
zmm15 = _mm_andnot_ps(temp0_254, 0xffffffff)
arg2[0] = arg2[0] * zmm5[0]
arg2[0] = arg2[0] + zmm5[0]
float temp0_258[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_249)
float temp0_259[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
zmm0 = data_142d3f660
arg2 = _mm_and_ps(temp0_258, temp0_259)
zmm15 = _mm_or_ps(_mm_andnot_ps(temp0_259, zmm0), arg2)
float temp0_263[0x4] = _mm_add_ps(temp0_248, zmm9)
float temp0_264[0x4] = _mm_mul_ps(temp0_263, temp0_263)
float temp0_266[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_264, temp0_264[0].q), temp0_264)
float temp0_267[0x4] = _mm_movehdup_ps(temp0_266)
temp0_267[0] = temp0_267[0] + temp0_266[0]
float zmm10[0x4] = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_267[0], 6), 0xffffffff)
temp0_267[0] = temp0_267[0] * 0.5f
float temp0_270[0x4] = _mm_rsqrt_ss(temp0_267[0], temp0_267[0])
temp0_270[0] = temp0_270[0] * temp0_270[0]
temp0_270[0] = temp0_270[0] * temp0_267[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_270[0]
zmm7[0] = zmm7[0] * temp0_270[0]
zmm7[0] = zmm7[0] + temp0_270[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_267[0]
zmm4[0] = 0.5f - zmm7[0]
zmm4[0] = zmm4[0] * zmm7[0]
zmm4[0] = zmm4[0] + zmm7[0]
float temp0_272[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_263)
float temp0_273[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)
zmm4 = _mm_and_ps(temp0_272, temp0_273)
zmm10 = _mm_or_ps(_mm_andnot_ps(temp0_273, zmm0), zmm4)
arg1[0xe] = zmm15
arg4 = _mm_shuffle_epi32(zmm15, 0xc9)
float temp0_278[0x4] = _mm_mul_ps(zmm15, zmm10)
float temp0_280[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_278, temp0_278[0].q), temp0_278)
float temp0_281[0x4] = _mm_movehdup_ps(temp0_280)
temp0_281[0] = temp0_281[0] + temp0_280[0]
float temp0_282[0x4] = _mm_cmpeq_ss(0, temp0_281[0], 2)
arg2 = _mm_and_ps(temp0_282, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_282, 0xbf800000), arg2)
float temp0_287[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm10)
arg1[0xf] = temp0_287
arg2 = (*arg1)[6]
zmm4 = arg1[1][0]
float temp0_288[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), arg2, 0x20)
float temp0_289[0x4] = _mm_insert_ps(arg2, zmm4, 0x10)
float temp0_290[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x14)), zmm4, 0x20)
zmm4 = _mm_shuffle_epi32(zmm15, 0xd2)
float temp0_295[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_289, (*arg1)[5], 0x20), arg4), 
    _mm_mul_ps(temp0_290, zmm4))
arg2 = _mm_shuffle_epi32(zmm15, 0xff)
float temp0_297[0x4] = _mm_add_ps(temp0_295, temp0_295)
float temp0_299[0x4] = _mm_add_ps(temp0_288, _mm_mul_ps(arg2, temp0_297))
float temp0_306[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_297, temp0_297, 0xd2), arg4), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_297, temp0_297, 0xc9), zmm4)), 
        temp0_299), 
    temp0_209)
zmm4 = (*arg1)[0x12]
zmm5 = arg1[4][0]
float temp0_307[0x4] = _mm_shuffle_ps(temp0_287, temp0_287, 0xc9)
float temp0_308[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), zmm4, 0x20)
float temp0_311[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm4, zmm5, 0x10), (*arg1)[0x11], 0x20), temp0_307)
float temp0_312[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm5, 0x20)
float temp0_313[0x4] = _mm_shuffle_ps(temp0_287, temp0_287, 0xd2)
float temp0_315[0x4] = _mm_sub_ps(temp0_311, _mm_mul_ps(temp0_312, temp0_313))
float temp0_316[0x4] = _mm_add_ps(temp0_315, temp0_315)
float temp0_319[0x4] =
    _mm_add_ps(temp0_308, _mm_mul_ps(_mm_shuffle_ps(temp0_287, temp0_287, 0xff), temp0_316))
float temp0_326[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_316, temp0_316, 0xd2), temp0_307), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_316, temp0_316, 0xc9), temp0_313)), 
        temp0_319), 
    temp0_210)
arg1[8] = _mm_insert_ps(temp0_306, temp0_326, 0x30)
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_326, 1)
*arg8 = var_d8[0]
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_326, 2)
zmm4 = (*arg1)[0x3b]
float temp0_330[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
zmm0 = *arg1
float temp0_331[0x4] = _mm_mul_ps(temp0_330, zmm0)
zmm5 = arg1[0xe][0]
float temp0_332[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
arg4 = (*arg1)[3]
arg2 = (*arg1)[2]
arg3 = (*arg1)[1]
float temp0_336[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg4, arg2, 0x10), arg3, 0x20), zmm0, 0x30), 
    temp0_332)
zmm5 = (*arg1)[0x39]
zmm7 = data_142d3f7c0
float temp0_338[0x4] = _mm_add_ps(_mm_mul_ps(temp0_336, zmm7), temp0_331)
float temp0_339[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_342[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), zmm0, 0x20), arg3, 0x30), temp0_339)
zmm10 = data_142d3f7d0
float temp0_344[0x4] = _mm_add_ps(_mm_mul_ps(temp0_342, zmm10), temp0_338)
zmm5 = (*arg1)[0x3a]
float temp0_345[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_351[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg3, zmm0, 0x10), arg4, 0x20), arg2, 0x30), 
            temp0_345), 
        zmm11), 
    temp0_344)
arg2 = arg1[3]
zmm5 = arg1[0xf][0]
float temp0_352[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm4 = (*arg1)[0xf]
arg4 = (*arg1)[0xe]
zmm0 = (*arg1)[0xd]
float temp0_356[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, arg4, 0x10), zmm0, 0x20), arg2, 0x30), 
    temp0_352)
zmm5 = (*arg1)[0x3f]
float temp0_358[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), arg2)
float temp0_359[0x4] = _mm_mul_ps(temp0_356, zmm7)
zmm7 = (*arg1)[0x3d]
float temp0_360[0x4] = _mm_add_ps(temp0_359, temp0_358)
float temp0_361[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_366[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), arg2, 0x20), zmm0, 0x30), 
            temp0_361), 
        zmm10), 
    temp0_360)
float temp0_369[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, arg2, 0x10), zmm4, 0x20), arg4, 0x30)
arg2 = (*arg1)[0x3e]
float result[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_369, _mm_shuffle_ps(arg2, arg2, 0)), zmm11), temp0_366)
arg1[0xa] = temp0_351
float temp0_373[0x4] = _mm_mul_ps(temp0_351, result)
float temp0_375[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_373, temp0_373[0].q), temp0_373)
float temp0_376[0x4] = _mm_movehdup_ps(temp0_375)
temp0_376[0] = temp0_376[0] + temp0_375[0]
float temp0_377[0x4] = _mm_cmpeq_ss(0, temp0_376[0], 2)
float temp0_378[0x4] = _mm_and_ps(0x3f800000, temp0_377)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_377, 0xbf800000), temp0_378)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), result)
return result
