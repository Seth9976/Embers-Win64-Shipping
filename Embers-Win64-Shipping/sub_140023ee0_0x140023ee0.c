// 函数: sub_140023ee0
// 地址: 0x140023ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_d8[0x4] = arg3
arg3 = arg1[0xe]
float temp0[0x4] = _mm_add_ps(arg3, arg3)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0)
float zmm1[0x4] = (*arg1)[0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
float zmm3[0x4] = (*arg1)[0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0)
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
float zmm10[0x4] = data_142d3f670
float temp0_17[0x4] = _mm_sub_ps(zmm10, temp0_16)
float zmm8[0x4] = arg1[6][0]
float temp0_18[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x19], 0x10)
float temp0_19[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1a], 0x20)
float temp0_22[0x4] =
    _mm_blend_ps(_mm_insert_ps(_mm_insert_ps(temp0_6, temp0_11, 0x4e), temp0_12, 0x14), temp0_17, 4)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc0), zmm8)
float temp0_26[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_17, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_27[0x4] = _mm_insert_ps(temp0_17, temp0_12, 0x8c)
float temp0_30[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_18), temp0_24)
float temp0_31[0x4] = _mm_insert_ps(temp0_27, temp0_11, 0x20)
float temp0_34[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_30)
float zmm9[0x4] = (*arg1)[0x1b]
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm8)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd5), temp0_18), temp0_36)
float temp0_42[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_39)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm8)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_18), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xea), temp0_19), temp0_47)
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
zmm1 = arg1[0xf]
float temp0_75[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_75)
zmm3 = (*arg1)[0x3d]
float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), temp0_75)
arg5 = (*arg1)[0x3f]
float temp0_81[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), temp0_75)
temp0_75[0].q = temp0_75 u>> 0x40
temp0_75[0] = temp0_75[0] * (*arg1)[0x3e]
float temp0_83[0x4] = _mm_shuffle_ps(_mm_insert_ps(temp0_31, temp0_79, 0x4e), temp0_77, 0xc)
float temp0_84[0x4] = _mm_insert_ps(temp0_77, temp0_79, 0x88)
float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xd8)
float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_85)
float temp0_87[0x4] = _mm_sub_ps(temp0_85, temp0_81)
float temp0_88[0x4] = _mm_shuffle_ps(temp0_83, temp0_83, 0x78)
float temp0_90[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_75, temp0_75, 0x1c), temp0_79, 0x60)
float temp0_91[0x4] = __insertps_xmmps_memd_immb(zx.o(0), arg1[7][0], 0x10)
float temp0_92[0x4] = _mm_add_ps(temp0_90, temp0_88)
float temp0_93[0x4] = __insertps_xmmps_memd_immb(zx.o(0), (*arg1)[0x1d], 0x20)
float temp0_94[0x4] = _mm_sub_ps(zmm10, temp0_92)
float temp0_96[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xc0), zmm9)
float temp0_98[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_94, temp0_86, 0x9c), temp0_87, 0x60)
float temp0_101[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xea), temp0_91), temp0_96)
float temp0_104[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xd5), temp0_93), temp0_101)
float temp0_105[0x4] = _mm_insert_ps(temp0_94, temp0_87, 0x8c)
float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xea), zmm9)
float temp0_110[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xd5), temp0_91), temp0_107)
float temp0_112[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_107, temp0_86, 0x4e), temp0_87, 0x14)
float temp0_113[0x4] = _mm_insert_ps(temp0_105, temp0_86, 0x20)
float temp0_114[0x4] = _mm_blend_ps(temp0_112, temp0_94, 4)
float temp0_117[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xc0), temp0_93), temp0_110)
float temp0_119[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_87, temp0_87, 0xd5), zmm9)
float temp0_122[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_86, temp0_86, 0xc0), temp0_91), temp0_119)
float temp0_125[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_94, temp0_94, 0xea), temp0_93), temp0_122)
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
float temp0_149[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xea), temp0_114), temp0_146)
float temp0_152[0x4] = _mm_sub_ps(
    __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20), 
    __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20))
float zmm0[0x4] = data_142d3f780
zmm3 = _mm_unpackhi_pd(temp0_152, temp0_152[0].q)
arg5 = zmm3 ^ zmm0
zmm10 = zmm0
float temp0_154[0x4] = _mm_movehdup_ps(temp0_152)
zmm0 = _mm_shuffle_epi32(arg5, 0x80)
float temp0_157[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xc1), zmm0)
float temp0_158[0x4] = _mm_insert_ps(arg5, temp0_152, 0x9c)
float temp0_159[0x4] = _mm_shuffle_ps(temp0_152, temp0_152, 0xd5)
float temp0_162[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xc1), temp0_159), temp0_157)
zmm1 = temp0_154 ^ zmm10
float temp0_164[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_158, zmm1, 0x20), temp0_162)
float temp0_167[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(temp0_74), temp0_66, 0x68), zmm0)
float temp0_169[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xda), temp0_159)
float zmm6[0x4] = temp0_152 ^ zmm10
float zmm14[0x4] = _mm_insert_ps(temp0_154, zmm6, 0x10)[0].q | temp0_152[0].q << 0x40
float temp0_171[0x4] = _mm_add_ps(temp0_169, temp0_167)
float temp0_172[0x4] = _mm_shuffle_ps(zmm6, temp0_152, 0x40)
float temp0_174[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_152, 0), temp0_152, 0xc8)
float temp0_176[0x4] = _mm_add_ps(_mm_mul_ps(zmm14, temp0_171), temp0_164)
float temp0_178[0x4] = _mm_insert_ps(_mm_shuffle_ps(temp0_152, temp0_152, 0xea), zmm1, 0x20)
float temp0_180[0x4] = _mm_shuffle_ps(temp0_74, _mm_shuffle_ps(temp0_66, temp0_74, 0x30), 0x80)
float temp0_182[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xc0), temp0_178)
float temp0_184[0x4] = _mm_add_ps(_mm_mul_ps(temp0_180, temp0_172), temp0_182)
zmm9 = (*arg1)[0x1e]
float temp0_185[0x4] = _mm_add_ps(temp0_176, zmm9)
float temp0_188[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm3, zmm1, 0x10), zmm1, 0x20), temp0_184)
float temp0_189[0x4] = _mm_shuffle_ps(temp0_74, temp0_66, 0xc)
float temp0_191[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_189, temp0_189, 0x78), temp0_178)
float temp0_197[0x4] = _mm_add_ps(
    _mm_mul_ps(temp0_174, 
        _mm_add_ps(
            _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(temp0_74, temp0_74, 0xe6), temp0_66, 0x68), 
                temp0_172), 
            temp0_191)), 
    temp0_188)
float temp0_199[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zmm9, (*arg1)[0x1e], 0x20), temp0_197)
float temp0_200[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm1 = (*arg1)[0x35]
float var_118 = zmm1[0]
float temp0_202[0x4] = _mm_sub_ps(temp0_200, _mm_insert_ps(zx.o(*(arg1 + 0xcc)), zmm1, 0x20))
zmm0 = _mm_unpackhi_pd(temp0_202, temp0_202[0].q)
float zmm11[0x4] = zmm10
float zmm5[0x4] = zmm0 ^ zmm10
zmm6 = _mm_shuffle_epi32(zmm5, 0x80)
float temp0_206[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xc1), zmm6)
float temp0_207[0x4] = _mm_shuffle_ps(temp0_202, temp0_202, 0xd5)
float temp0_210[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xc1), temp0_207), temp0_206)
float temp0_211[0x4] = _mm_insert_ps(zmm5, temp0_202, 0x9c)
float temp0_212[0x4] = _mm_movehdup_ps(temp0_202)
zmm10 = temp0_212 ^ zmm11
float temp0_214[0x4] = _mm_mul_ps(_mm_insert_ps(temp0_211, zmm10, 0x20), temp0_210)
float temp0_217[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(temp0_149), temp0_141, 0x68), zmm6)
float temp0_220[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xda), temp0_207), temp0_217)
zmm6 = temp0_202 ^ zmm11
float temp0_223[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(temp0_212, zmm6, 0x10)[0].q | temp0_202[0].q << 0x40, temp0_220), 
    temp0_214)
float temp0_225[0x4] = _mm_shuffle_ps(temp0_149, _mm_shuffle_ps(temp0_141, temp0_149, 0x30), 0x80)
float temp0_226[0x4] = _mm_shuffle_ps(zmm6, temp0_202, 0x40)
float temp0_228[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, temp0_202, 0), temp0_202, 0xc8)
float temp0_230[0x4] = _mm_insert_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0xea), zmm10, 0x20)
float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_133, temp0_133, 0xc0), temp0_230)
float temp0_234[0x4] = _mm_add_ps(_mm_mul_ps(temp0_225, temp0_226), temp0_232)
float temp0_237[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm10, 0x10), zmm10, 0x20), temp0_234)
float temp0_238[0x4] = _mm_shuffle_ps(temp0_149, temp0_141, 0xc)
float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_238, temp0_238, 0x78), temp0_230)
float temp0_244[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(temp0_149, temp0_149, 0xe6), temp0_141, 0x68), 
        temp0_226), 
    temp0_240)
zmm10 = (*arg1)[0x1f]
float temp0_245[0x4] = _mm_add_ps(temp0_223, zmm10)
float temp0_247[0x4] = _mm_add_ps(_mm_mul_ps(temp0_228, temp0_244), temp0_237)
float temp0_249[0x4] = _mm_add_ps(_mm_insert_ps(zmm10, zmm10, 0x20), temp0_247)
float temp0_251[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_185, temp0_199, 5), temp0_199, 0xd8)
float temp0_253[0x4] = _mm_blend_ps(_mm_unpackhi_pd(temp0_185, temp0_185[0].q), temp0_199, 0xe)
float temp0_256[0x4] =
    _mm_add_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_245, temp0_249, 5), temp0_249, 0xd8), temp0_251)
zmm1 = *arg4
int32_t temp0_257 = _mm_extract_epi32(temp0_58, 1)
int32_t temp0_258 = _mm_extract_epi32(temp0_58, 2)
uint32_t temp0_259 = _mm_movemask_ps(zmm1)
float temp0_260[0x4] = _mm_add_ps(temp0_185, temp0_245)
temp0_245[0].q = temp0_245 u>> 0x40
float temp0_261[0x4] = _mm_blend_ps(temp0_245, temp0_249, 0xe)
int32_t temp0_262 = _mm_extract_ps(temp0_66, 2)
float temp0_263[0x4] = _mm_add_ps(temp0_261, temp0_253)
int32_t temp0_264 = _mm_extract_ps(temp0_256, 0)
int32_t temp0_265 = _mm_extract_ps(temp0_256, 1)
int32_t temp0_266 = _mm_extract_ps(temp0_256, 2)
int32_t temp0_267 = _mm_extract_ps(temp0_263, 0)
int32_t temp0_268 = _mm_extract_ps(temp0_263, 1)
int32_t temp0_269 = _mm_extract_ps(temp0_263, 2)
float temp0_270[0x4] = _mm_movehdup_ps(temp0_66)
zmm9 = _mm_unpackhi_pd(temp0_260, temp0_260[0].q)
zmm3 = __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_260, 0x800000, 0x30), data_142d3f770)
float temp0_274[0x4] = _mm_movehdup_ps(temp0_260)
float var_128[0x4] = zmm10
float var_138 = temp0_270[0]
char result
float zmm7[0x4]
float zmm12[0x4]
float zmm13[0x4]
float zmm15[0x4]

if (temp0_259 != 0xf)
    float temp0_370[0x4] = __cmpps_xmmps_memps_immb(zmm3, data_142d3f5c0, 2)
    result = _mm_movemask_ps(_mm_cmpeq_epi32(zx.o(0), zmm1) | temp0_370)
    arg5 = zx.o(temp0_264)
    zmm12 = zx.o(temp0_265)
    zmm6 = zx.o(temp0_266)
    
    if (result != 0xf)
    label_1400249d7:
        float temp0_388[0x4] = _mm_insert_ps(zmm9, zmm6, 0x2a)
        zmm13 = zmm6
        zmm6 = zx.o(temp0_267)
        zmm1 = zx.o(temp0_268)
        float temp0_389[0x4] = _mm_insert_ps(zmm6, zmm1, 0x1c)
        zmm7 = zx.o(temp0_269)
        float temp0_392[0x4] = _mm_insert_ps(
            _mm_insert_ps(_mm_insert_ps(temp0_260, zmm9, 0x10), zmm6, 0x20), zmm7, 0x30)
        float temp0_394[0x4] =
            _mm_mul_ps(__insertps_xmmps_memd_immb(zmm12, 0x3f800000, 0x36), temp0_392)
        float temp0_395[0x4] = _mm_insert_ps(temp0_274, zmm1, 0x2a)
        float temp0_398[0x4] =
            _mm_sub_ps(temp0_394, _mm_mul_ps(_mm_insert_ps(arg5, zmm13, 0x1c), temp0_395))
        float temp0_399[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0)
        float temp0_400[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0x55)
        float temp0_401[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0xaa)
        float temp0_402[0x4] = _mm_shuffle_ps(temp0_398, temp0_398, 0xff)
        zmm10 = 0x3f800000
        float temp0_404[0x4] = _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm7, 0), temp0_389)
        float var_158_2 = zmm6[0]
        float temp0_407[0x4] = _mm_sub_ps(temp0_404, 
            _mm_mul_ps(_mm_unpacklo_ps(zmm6, zmm1[0].q)[0].q << 0x40, zx.o(0)))
        float temp0_409[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, temp0_260, 0), temp0_388)
        float temp0_410[0x4] = _mm_shuffle_ps(temp0_274, arg5, 0)
        float temp0_413[0x4] =
            _mm_sub_ps(temp0_409, _mm_mul_ps(_mm_insert_ps(zmm13, temp0_260, 0xaa), temp0_410))
        float temp0_414[0x4] = _mm_mul_ps(temp0_399, temp0_402)
        float temp0_416[0x4] = _mm_add_ps(_mm_mul_ps(temp0_400, temp0_401), temp0_414)
        float temp0_418[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_407, temp0_407, 0xd8), temp0_413)
        float temp0_420[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_418, temp0_418, 1), temp0_418)
        float temp0_423[0x4] =
            _mm_sub_ps(temp0_416, _mm_add_ps(_mm_shuffle_ps(temp0_420, temp0_420, 0x39), temp0_420))
        temp0_423[0] - 0f
        
        if (temp0_423[0] != 0f || not(is_ordered.d(temp0_423[0], 0f)))
            float temp0_425[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_260, arg5, 0x20), zmm12, 0x30)
            float temp0_426[0x4] = __insertps_xmmps_memd_immb(zmm7, 0x3f800000, 0x36)
            float temp0_428[0x4] = _mm_insert_ps(_mm_moveldup_ps(temp0_260), arg5, 0x30)
            float temp0_430[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_407[0].q), temp0_428)
            float temp0_433[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_407, temp0_407, 0x20), temp0_425), temp0_430)
            float temp0_435[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_401, temp0_388), temp0_433)
            float temp0_436[0x4] = _mm_insert_ps(data_142d4cc30, zmm7, 0x10)
            float temp0_438[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_413, temp0_413, 0x66), temp0_436)
            float temp0_441[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_413, temp0_413, 0x33), temp0_426), temp0_438)
            float temp0_443[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_400, temp0_389), temp0_441)
            float temp0_444[0x4] = __mulps_xmmps_memps(temp0_426, temp0_399)
            zmm5 = _mm_broadcastsd_pd(temp0_413[0].q)
            temp0_413[0].q = temp0_413 u>> 0x40
            float temp0_446[0x4] = _mm_mul_ps(temp0_413, temp0_389)
            float temp0_450[0x4] = _mm_sub_ps(temp0_444, 
                _mm_add_ps(
                    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_389, var_158_2, 0x1d), zmm5), 
                    temp0_446))
            float temp0_451[0x4] = _mm_mul_ps(temp0_425, temp0_402)
            float temp0_453[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_407, temp0_407, 0xcc), temp0_388)
            float temp0_454[0x4] = _mm_blend_ps(zmm13, zx.o(0), 0xe)
            float temp0_456[0x4] = _mm_shuffle_ps(_mm_blend_ps(zmm9, zx.o(0), 0xe), temp0_454, 0x11)
            float temp0_460[0x4] = _mm_sub_ps(temp0_451, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_407, temp0_407, 0x66), temp0_456), 
                    temp0_453))
            float temp0_461[0x4] = _mm_div_ps(data_142fc92f0, temp0_423)
            float temp0_462[0x4] = _mm_mul_ps(temp0_460, temp0_461)
            float temp0_463[0x4] = _mm_mul_ps(temp0_443, temp0_461)
            arg5 = _mm_shuffle_ps(_mm_mul_ps(temp0_435, temp0_461), 
                _mm_mul_ps(temp0_461, temp0_450), 0x77)
            zmm10 = _mm_shuffle_ps(temp0_462, temp0_463, 0x77)
            zmm6 = _mm_shuffle_ps(temp0_462, temp0_463, 0x22)
        else
            zmm6 = data_142d4cc20
            arg5 = data_142d4cc30
        
        zmm5 = temp0_58
        zmm13 = temp0_149
        zmm8 = temp0_74
        zmm9 = _mm_movehdup_ps(zmm10)
        zmm12 = _mm_unpackhi_pd(zmm10, zmm10[0].q)
        zmm3 = _mm_shuffle_ps(zmm10, zmm10, 0xe7)
        zmm11 = _mm_movehdup_ps(zmm6)
        zmm0 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
        arg3 = _mm_shuffle_ps(zmm6, zmm6, 0xe7)
        zmm15 = _mm_movehdup_ps(arg5)
        zmm7 = _mm_unpackhi_pd(arg5, arg5[0].q)
        zmm1 = _mm_shuffle_ps(arg5, arg5, 0xe7)
    else
        float temp0_377[0x4] = __cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                __insertps_xmmps_memd_immb(
                    _mm_insert_ps(_mm_insert_ps(arg5, zmm12, 0x10), zmm6, 0x20), 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2)
        zmm1 = _mm_cmpeq_epi32(zmm1, zx.o(0))
        result = _mm_movemask_ps(_mm_or_ps(temp0_377, zmm1))
        
        if (result != 0xf)
            goto label_1400249d7
        
        result = _mm_movemask_ps(_mm_or_ps(
            __cmpps_xmmps_memps_immb(
                __andps_xmmxud_memxud(
                    __insertps_xmmps_memd_immb(
                        _mm_insert_ps(_mm_insert_ps(zx.o(temp0_267), zx.o(temp0_268), 0x10), 
                            zx.o(temp0_269), 0x20), 
                        0x800000, 0x30), 
                    data_142d3f770), 
                data_142d3f5c0, 2), 
            zmm1))
        
        if (result != 0xf)
            goto label_1400249d7
        
        zmm7 = 0x3f800000
        zmm1 = zx.o(0)
        zmm15 = zx.o(0)
        arg5 = zx.o(0)
        arg3 = zx.o(0)
        zmm0 = zx.o(0)
        zmm11 = 0x3f800000
        zmm6 = zx.o(0)
        zmm3 = zx.o(0)
        zmm12 = zx.o(0)
        zmm9 = zx.o(0)
        zmm10 = 0x3f800000
        zmm5 = temp0_58
        zmm13 = temp0_149
        zmm8 = temp0_74
    
    arg5 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg5, zmm15, 0x10), zmm7, 0x20), zmm1, 0x30)
    zmm6 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm11, 0x10), zmm0, 0x20), arg3, 0x30)
    float temp0_506[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm10, zmm9, 0x10), zmm12, 0x20), zmm3, 0x30)
    zmm0 = *arg2
    zmm1 = (*arg2)[1]
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_506)
else
    result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm3, data_142d3f5c0, 2))
    zmm8 = zx.o(temp0_264)
    zmm6 = zx.o(temp0_265)
    zmm5 = zx.o(temp0_266)
    
    if (result != 0xf)
    label_1400246de:
        float temp0_289[0x4] = _mm_insert_ps(zmm9, zmm5, 0x2a)
        zmm15 = zx.o(temp0_267)
        zmm1 = zx.o(temp0_268)
        float var_158_1[0x4] = zmm5
        float temp0_290[0x4] = _mm_insert_ps(zmm15, zmm1, 0x1c)
        zmm7 = zx.o(temp0_269)
        float temp0_293[0x4] = _mm_insert_ps(
            _mm_insert_ps(_mm_insert_ps(temp0_260, zmm9, 0x10), zmm15, 0x20), zmm7, 0x30)
        float temp0_295[0x4] =
            _mm_mul_ps(__insertps_xmmps_memd_immb(zmm6, 0x3f800000, 0x36), temp0_293)
        float temp0_296[0x4] = _mm_insert_ps(temp0_274, zmm1, 0x2a)
        float temp0_299[0x4] =
            _mm_sub_ps(temp0_295, _mm_mul_ps(_mm_insert_ps(zmm8, zmm5, 0x1c), temp0_296))
        float temp0_300[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0)
        float temp0_301[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0x55)
        float temp0_302[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xaa)
        float temp0_303[0x4] = _mm_shuffle_ps(temp0_299, temp0_299, 0xff)
        zmm11 = 0x3f800000
        float temp0_305[0x4] = _mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm7, 0), temp0_290)
        float var_168_1 = zmm15[0]
        float temp0_308[0x4] = _mm_sub_ps(temp0_305, 
            _mm_mul_ps(_mm_unpacklo_ps(zmm15, zmm1[0].q)[0].q << 0x40, zx.o(0)))
        float temp0_310[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, temp0_260, 0), temp0_289)
        float temp0_311[0x4] = _mm_shuffle_ps(temp0_274, zmm8, 0)
        float temp0_314[0x4] =
            _mm_sub_ps(temp0_310, _mm_mul_ps(_mm_insert_ps(var_158_1, temp0_260, 0xaa), temp0_311))
        float temp0_315[0x4] = _mm_mul_ps(temp0_300, temp0_303)
        float temp0_317[0x4] = _mm_add_ps(_mm_mul_ps(temp0_301, temp0_302), temp0_315)
        float temp0_319[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0xd8), temp0_314)
        float temp0_321[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_319, temp0_319, 1), temp0_319)
        float temp0_324[0x4] =
            _mm_sub_ps(temp0_317, _mm_add_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0x39), temp0_321))
        temp0_324[0] - 0f
        
        if (temp0_324[0] != 0f || not(is_ordered.d(temp0_324[0], 0f)))
            float temp0_326[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_260, zmm8, 0x20), zmm6, 0x30)
            float temp0_327[0x4] = __insertps_xmmps_memd_immb(zmm7, 0x3f800000, 0x36)
            float temp0_329[0x4] = _mm_insert_ps(_mm_moveldup_ps(temp0_260), zmm8, 0x30)
            float temp0_331[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_308[0].q), temp0_329)
            float temp0_334[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0x20), temp0_326), temp0_331)
            float temp0_336[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_302, temp0_289), temp0_334)
            float temp0_337[0x4] = _mm_insert_ps(data_142d4cc30, zmm7, 0x10)
            float temp0_339[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_314, temp0_314, 0x66), temp0_337)
            float temp0_342[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_314, temp0_314, 0x33), temp0_327), temp0_339)
            float temp0_344[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_301, temp0_290), temp0_342)
            float temp0_345[0x4] = _mm_mul_ps(temp0_327, temp0_300)
            zmm5 = _mm_broadcastsd_pd(temp0_314[0].q)
            temp0_314[0].q = temp0_314 u>> 0x40
            float temp0_347[0x4] = _mm_mul_ps(temp0_314, temp0_290)
            float temp0_351[0x4] = _mm_sub_ps(temp0_345, 
                _mm_add_ps(
                    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_339, var_168_1, 0x1d), zmm5), 
                    temp0_347))
            float temp0_352[0x4] = _mm_mul_ps(temp0_326, temp0_303)
            float temp0_354[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0xcc), temp0_289)
            float temp0_355[0x4] = _mm_blend_ps(var_158_1, zx.o(0), 0xe)
            float temp0_357[0x4] = _mm_shuffle_ps(_mm_blend_ps(zmm9, zx.o(0), 0xe), temp0_355, 0x11)
            float temp0_361[0x4] = _mm_sub_ps(temp0_352, 
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_308, temp0_308, 0x66), temp0_357), 
                    temp0_354))
            float temp0_362[0x4] = _mm_div_ps(data_142fc92f0, temp0_324)
            float temp0_363[0x4] = _mm_mul_ps(temp0_361, temp0_362)
            float temp0_364[0x4] = _mm_mul_ps(temp0_344, temp0_362)
            arg5 = _mm_shuffle_ps(_mm_mul_ps(temp0_336, temp0_362), 
                _mm_mul_ps(temp0_362, temp0_351), 0x77)
            zmm11 = _mm_shuffle_ps(temp0_363, temp0_364, 0x77)
            zmm6 = _mm_shuffle_ps(temp0_363, temp0_364, 0x22)
        else
            zmm6 = data_142d4cc20
            arg5 = data_142d4cc30
        
        zmm5 = temp0_58
        zmm13 = temp0_149
        zmm8 = temp0_74
        zmm9 = _mm_movehdup_ps(zmm11)
        zmm12 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
        zmm3 = _mm_shuffle_ps(zmm11, zmm11, 0xe7)
        zmm10 = _mm_movehdup_ps(zmm6)
        zmm0 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
        arg3 = _mm_shuffle_ps(zmm6, zmm6, 0xe7)
        zmm15 = _mm_movehdup_ps(arg5)
        zmm7 = _mm_unpackhi_pd(arg5, arg5[0].q)
        zmm1 = _mm_shuffle_ps(arg5, arg5, 0xe7)
    else
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                __insertps_xmmps_memd_immb(
                    _mm_insert_ps(_mm_insert_ps(zmm8, zmm6, 0x10), zmm5, 0x20), 0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_1400246de
        
        result = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                __insertps_xmmps_memd_immb(
                    _mm_insert_ps(_mm_insert_ps(zx.o(temp0_267), zx.o(temp0_268), 0x10), 
                        zx.o(temp0_269), 0x20), 
                    0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2))
        
        if (result != 0xf)
            goto label_1400246de
        
        zmm7 = 0x3f800000
        zmm1 = zx.o(0)
        zmm15 = zx.o(0)
        arg5 = zx.o(0)
        arg3 = zx.o(0)
        zmm0 = zx.o(0)
        zmm10 = 0x3f800000
        zmm6 = zx.o(0)
        zmm3 = zx.o(0)
        zmm12 = zx.o(0)
        zmm9 = zx.o(0)
        zmm11 = 0x3f800000
        zmm5 = temp0_58
        zmm13 = temp0_149
        zmm8 = temp0_74
    
    arg5 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg5, zmm15, 0x10), zmm7, 0x20), zmm1, 0x30)
    zmm6 = _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm6, zmm10, 0x10), zmm0, 0x20), arg3, 0x30)
    float temp0_486[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm11, zmm9, 0x10), zmm12, 0x20), zmm3, 0x30)
    zmm0 = *arg2
    zmm1 = (*arg2)[1]
    zmm0 = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_486)

float temp0_511[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6), zmm0)
zmm3 = (*arg2)[2]
float temp0_513[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0), arg5)
float temp0_514[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[8][0].q), (*arg1)[0x22], 0x20)
float temp0_515[0x4] = _mm_add_ps(temp0_513, temp0_511)
float temp0_516[0x4] = __insertps_xmmps_memd_immb(zx.o(arg1[0xc][0].q), (*arg1)[0x32], 0x20)
float temp0_517[0x4] = _mm_sub_ps(temp0_514, temp0_516)
float temp0_518[0x4] = _mm_shuffle_ps(temp0_517, temp0_517, 0xc9)
float temp0_520[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0xd2), temp0_518)
float temp0_521[0x4] = _mm_shuffle_ps(temp0_517, temp0_517, 0xd2)
float temp0_524[0x4] =
    _mm_sub_ps(temp0_520, _mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0xc9), temp0_521))
float temp0_526[0x4] =
    _mm_insert_ps(_mm_insert_ps(zmm5, zx.o(temp0_257), 0x10), zx.o(temp0_258), 0x20)
zmm14 = (*arg1)[0x1e]
float temp0_528[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0xc0), temp0_515)
zmm9 = data_142d3f780
float temp0_530[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_128 ^ zmm9, 0xc0), temp0_515)
float temp0_532[0x4] =
    _mm_insert_ps(__insertps_xmmps_memd_immb(temp0_66, var_138, 0x10), zx.o(temp0_262), 0x20)
float temp0_534[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_524, temp0_524, 0xc0), temp0_526)
float temp0_537[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_524, temp0_524, 0xd5), temp0_532), temp0_534)
float temp0_540[0x4] =
    _mm_add_ps(_mm_mul_ps(zmm8, _mm_shuffle_ps(temp0_524, temp0_524, 0xea)), temp0_537)
float temp0_541[0x4] = __insertps_xmmps_memd_immb(zx.o(*(arg1 + 0x8c)), (*arg1)[0x25], 0x20)
zmm12 = zx.o(*(arg1 + 0xcc))
float temp0_543[0x4] = _mm_sub_ps(temp0_541, __insertps_xmmps_memd_immb(zmm12, var_118, 0x20))
float temp0_544[0x4] = _mm_shuffle_ps(temp0_543, temp0_543, 0xc9)
zmm3 = temp0_515 ^ zmm9
float temp0_546[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm3, 0xd2), temp0_544)
float temp0_547[0x4] = _mm_shuffle_ps(temp0_543, temp0_543, 0xd2)
float temp0_550[0x4] = _mm_sub_ps(temp0_546, _mm_mul_ps(_mm_shuffle_epi32(zmm3, 0xc9), temp0_547))
float temp0_552[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(temp0_550, temp0_550, 0xc0))
float temp0_555[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_141, _mm_shuffle_ps(temp0_550, temp0_550, 0xd5)), temp0_552)
float temp0_556[0x4] = _mm_shuffle_ps(temp0_550, temp0_550, 0xea)
float temp0_557[0x4] = _mm_shuffle_ps(var_d8, var_d8, 0xc0)
float temp0_559[0x4] = _mm_add_ps(_mm_mul_ps(temp0_528, temp0_557), temp0_516)
arg1[0xc][0] = temp0_559[0]
(*arg1)[0x31] = __extractps_memd_xmmps_immb(temp0_559, 1)
float temp0_561[0x4] = _mm_mul_ps(zmm13, temp0_556)
(*arg1)[0x32] = __extractps_memd_xmmps_immb(temp0_559, 2)
float temp0_563[0x4] = _mm_mul_ps(temp0_530, temp0_557)
float temp0_565[0x4] = _mm_add_ps(__insertps_xmmps_memd_immb(zmm12, (*arg1)[0x35], 0x20), temp0_563)
(*arg1)[0x33] = temp0_565[0]
arg1[0xd][0] = __extractps_memd_xmmps_immb(temp0_565, 1)
float temp0_567[0x4] = _mm_add_ps(temp0_561, temp0_555)
(*arg1)[0x35] = __extractps_memd_xmmps_immb(temp0_565, 2)
arg5 = arg1[0xe]
zmm15 = arg1[0xf]
float temp0_569[0x4] = _mm_mul_ps(temp0_540, temp0_557)
float temp0_570[0x4] = _mm_mul_ps(temp0_557, temp0_567)
float temp0_571[0x4] = _mm_mul_ps(arg5, zx.o(0))
float temp0_572[0x4] = _mm_shuffle_ps(temp0_569, temp0_569, 0)
float temp0_574[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0x1b), temp0_572)
zmm10 = data_142d3f7c0
float temp0_576[0x4] = _mm_add_ps(_mm_mul_ps(temp0_574, zmm10), temp0_571)
float temp0_577[0x4] = _mm_shuffle_ps(temp0_569, temp0_569, 0x55)
float temp0_579[0x4] = _mm_mul_ps(_mm_shuffle_pd(arg5, arg5, 1), temp0_577)
zmm9 = data_142d3f7d0
float temp0_581[0x4] = _mm_add_ps(_mm_mul_ps(temp0_579, zmm9), temp0_576)
float temp0_582[0x4] = _mm_shuffle_ps(temp0_569, temp0_569, 0xaa)
float temp0_584[0x4] = _mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0xb1), temp0_582)
zmm11 = data_142d3f7b0
float temp0_586[0x4] = _mm_add_ps(_mm_mul_ps(temp0_584, zmm11), temp0_581)
zmm5 = data_142d3f640
float temp0_587[0x4] = _mm_mul_ps(temp0_586, zmm5)
float temp0_588[0x4] = _mm_mul_ps(zx.o(0), zmm15)
float temp0_589[0x4] = _mm_shuffle_ps(temp0_570, temp0_570, 0)
float temp0_593[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x1b), temp0_589), zmm10), temp0_588)
float temp0_594[0x4] = _mm_shuffle_ps(temp0_570, temp0_570, 0x55)
float temp0_598[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_pd(zmm15, zmm15, 1), temp0_594), zmm9), temp0_593)
float temp0_599[0x4] = _mm_shuffle_ps(temp0_570, temp0_570, 0xaa)
float temp0_604[0x4] = _mm_mul_ps(
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xb1), temp0_599), zmm11), 
        temp0_598), 
    zmm5)
float temp0_605[0x4] = _mm_add_ps(temp0_587, arg5)
float temp0_606[0x4] = _mm_mul_ps(temp0_605, temp0_605)
float temp0_608[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_606, temp0_606[0].q), temp0_606)
float temp0_609[0x4] = _mm_movehdup_ps(temp0_608)
temp0_609[0] = temp0_609[0] + temp0_608[0]
float temp0_610[0x4] = _mm_cmpeq_ss(0x322bcc77, temp0_609[0], 6)
zmm5 = 0x3f000000
temp0_609[0] = temp0_609[0] * 0.5f
float temp0_611[0x4] = _mm_rsqrt_ss(temp0_609[0], temp0_609[0])
temp0_611[0] = temp0_611[0] * temp0_611[0]
temp0_611[0] = temp0_611[0] * temp0_609[0]
zmm0 = 0x3f000000
zmm0[0] = 0.5f - temp0_611[0]
zmm0[0] = zmm0[0] * temp0_611[0]
zmm0[0] = zmm0[0] + temp0_611[0]
zmm0[0] = zmm0[0] * zmm0[0]
zmm0[0] = zmm0[0] * temp0_609[0]
zmm1 = 0x3f000000
zmm1[0] = 0.5f - zmm0[0]
zmm7 = _mm_andnot_ps(temp0_610, 0xffffffff)
zmm1[0] = zmm1[0] * zmm0[0]
zmm1[0] = zmm1[0] + zmm0[0]
float temp0_614[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_605)
float temp0_615[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)
zmm3 = data_142d3f660
zmm1 = _mm_and_ps(temp0_614, temp0_615)
zmm7 = _mm_or_ps(_mm_andnot_ps(temp0_615, zmm3), zmm1)
float temp0_619[0x4] = _mm_add_ps(temp0_604, zmm15)
float temp0_620[0x4] = _mm_mul_ps(temp0_619, temp0_619)
float temp0_622[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_620, temp0_620[0].q), temp0_620)
float temp0_623[0x4] = _mm_movehdup_ps(temp0_622)
temp0_623[0] = temp0_623[0] + temp0_622[0]
zmm13 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_623[0], 6), 0xffffffff)
temp0_623[0] = temp0_623[0] * 0.5f
float temp0_626[0x4] = _mm_rsqrt_ss(temp0_623[0], temp0_623[0])
temp0_626[0] = temp0_626[0] * temp0_626[0]
temp0_626[0] = temp0_626[0] * temp0_623[0]
zmm6 = 0x3f000000
zmm6[0] = 0.5f - temp0_626[0]
zmm6[0] = zmm6[0] * temp0_626[0]
zmm6[0] = zmm6[0] + temp0_626[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] * temp0_623[0]
zmm5[0] = 0.5f - zmm6[0]
zmm5[0] = zmm5[0] * zmm6[0]
zmm5[0] = zmm5[0] + zmm6[0]
float temp0_628[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0_619)
float temp0_629[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0)
zmm5 = _mm_and_ps(temp0_628, temp0_629)
zmm13 = _mm_or_ps(_mm_andnot_ps(temp0_629, zmm3), zmm5)
arg1[0xe] = zmm7
zmm1 = _mm_shuffle_epi32(zmm7, 0xc9)
float temp0_634[0x4] = _mm_mul_ps(zmm7, zmm13)
float temp0_636[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_634, temp0_634[0].q), temp0_634)
float temp0_637[0x4] = _mm_movehdup_ps(temp0_636)
temp0_637[0] = temp0_637[0] + temp0_636[0]
float temp0_638[0x4] = _mm_cmpeq_ss(0, temp0_637[0], 2)
zmm3 = _mm_and_ps(temp0_638, 0x3f800000)
zmm0 = _mm_or_ps(_mm_andnot_ps(temp0_638, 0xbf800000), zmm3)
float temp0_643[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm13)
arg1[0xf] = temp0_643
zmm3 = (*arg1)[6]
arg5 = arg1[1][0]
float temp0_644[0x4] = _mm_insert_ps(zx.o(arg1[1][0].q), zmm3, 0x20)
float temp0_645[0x4] = _mm_insert_ps(zmm3, arg5, 0x10)
float temp0_646[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x14)), arg5, 0x20)
arg5 = _mm_shuffle_epi32(zmm7, 0xd2)
float temp0_651[0x4] = _mm_sub_ps(
    _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_645, (*arg1)[5], 0x20), zmm1), 
    _mm_mul_ps(temp0_646, arg5))
zmm6 = _mm_shuffle_epi32(zmm7, 0xff)
float temp0_653[0x4] = _mm_add_ps(temp0_651, temp0_651)
float temp0_655[0x4] = _mm_add_ps(temp0_644, _mm_mul_ps(zmm6, temp0_653))
float temp0_662[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_653, temp0_653, 0xd2), zmm1), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_653, temp0_653, 0xc9), arg5)), 
        temp0_655), 
    temp0_559)
arg1[8][0] = temp0_662[0]
(*arg1)[0x21] = __extractps_memd_xmmps_immb(temp0_662, 1)
(*arg1)[0x22] = __extractps_memd_xmmps_immb(temp0_662, 2)
zmm3 = (*arg1)[0x12]
arg5 = arg1[4][0]
float temp0_665[0x4] = _mm_shuffle_ps(temp0_643, temp0_643, 0xc9)
float temp0_666[0x4] = _mm_insert_ps(zx.o(arg1[4][0].q), zmm3, 0x20)
float temp0_669[0x4] = _mm_mul_ps(
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm3, arg5, 0x10), (*arg1)[0x11], 0x20), temp0_665)
float temp0_670[0x4] = _mm_insert_ps(zx.o(*(arg1 + 0x44)), arg5, 0x20)
float temp0_671[0x4] = _mm_shuffle_ps(temp0_643, temp0_643, 0xd2)
float temp0_673[0x4] = _mm_sub_ps(temp0_669, _mm_mul_ps(temp0_670, temp0_671))
float temp0_674[0x4] = _mm_add_ps(temp0_673, temp0_673)
float temp0_677[0x4] =
    _mm_add_ps(temp0_666, _mm_mul_ps(_mm_shuffle_ps(temp0_643, temp0_643, 0xff), temp0_674))
float temp0_684[0x4] = _mm_add_ps(
    _mm_add_ps(
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_674, temp0_674, 0xd2), temp0_665), 
            _mm_mul_ps(_mm_shuffle_ps(temp0_674, temp0_674, 0xc9), temp0_671)), 
        temp0_677), 
    temp0_565)
(*arg1)[0x23] = temp0_684[0]
arg1[9][0] = __extractps_memd_xmmps_immb(temp0_684, 1)
(*arg1)[0x25] = __extractps_memd_xmmps_immb(temp0_684, 2)
zmm5 = (*arg1)[0x3b]
float temp0_687[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm0 = *arg1
float temp0_688[0x4] = _mm_mul_ps(temp0_687, zmm0)
zmm6 = arg1[0xe][0]
float temp0_689[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
arg5 = (*arg1)[3]
zmm3 = (*arg1)[2]
zmm1 = (*arg1)[1]
float temp0_695[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg5, zmm3, 0x10), zmm1, 0x20), zmm0, 0x30), 
            temp0_689), 
        zmm10), 
    temp0_688)
zmm5 = (*arg1)[0x39]
float temp0_696[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_701[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 8)), zmm0, 0x20), zmm1, 0x30), 
            temp0_696), 
        zmm9), 
    temp0_695)
zmm5 = (*arg1)[0x3a]
float temp0_702[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
float temp0_708[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(
            _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm1, zmm0, 0x10), arg5, 0x20), zmm3, 0x30), 
            temp0_702), 
        zmm11), 
    temp0_701)
zmm3 = arg1[3]
zmm6 = arg1[0xf][0]
float temp0_709[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
zmm5 = (*arg1)[0xf]
arg5 = (*arg1)[0xe]
zmm0 = (*arg1)[0xd]
float temp0_713[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, arg5, 0x10), zmm0, 0x20), zmm3, 0x30), 
    temp0_709)
zmm6 = (*arg1)[0x3f]
float temp0_715[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm3)
float temp0_717[0x4] = _mm_add_ps(_mm_mul_ps(temp0_713, zmm10), temp0_715)
zmm6 = (*arg1)[0x3d]
float temp0_718[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
float temp0_723[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(arg1 + 0x38)), zmm3, 0x20), zmm0, 0x30), 
            temp0_718), 
        zmm9), 
    temp0_717)
float temp0_726[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm0, zmm3, 0x10), zmm5, 0x20), arg5, 0x30)
zmm3 = (*arg1)[0x3e]
float temp0_730[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_726, _mm_shuffle_ps(zmm3, zmm3, 0)), zmm11), temp0_723)
arg1[0xa] = temp0_708
float temp0_731[0x4] = _mm_mul_ps(temp0_708, temp0_730)
float temp0_733[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_731, temp0_731[0].q), temp0_731)
float temp0_734[0x4] = _mm_movehdup_ps(temp0_733)
temp0_734[0] = temp0_734[0] + temp0_733[0]
float temp0_735[0x4] = _mm_cmpeq_ss(0, temp0_734[0], 2)
float temp0_736[0x4] = _mm_and_ps(0x3f800000, temp0_735)
arg3 = _mm_or_ps(_mm_andnot_ps(temp0_735, 0xbf800000), temp0_736)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(arg3, arg3, 0), temp0_730)
return result
