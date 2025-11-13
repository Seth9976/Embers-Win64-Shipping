// 函数: sub_140034b40
// 地址: 0x140034b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm6, zmm6)
float var_b8[0x4] = zmm6
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0)
float zmm0[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0)
float zmm4[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float var_dc = arg2[0]
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
float zmm9[0x4] = data_142d3f670
float temp0_19[0x4] = _mm_sub_ps(zmm9, temp0_18)
float zmm10[0x4] = arg1[6][0]
zmm4 = (*arg1)[0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm4, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm10)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm10)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm10)
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
float temp0_83[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59), temp0_80)
zmm4 = arg1[0xf]
float temp0_84[0x4] = _mm_add_ps(zmm4, zmm4)
float var_c8[0x4] = zmm4
float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_84)
arg2 = (*arg1)[0x3d]
float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_84)
float zmm5[0x4] = (*arg1)[0x3f]
float temp0_90[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_84)
float temp0_92[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_88, 0), temp0_86, 0x6c)
float temp0_93[0x4] = _mm_shuffle_ps(temp0_92, temp0_92, 0x78)
float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_93)
float temp0_95[0x4] = _mm_sub_ps(temp0_93, temp0_90)
temp0_84[0].q = temp0_84 u>> 0x40
temp0_84[0] = temp0_84[0] * (*arg1)[0x3e]
float temp0_97[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_88, zx.o(0), 0xe5), temp0_86, 0xc)
float temp0_99[0x4] = _mm_shuffle_ps(temp0_88, _mm_shuffle_ps(temp0_84, zx.o(0), 0x40), 0x31)
float temp0_100[0x4] = _mm_shuffle_ps(temp0_97, temp0_97, 0x78)
float temp0_103[0x4] =
    _mm_sub_ps(zmm9, _mm_add_ps(_mm_shuffle_ps(temp0_84, temp0_99, 0x80), temp0_100))
zmm4 = (*arg1)[0x1d]
float temp0_105[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_107[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm4, zx.o(0), 0x30), 0x84)
float temp0_108[0x4] = _mm_shuffle_ps(temp0_103, temp0_103, 0xc0)
float zmm12[0x4] = (*arg1)[0x1b]
float temp0_109[0x4] = _mm_mul_ps(temp0_108, zmm12)
float temp0_112[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xea), temp0_105), temp0_109)
float temp0_115[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd5), temp0_107), temp0_112)
float temp0_117[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xea), zmm12)
float temp0_120[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xd5), temp0_105), temp0_117)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc0), temp0_107), temp0_120)
float temp0_125[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd5), zmm12)
float temp0_128[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc0), temp0_105), temp0_125)
float temp0_131[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_103, temp0_103, 0xea), temp0_107), temp0_128)
float temp0_132[0x4] = _mm_shuffle_ps(temp0_94, temp0_103, 2)
int32_t var_d8 = (zx.o(0)).d
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
zmm0 = *arg6
arg2 = (*arg6)[1]
float temp0_168[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_169[0x4] = _mm_mul_ps(temp0_67, temp0_168)
float temp0_170[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_172[0x4] = _mm_add_ps(_mm_mul_ps(temp0_75, temp0_170), temp0_169)
zmm6 = (*arg6)[2]
float zmm11[0x4] = zx.o(*arg6)[0].q | zmm6[0].q << 0x40
float temp0_173[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_175[0x4] = _mm_add_ps(_mm_mul_ps(temp0_83, temp0_173), temp0_172)
float temp0_176[0x4] = _mm_mul_ps(temp0_168, temp0_151)
float temp0_178[0x4] = _mm_add_ps(_mm_mul_ps(temp0_170, temp0_159), temp0_176)
float temp0_180[0x4] = _mm_add_ps(_mm_mul_ps(temp0_173, temp0_167), temp0_178)
float temp0_181[0x4] = _mm_mul_ps(temp0_175, zmm11)
float temp0_182[0x4] = _mm_shuffle_ps(temp0_181, temp0_181, 0xe5)
temp0_182[0] = temp0_182[0] + temp0_181[0]
temp0_181[0].q = temp0_181 u>> 0x40
temp0_182[0] = temp0_182[0] + temp0_181[0]
float temp0_183[0x4] = _mm_mul_ps(temp0_180, zmm11)
float temp0_184[0x4] = _mm_shuffle_ps(temp0_183, temp0_183, 0xe5)
temp0_184[0] = temp0_184[0] + temp0_183[0]
temp0_183[0].q = temp0_183 u>> 0x40
temp0_184[0] = temp0_184[0] + temp0_183[0]
float (* result)[0x4]
result.b = arg5
float zmm8[0x4] = arg4
float zmm7[0x4]
float zmm14[0x4]

if (not(arg4[0] <= 9.99999975e-05f))
    zmm7 = arg1[0x15]
    zmm0 = arg1[0x16]
    float temp0_185[0x4] = _mm_mul_ps(var_b8, zmm7)
    float temp0_187[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_185, temp0_185[0].q), temp0_185)
    float temp0_188[0x4] = _mm_shuffle_ps(temp0_187, temp0_187, 0xe5)
    temp0_188[0] = temp0_188[0] + temp0_187[0]
    float temp0_189[0x4] = _mm_cmpeq_ss(0, temp0_188[0], 2)
    zmm6 = _mm_and_ps(temp0_189, 0x3f800000)
    arg2 = _mm_or_ps(_mm_andnot_ps(temp0_189, 0xbf800000), zmm6)
    float temp0_195[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), var_b8), zmm7)
    float temp0_196[0x4] = __mulps_xmmps_memps(zmm7, data_142d3f690)
    float temp0_198[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_195, temp0_195, 0xff), temp0_196)
    float temp0_199[0x4] = _mm_shuffle_ps(temp0_195, temp0_195, 0xc0)
    float temp0_201[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xdb), temp0_199)
    float zmm13[0x4] = data_142fc92a0
    float temp0_203[0x4] = _mm_add_ps(_mm_mul_ps(temp0_201, zmm13), temp0_198)
    float temp0_204[0x4] = _mm_shuffle_ps(temp0_195, temp0_195, 0xd5)
    float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_196, temp0_196, 1), temp0_204)
    zmm14 = data_142fc92b0
    float temp0_208[0x4] = _mm_add_ps(_mm_mul_ps(temp0_206, zmm14), temp0_203)
    float temp0_209[0x4] = _mm_shuffle_ps(temp0_195, temp0_195, 0xea)
    float temp0_211[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xf1), temp0_209)
    float zmm15[0x4] = data_142fc92c0
    float temp0_213[0x4] = _mm_add_ps(_mm_mul_ps(temp0_211, zmm15), temp0_208)
    float temp0_214[0x4] = _mm_add_ps(temp0_213, temp0_213)
    float temp0_215[0x4] = _mm_mul_ps(var_c8, zmm0)
    float temp0_217[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_215, temp0_215[0].q), temp0_215)
    float temp0_218[0x4] = _mm_shuffle_ps(temp0_217, temp0_217, 0xe5)
    temp0_218[0] = temp0_218[0] + temp0_217[0]
    float temp0_219[0x4] = _mm_cmpeq_ss(0, temp0_218[0], 2)
    zmm10 = _mm_and_ps(0x3f800000, temp0_219)
    zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_219, 0xbf800000), zmm10)
    float temp0_225[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), var_c8), zmm0)
    float temp0_226[0x4] = __mulps_xmmps_memps(zmm0, data_142d3f690)
    float temp0_228[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xff), temp0_226)
    float temp0_229[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xc0)
    float temp0_233[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xdb), temp0_229), zmm13), 
        temp0_228)
    float temp0_234[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xd5)
    float temp0_238[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(temp0_226, temp0_226, 1), temp0_234), zmm14), 
        temp0_233)
    float temp0_239[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xea)
    float temp0_243[0x4] = _mm_add_ps(
        _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xf1), temp0_239), zmm15), 
        temp0_238)
    float temp0_244[0x4] = _mm_add_ps(temp0_243, temp0_243)
    float temp0_245[0x4] = _mm_mul_ps(temp0_214, zmm11)
    float temp0_246[0x4] = _mm_shuffle_ps(temp0_245, temp0_245, 0xe5)
    temp0_246[0] = temp0_246[0] + temp0_245[0]
    temp0_245[0].q = temp0_245 u>> 0x40
    temp0_246[0] = temp0_246[0] + temp0_245[0]
    float temp0_247[0x4] = _mm_mul_ps(temp0_244, zmm11)
    float temp0_248[0x4] = _mm_shuffle_ps(temp0_247, temp0_247, 0xe5)
    temp0_248[0] = temp0_248[0] + temp0_247[0]
    temp0_247[0].q = temp0_247 u>> 0x40
    temp0_248[0] = temp0_248[0] + temp0_247[0]
    temp0_246[0] = temp0_246[0] - temp0_248[0]
    var_d8 = temp0_246[0]

temp0_182[0] = temp0_182[0] + temp0_184[0]
zmm7 = 0x3f800000

if ((result.b & 1) != 0)
    zmm7[0] = 1f / temp0_182[0]

arg3[0] = arg3[0] * zmm7[0]
arg4 = var_dc
arg3[0] = arg3[0] * arg4[0]
arg3[0] = arg3[0] * arg4[0]
zmm8[0] = zmm8[0] * zmm7[0]
zmm8[0] = zmm8[0] * arg4[0]
zmm8[0] = zmm8[0] + arg3[0]
temp0_182[0] = temp0_182[0] * zmm8[0]
temp0_182[0] = temp0_182[0] + 1f
arg4 = 0x3f800000
arg4[0] = 1f / temp0_182[0]
arg3[0] = arg3[0] * arg7[0]
zmm8[0] = zmm8[0] f* var_d8
arg3[0] = arg3[0] - zmm8[0]
arg2 = *arg8
arg3[0] = arg3[0] - arg2[0]
arg3[0] = arg3[0] * arg4[0]
temp0_182[0] = temp0_182[0] * arg3[0]
float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_182, temp0_182, 0xc0), zmm11)
temp0_184[0] = temp0_184[0] * arg3[0]
float temp0_252[0x4] = _mm_mul_ps(_mm_shuffle_epi32(temp0_184 ^ data_142d3f780, 0xc0), zmm11)
arg3[0] = arg3[0] + arg2[0]
*arg8 = arg3[0]
arg3 = arg1[0xe]
zmm11 = arg1[0xf]
float temp0_253[0x4] = _mm_mul_ps(arg3, zx.o(0))
float temp0_254[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0)
float temp0_256[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0x1b), temp0_254)
zmm8 = data_142d3f7c0
float temp0_258[0x4] = _mm_add_ps(_mm_mul_ps(temp0_256, zmm8), temp0_253)
float temp0_259[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0x55)
float temp0_261[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg3, arg3, 1), temp0_259)
zmm9 = data_142d3f7d0
float temp0_263[0x4] = _mm_add_ps(_mm_mul_ps(temp0_261, zmm9), temp0_258)
float temp0_264[0x4] = _mm_shuffle_ps(temp0_250, temp0_250, 0xaa)
float temp0_266[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0xb1), temp0_264)
zmm10 = data_142d3f7b0
float temp0_268[0x4] = _mm_add_ps(_mm_mul_ps(temp0_266, zmm10), temp0_263)
zmm6 = data_142d3f640
float temp0_269[0x4] = _mm_mul_ps(temp0_268, zmm6)
float temp0_270[0x4] = _mm_mul_ps(zx.o(0), zmm11)
float temp0_271[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0)
float temp0_275[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), temp0_271), zmm8), temp0_270)
float temp0_276[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0x55)
float temp0_280[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm11, zmm11, 1), temp0_276), zmm9), temp0_275)
float temp0_281[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0xaa)
float temp0_286[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0xb1), temp0_281), zmm10), 
        temp0_280), 
    zmm6)
float temp0_287[0x4] = _mm_add_ps(temp0_269, arg3)
float temp0_288[0x4] = _mm_mul_ps(temp0_287, temp0_287)
float temp0_290[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_288, temp0_288[0].q), temp0_288)
float temp0_291[0x4] = _mm_shuffle_ps(temp0_290, temp0_290, 0xe5)
temp0_291[0] = temp0_291[0] + temp0_290[0]
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_291[0], 6), 0xffffffff)
zmm6 = 0x3f000000
temp0_291[0] = temp0_291[0] * 0.5f
float temp0_294[0x4] = _mm_rsqrt_ss(temp0_291[0], temp0_291[0])
temp0_294[0] = temp0_294[0] * temp0_294[0]
temp0_294[0] = temp0_294[0] * temp0_291[0]
arg3 = 0x3f000000
arg3[0] = 0.5f - temp0_294[0]
arg3[0] = arg3[0] * temp0_294[0]
arg3[0] = arg3[0] + temp0_294[0]
arg3[0] = arg3[0] * arg3[0]
arg3[0] = arg3[0] * temp0_291[0]
arg4 = 0x3f000000
arg4[0] = 0.5f - arg3[0]
arg4[0] = arg4[0] * arg3[0]
arg4[0] = arg4[0] + arg3[0]
float temp0_296[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_287)
float temp0_297[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
arg2 = data_142d3f660
arg4 = _mm_and_ps(temp0_296, temp0_297)
zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_297, arg2), arg4)
float temp0_301[0x4] = _mm_add_ps(temp0_286, zmm11)
float temp0_302[0x4] = _mm_mul_ps(temp0_301, temp0_301)
float temp0_304[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_302, temp0_302[0].q), temp0_302)
float temp0_305[0x4] = _mm_shuffle_ps(temp0_304, temp0_304, 0xe5)
temp0_305[0] = temp0_305[0] + temp0_304[0]
zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_305[0], 6), 0xffffffff)
temp0_305[0] = temp0_305[0] * 0.5f
float temp0_308[0x4] = _mm_rsqrt_ss(temp0_305[0], temp0_305[0])
temp0_308[0] = temp0_308[0] * temp0_308[0]
temp0_308[0] = temp0_308[0] * temp0_305[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_308[0]
zmm7[0] = zmm7[0] * temp0_308[0]
zmm7[0] = zmm7[0] + temp0_308[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_305[0]
zmm6[0] = 0.5f - zmm7[0]
zmm6[0] = zmm6[0] * zmm7[0]
zmm6[0] = zmm6[0] + zmm7[0]
float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_301)
float temp0_311[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
zmm6 = _mm_and_ps(temp0_310, temp0_311)
zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_311, arg2), zmm6)
arg1[0xe] = zmm4
float temp0_315[0x4] = _mm_shuffle_epi32(zmm4, 0xc9)
arg4 = _mm_shuffle_epi32(zmm4, 0xd2)
zmm0 = _mm_shuffle_epi32(zmm4, 0xff)
float temp0_318[0x4] = _mm_mul_ps(zmm4, zmm14)
float temp0_320[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_318, temp0_318[0].q), temp0_318)
float temp0_321[0x4] = _mm_shuffle_ps(temp0_320, temp0_320, 0xe5)
temp0_321[0] = temp0_321[0] + temp0_320[0]
float temp0_322[0x4] = _mm_cmpeq_ss(0, temp0_321[0], 2)
zmm5 = _mm_and_ps(temp0_322, 0x3f800000)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_322, 0xbf800000), zmm5)
float temp0_327[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm14)
arg1[0xf] = temp0_327
zmm5 = (*arg1)[6]
zmm6 = arg1[1][0]
arg3 = zx.o(arg1[1][0].q)[0].q | zmm5[0].q << 0x40
float temp0_331[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_unpacklo_ps(zmm5, zmm6[0].q)[0].q | (*arg1)[5][0].q << 0x40, temp0_315), 
    _mm_mul_ps(zx.o(*(arg1 + 0x14))[0].q | zmm6[0].q << 0x40, arg4))
float temp0_332[0x4] = _mm_add_ps(temp0_331, temp0_331)
float temp0_334[0x4] = _mm_add_ps(arg3, _mm_mul_ps(zmm0, temp0_332))
float temp0_340[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_332, temp0_332, 0xd2), temp0_315), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_332, temp0_332, 0xc9), arg4)), 
    temp0_334)
float temp0_341[0x4] = _mm_add_ps(zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40, temp0_340)
arg1[8][0] = temp0_341[0]
float temp0_342[0x4] = _mm_shuffle_ps(temp0_341, temp0_341, 0xe5)
temp0_341[0].q = temp0_341 u>> 0x40
(*arg1)[0x21] = temp0_342[0]
(*arg1)[0x22] = temp0_341[0]
zmm0 = (*arg1)[0x12]
arg4 = arg1[4][0]
zmm5 = (*arg1)[0x11]
float temp0_343[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
zmm7 = zx.o(arg1[4][0].q)[0].q | zmm0[0].q << 0x40
float temp0_345[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(zmm0, arg4[0].q)[0].q | zmm5[0].q << 0x40, temp0_343)
float temp0_346[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xd2)
float temp0_348[0x4] =
    _mm_sub_ps(temp0_345, _mm_mul_ps(zx.o(*(arg1 + 0x44))[0].q | arg4[0].q << 0x40, temp0_346))
float temp0_349[0x4] = _mm_add_ps(temp0_348, temp0_348)
zmm12 = (*arg1)[0x3f]
float temp0_352[0x4] = _mm_add_ps(zmm7, _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_349))
float temp0_358[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_349, temp0_349, 0xd2), temp0_343), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_349, temp0_349, 0xc9), temp0_346)), 
    temp0_352)
float temp0_359[0x4] = _mm_add_ps(zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40, temp0_358)
(*arg1)[0x23] = temp0_359[0]
float temp0_360[0x4] = _mm_shuffle_ps(temp0_359, temp0_359, 0xe5)
temp0_359[0].q = temp0_359 u>> 0x40
arg1[9][0] = temp0_360[0]
(*arg1)[0x25] = temp0_359[0]
arg2 = (*arg1)[0x3b]
float temp0_361[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
zmm6 = *arg1
float temp0_362[0x4] = _mm_mul_ps(temp0_361, zmm6)
arg4 = arg1[0xe][0]
float temp0_363[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
float temp0_364[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
zmm7 = (*arg1)[1]
zmm0 = temp0_364[0].q | zmm7[0].q << 0x40
float temp0_365[0x4] = _mm_unpacklo_ps(zmm6, zmm7[0].q)
float temp0_366[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
float temp0_367[0x4] = _mm_shuffle_ps(zmm6, zmm0, 0x20)
zmm7 = temp0_366[0].q | temp0_364[0].q << 0x40
float temp0_371[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_364, temp0_367, 0x24), temp0_363), zmm8), temp0_362)
zmm0 = (*arg1)[0x39]
float temp0_372[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_375[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_365[0].q << 0x40, temp0_372), zmm9), 
    temp0_371)
zmm0 = (*arg1)[0x3a]
float temp0_379[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm7, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm10), temp0_375)
float temp0_380[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0)
arg4 = arg1[3]
float temp0_381[0x4] = _mm_mul_ps(temp0_380, arg4)
arg3 = arg1[0xf][0]
float temp0_382[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_383[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
arg2 = (*arg1)[0xd]
zmm0 = temp0_383[0].q | arg2[0].q << 0x40
float temp0_384[0x4] = _mm_unpacklo_ps(arg4, arg2[0].q)
float temp0_385[0x4] = _mm_unpacklo_ps(arg2, arg4[0].q)
float temp0_386[0x4] = _mm_shuffle_ps(arg4, zmm0, 0x20)
arg2 = temp0_385[0].q | temp0_383[0].q << 0x40
float temp0_390[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_383, temp0_386, 0x24), temp0_382), zmm8), temp0_381)
zmm0 = (*arg1)[0x3d]
float temp0_391[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_394[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_384[0].q << 0x40, temp0_391), zmm9), 
    temp0_390)
zmm0 = (*arg1)[0x3e]
float temp0_398[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg2, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm10), temp0_394)
arg1[0xa] = temp0_379
float temp0_399[0x4] = _mm_mul_ps(temp0_379, temp0_398)
float temp0_401[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_399, temp0_399[0].q), temp0_399)
float temp0_402[0x4] = _mm_shuffle_ps(temp0_401, temp0_401, 0xe5)
temp0_402[0] = temp0_402[0] + temp0_401[0]
float temp0_403[0x4] = _mm_cmpeq_ss(0, temp0_402[0], 2)
float temp0_404[0x4] = _mm_and_ps(0x3f800000, temp0_403)
zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_403, 0xbf800000), temp0_404)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_398)
return result
