// 函数: sub_140035790
// 地址: 0x140035790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
int64_t rdx = rax * 3
float zmm1[0x4] = arg1[rax + 0xe]
float temp0[0x4] = _mm_add_ps(zmm1, zmm1)
float temp0_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), temp0)
float zmm4[0x4] = arg1[rax][0x39]
float temp0_4[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), temp0)
float zmm5[0x4] = arg1[rax][0x3b]
float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), temp0)
temp0[0].q = temp0 u>> 0x40
temp0[0] = temp0[0] * arg1[rax][0x3a]
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
float temp0_19[0x4] = _mm_sub_ps(data_142d3f670, temp0_18)
zmm5 = (*arg1)[rdx + 0x18]
float zmm6[0x4] = (*arg1)[rdx + 0x1a]
float temp0_21[0x4] = _mm_shuffle_ps(_mm_shuffle_ps((*arg1)[rdx + 0x19], zx.o(0), 0), zx.o(0), 0xe2)
float temp0_23[0x4] = _mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(zmm6, zx.o(0), 0x30), 0x84)
float temp0_25[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xc0), zmm5)
float temp0_28[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xea), temp0_21), temp0_25)
float temp0_31[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xd5), temp0_23), temp0_28)
float temp0_33[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0xea), zmm5)
float temp0_36[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0xd5), temp0_21), temp0_33)
float temp0_39[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xc0), temp0_23), temp0_36)
float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_11, temp0_11, 0xd5), zmm5)
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
float zmm10[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_31, temp0_31, 0xea), temp0_59), temp0_64)
float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xc0), temp0_51)
float temp0_72[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xd5), temp0_56), temp0_69)
float zmm15[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xea), temp0_59), temp0_72)
float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xc0), temp0_51)
float temp0_80[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xd5), temp0_56), temp0_77)
float zmm13[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_47, temp0_47, 0xea), temp0_59), temp0_80)
zmm1 = zx.o(*(arg1 + (rdx << 2) + 0xc0))[0].q | (*arg1)[rdx + 0x32][0].q << 0x40
float var_108[0x4] = zmm1
float temp0_84[0x4] =
    _mm_sub_ps(zx.o(*(arg1 + (rdx << 2) + 0x80))[0].q | (*arg1)[rdx + 0x22][0].q << 0x40, zmm1)
float zmm2[0x4] = data_142d3f780
float zmm3[0x4] = _mm_unpackhi_pd(temp0_84, temp0_84[0].q)
float result[0x4] = zmm3 ^ zmm2
float zmm7[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xe5) ^ zmm2
float zmm8[0x4] = _mm_shuffle_epi32(result, 0xc0)
float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xc1), zmm8)
float temp0_90[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xd5)
float temp0_93[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xc1), temp0_90), temp0_89)
float temp0_94[0x4] = _mm_shuffle_ps(temp0_84, zmm7, 0xca)
float temp0_96[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm7, temp0_84, 0xa0), zmm7, 0xc2)
float temp0_97[0x4] = _mm_shuffle_ps(zmm7, result, 0x20)
float temp0_99[0x4] = _mm_shuffle_ps(_mm_unpacklo_ps(result, zmm3[0].q), temp0_97, 0x84)
zmm3 = temp0_84 ^ zmm2
float temp0_100[0x4] = _mm_mul_ps(temp0_99, temp0_93)
float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm13, zmm15, 0xd5), zmm8)
float temp0_105[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm13, 0xda), temp0_90), temp0_102)
float temp0_109[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm3, temp0_84, 0x50), temp0_84, 0x42), temp0_105), 
    temp0_100)
float temp0_111[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0xc0), temp0_94)
float temp0_113[0x4] = _mm_shuffle_ps(zmm13, _mm_shuffle_ps(zmm15, zmm13, 0x30), 0x80)
float temp0_114[0x4] = _mm_shuffle_ps(zmm3, temp0_84, 0x40)
float temp0_117[0x4] = _mm_mul_ps(temp0_96, _mm_add_ps(_mm_mul_ps(temp0_113, temp0_114), temp0_111))
float temp0_118[0x4] = _mm_shuffle_ps(zmm13, zmm15, 0xc)
float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_118, temp0_118, 0x78), temp0_94)
float temp0_123[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm13, zmm15, 0xd6), temp0_114), temp0_120)
zmm6 = (*arg1)[rax + 0x1e]
float temp0_124[0x4] = _mm_add_ps(temp0_109, zmm6)
float temp0_128[0x4] = _mm_add_ps(
    _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(zmm3, temp0_84, 0), temp0_84, 0xc8), temp0_123), 
    temp0_117)
float temp0_129[0x4] = _mm_add_ps(zmm6[0].q | zmm6[0].q << 0x40, temp0_128)
float rax_1 = _mm_shuffle_epi32(temp0_129, 0x4e)[0]
char temp0_135 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(
    __andps_xmmxud_memxud(
        _mm_shuffle_ps(temp0_124, _mm_shuffle_ps(0x800000, temp0_124, 0x20), 0x24), 
        data_142d3f770), 
    data_142d3f5c0, 2))
zmm3 = _mm_unpackhi_pd(temp0_124, temp0_124[0].q)
float var_b8[0x4] = zmm6
float zmm9[0x4]
float zmm11[0x4]
float zmm12[0x4]
float zmm14[0x4]

if (temp0_135 != 0xf)
label_140035be7:
    float var_f8_1[0x4] = zmm15
    float var_e8_1[0x4] = zmm13
    float temp0_149[0x4] = _mm_shuffle_ps(temp0_124, zx.o(0), 0x12)
    float temp0_150[0x4] = _mm_shuffle_ps(temp0_129, zx.o(0), 0x31)
    float temp0_151[0x4] = _mm_shuffle_ps(temp0_149, temp0_150, 0x88)
    float temp0_153[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_129, temp0_124, 0xa1), zx.o(0), 0x42)
    zmm13 = zx.o(rax_1)
    zmm15 = data_142d3f660
    float temp0_154[0x4] = _mm_shuffle_ps(zmm13, zmm3, 0xc0)
    float temp0_156[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm3, temp0_124, 0), temp0_154, 0x22)
    zmm15[0] = temp0_129[0]
    float temp0_157[0x4] = _mm_mul_ps(zmm15, temp0_156)
    float temp0_159[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_124, zx.o(0), 0x11), temp0_150, 0x88)
    float temp0_163[0x4] = _mm_sub_ps(temp0_157, 
        _mm_mul_ps(_mm_shuffle_ps(_mm_shuffle_ps(temp0_129, temp0_124, 0x51), zx.o(0), 0x42), 
            temp0_159))
    float temp0_164[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0)
    float temp0_165[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0x55)
    float temp0_166[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xaa)
    float temp0_167[0x4] = _mm_shuffle_ps(temp0_163, temp0_163, 0xff)
    zmm12 = 0x3f800000
    float temp0_173[0x4] = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(0x3f800000, zmm13, 0), temp0_153), 
        _mm_mul_ps(_mm_shuffle_ps(zx.o(0), _mm_shuffle_ps(temp0_129, temp0_124, 0x21), 0x24), 
            zx.o(0)))
    float temp0_175[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_129, temp0_124, 0), temp0_151)
    float temp0_176[0x4] = _mm_shuffle_ps(temp0_129, zx.o(0), 0x11)
    float temp0_177[0x4] = _mm_shuffle_ps(temp0_124, zx.o(0), 0x32)
    float temp0_178[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x55)
    float temp0_181[0x4] =
        _mm_sub_ps(temp0_175, _mm_mul_ps(_mm_shuffle_ps(temp0_176, temp0_177, 0x88), temp0_178))
    float temp0_182[0x4] = _mm_mul_ps(temp0_164, temp0_167)
    float temp0_184[0x4] = _mm_add_ps(_mm_mul_ps(temp0_165, temp0_166), temp0_182)
    float temp0_186[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0xd8), temp0_181)
    float temp0_188[0x4] = _mm_add_ps(_mm_shuffle_pd(temp0_186, temp0_186, 1), temp0_186)
    float temp0_191[0x4] =
        _mm_sub_ps(temp0_184, _mm_add_ps(_mm_shuffle_ps(temp0_188, temp0_188, 0x39), temp0_188))
    temp0_191[0] - 0f
    
    if (temp0_191[0] != 0f || not(is_ordered.d(temp0_191[0], 0f)))
        float temp0_193[0x4] =
            _mm_shuffle_ps(temp0_124, _mm_shuffle_ps(temp0_129, temp0_124, 0x10), 0x24)
        float temp0_194[0x4] = _mm_shuffle_ps(temp0_124, temp0_124, 0x60)
        float temp0_195[0x4] = _mm_mul_ps(temp0_173[0].q | temp0_173[0].q << 0x40, temp0_194)
        float temp0_198[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0x20), temp0_193), temp0_195)
        zmm4 = data_142d3f660
        zmm4[0] = zmm13[0]
        float temp0_200[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_166, temp0_151), temp0_198)
        zmm2 = data_142d4cc30
        float temp0_202[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm13, zmm2, 0), zmm2, 0xe2)
        float temp0_204[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0x66), temp0_202)
        float temp0_207[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_181, temp0_181, 0x33), zmm4), temp0_204)
        float temp0_209[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_165, temp0_153), temp0_207)
        float temp0_210[0x4] = __mulps_xmmps_memps(zmm4, temp0_164)
        float temp0_212[0x4] = _mm_mul_ps(_mm_unpackhi_pd(temp0_181, temp0_181[0].q), temp0_153)
        float temp0_213[0x4] = _mm_shuffle_ps(temp0_124, zx.o(0), 0xe8)
        float temp0_216[0x4] = _mm_sub_ps(temp0_210, 
            _mm_add_ps(_mm_mul_ps(temp0_181[0].q | temp0_181[0].q << 0x40, temp0_213), temp0_212))
        float temp0_217[0x4] = _mm_mul_ps(temp0_193, temp0_167)
        float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0xcc), temp0_151)
        float temp0_222[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_124, zx.o(0), 2), 
            _mm_shuffle_ps(temp0_129, zx.o(0), 0x21), 0x22)
        float temp0_226[0x4] = _mm_sub_ps(temp0_217, 
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0x66), temp0_222), 
                temp0_219))
        float temp0_227[0x4] = _mm_div_ps(data_142fc92f0, temp0_191)
        float temp0_228[0x4] = _mm_mul_ps(temp0_226, temp0_227)
        float temp0_229[0x4] = _mm_mul_ps(temp0_209, temp0_227)
        zmm14 =
            _mm_shuffle_ps(_mm_mul_ps(temp0_200, temp0_227), _mm_mul_ps(temp0_227, temp0_216), 0x77)
        zmm12 = _mm_shuffle_ps(temp0_228, temp0_229, 0x77)
        zmm6 = _mm_shuffle_ps(temp0_228, temp0_229, 0x22)
    else
        zmm6 = data_142d4cc20
        zmm14 = data_142d4cc30
    
    zmm10 = zmm10
    zmm13 = var_e8_1
    zmm15 = var_f8_1
    zmm8 = var_108
    zmm9 = temp0_84
    zmm11 = data_142d3f780
    result = _mm_shuffle_ps(zmm12, zmm12, 0xe5)
    zmm4 = _mm_unpackhi_pd(zmm12, zmm12[0].q)
    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0xe5)
    zmm5 = _mm_unpackhi_pd(zmm6, zmm6[0].q)
    zmm7 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)
    zmm3 = _mm_unpackhi_pd(zmm14, zmm14[0].q)
else
    float temp0_138[0x4] =
        _mm_shuffle_ps(__shufps_xmmps_memps_immb(temp0_124, data_142fc9360, 0xe5), temp0_129, 0x4c)
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(_mm_shuffle_ps(temp0_138, temp0_138, 0x78), data_142d3f770), 
            data_142d3f5c0, 2)) != 0xf)
        goto label_140035be7
    
    float temp0_144[0x4] = _mm_unpacklo_ps(zmm3, _mm_shuffle_ps(temp0_129, temp0_129, 0xe5)[0].q)
    zmm1 = _mm_unpacklo_epi32(zx.o(rax_1), 0x800000[0].q)
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(
            __andps_xmmxud_memxud(temp0_144[0].q | zmm1[0].q << 0x40, data_142d3f770), 
            data_142d3f5c0, 2)) != 0xf)
        goto label_140035be7
    
    zmm7 = zx.o(0)
    zmm3 = 0x3f800000
    zmm14 = zx.o(0)
    zmm5 = zx.o(0)
    zmm1 = 0x3f800000
    zmm6 = zx.o(0)
    zmm4 = zx.o(0)
    result = zx.o(0)
    zmm12 = 0x3f800000
    zmm8 = var_108
    zmm9 = temp0_84
    zmm11 = data_142d3f780

zmm14 = _mm_unpacklo_ps(zmm14, zmm7[0].q)[0].q | zmm3[0].q << 0x40
zmm6 = _mm_unpacklo_ps(zmm6, zmm1[0].q)[0].q | zmm5[0].q << 0x40
zmm12 = _mm_unpacklo_ps(zmm12, result[0].q)[0].q | zmm4[0].q << 0x40
result = *arg4
float temp0_245[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), zmm12)
zmm1 = (*arg4)[1]
float temp0_248[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), zmm6), temp0_245)
zmm2 = (*arg4)[2]
float temp0_251[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm14), temp0_248)
float temp0_253[0x4] = _mm_mul_ps(_mm_shuffle_epi32(var_b8 ^ zmm11, 0xc0), temp0_251)
float temp0_254[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
zmm2 = temp0_251 ^ zmm11
float temp0_256[0x4] = _mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xd2), temp0_254)
float temp0_257[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xd2)
float temp0_260[0x4] = _mm_sub_ps(temp0_256, _mm_mul_ps(_mm_shuffle_epi32(zmm2, 0xc9), temp0_257))
float temp0_262[0x4] = _mm_mul_ps(zmm10, _mm_shuffle_ps(temp0_260, temp0_260, 0xc0))
float temp0_265[0x4] =
    _mm_add_ps(_mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_260, temp0_260, 0xd5)), temp0_262)
float temp0_268[0x4] =
    _mm_add_ps(_mm_mul_ps(zmm13, _mm_shuffle_ps(temp0_260, temp0_260, 0xea)), temp0_265)
zmm5 = arg5
float temp0_269[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc0)
float temp0_271[0x4] = _mm_add_ps(_mm_mul_ps(temp0_253, temp0_269), zmm8)
(*arg1)[rdx + 0x30] = temp0_271[0]
float temp0_272[0x4] = _mm_shuffle_ps(temp0_271, temp0_271, 0xe5)
temp0_271[0].q = temp0_271 u>> 0x40
(*arg1)[rdx + 0x31] = temp0_272[0]
(*arg1)[rdx + 0x32] = temp0_271[0]
zmm4 = arg1[rax + 0xe]
float temp0_273[0x4] = _mm_mul_ps(temp0_269, temp0_268)
float temp0_274[0x4] = _mm_mul_ps(zx.o(0), zmm4)
float temp0_275[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0)
float temp0_277[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0x1b), temp0_275)
zmm8 = data_142d3f7c0
float temp0_279[0x4] = _mm_add_ps(_mm_mul_ps(temp0_277, zmm8), temp0_274)
float temp0_280[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0x55)
float temp0_282[0x4] = _mm_mul_ps(_mm_shuffle_pd(zmm4, zmm4, 1), temp0_280)
zmm9 = data_142d3f7d0
float temp0_284[0x4] = _mm_add_ps(_mm_mul_ps(temp0_282, zmm9), temp0_279)
float temp0_285[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0xaa)
float temp0_287[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xb1), temp0_285)
zmm10 = data_142d3f7b0
float temp0_291[0x4] = _mm_add_ps(
    __mulps_xmmps_memps(_mm_add_ps(_mm_mul_ps(temp0_287, zmm10), temp0_284), data_142d3f640), zmm4)
float temp0_292[0x4] = _mm_mul_ps(temp0_291, temp0_291)
float temp0_294[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_292, temp0_292[0].q), temp0_292)
float temp0_295[0x4] = _mm_shuffle_ps(temp0_294, temp0_294, 0xe5)
temp0_295[0] = temp0_295[0] + temp0_294[0]
zmm4 = _mm_andnot_ps(_mm_cmpeq_ss(0x322bcc77, temp0_295[0], 6), 0xffffffff)
result = 0x3f000000
temp0_295[0] = temp0_295[0] * 0.5f
float temp0_298[0x4] = _mm_rsqrt_ss(temp0_295[0], temp0_295[0])
temp0_298[0] = temp0_298[0] * temp0_298[0]
temp0_298[0] = temp0_298[0] * temp0_295[0]
zmm7 = 0x3f000000
zmm7[0] = 0.5f - temp0_298[0]
zmm7[0] = zmm7[0] * temp0_298[0]
zmm7[0] = zmm7[0] + temp0_298[0]
zmm7[0] = zmm7[0] * zmm7[0]
zmm7[0] = zmm7[0] * temp0_295[0]
result[0] = 0.5f - zmm7[0]
result[0] = result[0] * zmm7[0]
result[0] = result[0] + zmm7[0]
float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(result, result, 0), temp0_291)
float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
result = _mm_and_ps(temp0_300, temp0_301)
arg1[rax + 0xe] = _mm_or_ps(__andnps_xmmxud_memxud(temp0_301, data_142d3f660), result)
result = arg1[0xf]
float temp0_305[0x4] = _mm_mul_ps(arg1[0xe], result)
float temp0_307[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_305, temp0_305[0].q), temp0_305)
float temp0_308[0x4] = _mm_shuffle_ps(temp0_307, temp0_307, 0xe5)
temp0_308[0] = temp0_308[0] + temp0_307[0]
float temp0_309[0x4] = _mm_cmpeq_ss(0, temp0_308[0], 2)
zmm1 = _mm_and_ps(temp0_309, 0x3f800000)
zmm5 = _mm_or_ps(_mm_andnot_ps(temp0_309, 0xbf800000), zmm1)
arg1[0xf] = _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), result)
zmm6 = arg1[rax + 0xe][0]
zmm7 = arg1[rax][0x39]
zmm5 = arg1[rax][0x3a]
zmm1 = arg1[rdx][6]
result = arg1[rdx + 1][0]
zmm4 = zx.o(arg1[rdx + 1][0].q)[0].q | zmm1[0].q << 0x40
zmm1 = _mm_unpacklo_ps(zmm1, result[0].q)[0].q | arg1[rdx][5][0].q << 0x40
zmm2 = _mm_unpacklo_ps(zmm7, zmm5[0].q)[0].q | zmm6[0].q << 0x40
float temp0_317[0x4] = _mm_unpacklo_ps(zmm5, zmm6[0].q)
float temp0_318[0x4] = _mm_mul_ps(zmm1, zmm2)
zmm5 = temp0_317[0].q | zmm7[0].q << 0x40
float temp0_320[0x4] =
    _mm_sub_ps(temp0_318, _mm_mul_ps(zx.o(*(&arg1[rdx] + 0x14))[0].q | result[0].q << 0x40, zmm5))
float temp0_321[0x4] = _mm_add_ps(temp0_320, temp0_320)
result = arg1[rax][0x3b]
float temp0_324[0x4] = _mm_add_ps(zmm4, _mm_mul_ps(_mm_shuffle_ps(result, result, 0xc0), temp0_321))
float temp0_330[0x4] = _mm_add_ps(
    _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0xd2), zmm2), 
        _mm_mul_ps(_mm_shuffle_ps(temp0_321, temp0_321, 0xc9), zmm5)), 
    temp0_324)
float temp0_332[0x4] = _mm_add_ps(
    _mm_unpacklo_ps((*arg1)[rdx + 0x30], (*arg1)[rdx + 0x31][0].q)[0].q
        | (*arg1)[rdx + 0x32][0].q << 0x40, 
    temp0_330)
(*arg1)[rdx + 0x20] = temp0_332[0]
float temp0_333[0x4] = _mm_shuffle_ps(temp0_332, temp0_332, 0xe5)
temp0_332[0].q = temp0_332 u>> 0x40
(*arg1)[rdx + 0x21] = temp0_333[0]
(*arg1)[rdx + 0x22] = temp0_332[0]
zmm5 = arg1[rax][0x3b]
float temp0_334[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
zmm7 = arg1[rdx]
float temp0_335[0x4] = _mm_mul_ps(temp0_334, zmm7)
float temp0_336[0x4] = _mm_unpacklo_ps(arg1[rdx][3], arg1[rdx][2][0].q)
zmm6 = arg1[rdx][1]
zmm1 = temp0_336[0].q | zmm6[0].q << 0x40
float temp0_337[0x4] = _mm_unpacklo_ps(zmm7, zmm6[0].q)
float temp0_338[0x4] = _mm_unpacklo_ps(zmm6, zmm7[0].q)
float temp0_339[0x4] = _mm_shuffle_ps(zmm7, zmm1, 0x20)
zmm6 = temp0_338[0].q | temp0_336[0].q << 0x40
float temp0_340[0x4] = _mm_shuffle_ps(temp0_336, temp0_339, 0x24)
zmm1 = arg1[rax + 0xe][0]
float temp0_344[0x4] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(temp0_340, _mm_shuffle_ps(zmm1, zmm1, 0)), zmm8), temp0_335)
zmm2 = arg1[rax][0x39]
float temp0_348[0x4] = _mm_add_ps(
    _mm_mul_ps(
        _mm_mul_ps(zx.o(*(&arg1[rdx] + 8))[0].q | temp0_337[0].q << 0x40, 
            _mm_shuffle_ps(zmm2, zmm2, 0)), 
        zmm9), 
    temp0_344)
result = arg1[rax][0x3a]
arg1[rax + 0xa] =
    _mm_add_ps(_mm_mul_ps(_mm_mul_ps(zmm6, _mm_shuffle_ps(result, result, 0)), zmm10), temp0_348)
result = arg1[0xb]
float temp0_353[0x4] = _mm_mul_ps(arg1[0xa], result)
float temp0_355[0x4] = _mm_add_ps(_mm_unpackhi_pd(temp0_353, temp0_353[0].q), temp0_353)
float temp0_356[0x4] = _mm_shuffle_ps(temp0_355, temp0_355, 0xe5)
temp0_356[0] = temp0_356[0] + temp0_355[0]
float temp0_357[0x4] = _mm_cmpeq_ss(0, temp0_356[0], 2)
zmm3 = _mm_and_ps(0x3f800000, temp0_357)
zmm2 = _mm_or_ps(_mm_andnot_ps(temp0_357, 0xbf800000), zmm3)
arg1[0xb] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), result)
return result
