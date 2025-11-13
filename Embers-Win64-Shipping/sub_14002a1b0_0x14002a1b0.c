// 函数: sub_14002a1b0
// 地址: 0x14002a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_b8[0x4] = arg3
float zmm1[0x4] = arg1[0xe]
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
arg3 = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0)
float zmm4[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * (*arg1)[0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg4, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float zmm8[0x4] = data_142d3f670
float temp0_17[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float temp0_18[0x4] = _mm_sub_ps(zmm8, temp0_16)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float zmm9[0x4] = arg1[6][0]
float temp0_22[0x4] = _mm_blend_ps(
    _mm_insert_ps(_mm_insert_ps(temp0_13, temp0_11, 0x4e), temp0_12, 0x14), temp0_18, 4)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xc0), zmm9)
float temp0_26[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_18, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_27[0x4] = _mm_insert_ps(temp0_18, temp0_12, 0x8c)
float temp0_30[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_17), temp0_24)
float temp0_31[0x4] = _mm_insert_ps(temp0_27, temp0_11, 0x20)
float temp0_34[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_30)
float zmm11[0x4] = (*arg1)[0x1b]
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm9)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xd5), temp0_17), temp0_36)
float temp0_42[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_39)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm9)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_17), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc0), temp0_26)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd5), temp0_31), temp0_52)
float temp0_58[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xea), temp0_22), temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc0), temp0_26)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd5), temp0_31), temp0_60)
float temp0_66[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xea), temp0_22), temp0_63)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_26)
float temp0_71[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_31), temp0_68)
float temp0_74[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_22), temp0_71)
float zmm0[0x4] = arg1[0xf]
float temp0_75[0x4] = _mm_add_ps(zmm0, zmm0)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_75)
float zmm3[0x4] = (*arg1)[0x3d]
float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_75)
zmm4 = (*arg1)[0x3f]
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0_75)
temp0_75[0].q = temp0_75 u>> 0x40
temp0_75[0] = temp0_75[0] * (*arg1)[0x3e]
float temp0_83[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_22, temp0_79, 0x4e), temp0_77, 0xc)
float temp0_84[0x4] = _mm_insert_ps(temp0_77, temp0_79, 0x88)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xd8)
float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_85)
float temp0_87[0x4] = _mm_sub_ps(temp0_85, temp0_81)
float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x78)
float temp0_92[0x4] = _mm_sub_ps(zmm8, 
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0_75, temp0_75, 0x1c), temp0_79, 0x60), temp0_88))
float temp0_93[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_94[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xc0), zmm11)
float temp0_98[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_92, temp0_86, 0x9c), temp0_87, 0x60)
float temp0_101[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), temp0_93), temp0_96)
float temp0_104[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd5), temp0_94), temp0_101)
float temp0_105[0x4] = _mm_insert_ps(temp0_92, temp0_87, 0x8c)
float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xea), zmm11)
float temp0_110[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xd5), temp0_93), temp0_107)
float temp0_112[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_101, temp0_86, 0x4e), temp0_87, 0x14)
float temp0_113[0x4] = _mm_insert_ps(temp0_105, temp0_86, 0x20)
float temp0_114[0x4] = _mm_blend_ps(temp0_112, temp0_92, 4)
float temp0_117[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_94), temp0_110)
float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), zmm11)
float temp0_122[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc0), temp0_93), temp0_119)
float temp0_125[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_92, temp0_92, 0xea), temp0_94), temp0_122)
float temp0_127[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xc0), temp0_98)
float temp0_130[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xd5), temp0_113), temp0_127)
float temp0_133[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_104, temp0_104, 0xea), temp0_114), temp0_130)
float temp0_135[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xc0), temp0_98)
float temp0_138[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xd5), temp0_113), temp0_135)
float temp0_141[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_117, temp0_117, 0xea), temp0_114), temp0_138)
float temp0_143[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xc0), temp0_98)
float temp0_146[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xd5), temp0_113), temp0_143)
float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xea), temp0_114)
float temp0_149[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_150[0x4] = _mm_add_ps(temp0_148, temp0_146)
float temp0_152[0x4] =
    _mm_sub_ps(temp0_149, __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20))
zmm1 = data_142d3f780
arg3 = _mm_unpackhi_pd(temp0_152, temp0_152[0].q)
zmm3 = arg3 ^ zmm1
float temp0_154[0x4] = _mm_movehdup_ps(temp0_152)
float zmm7[0x4] = _mm_shuffle_epi32(zmm3, 0x80)
float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xc1), zmm7)
float temp0_158[0x4] = _mm_insert_ps(zmm3, temp0_152, 0x9c)
float temp0_159[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xd5)
float temp0_162[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc1), temp0_159), temp0_157)
zmm4 = temp0_154 ^ zmm1
float temp0_164[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_158, zmm4, 0x20), temp0_162)
float temp0_167[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(temp0_74), temp0_66, 0x68), zmm7)
float temp0_169[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xda), temp0_159)
float zmm6[0x4] = temp0_152 ^ zmm1
zmm11 = _mm_insert_ps(temp0_154, zmm6, 0x10)[0].q | temp0_152[0].q << 0x40
float temp0_171[0x4] = _mm_add_ps(temp0_169, temp0_167)
float temp0_172[0x4] = _mm_shuffle_ps(zmm6, temp0_152, 0x40)
float temp0_174[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_152, 0), temp0_152, 0xc8)
float temp0_176[0x4] = _mm_add_ps(_mm_mul_ps(zmm11, temp0_171), temp0_164)
float temp0_178[0x4] = _mm_insert_ps(_mm_shuffle_ps(temp0_152, temp0_152, 0xea), zmm4, 0x20)
float temp0_180[0x4] = _mm_shuffle_ps(temp0_74, _mm_shuffle_ps(temp0_66, temp0_74, 0x30), 0x80)
float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xc0), temp0_178)
float temp0_184[0x4] = _mm_add_ps(_mm_mul_ps(temp0_180, temp0_172), temp0_182)
zmm9 = (*arg1)[0x1e]
float temp0_185[0x4] = _mm_add_ps(temp0_176, zmm9)
float temp0_188[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(arg3, zmm4, 0x10), zmm4, 0x20), temp0_184)
float temp0_189[0x4] = _mm_shuffle_ps(temp0_74, temp0_66, 0xc)
float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_189, temp0_189, 0x78), temp0_178)
float temp0_195[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xe6), temp0_66, 0x68), temp0_172), 
    temp0_191)
float temp0_196[0x4] = __insertps_xmmps_memd_immb(zmm9, (*arg1)[0x1e], 0x20)
float temp0_197[0x4] = _mm_mul_ps(temp0_174, temp0_195)
float temp0_198[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
float temp0_199[0x4] = _mm_add_ps(temp0_197, temp0_188)
float temp0_200[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_201[0x4] = _mm_add_ps(temp0_196, temp0_199)
float temp0_202[0x4] = _mm_sub_ps(temp0_198, temp0_200)
zmm3 = _mm_unpackhi_pd(temp0_202, temp0_202[0].q)
float zmm13[0x4] = data_142d3f780
arg4 = zmm3 ^ zmm13
zmm1 = _mm_shuffle_epi32(arg4, 0x80)
float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xc1), zmm1)
float temp0_207[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xd5)
float temp0_210[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xc1), temp0_207), temp0_206)
float temp0_211[0x4] = _mm_insert_ps(arg4, temp0_202, 0x9c)
float temp0_212[0x4] = _mm_movehdup_ps(temp0_202)
zmm6 = temp0_212 ^ zmm13
float temp0_214[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_211, zmm6, 0x20), temp0_210)
float temp0_217[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(temp0_150), temp0_141, 0x68), zmm1)
float temp0_220[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xda), temp0_207), temp0_217)
zmm7 = temp0_202 ^ zmm13
float temp0_223[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(temp0_212, zmm7, 0x10)[0].q | temp0_202[0].q << 0x40, temp0_220), 
    temp0_214)
float temp0_225[0x4] = _mm_shuffle_ps(temp0_150, _mm_shuffle_ps(temp0_141, temp0_150, 0x30), 0x80)
float temp0_226[0x4] = _mm_shuffle_ps(zmm7, temp0_202, 0x40)
float temp0_228[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, temp0_202, 0), temp0_202, 0xc8)
float temp0_230[0x4] = _mm_insert_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xea), zmm6, 0x20)
float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xc0), temp0_230)
float temp0_234[0x4] = _mm_add_ps(_mm_mul_ps(temp0_225, temp0_226), temp0_232)
float temp0_237[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm3, zmm6, 0x10), zmm6, 0x20), temp0_234)
float temp0_238[0x4] = _mm_shuffle_ps(temp0_150, temp0_141, 0xc)
float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_238, temp0_238, 0x78), temp0_230)
float temp0_244[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(temp0_150, temp0_150, 0xe6), temp0_141, 0x68), 
        temp0_226), 
    temp0_240)
zmm13 = (*arg1)[0x1f]
float temp0_245[0x4] = _mm_add_ps(temp0_223, zmm13)
float temp0_247[0x4] = _mm_add_ps(_mm_mul_ps(temp0_228, temp0_244), temp0_237)
float temp0_249[0x4] = _mm_add_ps(_mm_insert_ps(zmm13, zmm13, 0x20), temp0_247)
float temp0_251[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_185, temp0_201, 5), temp0_201, 0xd8)
float temp0_253[0x4] = _mm_blend_ps(_mm_unpackhi_pd(temp0_185, temp0_185[0].q), temp0_201, 0xe)
float temp0_255[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_245, temp0_249, 5), temp0_249, 0xd8)
float temp0_256[0x4] = _mm_add_ps(temp0_185, temp0_245)
temp0_245[0].q = temp0_245 u>> 0x40
float temp0_258[0x4] = _mm_add_ps(_mm_blend_ps(temp0_245, temp0_249, 0xe), temp0_253)
int32_t temp0_259 = _mm_extract_ps(temp0_258, 0)
int32_t temp0_260 = _mm_extract_ps(temp0_258, 1)
int32_t temp0_261 = _mm_extract_ps(temp0_258, 2)
float temp0_264[0x4] = __cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_256, 0x800000, 0x30), data_142d3f770), 
    data_142d3f5c0, 2)
float temp0_265[0x4] = _mm_add_ps(temp0_255, temp0_251)
char result = _mm_movemask_ps(temp0_264)
float var_f8[0x4] = zmm13
float zmm10[0x4]
float zmm12[0x4]
float zmm14[0x4]
float zmm15[0x4]

if (result != 0xf)
label_14002a917:
    float temp0_277[0x4] = _mm_movehdup_ps(temp0_256)
    zmm0 = _mm_unpackhi_pd(temp0_256, temp0_256[0].q)
    float temp0_279[0x4] = _mm_insert_ps(temp0_265, temp0_256, 0x8a)
    zmm7 = zx.o(temp0_259)
    zmm6 = zx.o(temp0_260)
    float temp0_280[0x4] = _mm_insert_ps(zmm7, zmm6, 0x1c)
    arg3 = zx.o(temp0_261)
    zmm9 = data_142d3f660
    float temp0_283[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(temp0_256, zmm0, 0x10), zmm7, 0x20), arg3, 0x30)
    float temp0_285[0x4] = _mm_mul_ps(_mm_insert_ps(zmm9, temp0_265, 0x46), temp0_283)
    float temp0_286[0x4] = _mm_insert_ps(temp0_277, zmm6, 0x2a)
    float temp0_289[0x4] =
        _mm_sub_ps(temp0_285, _mm_mul_ps(_mm_insert_ps(temp0_265, temp0_265, 0x9c), temp0_286))
    float temp0_290[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0)
    float temp0_291[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0x55)
    float temp0_292[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0xaa)
    float temp0_293[0x4] = _mm_shuffle_ps(temp0_289, temp0_289, 0xff)
    zmm10 = 0x3f800000
    float temp0_295[0x4] = _mm_mul_ps(_mm_shuffle_ps(0x3f800000, arg3, 0), temp0_280)
    float var_108_1 = zmm7[0]
    float temp0_298[0x4] =
        _mm_sub_ps(temp0_295, _mm_mul_ps(_mm_unpacklo_ps(zmm7, zmm6[0].q)[0].q << 0x40, zx.o(0)))
    float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_265, temp0_256, 5), temp0_279)
    float temp0_301[0x4] = _mm_shuffle_ps(temp0_256, temp0_265, 5)
    float temp0_304[0x4] =
        _mm_sub_ps(temp0_300, _mm_mul_ps(_mm_insert_ps(temp0_256, temp0_265, 0x8a), temp0_301))
    float temp0_305[0x4] = _mm_mul_ps(temp0_290, temp0_293)
    float temp0_307[0x4] = _mm_add_ps(_mm_mul_ps(temp0_291, temp0_292), temp0_305)
    float temp0_309[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0xd8), temp0_304)
    float temp0_311[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_309, temp0_309, 1), temp0_309)
    float temp0_314[0x4] =
        _mm_sub_ps(temp0_307, _mm_add_ps(_mm_shuffle_ps(temp0_311, temp0_311, 0x39), temp0_311))
    temp0_314[0] - 0f
    
    if (temp0_314[0] != 0f || not(is_ordered.d(temp0_314[0], 0f)))
        zmm7 = temp0_256[0].q | temp0_265[0].q << 0x40
        float temp0_315[0x4] = __insertps_xmmps_memd_immb(arg3, 0x3f800000, 0x36)
        float temp0_316[0x4] = _mm_shuffle_ps(temp0_256, temp0_265, 0x20)
        float temp0_318[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_298[0].q), temp0_316)
        float temp0_321[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0x20), zmm7), temp0_318)
        float temp0_323[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_292, temp0_279), temp0_321)
        float temp0_324[0x4] = _mm_insert_ps(data_142d4cc30, arg3, 0x10)
        float temp0_326[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0x66), temp0_324)
        float temp0_329[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_304, temp0_304, 0x33), temp0_315), temp0_326)
        float temp0_331[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_291, temp0_280), temp0_329)
        float temp0_332[0x4] = _mm_mul_ps(temp0_315, temp0_290)
        zmm1 = _mm_broadcastsd_pd(temp0_304[0].q)
        temp0_304[0].q = temp0_304 u>> 0x40
        float temp0_334[0x4] = _mm_mul_ps(temp0_304, temp0_280)
        float temp0_338[0x4] = _mm_sub_ps(temp0_332, 
            _mm_add_ps(_mm_mul_ps(__insertps_xmmps_memd_immb(temp0_280, var_108_1, 0x1d), zmm1), 
                temp0_334))
        float temp0_339[0x4] = _mm_mul_ps(zmm7, temp0_293)
        float temp0_341[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0xcc), temp0_279)
        float temp0_343[0x4] = _mm_insert_ps(_mm_insert_ps(zmm1, temp0_256, 0x9d), temp0_265, 0xb0)
        float temp0_347[0x4] = _mm_sub_ps(temp0_339, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_298, temp0_298, 0x66), temp0_343), 
                temp0_341))
        float temp0_348[0x4] = _mm_div_ps(data_142fc92f0, temp0_314)
        float temp0_349[0x4] = _mm_mul_ps(temp0_347, temp0_348)
        float temp0_350[0x4] = _mm_mul_ps(temp0_331, temp0_348)
        zmm3 =
            _mm_shuffle_ps(_mm_mul_ps(temp0_323, temp0_348), _mm_mul_ps(temp0_348, temp0_338), 0x77)
        zmm10 = _mm_shuffle_ps(temp0_349, temp0_350, 0x77)
        zmm7 = _mm_shuffle_ps(temp0_349, temp0_350, 0x22)
    else
        zmm7 = data_142d4cc20
        zmm3 = data_142d4cc30
    
    zmm15 = temp0_74
    zmm14 = temp0_58
    zmm11 = _mm_movehdup_ps(zmm10)
    zmm0 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
    arg3 = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
    zmm9 = _mm_movehdup_ps(zmm7)
    zmm4 = _mm_unpackhi_pd(zmm7, zmm7[0].q)
    zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xe7)
    zmm12 = _mm_movehdup_ps(zmm3)
    zmm6 = _mm_unpackhi_pd(zmm3, zmm3[0].q)
    arg4 = _mm_shuffle_ps(zmm3, zmm3, 0xe7)
else
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_265, 0x800000, 0x30), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_14002a917
    
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
        __andps_xmmxud_memxud(
            __insertps_xmmps_memd_immb(
                _mm_insert_ps(_mm_insert_ps(zx.o(temp0_259), zx.o(temp0_260), 0x10), 
                    zx.o(temp0_261), 0x20), 
                0x800000, 0x30), 
            data_142d3f770), 
        data_142d3f5c0, 2))
    
    if (result != 0xf)
        goto label_14002a917
    
    zmm6 = 0x3f800000
    arg4 = zx.o(0)
    zmm12 = zx.o(0)
    zmm3 = zx.o(0)
    zmm1 = zx.o(0)
    zmm4 = zx.o(0)
    zmm9 = 0x3f800000
    zmm7 = zx.o(0)
    arg3 = zx.o(0)
    zmm0 = zx.o(0)
    zmm11 = zx.o(0)
    zmm10 = 0x3f800000
    zmm15 = temp0_74
    zmm14 = temp0_58

float temp0_367[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm3, zmm12, 0x10), zmm6, 0x20), arg4, 0x30)
float temp0_370[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm7, zmm9, 0x10), zmm4, 0x20), zmm1, 0x30)
float temp0_373[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm10, zmm11, 0x10), zmm0, 0x20), arg3, 0x30)
zmm0 = *arg2
arg3 = (*arg2)[1]
float temp0_375[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_373)
float temp0_378[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_370), temp0_375)
zmm1 = (*arg2)[2]
float temp0_381[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_367), temp0_378)
zmm13 = (*arg1)[0x1e]
float temp0_383[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc0), temp0_381)
zmm7 = data_142d3f780
float temp0_385[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_f8 ^ zmm7, 0xc0), temp0_381)
float temp0_386[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_387[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
float temp0_388[0x4] = _mm_sub_ps(temp0_386, temp0_387)
float temp0_389[0x4] = _mm_shuffle_ps(temp0_388, temp0_388, 0xc9)
float temp0_391[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_381, temp0_381, 0xd2), temp0_389)
float temp0_392[0x4] = _mm_shuffle_ps(temp0_388, temp0_388, 0xd2)
float temp0_395[0x4] =
    _mm_sub_ps(temp0_391, _mm_mul_ps(_mm_shuffle_ps(temp0_381, temp0_381, 0xc9), temp0_392))
float temp0_397[0x4] = _mm_mul_ps(zmm14, _mm_shuffle_ps(temp0_395, temp0_395, 0xc0))
float temp0_400[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_66, _mm_shuffle_ps(temp0_395, temp0_395, 0xd5)), temp0_397)
float temp0_402[0x4] = _mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_395, temp0_395, 0xea))
float temp0_403[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
float temp0_404[0x4] = _mm_add_ps(temp0_402, temp0_400)
float temp0_405[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0xcc)), (*arg1)[0x35], 0x20)
float temp0_406[0x4] = _mm_sub_ps(temp0_403, temp0_405)
float temp0_407[0x4] = _mm_shuffle_ps(temp0_406, temp0_406, 0xc9)
zmm1 = temp0_381 ^ zmm7
float temp0_409[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xd2), temp0_407)
float temp0_410[0x4] = _mm_shuffle_ps(temp0_406, temp0_406, 0xd2)
float temp0_413[0x4] = _mm_sub_ps(temp0_409, _mm_mul_ps(_mm_shuffle_epi32(zmm1, 0xc9), temp0_410))
float temp0_415[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(temp0_413, temp0_413, 0xc0))
float temp0_417[0x4] = _mm_mul_ps(temp0_141, _mm_shuffle_ps(temp0_413, temp0_413, 0xd5))
float temp0_418[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0xc0)
float temp0_420[0x4] = _mm_add_ps(_mm_mul_ps(temp0_383, temp0_418), temp0_387)
arg1[0xc][0] = temp0_420[0]
(*arg1)[0x31] = __extractps_memd_xmmps_immb(temp0_420, 1)
float temp0_422[0x4] = _mm_add_ps(temp0_417, temp0_415)
(*arg1)[0x32] = __extractps_memd_xmmps_immb(temp0_420, 2)
float temp0_425[0x4] = _mm_mul_ps(temp0_150, _mm_shuffle_ps(temp0_413, temp0_413, 0xea))
float temp0_427[0x4] = _mm_add_ps(_mm_mul_ps(temp0_385, temp0_418), temp0_405)
(*arg1)[0x33] = temp0_427[0]
arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_427, 1)
float temp0_429[0x4] = _mm_add_ps(temp0_425, temp0_422)
(*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_427, 2)
zmm4 = arg1[0xe]
zmm14 = arg1[0xf]
float temp0_431[0x4] = _mm_mul_ps(temp0_404, temp0_418)
float temp0_432[0x4] = _mm_mul_ps(temp0_418, temp0_429)
float temp0_433[0x4] = _mm_mul_ps(zmm4, zx.o(0))
float temp0_434[0x4] = _mm_shuffle_ps(temp0_431, temp0_431, 0)
float temp0_436[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_434)
zmm11 = data_142d3f7c0
float temp0_438[0x4] = _mm_add_ps(_mm_mul_ps(temp0_436, zmm11), temp0_433)
float temp0_439[0x4] = _mm_shuffle_ps(temp0_431, temp0_431, 0x55)
float temp0_441[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_439)
zmm10 = data_142d3f7d0
float temp0_443[0x4] = _mm_add_ps(_mm_mul_ps(temp0_441, zmm10), temp0_438)
float temp0_444[0x4] = _mm_shuffle_ps(temp0_431, temp0_431, 0xaa)
float temp0_446[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_444)
zmm9 = data_142d3f7b0
float temp0_448[0x4] = _mm_add_ps(_mm_mul_ps(temp0_446, zmm9), temp0_443)
arg4 = data_142d3f640
float temp0_449[0x4] = _mm_mul_ps(temp0_448, arg4)
float temp0_450[0x4] = _mm_mul_ps(zx.o(0), zmm14)
float temp0_451[0x4] = _mm_shuffle_ps(temp0_432, temp0_432, 0)
float temp0_455[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0x1b), temp0_451), zmm11), temp0_450)
float temp0_456[0x4] = _mm_shuffle_ps(temp0_432, temp0_432, 0x55)
float temp0_460[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm14, zmm14, 1), temp0_456), zmm10), temp0_455)
float temp0_461[0x4] = _mm_shuffle_ps(temp0_432, temp0_432, 0xaa)
float temp0_466[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xb1), temp0_461), zmm9), 
        temp0_460), 
    arg4)
float temp0_467[0x4] = _mm_add_ps(temp0_449, zmm4)
float temp0_468[0x4] = _mm_mul_ps(temp0_467, temp0_467)
float temp0_470[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_468, temp0_468[0].q), temp0_468)
float temp0_471[0x4] = _mm_movehdup_ps(temp0_470)
temp0_471[0] = temp0_471[0] + temp0_470[0]
float temp0_472[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_471[0], 6)
arg4 = 0x3f000000
temp0_471[0] = temp0_471[0] * 0.5f
float temp0_473[0x4] = _mm_rsqrt_ss(temp0_471[0], temp0_471[0])
temp0_473[0] = temp0_473[0] * temp0_473[0]
temp0_473[0] = temp0_473[0] * temp0_471[0]
zmm4 = 0x3f000000
zmm4[0] = 0.5f - temp0_473[0]
zmm4[0] = zmm4[0] * temp0_473[0]
zmm4[0] = zmm4[0] + temp0_473[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] * temp0_471[0]
zmm3 = 0x3f000000
zmm3[0] = 0.5f - zmm4[0]
zmm6 = _mm_andnot_ps(temp0_472, 0xffffffff)
zmm3[0] = zmm3[0] * zmm4[0]
zmm3[0] = zmm3[0] + zmm4[0]
float temp0_476[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_467)
float temp0_477[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm1 = data_142d3f660
zmm3 = _mm_and_ps(temp0_476, temp0_477)
zmm6 = _mm_or_ps(_mm_andnot_ps(temp0_477, zmm1), zmm3)
float temp0_481[0x4] = _mm_add_ps(temp0_466, zmm14)
float temp0_482[0x4] = _mm_mul_ps(temp0_481, temp0_481)
float temp0_484[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_482, temp0_482[0].q), temp0_482)
float temp0_485[0x4] = _mm_movehdup_ps(temp0_484)
temp0_485[0] = temp0_485[0] + temp0_484[0]
zmm15 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_485[0], 6), 0xffffffff)
temp0_485[0] = temp0_485[0] * 0.5f
float temp0_488[0x4] = _mm_rsqrt_ss(temp0_485[0], temp0_485[0])
temp0_488[0] = temp0_488[0] * temp0_488[0]
temp0_488[0] = temp0_488[0] * temp0_485[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_488[0]
zmm7[0] = zmm7[0] * temp0_488[0]
zmm7[0] = zmm7[0] + temp0_488[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_485[0]
arg4[0] = 0.5f - zmm7[0]
arg4[0] = arg4[0] * zmm7[0]
arg4[0] = arg4[0] + zmm7[0]
float temp0_490[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg4, arg4, 0), temp0_481)
float temp0_491[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0)
arg4 = _mm_and_ps(temp0_490, temp0_491)
zmm15 = _mm_or_ps(_mm_andnot_ps(temp0_491, zmm1), arg4)
arg1[0xe] = zmm6
zmm1 = _mm_shuffle_epi32(zmm6, 0xc9)
float temp0_496[0x4] = _mm_mul_ps(zmm6, zmm15)
float temp0_498[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_496, temp0_496[0].q), temp0_496)
float temp0_499[0x4] = _mm_movehdup_ps(temp0_498)
temp0_499[0] = temp0_499[0] + temp0_498[0]
float temp0_500[0x4] = _mm_cmpeq_ss(0, temp0_499[0], 2)
zmm3 = _mm_and_ps(temp0_500, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_500, 0xbf800000), zmm3)
float temp0_505[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm15)
arg1[0xf] = temp0_505
zmm3 = (*arg1)[6]
zmm4 = arg1[1][0]
float temp0_506[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), zmm3, 0x20)
float temp0_507[0x4] = _mm_insert_ps(zmm3, zmm4, 0x10)
float temp0_508[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x14)), zmm4, 0x20)
zmm4 = _mm_shuffle_epi32(zmm6, 0xd2)
float temp0_513[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_507, (*arg1)[5], 0x20), zmm1), 
    _mm_mul_ps(temp0_508, zmm4))
zmm6 = _mm_shuffle_epi32(zmm6, 0xff)
float temp0_515[0x4] = _mm_add_ps(temp0_513, temp0_513)
float temp0_517[0x4] = _mm_add_ps(temp0_506, _mm_mul_ps(zmm6, temp0_515))
float temp0_524[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0xd2), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0xc9), zmm4)), 
        temp0_517), 
    temp0_420)
arg1[8][0] = temp0_524[0]
(*arg1)[0x21] = __extractps_memd_xmmps_immb(temp0_524, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(temp0_524, 2)
zmm3 = (*arg1)[0x12]
zmm4 = arg1[4][0]
float temp0_527[0x4] = _mm_shuffle_ps(temp0_505, temp0_505, 0xc9)
float temp0_528[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), zmm3, 0x20)
float temp0_531[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm3, zmm4, 0x10), (*arg1)[0x11], 0x20), temp0_527)
float temp0_532[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x44)), zmm4, 0x20)
float temp0_533[0x4] = _mm_shuffle_ps(temp0_505, temp0_505, 0xd2)
float temp0_535[0x4] = _mm_sub_ps(temp0_531, _mm_mul_ps(temp0_532, temp0_533))
float temp0_536[0x4] = _mm_add_ps(temp0_535, temp0_535)
float temp0_539[0x4] =
    _mm_add_ps(temp0_528, _mm_mul_ps(_mm_shuffle_ps(temp0_505, temp0_505, 0xff), temp0_536))
float temp0_546[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_536, temp0_536, 0xd2), temp0_527), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_536, temp0_536, 0xc9), temp0_533)), 
        temp0_539), 
    temp0_427)
(*arg1)[0x23] = temp0_546[0]
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_546, 1)
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_546, 2)
arg4 = (*arg1)[0x3b]
float temp0_549[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
zmm1 = *arg1
float temp0_550[0x4] = _mm_mul_ps(temp0_549, zmm1)
zmm6 = arg1[0xe][0]
float temp0_551[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm4 = (*arg1)[3]
zmm3 = (*arg1)[2]
zmm0 = (*arg1)[1]
float temp0_557[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm3, 0x10), zmm0, 0x20), zmm1, 0x30), 
            temp0_551), 
        zmm11), 
    temp0_550)
arg4 = (*arg1)[0x39]
float temp0_558[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
float temp0_563[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), zmm1, 0x20), zmm0, 0x30), 
            temp0_558), 
        zmm10), 
    temp0_557)
arg4 = (*arg1)[0x3a]
float temp0_564[0x4] = _mm_shuffle_ps(arg4, arg4, 0)
float temp0_570[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm1, 0x10), zmm4, 0x20), zmm3, 0x30), 
            temp0_564), 
        zmm9), 
    temp0_563)
zmm3 = arg1[3]
zmm6 = arg1[0xf][0]
float temp0_571[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
arg4 = (*arg1)[0xf]
zmm4 = (*arg1)[0xe]
zmm1 = (*arg1)[0xd]
float temp0_575[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg4, zmm4, 0x10), zmm1, 0x20), zmm3, 0x30), 
    temp0_571)
zmm6 = (*arg1)[0x3f]
float temp0_577[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm3)
float temp0_579[0x4] = _mm_add_ps(_mm_mul_ps(temp0_575, zmm11), temp0_577)
zmm6 = (*arg1)[0x3d]
float temp0_580[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_585[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), zmm3, 0x20), zmm1, 0x30), 
            temp0_580), 
        zmm10), 
    temp0_579)
float temp0_588[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm1, zmm3, 0x10), arg4, 0x20), zmm4, 0x30)
zmm3 = (*arg1)[0x3e]
float temp0_592[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_588, _mm_shuffle_ps(zmm3, zmm3, 0)), zmm9), temp0_585)
arg1[0xa] = temp0_570
float temp0_593[0x4] = _mm_mul_ps(temp0_570, temp0_592)
float temp0_595[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_593, temp0_593[0].q), temp0_593)
float temp0_596[0x4] = _mm_movehdup_ps(temp0_595)
temp0_596[0] = temp0_596[0] + temp0_595[0]
float temp0_597[0x4] = _mm_cmpeq_ss(0, temp0_596[0], 2)
float temp0_598[0x4] = _mm_and_ps(0x3f800000, temp0_597)
arg3 = _mm_or_ps(_mm_andnot_ps(temp0_597, 0xbf800000), temp0_598)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_592)
return result
