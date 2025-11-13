// 函数: sub_14002e330
// 地址: 0x14002e330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_d0 = arg2[0]
uint32_t temp0 = _mm_movemask_ps(*arg9)
float zmm5[0x4] = arg1[0xe]
float temp0_1[0x4] = _mm_add_ps(zmm5, zmm5)
float var_b8[0x4] = zmm5
float temp0_3[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_1)
arg2 = (*arg1)[0x39]
float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), temp0_1)
float zmm7[0x4] = (*arg1)[0x3b]
float temp0_7[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_1)
temp0_1[0].q = temp0_1 u>> 0x40
temp0_1[0] = temp0_1[0] * (*arg1)[0x3a]
float temp0_9[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_5, 0), temp0_3, 0x6c)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x78)
float temp0_11[0x4] = _mm_add_ps(temp0_7, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_7)
float temp0_14[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_5, zx.o(0), 0xe5), temp0_3, 0xc)
float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x78)
float temp0_19[0x4] = _mm_add_ps(
    _mm_shuffle_ps(temp0_1, _mm_shuffle_ps(temp0_5, _mm_shuffle_ps(temp0_1, zx.o(0), 0x40), 0x31), 
        0x80), 
    temp0_15)
float zmm11[0x4] = data_142d3f670
float temp0_20[0x4] = _mm_sub_ps(zmm11, temp0_19)
float zmm9[0x4] = arg1[6][0]
zmm7 = (*arg1)[0x1a]
float temp0_22[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_24[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm7, zx.o(0), 0x30), 0x84)
float temp0_26[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xc0), zmm9)
float temp0_29[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_22), temp0_26)
float temp0_32[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_24), temp0_29)
float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm9)
float temp0_37[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xd5), temp0_22), temp0_34)
float temp0_40[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_24), temp0_37)
float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm9)
float temp0_45[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_22), temp0_42)
float temp0_48[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_20, temp0_20, 0xea), temp0_24), temp0_45)
float temp0_49[0x4] = _mm_shuffle_ps(temp0_11, temp0_20, 2)
float temp0_52[0x4] = _mm_shuffle_ps(temp0_49, 
    _mm_shuffle_ps(temp0_12, _mm_shuffle_ps(temp0_49, zx.o(0), 0x22), 0x31), 0x82)
float temp0_53[0x4] = _mm_shuffle_ps(temp0_20, temp0_12, 0xa1)
float temp0_54[0x4] = _mm_shuffle_ps(temp0_53, zx.o(0), 0x42)
float temp0_55[0x4] = _mm_shuffle_ps(temp0_12, temp0_11, 0x50)
float temp0_57[0x4] = _mm_shuffle_ps(temp0_53, _mm_shuffle_ps(temp0_11, temp0_54, 0x30), 0x82)
float temp0_60[0x4] = _mm_shuffle_ps(temp0_55, 
    _mm_shuffle_ps(temp0_20, _mm_shuffle_ps(temp0_55, zx.o(0), 0x42), 0x32), 0x82)
float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xc0), temp0_52)
float temp0_65[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xd5), temp0_57), temp0_62)
float temp0_68[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0xea), temp0_60), temp0_65)
float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xc0), temp0_52)
float temp0_73[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xd5), temp0_57), temp0_70)
float temp0_76[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0xea), temp0_60), temp0_73)
float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xc0), temp0_52)
float temp0_81[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xd5), temp0_57), temp0_78)
float temp0_84[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_48, temp0_48, 0xea), temp0_60), temp0_81)
float zmm6[0x4] = arg1[0xf]
float temp0_85[0x4] = _mm_add_ps(zmm6, zmm6)
float var_c8[0x4] = zmm6
float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_85)
zmm5 = (*arg1)[0x3d]
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_85)
zmm7 = (*arg1)[0x3f]
float temp0_91[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm7, zmm7, 0), temp0_85)
float temp0_93[0x4] = _mm_shuffle_ps(_mm_unpackhi_pd(temp0_89, 0), temp0_87, 0x6c)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_93, temp0_93, 0x78)
float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_94)
float temp0_96[0x4] = _mm_sub_ps(temp0_94, temp0_91)
float temp0_98[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_89, zx.o(0), 0xe5), temp0_87, 0xc)
temp0_85[0].q = temp0_85 u>> 0x40
temp0_85[0] = temp0_85[0] * (*arg1)[0x3e]
float temp0_100[0x4] = _mm_shuffle_ps(temp0_89, _mm_shuffle_ps(temp0_85, zx.o(0), 0x40), 0x31)
float temp0_101[0x4] = _mm_shuffle_ps(temp0_98, temp0_98, 0x78)
float temp0_104[0x4] =
    _mm_sub_ps(zmm11, _mm_add_ps(_mm_shuffle_ps(temp0_85, temp0_100, 0x80), temp0_101))
float zmm4[0x4] = (*arg1)[0x1d]
float temp0_106[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(arg1[7][0], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_108[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm4, zx.o(0), 0x30), 0x84)
float temp0_109[0x4] = _mm_shuffle_ps(temp0_104, temp0_104, 0xc0)
float zmm12[0x4] = (*arg1)[0x1b]
float temp0_110[0x4] = _mm_mul_ps(temp0_109, zmm12)
float temp0_113[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xea), temp0_106), temp0_110)
float temp0_116[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xd5), temp0_108), temp0_113)
float temp0_118[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xea), zmm12)
float temp0_121[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xd5), temp0_106), temp0_118)
float temp0_124[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xc0), temp0_108), temp0_121)
float temp0_126[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_96, temp0_96, 0xd5), zmm12)
float temp0_129[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xc0), temp0_106), temp0_126)
float temp0_132[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xea), temp0_108), temp0_129)
float temp0_133[0x4] = _mm_shuffle_ps(temp0_95, temp0_104, 2)
float temp0_136[0x4] = _mm_shuffle_ps(temp0_133, 
    _mm_shuffle_ps(temp0_96, _mm_shuffle_ps(temp0_133, zx.o(0), 0x22), 0x31), 0x82)
float temp0_137[0x4] = _mm_shuffle_ps(temp0_104, temp0_96, 0xa1)
float temp0_138[0x4] = _mm_shuffle_ps(temp0_137, zx.o(0), 0x42)
float temp0_139[0x4] = _mm_shuffle_ps(temp0_96, temp0_95, 0x50)
float temp0_141[0x4] = _mm_shuffle_ps(temp0_137, _mm_shuffle_ps(temp0_95, temp0_138, 0x30), 0x82)
float temp0_144[0x4] = _mm_shuffle_ps(temp0_139, 
    _mm_shuffle_ps(temp0_104, _mm_shuffle_ps(temp0_139, zx.o(0), 0x42), 0x32), 0x82)
float temp0_146[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xc0), temp0_136)
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xd5), temp0_141), temp0_146)
float temp0_152[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_116, temp0_116, 0xea), temp0_144), temp0_149)
float temp0_154[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xc0), temp0_136)
float temp0_157[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xd5), temp0_141), temp0_154)
float temp0_160[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_124, 0xea), temp0_144), temp0_157)
float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xc0), temp0_136)
float temp0_165[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xd5), temp0_141), temp0_162)
float temp0_168[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_132, temp0_132, 0xea), temp0_144), temp0_165)
arg2 = *arg6
float zmm0[0x4] = (*arg6)[1]
float temp0_169[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_170[0x4] = _mm_mul_ps(temp0_68, temp0_169)
float temp0_171[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0)
float temp0_173[0x4] = _mm_add_ps(_mm_mul_ps(temp0_76, temp0_171), temp0_170)
zmm6 = (*arg6)[2]
zmm12 = zx.o(*arg6)[0].q | zmm6[0].q << 0x40
float temp0_174[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_176[0x4] = _mm_add_ps(_mm_mul_ps(temp0_84, temp0_174), temp0_173)
float temp0_177[0x4] = _mm_mul_ps(temp0_169, temp0_152)
float temp0_179[0x4] = _mm_add_ps(_mm_mul_ps(temp0_171, temp0_160), temp0_177)
zmm7 = arg7
float temp0_181[0x4] = _mm_add_ps(_mm_mul_ps(temp0_174, temp0_168), temp0_179)
float temp0_182[0x4] = _mm_mul_ps(temp0_176, zmm12)
float temp0_183[0x4] = _mm_shuffle_ps(temp0_182, temp0_182, 0xe5)
temp0_183[0] = temp0_183[0] + temp0_182[0]
temp0_182[0].q = temp0_182 u>> 0x40
temp0_183[0] = temp0_183[0] + temp0_182[0]
float temp0_184[0x4] = _mm_mul_ps(temp0_181, zmm12)
float temp0_185[0x4] = _mm_shuffle_ps(temp0_184, temp0_184, 0xe5)
temp0_185[0] = temp0_185[0] + temp0_184[0]
temp0_184[0].q = temp0_184 u>> 0x40
temp0_185[0] = temp0_185[0] + temp0_184[0]
temp0_183[0] = temp0_183[0] + temp0_185[0]
float zmm8[0x4]
float zmm14[0x4]
float zmm15[0x4]

if (temp0 != 0xf)
    zmm6 = zx.o(0)
    
    if (not(arg4[0] <= 9.99999975e-05f))
        zmm9 = arg1[0x15]
        zmm5 = arg1[0x16]
        float temp0_250[0x4] = _mm_mul_ps(var_b8, zmm9)
        float var_cc_1 = arg4[0]
        float temp0_252[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_250, temp0_250[0].q), temp0_250)
        float temp0_253[0x4] = _mm_shuffle_ps(temp0_252, temp0_252, 0xe5)
        temp0_253[0] = temp0_253[0] + temp0_252[0]
        float temp0_254[0x4] = _mm_cmpeq_ss(0, temp0_253[0], 2)
        arg4 = _mm_and_ps(temp0_254, 0x3f800000)
        arg2 = _mm_or_ps(_mm_andnot_ps(temp0_254, 0xbf800000), arg4)
        float temp0_260[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), var_b8), zmm9)
        zmm14 = data_142d3f690
        float temp0_261[0x4] = _mm_mul_ps(zmm9, zmm14)
        float temp0_263[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_260, temp0_260, 0xff), temp0_261)
        float temp0_264[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0xc0)
        float temp0_266[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0xdb), temp0_264)
        zmm15 = data_142fc92a0
        float temp0_268[0x4] = _mm_add_ps(_mm_mul_ps(temp0_266, zmm15), temp0_263)
        float temp0_269[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0xd5)
        float temp0_271[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_261, temp0_261, 1), temp0_269)
        arg4 = data_142fc92b0
        float temp0_273[0x4] = _mm_add_ps(_mm_mul_ps(temp0_271, arg4), temp0_268)
        float temp0_274[0x4] = _mm_shuffle_ps(temp0_260, temp0_260, 0xea)
        float temp0_276[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_261, temp0_261, 0xf1), temp0_274)
        zmm8 = data_142fc92c0
        float temp0_278[0x4] = _mm_add_ps(_mm_mul_ps(temp0_276, zmm8), temp0_273)
        float temp0_279[0x4] = _mm_add_ps(temp0_278, temp0_278)
        float temp0_280[0x4] = _mm_mul_ps(var_c8, zmm5)
        float temp0_282[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_280, temp0_280[0].q), temp0_280)
        float temp0_283[0x4] = _mm_shuffle_ps(temp0_282, temp0_282, 0xe5)
        temp0_283[0] = temp0_283[0] + temp0_282[0]
        float temp0_284[0x4] = _mm_cmpeq_ss(0, temp0_283[0], 2)
        zmm11 = _mm_and_ps(0x3f800000, temp0_284)
        zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_284, 0xbf800000), zmm11)
        float temp0_290[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), var_c8), zmm5)
        float temp0_291[0x4] = _mm_mul_ps(zmm5, zmm14)
        float temp0_293[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_290, temp0_290, 0xff), temp0_291)
        float temp0_294[0x4] = _mm_shuffle_ps(temp0_290, temp0_290, 0xc0)
        float temp0_298[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_291, temp0_291, 0xdb), temp0_294), zmm15), 
            temp0_293)
        float temp0_299[0x4] = _mm_shuffle_ps(temp0_290, temp0_290, 0xd5)
        float temp0_302[0x4] =
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(temp0_291, temp0_291, 1), temp0_299), arg4)
        arg4 = var_cc_1
        float temp0_303[0x4] = _mm_add_ps(temp0_302, temp0_298)
        zmm7 = arg7
        float temp0_304[0x4] = _mm_shuffle_ps(temp0_290, temp0_290, 0xea)
        float temp0_308[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_291, temp0_291, 0xf1), temp0_304), zmm8), 
            temp0_303)
        float temp0_309[0x4] = _mm_add_ps(temp0_308, temp0_308)
        float temp0_310[0x4] = _mm_mul_ps(temp0_279, zmm12)
        zmm6 = _mm_shuffle_ps(temp0_310, temp0_310, 0xe5)
        zmm6[0] = zmm6[0] + temp0_310[0]
        temp0_310[0].q = temp0_310 u>> 0x40
        zmm6[0] = zmm6[0] + temp0_310[0]
        float temp0_312[0x4] = _mm_mul_ps(temp0_309, zmm12)
        float temp0_313[0x4] = _mm_shuffle_ps(temp0_312, temp0_312, 0xe5)
        temp0_313[0] = temp0_313[0] + temp0_312[0]
        temp0_312[0].q = temp0_312 u>> 0x40
        temp0_313[0] = temp0_313[0] + temp0_312[0]
        zmm6[0] = zmm6[0] - temp0_313[0]
    
    zmm9 = 0x3f800000
    arg2 = 0x3f800000
    
    if ((arg5 & 1) != 0)
        arg2[0] = 1f / temp0_183[0]
    
    arg3[0] = arg3[0] * arg2[0]
    zmm4 = var_d0
    arg3[0] = arg3[0] * zmm4[0]
    arg3[0] = arg3[0] * zmm4[0]
    arg4[0] = arg4[0] * arg2[0]
    arg4[0] = arg4[0] * zmm4[0]
    arg4[0] = arg4[0] + arg3[0]
    temp0_183[0] = temp0_183[0] * arg4[0]
    temp0_183[0] = temp0_183[0] + 1f
    arg2 = 0x3f800000
    arg2[0] = 1f / temp0_183[0]
    arg3[0] = arg3[0] * zmm7[0]
    arg4[0] = arg4[0] * zmm6[0]
else
    zmm4 = zx.o(0)
    
    if (not(arg4[0] <= 9.99999975e-05f))
        zmm9 = arg1[0x15]
        zmm5 = arg1[0x16]
        float temp0_186[0x4] = _mm_mul_ps(var_b8, zmm9)
        float temp0_188[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_186, temp0_186[0].q), temp0_186)
        float temp0_189[0x4] = _mm_shuffle_ps(temp0_188, temp0_188, 0xe5)
        temp0_189[0] = temp0_189[0] + temp0_188[0]
        float temp0_190[0x4] = _mm_cmpeq_ss(0, temp0_189[0], 2)
        zmm6 = _mm_and_ps(temp0_190, 0x3f800000)
        arg2 = _mm_or_ps(_mm_andnot_ps(temp0_190, 0xbf800000), zmm6)
        float temp0_196[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), var_b8), zmm9)
        float temp0_197[0x4] = __mulps_xmmps_memps(zmm9, data_142d3f690)
        float temp0_199[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_196, temp0_196, 0xff), temp0_197)
        float temp0_200[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0xc0)
        float temp0_202[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_197, temp0_197, 0xdb), temp0_200)
        zmm15 = data_142fc92a0
        float temp0_204[0x4] = _mm_add_ps(_mm_mul_ps(temp0_202, zmm15), temp0_199)
        float temp0_205[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0xd5)
        float temp0_207[0x4] = _mm_mul_ps(_mm_shuffle_pd(temp0_197, temp0_197, 1), temp0_205)
        zmm6 = data_142fc92b0
        float temp0_209[0x4] = _mm_add_ps(_mm_mul_ps(temp0_207, zmm6), temp0_204)
        float temp0_210[0x4] = _mm_shuffle_ps(temp0_196, temp0_196, 0xea)
        float temp0_212[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_197, temp0_197, 0xf1), temp0_210)
        zmm8 = data_142fc92c0
        float temp0_214[0x4] = _mm_add_ps(_mm_mul_ps(temp0_212, zmm8), temp0_209)
        float temp0_215[0x4] = _mm_add_ps(temp0_214, temp0_214)
        float temp0_216[0x4] = _mm_mul_ps(var_c8, zmm5)
        float temp0_218[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_216, temp0_216[0].q), temp0_216)
        float temp0_219[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0xe5)
        temp0_219[0] = temp0_219[0] + temp0_218[0]
        float temp0_220[0x4] = _mm_cmpeq_ss(0, temp0_219[0], 2)
        zmm11 = _mm_and_ps(0x3f800000, temp0_220)
        zmm4 = _mm_or_ps(_mm_andnot_ps(temp0_220, 0xbf800000), zmm11)
        float temp0_226[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), var_c8), zmm5)
        float temp0_227[0x4] = __mulps_xmmps_memps(zmm5, data_142d3f690)
        float temp0_229[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xff), temp0_227)
        float temp0_230[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xc0)
        float temp0_234[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xdb), temp0_230), zmm15), 
            temp0_229)
        float temp0_235[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xd5)
        float temp0_239[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(temp0_227, temp0_227, 1), temp0_235), zmm6), 
            temp0_234)
        zmm7 = arg7
        float temp0_240[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xea)
        float temp0_244[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xf1), temp0_240), zmm8), 
            temp0_239)
        float temp0_245[0x4] = _mm_add_ps(temp0_244, temp0_244)
        float temp0_246[0x4] = _mm_mul_ps(temp0_215, zmm12)
        zmm4 = _mm_shuffle_ps(temp0_246, temp0_246, 0xe5)
        zmm4[0] = zmm4[0] + temp0_246[0]
        temp0_246[0].q = temp0_246 u>> 0x40
        zmm4[0] = zmm4[0] + temp0_246[0]
        float temp0_248[0x4] = _mm_mul_ps(temp0_245, zmm12)
        float temp0_249[0x4] = _mm_shuffle_ps(temp0_248, temp0_248, 0xe5)
        temp0_249[0] = temp0_249[0] + temp0_248[0]
        temp0_248[0].q = temp0_248 u>> 0x40
        temp0_249[0] = temp0_249[0] + temp0_248[0]
        zmm4[0] = zmm4[0] - temp0_249[0]
    
    zmm9 = 0x3f800000
    arg2 = 0x3f800000
    
    if ((arg5 & 1) != 0)
        arg2[0] = 1f / temp0_183[0]
    
    arg3[0] = arg3[0] * arg2[0]
    zmm5 = var_d0
    arg3[0] = arg3[0] * zmm5[0]
    arg3[0] = arg3[0] * zmm5[0]
    arg4[0] = arg4[0] * arg2[0]
    arg4[0] = arg4[0] * zmm5[0]
    arg4[0] = arg4[0] + arg3[0]
    temp0_183[0] = temp0_183[0] * arg4[0]
    temp0_183[0] = temp0_183[0] + 1f
    arg2 = 0x3f800000
    arg2[0] = 1f / temp0_183[0]
    arg3[0] = arg3[0] * zmm7[0]
    arg4[0] = arg4[0] * zmm4[0]
arg3[0] = arg3[0] - arg4[0]
zmm4 = *arg8
arg3[0] = arg3[0] - zmm4[0]
arg3[0] = arg3[0] * arg2[0]
temp0_183[0] = temp0_183[0] * arg3[0]
float temp0_315[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_183, temp0_183, 0xc0), zmm12)
temp0_185[0] = temp0_185[0] * arg3[0]
float temp0_317[0x4] = _mm_mul_ps(_mm_shuffle_epi32(temp0_185 ^ data_142d3f780, 0xc0), zmm12)
arg3[0] = arg3[0] + zmm4[0]
*arg8 = arg3[0]
arg2 = arg1[0xe]
float zmm13[0x4] = arg1[0xf]
float temp0_318[0x4] = _mm_mul_ps(arg2, zx.o(0))
float temp0_319[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0)
float temp0_321[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0x1b), temp0_319)
zmm8 = data_142d3f7c0
float temp0_323[0x4] = _mm_add_ps(_mm_mul_ps(temp0_321, zmm8), temp0_318)
float temp0_324[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0x55)
float temp0_326[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg2, arg2, 1), temp0_324)
float zmm10[0x4] = data_142d3f7d0
float temp0_328[0x4] = _mm_add_ps(_mm_mul_ps(temp0_326, zmm10), temp0_323)
float temp0_329[0x4] = _mm_shuffle_ps(temp0_315, temp0_315, 0xaa)
float temp0_331[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0xb1), temp0_329)
zmm11 = data_142d3f7b0
float temp0_333[0x4] = _mm_add_ps(_mm_mul_ps(temp0_331, zmm11), temp0_328)
zmm0 = data_142d3f640
float temp0_334[0x4] = _mm_mul_ps(temp0_333, zmm0)
float temp0_335[0x4] = _mm_mul_ps(zx.o(0), zmm13)
float temp0_336[0x4] = _mm_shuffle_ps(temp0_317, temp0_317, 0)
float temp0_340[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0x1b), temp0_336), zmm8), temp0_335)
float temp0_341[0x4] = _mm_shuffle_ps(temp0_317, temp0_317, 0x55)
float temp0_345[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm13, zmm13, 1), temp0_341), zmm10), temp0_340)
float temp0_346[0x4] = _mm_shuffle_ps(temp0_317, temp0_317, 0xaa)
float temp0_351[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xb1), temp0_346), zmm11), 
        temp0_345), 
    zmm0)
float temp0_352[0x4] = _mm_add_ps(temp0_334, arg2)
float temp0_353[0x4] = _mm_mul_ps(temp0_352, temp0_352)
float temp0_355[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_353, temp0_353[0].q), temp0_353)
float temp0_356[0x4] = _mm_shuffle_ps(temp0_355, temp0_355, 0xe5)
temp0_356[0] = temp0_356[0] + temp0_355[0]
arg4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_356[0], 6), 0xffffffff)
zmm5 = 0x3f000000
temp0_356[0] = temp0_356[0] * 0.5f
float temp0_359[0x4] = _mm_rsqrt_ss(temp0_356[0], temp0_356[0])
temp0_359[0] = temp0_359[0] * temp0_359[0]
temp0_359[0] = temp0_359[0] * temp0_356[0]
arg2 = 0x3f000000
arg2[0] = 0.5f - temp0_359[0]
arg2[0] = arg2[0] * temp0_359[0]
arg2[0] = arg2[0] + temp0_359[0]
arg2[0] = arg2[0] * arg2[0]
arg2[0] = arg2[0] * temp0_356[0]
arg3 = 0x3f000000
arg3[0] = 0.5f - arg2[0]
arg3[0] = arg3[0] * arg2[0]
arg3[0] = arg3[0] + arg2[0]
float temp0_361[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_352)
float temp0_362[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
zmm7 = data_142d3f660
arg3 = _mm_and_ps(temp0_361, temp0_362)
arg4 = _mm_or_ps(_mm_andnot_ps(temp0_362, zmm7), arg3)
float temp0_366[0x4] = _mm_add_ps(temp0_351, zmm13)
float temp0_367[0x4] = _mm_mul_ps(temp0_366, temp0_366)
float temp0_369[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_367, temp0_367[0].q), temp0_367)
float temp0_370[0x4] = _mm_shuffle_ps(temp0_369, temp0_369, 0xe5)
temp0_370[0] = temp0_370[0] + temp0_369[0]
zmm14 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_370[0], 6), 0xffffffff)
temp0_370[0] = temp0_370[0] * 0.5f
float temp0_373[0x4] = _mm_rsqrt_ss(temp0_370[0], temp0_370[0])
temp0_373[0] = temp0_373[0] * temp0_373[0]
temp0_373[0] = temp0_373[0] * temp0_370[0]
zmm4 = 0x3f000000
zmm4[0] = 0.5f - temp0_373[0]
zmm4[0] = zmm4[0] * temp0_373[0]
zmm4[0] = zmm4[0] + temp0_373[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] * temp0_370[0]
zmm5[0] = 0.5f - zmm4[0]
zmm5[0] = zmm5[0] * zmm4[0]
zmm5[0] = zmm5[0] + zmm4[0]
float temp0_375[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_366)
float temp0_376[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0)
zmm5 = _mm_and_ps(temp0_375, temp0_376)
zmm14 = _mm_or_ps(_mm_andnot_ps(temp0_376, zmm7), zmm5)
arg1[0xe] = arg4
zmm13 = _mm_shuffle_epi32(arg4, 0xc9)
zmm0 = _mm_shuffle_epi32(arg4, 0xd2)
zmm5 = _mm_shuffle_epi32(arg4, 0xff)
float temp0_383[0x4] = _mm_mul_ps(arg4, zmm14)
float temp0_385[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_383, temp0_383[0].q), temp0_383)
float temp0_386[0x4] = _mm_shuffle_ps(temp0_385, temp0_385, 0xe5)
temp0_386[0] = temp0_386[0] + temp0_385[0]
float temp0_387[0x4] = _mm_cmpeq_ss(0, temp0_386[0], 2)
zmm6 = _mm_and_ps(temp0_387, zmm9)
arg2 = _mm_or_ps(_mm_andnot_ps(temp0_387, 0xbf800000), zmm6)
float temp0_392[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg2, arg2, 0), zmm14)
arg1[0xf] = temp0_392
zmm6 = (*arg1)[6]
zmm7 = arg1[1][0]
arg3 = zx.o(arg1[1][0].q)[0].q | zmm6[0].q << 0x40
float temp0_396[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_unpacklo_ps(zmm6, zmm7[0].q)[0].q | (*arg1)[5][0].q << 0x40, zmm13), 
    _mm_mul_ps(zx.o(*(arg1 + 0x14))[0].q | zmm7[0].q << 0x40, zmm0))
float temp0_397[0x4] = _mm_add_ps(temp0_396, temp0_396)
float temp0_399[0x4] = _mm_add_ps(arg3, _mm_mul_ps(zmm5, temp0_397))
float temp0_405[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xd2), zmm13), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_397, temp0_397, 0xc9), zmm0)), 
    temp0_399)
float temp0_406[0x4] = _mm_add_ps(zx.o(arg1[0xc][0].q)[0].q | (*arg1)[0x32][0].q << 0x40, temp0_405)
arg1[8][0] = temp0_406[0]
float temp0_407[0x4] = _mm_shuffle_ps(temp0_406, temp0_406, 0xe5)
temp0_406[0].q = temp0_406 u>> 0x40
(*arg1)[0x21] = temp0_407[0]
(*arg1)[0x22] = temp0_406[0]
arg3 = (*arg1)[0x12]
zmm4 = arg1[4][0]
zmm5 = (*arg1)[0x11]
float temp0_408[0x4] = _mm_shuffle_ps(temp0_392, temp0_392, 0xc9)
zmm6 = zx.o(arg1[4][0].q)[0].q | arg3[0].q << 0x40
float temp0_410[0x4] =
    _mm_mul_ps(_mm_unpacklo_ps(arg3, zmm4[0].q)[0].q | zmm5[0].q << 0x40, temp0_408)
float temp0_411[0x4] = _mm_shuffle_ps(temp0_392, temp0_392, 0xd2)
float temp0_413[0x4] =
    _mm_sub_ps(temp0_410, _mm_mul_ps(zx.o(*(arg1 + 0x44))[0].q | zmm4[0].q << 0x40, temp0_411))
float temp0_414[0x4] = _mm_add_ps(temp0_413, temp0_413)
zmm13 = (*arg1)[0x3f]
float temp0_417[0x4] = _mm_add_ps(zmm6, _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), temp0_414))
float temp0_423[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xd2), temp0_408), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xc9), temp0_411)), 
    temp0_417)
float temp0_424[0x4] = _mm_add_ps(zx.o(*(arg1 + 0xcc))[0].q | (*arg1)[0x35][0].q << 0x40, temp0_423)
(*arg1)[0x23] = temp0_424[0]
float temp0_425[0x4] = _mm_shuffle_ps(temp0_424, temp0_424, 0xe5)
temp0_424[0].q = temp0_424 u>> 0x40
arg1[9][0] = temp0_425[0]
(*arg1)[0x25] = temp0_424[0]
arg2 = (*arg1)[0x3b]
float temp0_426[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
zmm5 = *arg1
float temp0_427[0x4] = _mm_mul_ps(temp0_426, zmm5)
zmm7 = arg1[0xe][0]
float temp0_428[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
float temp0_429[0x4] = _mm_unpacklo_ps((*arg1)[3], (*arg1)[2][0].q)
zmm6 = (*arg1)[1]
zmm4 = temp0_429[0].q | zmm6[0].q << 0x40
float temp0_430[0x4] = _mm_unpacklo_ps(zmm5, zmm6[0].q)
float temp0_431[0x4] = _mm_unpacklo_ps(zmm6, zmm5[0].q)
float temp0_432[0x4] = _mm_shuffle_ps(zmm5, zmm4, 0x20)
zmm6 = temp0_431[0].q | temp0_429[0].q << 0x40
float temp0_436[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_429, temp0_432, 0x24), temp0_428), zmm8), temp0_427)
arg2 = (*arg1)[0x39]
float temp0_437[0x4] = _mm_shuffle_ps(arg2, arg2, 0)
float temp0_440[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 8))[0].q | temp0_430[0].q << 0x40, temp0_437), zmm10), 
    temp0_436)
zmm0 = (*arg1)[0x3a]
float temp0_444[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm6, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm11), temp0_440)
float temp0_445[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
zmm7 = arg1[3]
float temp0_446[0x4] = _mm_mul_ps(temp0_445, zmm7)
arg3 = arg1[0xf][0]
float temp0_447[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_448[0x4] = _mm_unpacklo_ps((*arg1)[0xf], (*arg1)[0xe][0].q)
arg2 = (*arg1)[0xd]
zmm4 = temp0_448[0].q | arg2[0].q << 0x40
float temp0_449[0x4] = _mm_unpacklo_ps(zmm7, arg2[0].q)
float temp0_450[0x4] = _mm_unpacklo_ps(arg2, zmm7[0].q)
float temp0_451[0x4] = _mm_shuffle_ps(zmm7, zmm4, 0x20)
arg2 = temp0_450[0].q | temp0_448[0].q << 0x40
float temp0_455[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_448, temp0_451, 0x24), temp0_447), zmm8), temp0_446)
arg3 = (*arg1)[0x3d]
float temp0_456[0x4] = _mm_shuffle_ps(arg3, arg3, 0)
float temp0_459[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(zx.o(*(arg1 + 0x38))[0].q | temp0_449[0].q << 0x40, temp0_456), zmm10), 
    temp0_455)
zmm0 = (*arg1)[0x3e]
float temp0_463[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(arg2, _mm_shuffle_ps(zmm0, zmm0, 0)), zmm11), temp0_459)
arg1[0xa] = temp0_444
float temp0_464[0x4] = _mm_mul_ps(temp0_444, temp0_463)
float temp0_466[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_464, temp0_464[0].q), temp0_464)
float temp0_467[0x4] = _mm_shuffle_ps(temp0_466, temp0_466, 0xe5)
temp0_467[0] = temp0_467[0] + temp0_466[0]
float temp0_468[0x4] = _mm_cmpeq_ss(0, temp0_467[0], 2)
zmm9 = _mm_and_ps(zmm9, temp0_468)
arg4 = _mm_or_ps(_mm_andnot_ps(temp0_468, 0xbf800000), zmm9)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_463)
return arg8
