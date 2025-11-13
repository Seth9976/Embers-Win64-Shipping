// 函数: sub_1400337f0
// 地址: 0x1400337f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_f0 = arg4[0]
float var_ec = arg2[0]
float zmm5[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0)
arg4 = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0)
float zmm6[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_4, 0), temp0_2, 0x6c)
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_10[0x4] = _mm_add_ps(temp0_6, temp0_9)
float temp0_11[0x4] = _mm_sub_ps(temp0_9, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_4, zx.o(0), 0xe5), temp0_2, 0xc)
float temp0_14[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x78)
float temp0_18[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0, _mm_shuffle_ps(temp0_4, _mm_shuffle_ps(temp0, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_14)
float zmm10[0x4] = data_142d3f670
float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_18)
zmm6 = arg1[6][0]
float zmm7[0x4] = (*arg1)[0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm6)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm6)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm6)
float temp0_44[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xc0), temp0_21), temp0_41)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xea), temp0_23), temp0_44)
float temp0_48[0x4] = _mm_shuffle_ps(temp0_10, temp0_19, 2)
float temp0_51[0x4] = _mm_shuffle_ps(temp0_48, 
    _mm_shuffle_ps(temp0_11, _mm_shuffle_ps(temp0_48, zx.o(0), 0x22), 0x31), 0x82)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_19, temp0_11, 0xa1)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_52, zx.o(0), 0x42)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_11, temp0_10, 0x50)
float temp0_56[0x4] = _mm_shuffle_ps(temp0_52, _mm_shuffle_ps(temp0_10, temp0_53, 0x30), 0x82)
float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, 
    _mm_shuffle_ps(temp0_19, _mm_shuffle_ps(temp0_54, zx.o(0), 0x42), 0x32), 0x82)
float temp0_61[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xc0), temp0_51)
float temp0_64[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xd5), temp0_56), temp0_61)
float temp0_67[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xea), temp0_59), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_51)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), temp0_56), temp0_69)
float temp0_75[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_59), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), temp0_51)
float temp0_80[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), temp0_56), temp0_77)
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59)
zmm5 = arg1[0xf]
float temp0_83[0x4] = _mm_add_ps(zmm5, zmm5)
float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_83)
arg4 = (*arg1)[0x3d]
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_83)
zmm6 = (*arg1)[0x3f]
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_83)
temp0_83[0].q = temp0_83 u>> 0x40
temp0_83[0] = temp0_83[0] * (*arg1)[0x3e]
float temp0_90[0x4] = _mm_add_ps(temp0_82, temp0_80)
float temp0_92[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_87, 0), temp0_85, 0x6c)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x78)
float temp0_94[0x4] = _mm_add_ps(temp0_89, temp0_93)
float temp0_95[0x4] = _mm_sub_ps(temp0_93, temp0_89)
float temp0_97[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_87, zx.o(0), 0xe5), temp0_85, 0xc)
float temp0_98[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x78)
float temp0_103[0x4] = _mm_sub_ps(zmm10, 
    _mm_add_ps(
        _mm_shuffle_ps(temp0_83, 
            _mm_shuffle_ps(temp0_87, _mm_shuffle_ps(temp0_83, zx.o(0), 0x40), 0x31), 0x80), 
        temp0_98))
zmm5 = (*arg1)[0x1d]
float zmm11[0x4] = (*arg1)[0x1b]
float temp0_105[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_107[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm5, zx.o(0), 0x30), 0x84)
float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xc0), zmm11)
float temp0_112[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xea), temp0_105), temp0_109)
float temp0_115[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd5), temp0_107), temp0_112)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xea), zmm11)
float temp0_120[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xd5), temp0_105), temp0_117)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc0), temp0_107), temp0_120)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd5), zmm11)
float temp0_128[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc0), temp0_105), temp0_125)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xea), temp0_107), temp0_128)
float temp0_132[0x4] = _mm_shuffle_ps(temp0_94, temp0_103, 2)
float var_c8[0x4] = zx.o(0)
float temp0_135[0x4] = _mm_shuffle_ps(temp0_132, 
    _mm_shuffle_ps(temp0_95, _mm_shuffle_ps(temp0_132, zx.o(0), 0x22), 0x31), 0x82)
float temp0_136[0x4] = _mm_shuffle_ps(temp0_103, temp0_95, 0xa1)
float temp0_137[0x4] = _mm_shuffle_ps(temp0_136, zx.o(0), 0x42)
float temp0_138[0x4] = _mm_shuffle_ps(temp0_95, temp0_94, 0x50)
float temp0_140[0x4] = _mm_shuffle_ps(temp0_136, _mm_shuffle_ps(temp0_94, temp0_137, 0x30), 0x82)
float temp0_143[0x4] = _mm_shuffle_ps(temp0_138, 
    _mm_shuffle_ps(temp0_103, _mm_shuffle_ps(temp0_138, zx.o(0), 0x42), 0x32), 0x82)
float temp0_145[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xc0), temp0_135)
float temp0_148[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xd5), temp0_140), temp0_145)
float temp0_151[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_115, temp0_115, 0xea), temp0_143), temp0_148)
float temp0_153[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xc0), temp0_135)
float temp0_156[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xd5), temp0_140), temp0_153)
float temp0_159[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_123, temp0_123, 0xea), temp0_143), temp0_156)
float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xc0), temp0_135)
float temp0_164[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xd5), temp0_140), temp0_161)
float temp0_167[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_131, temp0_131, 0xea), temp0_143), temp0_164)
zmm11 = zx.o(arg1[8][0].q)[0].q | (*arg1)[0x22][0].q << 0x40
arg4 = zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40
float var_b8[0x4] = arg4
float temp0_168[0x4] = _mm_sub_ps(zmm11, arg4)
arg4 = (*arg6)[2]
float zmm13[0x4] = *arg6
float temp0_169[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xc9)
float var_d8[0x4] = arg4
float temp0_170[0x4] = _mm_unpacklo_ps(arg4, zmm13[0].q)
float zmm4[0x4] = (*arg6)[1]
float var_e8[0x4] = zmm4
arg4 = temp0_170[0].q | zmm4[0].q << 0x40
float temp0_171[0x4] = _mm_mul_ps(temp0_169, arg4)
float temp0_172[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xd2)
zmm4 = zx.o(*(arg6 + 4))[0].q | zmm13[0].q << 0x40
float temp0_174[0x4] = _mm_sub_ps(temp0_171, _mm_mul_ps(temp0_172, zmm4))
float zmm9[0x4] = zx.o(*(arg1 + 0x8c))[0].q | (*arg1)[0x25][0].q << 0x40
zmm10 = zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40
float temp0_175[0x4] = _mm_sub_ps(zmm9, zmm10)
float temp0_180[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xc9), arg4), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_175, temp0_175, 0xd2), zmm4))
float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xc0), temp0_67)
float temp0_185[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xd5), temp0_75), temp0_182)
float temp0_188[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0xea), temp0_90), temp0_185)
float temp0_190[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xc0), temp0_151)
float temp0_193[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xd5), temp0_159), temp0_190)
float (* rax)[0x4]
rax.b = arg5
float temp0_196[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_180, temp0_180, 0xea), temp0_167), temp0_193)
float temp0_197[0x4] = _mm_mul_ps(temp0_174, temp0_188)
float temp0_198[0x4] = _mm_shuffle_ps(temp0_197, temp0_197, 0xe5)
temp0_198[0] = temp0_198[0] + temp0_197[0]
temp0_197[0].q = temp0_197 u>> 0x40
temp0_198[0] = temp0_198[0] + temp0_197[0]
float temp0_199[0x4] = _mm_mul_ps(temp0_180, temp0_196)
float temp0_200[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0xe5)
temp0_200[0] = temp0_200[0] + temp0_199[0]
temp0_199[0].q = temp0_199 u>> 0x40
temp0_200[0] = temp0_200[0] + temp0_199[0]
float zmm0[0x4] = (*arg1)[0x1e]
temp0_198[0] = temp0_198[0] + zmm0[0]
float zmm15[0x4] = (*arg1)[0x1f]
temp0_198[0] = temp0_198[0] + zmm15[0]
zmm6 = var_f0
float zmm8[0x4]

if (not(zmm6[0] <= 9.99999975e-05f))
    float temp0_201[0x4] =
        _mm_sub_ps(zmm11, zx.o(arg1[0x17][0].q)[0].q | (*arg1)[0x5e][0].q << 0x40)
    zmm8 = data_142e6da00
    float temp0_205[0x4] = _mm_sub_ps(_mm_div_ps(temp0_201, zmm8), 
        _mm_div_ps(_mm_sub_ps(zmm9, zx.o(*(arg1 + 0x17c))[0].q | (*arg1)[0x61][0].q << 0x40), zmm8))
    float temp0_208[0x4] =
        _mm_mul_ps(__unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm13, var_e8), var_d8), temp0_205)
    float temp0_209[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0xe5)
    temp0_209[0] = temp0_209[0] + temp0_208[0]
    temp0_208[0].q = temp0_208 u>> 0x40
    temp0_209[0] = temp0_209[0] + temp0_208[0]
    var_c8 = temp0_209

temp0_198[0] = temp0_198[0] + temp0_200[0]
arg4 = 0x3f800000

if ((rax.b & 1) != 0)
    zmm0[0] = zmm0[0] + zmm15[0]
    arg4 = 0x3f800000
    arg4[0] = 1f / zmm0[0]

arg3[0] = arg3[0] * arg4[0]
zmm6[0] = zmm6[0] * arg4[0]
arg4 = var_ec
arg3[0] = arg3[0] * arg4[0]
arg3[0] = arg3[0] * arg4[0]
zmm6[0] = zmm6[0] * arg4[0]
var_c8[0] = var_c8[0] * zmm6[0]
zmm6[0] = zmm6[0] + arg3[0]
temp0_198[0] = temp0_198[0] * zmm6[0]
temp0_198[0] = temp0_198[0] + 1f
zmm7 = 0x3f800000
zmm7[0] = 1f / temp0_198[0]
arg3[0] = arg3[0] * arg7[0]
arg3[0] = arg3[0] - var_c8[0]
arg4 = *arg8
arg3[0] = arg3[0] - arg4[0]
arg3[0] = arg3[0] * zmm7[0]
zmm0[0] = zmm0[0] * arg3[0]
float temp0_210[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0xc0)
zmm13 = __unpcklpd_xmmpd_memdq(__unpcklps_xmmps_memdq(zmm13, var_e8), var_d8)
float temp0_213[0x4] = _mm_mul_ps(temp0_210, zmm13)
zmm15[0] = zmm15[0] * arg3[0]
zmm4 = data_142d3f780
float temp0_215[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm15 ^ zmm4, 0xc0), zmm13)
float temp0_217[0x4] = _mm_mul_ps(temp0_188, _mm_shuffle_ps(arg3, arg3, 0xc0))
float temp0_219[0x4] = _mm_mul_ps(temp0_196, _mm_shuffle_epi32(zmm4 ^ arg3, 0xc0))
arg3[0] = arg3[0] + arg4[0]
*arg8 = arg3[0]
float temp0_220[0x4] = _mm_add_ps(var_b8, temp0_213)
float temp0_221[0x4] = _mm_add_ps(temp0_215, zmm10)
arg1[0xc] = _mm_shuffle_ps(temp0_220, _mm_shuffle_ps(temp0_221, temp0_220, 0x20), 0x24)
float temp0_224[0x4] = _mm_shuffle_ps(temp0_221, temp0_221, 0xe5)
arg3 = _mm_unpackhi_pd(temp0_221, temp0_221[0].q)
arg1[0xd][0] = temp0_224[0]
(*arg1)[0x35] = arg3[0]
zmm0 = arg1[0xe]
zmm11 = arg1[0xf]
float temp0_226[0x4] = _mm_mul_ps(zmm0, zx.o(0))
float temp0_227[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0)
float temp0_229[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0x1b), temp0_227)
float zmm14[0x4] = data_142d3f7c0
float temp0_231[0x4] = _mm_add_ps(_mm_mul_ps(temp0_229, zmm14), temp0_226)
float temp0_232[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0x55)
float temp0_234[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm0, zmm0, 1), temp0_232)
zmm10 = data_142d3f7d0
float temp0_236[0x4] = _mm_add_ps(_mm_mul_ps(temp0_234, zmm10), temp0_231)
float temp0_237[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xaa)
float temp0_239[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0xb1), temp0_237)
float zmm12[0x4] = data_142d3f7b0
float temp0_241[0x4] = _mm_add_ps(_mm_mul_ps(temp0_239, zmm12), temp0_236)
zmm6 = data_142d3f640
float temp0_242[0x4] = _mm_mul_ps(temp0_241, zmm6)
float temp0_243[0x4] = _mm_mul_ps(zx.o(0), zmm11)
float temp0_244[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0)
float temp0_248[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_244), zmm14), temp0_243)
float temp0_249[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
float temp0_253[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm11, zmm11, 1), temp0_249), zmm10), temp0_248)
float temp0_254[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0xaa)
float temp0_259[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xb1), temp0_254), zmm12), 
        temp0_253), 
    zmm6)
float temp0_260[0x4] = _mm_add_ps(temp0_242, zmm0)
float temp0_261[0x4] = _mm_mul_ps(temp0_260, temp0_260)
float temp0_263[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_261, temp0_261[0].q), temp0_261)
float temp0_264[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0xe5)
temp0_264[0] = temp0_264[0] + temp0_263[0]
float temp0_265[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_264[0], 6)
zmm4 = 0x3f000000
temp0_264[0] = temp0_264[0] * 0.5f
float temp0_266[0x4] = _mm_rsqrt_ss(temp0_264[0], temp0_264[0])
temp0_266[0] = temp0_266[0] * temp0_266[0]
temp0_266[0] = temp0_266[0] * temp0_264[0]
zmm6 = 0x3f000000
zmm6[0] = 0.5f - temp0_266[0]
zmm6[0] = zmm6[0] * temp0_266[0]
zmm6[0] = zmm6[0] + temp0_266[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] * temp0_264[0]
arg2 = 0x3f000000
arg2[0] = 0.5f - zmm6[0]
zmm0 = _mm_andnot_ps(temp0_265, 0xffffffff)
arg2[0] = arg2[0] * zmm6[0]
arg2[0] = arg2[0] + zmm6[0]
float temp0_269[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_260)
float temp0_270[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
arg3 = data_142d3f660
arg2 = _mm_and_ps(temp0_269, temp0_270)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_270, arg3), arg2)
float temp0_274[0x4] = _mm_add_ps(temp0_259, zmm11)
float temp0_275[0x4] = _mm_mul_ps(temp0_274, temp0_274)
float temp0_277[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_275, temp0_275[0].q), temp0_275)
float temp0_278[0x4] = _mm_shuffle_ps(temp0_277, temp0_277, 0xe5)
temp0_278[0] = temp0_278[0] + temp0_277[0]
zmm13 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_278[0], 6), 0xffffffff)
temp0_278[0] = temp0_278[0] * 0.5f
float temp0_281[0x4] = _mm_rsqrt_ss(temp0_278[0], temp0_278[0])
temp0_281[0] = temp0_281[0] * temp0_281[0]
temp0_281[0] = temp0_281[0] * temp0_278[0]
zmm6 = 0x3f000000
zmm6[0] = 0.5f - temp0_281[0]
zmm6[0] = zmm6[0] * temp0_281[0]
zmm6[0] = zmm6[0] + temp0_281[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] * temp0_278[0]
zmm4[0] = 0.5f - zmm6[0]
zmm4[0] = zmm4[0] * zmm6[0]
zmm4[0] = zmm4[0] + zmm6[0]
float temp0_283[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_274)
float temp0_284[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
zmm4 = _mm_and_ps(temp0_283, temp0_284)
zmm13 = _mm_or_ps(_mm_andnot_ps(temp0_284, arg3), zmm4)
arg1[0xe] = zmm0
arg2 = _mm_shuffle_epi32(zmm0, 0xc9)
float temp0_289[0x4] = _mm_mul_ps(zmm0, zmm13)
float temp0_291[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_289, temp0_289[0].q), temp0_289)
float temp0_292[0x4] = _mm_shuffle_ps(temp0_291, temp0_291, 0xe5)
temp0_292[0] = temp0_292[0] + temp0_291[0]
float temp0_293[0x4] = _mm_cmpeq_ss(0, temp0_292[0], 2)
arg4 = _mm_and_ps(temp0_293, 0x3f800000)
arg3 = _mm_or_ps(_mm_andnot_ps(temp0_293, 0xbf800000), arg4)
float temp0_298[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), zmm13)
arg1[0xf] = temp0_298
arg4 = (*arg1)[6]
zmm4 = arg1[1][0]
zmm7 = zx.o(arg1[1][0].q)[0].q | arg4[0].q << 0x40
arg4 = _mm_unpacklo_ps(arg4, zmm4[0].q)[0].q | (*arg1)[5][0].q << 0x40
zmm5 = zx.o(*(arg1 + 0x14))[0].q | zmm4[0].q << 0x40
zmm4 = _mm_shuffle_epi32(zmm0, 0xd2)
float temp0_303[0x4] = _mm_sub_ps(_mm_mul_ps(arg4, arg2), _mm_mul_ps(zmm5, zmm4))
zmm0 = _mm_shuffle_epi32(zmm0, 0xff)
float temp0_305[0x4] = _mm_add_ps(temp0_303, temp0_303)
float temp0_307[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(zmm0, temp0_305))
float temp0_314[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xd2), arg2), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xc9), zmm4)), 
        temp0_307), 
    temp0_220)
arg2 = (*arg1)[0x12]
zmm4 = arg1[4][0]
zmm5 = (*arg1)[0x11]
float temp0_315[0x4] = _mm_shuffle_ps(temp0_298, temp0_298, 0xc9)
zmm7 = zx.o(arg1[4][0].q)[0].q | arg2[0].q << 0x40
float temp0_317[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(arg2, zmm4[0].q)[0].q | zmm5[0].q << 0x40, temp0_315)
zmm5 = zx.o(*(arg1 + 0x44))[0].q | zmm4[0].q << 0x40
float temp0_318[0x4] = _mm_shuffle_ps(temp0_298, temp0_298, 0xd2)
float temp0_320[0x4] = _mm_sub_ps(temp0_317, _mm_mul_ps(zmm5, temp0_318))
float temp0_321[0x4] = _mm_add_ps(temp0_320, temp0_320)
float temp0_324[0x4] =
    _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0xff), temp0_321))
float temp0_331[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0xd2), temp0_315), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0xc9), temp0_318)), 
        temp0_324), 
    temp0_221)
arg1[8] = _mm_shuffle_ps(temp0_314, _mm_shuffle_ps(temp0_331, temp0_314, 0x20), 0x24)
float temp0_334[0x4] = _mm_shuffle_ps(temp0_331, temp0_331, 0xe5)
temp0_331[0].q = temp0_331 u>> 0x40
arg1[9][0] = temp0_334[0]
(*arg1)[0x25] = temp0_331[0]
arg3 = (*arg1)[0x3b]
float temp0_335[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
zmm4 = *arg1
float temp0_336[0x4] = _mm_mul_ps(temp0_335, zmm4)
arg4 = arg1[0xe][0]
float temp0_337[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
zmm0 = (*arg1)[1]
arg2 = temp0_337[0].q | zmm0[0].q << 0x40
float temp0_338[0x4] = _mm_unpacklo_ps(zmm4, zmm0[0].q)
float temp0_339[0x4] = _mm_unpacklo_ps(zmm0, zmm4[0].q)
float temp0_340[0x4] = _mm_shuffle_ps(zmm4, arg2, 0x20)
arg2 = (*arg1)[0x39]
float temp0_341[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
zmm0 = temp0_339[0].q | temp0_337[0].q << 0x40
float temp0_345[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_337, temp0_340, 0x24), temp0_341), zmm14), temp0_336)
float temp0_346[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_349[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_338[0].q << 0x40, temp0_346), zmm10), 
    temp0_345)
arg2 = (*arg1)[0x3a]
float temp0_353[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm0, _mm_shuffle_ps(arg2, arg2, 0)), zmm12), temp0_349)
arg4 = (*arg1)[0x3f]
float temp0_354[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
zmm4 = arg1[3]
float temp0_355[0x4] = _mm_mul_ps(temp0_354, zmm4)
float temp0_356[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
arg3 = (*arg1)[0xd]
arg2 = temp0_356[0].q | arg3[0].q << 0x40
float temp0_357[0x4] = _mm_unpacklo_ps(zmm4, arg3[0].q)
float temp0_358[0x4] = _mm_unpacklo_ps(arg3, zmm4[0].q)
float temp0_359[0x4] = _mm_shuffle_ps(zmm4, arg2, 0x20)
arg3 = temp0_358[0].q | temp0_356[0].q << 0x40
float temp0_360[0x4] = _mm_shuffle_ps(temp0_356, temp0_359, 0x24)
arg2 = arg1[0xf][0]
float temp0_364[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_360, _mm_shuffle_ps(arg2, arg2, 0)), zmm14), temp0_355)
arg4 = (*arg1)[0x3d]
float temp0_368[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_357[0].q << 0x40, 
            _mm_shuffle_ps(arg4, arg4, 0)), 
        zmm10), 
    temp0_364)
arg4 = (*arg1)[0x3e]
float temp0_372[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg3, _mm_shuffle_ps(arg4, arg4, 0)), zmm12), temp0_368)
arg1[0xa] = temp0_353
float temp0_373[0x4] = _mm_mul_ps(temp0_353, temp0_372)
float temp0_375[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_373, temp0_373[0].q), temp0_373)
float result[0x4] = _mm_shuffle_ps(temp0_375, temp0_375, 0xe5)
result[0] = result[0] + temp0_375[0]
float temp0_376[0x4] = _mm_cmpeq_ss(0, result[0], 2)
zmm8 = _mm_and_ps(0x3f800000, temp0_376)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_376, 0xbf800000), zmm8)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_372)
return result
