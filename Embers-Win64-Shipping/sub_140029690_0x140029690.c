// 函数: sub_140029690
// 地址: 0x140029690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_78[0x4] = arg8
float var_88[0x4] = arg7
float var_98[0x4] = arg6
int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
float zmm4[0x4] = arg1[rax + 0xe]
float temp0[0x4] = _mm_add_ps(zmm4, zmm4)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
float zmm1[0x4] = arg1[rax][0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
float zmm2[0x4] = arg1[rax][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[rax][0x3a]
float temp0_8[0x4] = _mm_shuffle_ps(_mm_insert_ps(arg5, temp0_4, 0x4e), temp0_2, 0xc)
float temp0_9[0x4] = _mm_insert_ps(temp0_2, temp0_4, 0x88)
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0xd8)
float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_10)
float temp0_12[0x4] = _mm_sub_ps(temp0_10, temp0_6)
float temp0_13[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0x78)
float temp0_16[0x4] =
    _mm_add_ps(_mm_insert_ps(_mm_insert_ps(temp0, temp0, 0x1c), temp0_4, 0x60), temp0_13)
float temp0_17[0x4] = _mm_sub_ps(data_142d3f670, temp0_16)
float temp0_18[0x4] = __insertps_xmmps_memd_immb(arg8, (*arg1)[rdx + 0x19], 0x1d)
float zmm11[0x4] = (*arg1)[rdx + 0x18]
float temp0_19[0x4] = __insertps_xmmps_memd_immb(arg7, (*arg1)[rdx + 0x1a], 0x2b)
float temp0_22[0x4] =
    _mm_blend_ps(_mm_insert_ps(_mm_insert_ps(arg6, temp0_11, 0x4e), temp0_12, 0x14), temp0_17, 4)
float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xc0), zmm11)
float temp0_26[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_17, temp0_11, 0x9c), temp0_12, 0x60)
float temp0_27[0x4] = _mm_insert_ps(temp0_17, temp0_12, 0x8c)
float temp0_30[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xea), temp0_18), temp0_24)
float temp0_31[0x4] = _mm_insert_ps(temp0_27, temp0_11, 0x20)
float temp0_34[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), temp0_19), temp0_30)
float temp0_36[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), zmm11)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xd5), temp0_18), temp0_36)
float temp0_42[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xc0), temp0_19), temp0_39)
float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_12, temp0_12, 0xd5), zmm11)
float temp0_47[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_18), temp0_44)
float temp0_50[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_17, temp0_17, 0xea), temp0_19), temp0_47)
float temp0_52[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xc0), temp0_26)
float temp0_55[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xd5), temp0_31), temp0_52)
float zmm12[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0xea), temp0_22), temp0_55)
float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xc0), temp0_26)
float temp0_63[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xd5), temp0_31), temp0_60)
float temp0_66[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_42, temp0_42, 0xea), temp0_22), temp0_63)
float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xc0), temp0_26)
float temp0_71[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xd5), temp0_31), temp0_68)
float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_50, temp0_50, 0xea), temp0_22)
float temp0_74[0x4] =
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (rdx << 2) + 0x80)), (*arg1)[rdx + 0x22], 0x20)
float temp0_75[0x4] = _mm_add_ps(temp0_73, temp0_71)
uint128_t zmm15 =
    __insertps_xmmps_memd_immb(zx.o(*(arg1 + (rdx << 2) + 0xc0)), (*arg1)[rdx + 0x32], 0x20)
float zmm13[0x4] = _mm_sub_ps(temp0_74, zmm15)
arg7 = data_142d3f780
zmm2 = _mm_unpackhi_pd(zmm13, zmm13[0].q)
zmm4 = zmm2 ^ arg7
float temp0_79[0x4] = _mm_movehdup_ps(zmm13)
zmm1 = temp0_79 ^ arg7
float zmm6[0x4] = _mm_shuffle_epi32(zmm4, 0x80)
float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xc1), zmm6)
float temp0_83[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd5)
float temp0_86[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xc1), temp0_83), temp0_82)
arg5 = zmm13 ^ arg7
float temp0_89[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm4, zmm13, 0x9c), zmm1, 0x20), temp0_86)
float temp0_92[0x4] = _mm_mul_ps(_mm_insert_ps(_mm_movehdup_ps(temp0_75), temp0_66, 0x68), zmm6)
float temp0_95[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xda), temp0_83), temp0_92)
float temp0_98[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(temp0_79, arg5, 0x10)[0].q | zmm13[0].q << 0x40, temp0_95), temp0_89)
float temp0_100[0x4] = _mm_insert_ps(_mm_shuffle_ps(zmm13, zmm13, 0xea), zmm1, 0x20)
float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0xc0), temp0_100)
float temp0_104[0x4] = _mm_shuffle_ps(temp0_75, _mm_shuffle_ps(temp0_66, temp0_75, 0x30), 0x80)
float temp0_105[0x4] = _mm_shuffle_ps(arg5, zmm13, 0x40)
float temp0_107[0x4] = _mm_add_ps(_mm_mul_ps(temp0_104, temp0_105), temp0_102)
float temp0_110[0x4] =
    _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zmm2, zmm1, 0x10), zmm1, 0x20), temp0_107)
float temp0_111[0x4] = _mm_shuffle_ps(temp0_75, temp0_66, 0xc)
float temp0_113[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x78), temp0_100)
float temp0_117[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_insert_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xe6), temp0_66, 0x68), temp0_105), 
    temp0_113)
zmm4 = (*arg1)[rax + 0x1e]
float temp0_120[0x4] =
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm13, 0), zmm13, 0xc8), temp0_117)
float temp0_121[0x4] = _mm_add_ps(temp0_98, zmm4)
float temp0_122[0x4] = _mm_add_ps(temp0_120, temp0_110)
float temp0_124[0x4] = _mm_add_ps(_mm_broadcastsd_pd(zmm4[0].q), temp0_122)
int32_t temp0_125 = _mm_extract_ps(temp0_124, 2)
char temp0_129 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(__insertps_xmmps_memd_immb(temp0_121, 0x800000, 0x30), data_142d3f770), 
    data_142d3f5c0, 2))
zmm1 = _mm_unpackhi_pd(temp0_121, temp0_121[0].q)
float var_b8[0x4] = zmm4
float result[0x4]
float zmm5[0x4]

if (temp0_129 != 0xf)
label_140029ac7:
    uint128_t var_118_1 = zmm15
    float temp0_145[0x4] = _mm_insert_ps(_mm_insert_ps(zmm13, temp0_121, 0x8e), temp0_124, 0x60)
    float temp0_146[0x4] = _mm_insert_ps(temp0_124, temp0_121, 0x8c)
    zmm6 = zx.o(temp0_125)
    float temp0_149[0x4] =
        _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(temp0_121, zmm1, 0x10), zmm1, 0x20), zmm6, 0x30)
    float temp0_151[0x4] =
        _mm_mul_ps(__insertps_xmmps_memd_immb(temp0_124, 0x3f800000, 0x36), temp0_149)
    float temp0_153[0x4] = _mm_insert_ps(_mm_insert_ps(temp0_149, temp0_121, 0x4e), temp0_124, 0x60)
    float temp0_156[0x4] =
        _mm_sub_ps(temp0_151, _mm_mul_ps(_mm_insert_ps(temp0_124, temp0_121, 0x4c), temp0_153))
    float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0)
    float temp0_158[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0x55)
    float temp0_159[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xaa)
    float temp0_160[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xff)
    arg8 = 0x3f800000
    float temp0_165[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm6, 0), temp0_146), 
        _mm_mul_ps(_mm_insert_ps(temp0_121, temp0_124, 0x73), zx.o(0)))
    zmm15 = _mm_mul_ps(_mm_shuffle_ps(temp0_124, temp0_121, 0), temp0_145)
    float temp0_168[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0x55)
    zmm15 = _mm_sub_ps(zmm15, _mm_mul_ps(_mm_insert_ps(temp0_121, temp0_124, 0x4a), temp0_168))
    float temp0_172[0x4] = _mm_mul_ps(temp0_157, temp0_160)
    float temp0_174[0x4] = _mm_add_ps(_mm_mul_ps(temp0_158, temp0_159), temp0_172)
    float temp0_176[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xd8), zmm15)
    float temp0_178[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_176, temp0_176, 1), temp0_176)
    float temp0_181[0x4] =
        _mm_sub_ps(temp0_174, _mm_add_ps(_mm_shuffle_ps(temp0_178, temp0_178, 0x39), temp0_178))
    temp0_181[0] - 0f
    
    if (temp0_181[0] != 0f || not(is_ordered.d(temp0_181[0], 0f)))
        float temp0_183[0x4] =
            _mm_shuffle_ps(temp0_121, _mm_shuffle_ps(temp0_124, temp0_121, 0x10), 0x24)
        float temp0_184[0x4] = __insertps_xmmps_memd_immb(zmm6, 0x3f800000, 0x36)
        float temp0_185[0x4] = _mm_shuffle_ps(temp0_121, temp0_121, 0x60)
        float temp0_187[0x4] = _mm_mul_ps(_mm_broadcastsd_pd(temp0_165[0].q), temp0_185)
        float temp0_190[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0x20), temp0_183), temp0_187)
        float temp0_192[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_159, temp0_145), temp0_190)
        float temp0_193[0x4] = _mm_insert_ps(data_142d4cc30, zmm6, 0x10)
        float temp0_195[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x66), temp0_193)
        float temp0_198[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x33), temp0_184), temp0_195)
        float temp0_200[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_158, temp0_146), temp0_198)
        float temp0_201[0x4] = __mulps_xmmps_memps(temp0_184, temp0_157)
        result = _mm_broadcastsd_pd(zmm15.q)
        zmm15.q = zmm15 u>> 0x40
        zmm15 = _mm_mul_ps(zmm15, temp0_146)
        float temp0_204[0x4] = _mm_insert_ps(temp0_146, temp0_121, 0x9d)
        float temp0_207[0x4] =
            _mm_sub_ps(temp0_201, _mm_add_ps(_mm_mul_ps(result, temp0_204), zmm15))
        float temp0_208[0x4] = _mm_mul_ps(temp0_183, temp0_160)
        float temp0_210[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xcc), temp0_145)
        float temp0_211[0x4] = _mm_insert_ps(temp0_204, temp0_124, 0x70)
        float temp0_215[0x4] = _mm_sub_ps(temp0_208, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0x66), temp0_211), 
                temp0_210))
        float temp0_216[0x4] = _mm_div_ps(data_142fc92f0, temp0_181)
        float temp0_217[0x4] = _mm_mul_ps(temp0_215, temp0_216)
        float temp0_218[0x4] = _mm_mul_ps(temp0_200, temp0_216)
        zmm11 =
            _mm_shuffle_ps(_mm_mul_ps(temp0_192, temp0_216), _mm_mul_ps(temp0_216, temp0_207), 0x77)
        arg8 = _mm_shuffle_ps(temp0_217, temp0_218, 0x77)
        zmm6 = _mm_shuffle_ps(temp0_217, temp0_218, 0x22)
    else
        zmm6 = data_142d4cc20
        zmm11 = data_142d4cc30
    
    zmm12 = zmm12
    zmm15 = var_118_1
    arg7 = data_142d3f780
    zmm13 = zmm13
    zmm2 = _mm_movehdup_ps(arg8)
    zmm1 = _mm_unpackhi_pd(arg8, arg8[0].q)
    zmm5 = _mm_movehdup_ps(zmm6)
    zmm4 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
    arg6 = _mm_movehdup_ps(zmm11)
    arg5 = _mm_unpackhi_pd(zmm11, zmm11[0].q)
else
    float temp0_132[0x4] =
        _mm_shuffle_ps(_mm_insert_ps(data_142fc9360, temp0_121, 0x46), temp0_124, 0x4c)
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(_mm_shuffle_ps(temp0_132, temp0_132, 0x78), data_142d3f770), 
            data_142d3f5c0, 2)) != 0xf)
        goto label_140029ac7
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(
                __insertps_xmmps_memd_immb(
                    _mm_insert_ps(_mm_insert_ps(zmm1, _mm_movehdup_ps(temp0_124), 0x10), 
                        zx.o(temp0_125), 0x20), 
                    0x800000, 0x30), 
                data_142d3f770), 
            data_142d3f5c0, 2)) != 0xf)
        goto label_140029ac7
    
    arg6 = zx.o(0)
    arg5 = 0x3f800000
    zmm11 = zx.o(0)
    zmm4 = zx.o(0)
    zmm5 = 0x3f800000
    zmm6 = zx.o(0)
    zmm1 = zx.o(0)
    zmm2 = zx.o(0)
    arg8 = 0x3f800000
    arg7 = data_142d3f780

float temp0_231[0x4] = _mm_insert_ps(_mm_insert_ps(zmm11, arg6, 0x10), arg5, 0x20)
float temp0_233[0x4] = _mm_insert_ps(_mm_insert_ps(zmm6, zmm5, 0x10), zmm4, 0x20)
float temp0_235[0x4] = _mm_insert_ps(_mm_insert_ps(arg8, zmm2, 0x10), zmm1, 0x20)
result = *arg4
float temp0_237[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_235)
zmm1 = (*arg4)[1]
float temp0_240[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0_233), temp0_237)
result = (*arg4)[2]
float temp0_243[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_231), temp0_240)
float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_b8 ^ arg7, 0xc0), temp0_243)
float temp0_246[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
result = temp0_243 ^ arg7
float temp0_248[0x4] = _mm_mul_ps(_mm_shuffle_epi32(result, 0xd2), temp0_246)
float temp0_249[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xd2)
float temp0_252[0x4] = _mm_sub_ps(temp0_248, _mm_mul_ps(_mm_shuffle_epi32(result, 0xc9), temp0_249))
float temp0_254[0x4] = _mm_mul_ps(zmm12, _mm_shuffle_ps(temp0_252, temp0_252, 0xc0))
float temp0_257[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_66, _mm_shuffle_ps(temp0_252, temp0_252, 0xd5)), temp0_254)
float temp0_260[0x4] =
    _mm_add_ps(_mm_mul_ps(temp0_75, _mm_shuffle_ps(temp0_252, temp0_252, 0xea)), temp0_257)
zmm5 = arg9
float temp0_261[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc0)
float temp0_263[0x4] = _mm_add_ps(_mm_mul_ps(temp0_245, temp0_261), zmm15)
(*arg1)[rdx + 0x30] = temp0_263[0]
(*arg1)[rdx + 0x31] = __extractps_memd_xmmps_immb(temp0_263, 1)
(*arg1)[rdx + 0x32] = __extractps_memd_xmmps_immb(temp0_263, 2)
zmm4 = arg1[rax + 0xe]
float temp0_266[0x4] = _mm_mul_ps(temp0_261, temp0_260)
float temp0_267[0x4] = _mm_mul_ps(zx.o(0), zmm4)
float temp0_268[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0)
float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_268)
float zmm10[0x4] = data_142d3f7c0
float temp0_272[0x4] = _mm_add_ps(_mm_mul_ps(temp0_270, zmm10), temp0_267)
float temp0_273[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0x55)
float temp0_275[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_273)
arg8 = data_142d3f7d0
float temp0_277[0x4] = _mm_add_ps(_mm_mul_ps(temp0_275, arg8), temp0_272)
float temp0_278[0x4] = _mm_shuffle_ps(temp0_266, temp0_266, 0xaa)
float temp0_280[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_278)
arg7 = data_142d3f7b0
float temp0_284[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_280, arg7), temp0_277), data_142d3f640), zmm4)
float temp0_285[0x4] = _mm_mul_ps(temp0_284, temp0_284)
float temp0_287[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_285, temp0_285[0].q), temp0_285)
float temp0_288[0x4] = _mm_movehdup_ps(temp0_287)
temp0_288[0] = temp0_288[0] + temp0_287[0]
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_288[0], 6), 0xffffffff)
result = 0x3f000000
temp0_288[0] = temp0_288[0] * 0.5f
float temp0_291[0x4] = _mm_rsqrt_ss(temp0_288[0], temp0_288[0])
temp0_291[0] = temp0_291[0] * temp0_291[0]
temp0_291[0] = temp0_291[0] * temp0_288[0]
zmm6 = 0x3f000000
zmm6[0] = 0.5f - temp0_291[0]
zmm6[0] = zmm6[0] * temp0_291[0]
zmm6[0] = zmm6[0] + temp0_291[0]
zmm6[0] = zmm6[0] * zmm6[0]
zmm6[0] = zmm6[0] * temp0_288[0]
result[0] = 0.5f - zmm6[0]
result[0] = result[0] * zmm6[0]
result[0] = result[0] + zmm6[0]
float temp0_293[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_284)
float temp0_294[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
result = _mm_and_ps(temp0_293, temp0_294)
arg1[rax + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_294, data_142d3f660), result)
result = arg1[0xf]
float temp0_298[0x4] = _mm_mul_ps(arg1[0xe], result)
float temp0_300[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_298, temp0_298[0].q), temp0_298)
float temp0_301[0x4] = _mm_movehdup_ps(temp0_300)
temp0_301[0] = temp0_301[0] + temp0_300[0]
float temp0_302[0x4] = _mm_cmpeq_ss(0, temp0_301[0], 2)
zmm1 = _mm_and_ps(temp0_302, 0x3f800000)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_302, 0xbf800000), zmm1)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), result)
arg6 = arg1[rax + 0xe][0]
result = arg1[rax][0x39]
zmm5 = arg1[rax][0x3a]
zmm4 = arg1[rdx][6]
zmm1 = arg1[rdx + 1][0]
float temp0_309[0x4] = _mm_insert_ps(_mm_insert_ps(result, zmm5, 0x10), arg6, 0x20)
float temp0_310[0x4] = _mm_insert_ps(zx.o(arg1[rdx + 1][0].q), zmm4, 0x20)
float temp0_312[0x4] =
    __insertps_xmmps_memd_immb(_mm_insert_ps(zmm4, zmm1, 0x10), arg1[rdx][5], 0x20)
float temp0_313[0x4] = _mm_insert_ps(zmm5, arg6, 0x10)
float temp0_314[0x4] = _mm_mul_ps(temp0_312, temp0_309)
float temp0_315[0x4] = _mm_insert_ps(temp0_313, result, 0x20)
float temp0_318[0x4] = _mm_sub_ps(temp0_314, 
    _mm_mul_ps(_mm_insert_ps(zx.o(*(&arg1[rdx] + 0x14)), zmm1, 0x20), temp0_315))
float temp0_319[0x4] = _mm_add_ps(temp0_318, temp0_318)
result = arg1[rax][0x3b]
float temp0_322[0x4] =
    _mm_add_ps(temp0_310, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_319))
float temp0_327[0x4] = _mm_sub_ps(
    _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0xd2), temp0_309), 
    _mm_mul_ps(_mm_shuffle_ps(temp0_319, temp0_319, 0xc9), temp0_315))
float temp0_328[0x4] = __insertps_xmmps_memd_immb((*arg1)[rdx + 0x30], (*arg1)[rdx + 0x31], 0x10)
float temp0_329[0x4] = _mm_add_ps(temp0_327, temp0_322)
float temp0_331[0x4] =
    _mm_add_ps(__insertps_xmmps_memd_immb(temp0_328, (*arg1)[rdx + 0x32], 0x20), temp0_329)
(*arg1)[rdx + 0x20] = temp0_331[0]
(*arg1)[rdx + 0x21] = __extractps_memd_xmmps_immb(temp0_331, 1)
(*arg1)[rdx + 0x22] = __extractps_memd_xmmps_immb(temp0_331, 2)
zmm6 = arg1[rdx]
zmm1 = arg1[rax + 0xe][0]
float temp0_334[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
arg6 = arg1[rdx][3]
result = arg1[rdx][2]
zmm5 = arg1[rdx][1]
float temp0_338[0x4] = _mm_mul_ps(
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(arg6, result, 0x10), zmm5, 0x20), zmm6, 0x30), 
    temp0_334)
zmm1 = arg1[rax][0x3b]
float temp0_340[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6)
float temp0_342[0x4] = _mm_add_ps(_mm_mul_ps(temp0_338, zmm10), temp0_340)
zmm1 = arg1[rax][0x39]
float temp0_343[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0)
float temp0_348[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(_mm_insert_ps(_mm_insert_ps(zx.o(*(&arg1[rdx] + 8)), zmm6, 0x20), zmm5, 0x30), 
            temp0_343), 
        arg8), 
    temp0_342)
float temp0_351[0x4] =
    _mm_insert_ps(_mm_insert_ps(_mm_insert_ps(zmm5, zmm6, 0x10), arg6, 0x20), result, 0x30)
result = arg1[rax][0x3a]
arg1[rax + 0xa] = _mm_add_ps(
    _mm_mul_ps(_mm_mul_ps(temp0_351, _mm_shuffle_ps(result, result, 0)), arg7), temp0_348)
result = arg1[0xb]
float temp0_356[0x4] = _mm_mul_ps(arg1[0xa], result)
float temp0_358[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_356, temp0_356[0].q), temp0_356)
float temp0_359[0x4] = _mm_movehdup_ps(temp0_358)
temp0_359[0] = temp0_359[0] + temp0_358[0]
float temp0_360[0x4] = _mm_cmpeq_ss(0, temp0_359[0], 2)
arg5 = _mm_and_ps(0x3f800000, temp0_360)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_360, 0xbf800000), arg5)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), result)
return result
