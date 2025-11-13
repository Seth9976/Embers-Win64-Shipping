// 函数: sub_14202aef0
// 地址: 0x14202aef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_18[0x4] = zmm6
float zmm7[0x4]
float var_28[0x4] = zmm7
float zmm8[0x4]
float var_38[0x4] = zmm8
float zmm9[0x4]
float var_48[0x4] = zmm9
float zmm10[0x4]
float var_58[0x4] = zmm10
float zmm11[0x4]
float var_68[0x4] = zmm11
float zmm12[0x4]
float var_78[0x4] = zmm12
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
float zmm0[0x4] = *(arg1 + 0x264)
float zmm15[0x4] = *(arg1 + 0x25c)
float zmm14[0x4] = data_14399f668
float zmm13[0x4] = *(arg1 + 0x270)
float temp0[0x4] = _mm_unpacklo_ps(*(arg1 + 0x260), 0)
float temp0_1[0x4] = _mm_unpacklo_ps(zmm15, zmm0[0].q)
zmm0 = data_14399f670
float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, temp0[0].q)
float temp0_3[0x4] = _mm_unpacklo_ps(data_14399f66c, 0)
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm14, zmm0[0].q), temp0_3[0].q)
float var_138[0x4]
uint32_t var_f8[0x4]
float zmm1[0x4]

if (arg4 == 0)
    zmm1 = data_143f404f0
    float zmm5[0x4] = data_143f40590
    arg2[1] = zx.o(0)
    zmm1[0].q = zx.o(0) u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    arg2[2] = _mm_and_ps(data_143f404f0, zmm5)
    zmm6 = *(arg1 + 0x1c0)
    zmm7 = *(arg1 + 0x1e0)
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_5, zmm7), data_143f405c0, 1))
            == 0)
        zmm5 = *(arg1 + 0x1d0)
        float temp0_309[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
        float temp0_311[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_309)
        float temp0_312[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_313[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_314[0x4] = _mm_mul_ps(temp0_2, zmm7)
        float temp0_315[0x4] = __mulps_xmmps_memps(temp0_311, data_143f40580)
        float temp0_316[0x4] = _mm_mul_ps(temp0_313, zmm13)
        float temp0_317[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_318[0x4] = _mm_mul_ps(temp0_5, zmm7)
        float temp0_319[0x4] = _mm_add_ps(temp0_315, temp0_316)
        float temp0_321[0x4] = _mm_mul_ps(temp0_312, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
        float temp0_322[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        float temp0_323[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_324[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
        float temp0_325[0x4] = __mulps_xmmps_memps(temp0_321, data_143f40570)
        float temp0_326[0x4] = _mm_mul_ps(temp0_322, temp0_324)
        arg2[2] = temp0_318
        float temp0_329[0x4] = _mm_add_ps(_mm_add_ps(temp0_319, temp0_325), 
            __mulps_xmmps_memps(temp0_326, data_143f40560))
        float temp0_331[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_314, temp0_314, 0xc9), temp0_317)
        *arg2 = temp0_329
        float temp0_334[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_314, temp0_314, 0xd2), temp0_323), temp0_331)
        float temp0_335[0x4] = _mm_add_ps(temp0_334, temp0_334)
        float temp0_336[0x4] = _mm_mul_ps(temp0_313, temp0_335)
        float temp0_338[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_335, temp0_335, 0xd2), temp0_323)
        float temp0_339[0x4] = _mm_shuffle_ps(temp0_335, temp0_335, 0xc9)
        float temp0_340[0x4] = _mm_add_ps(temp0_336, temp0_314)
        arg2[1] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_338, _mm_mul_ps(temp0_339, temp0_317)), temp0_340), zmm5)
    else
        zmm10 = data_143f404f0
        float temp0_180[0x4] = _mm_add_ps(zmm6, zmm6)
        zmm8 = *(arg1 + 0x1d0)
        float temp0_181[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
        float temp0_182[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float temp0_183[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_184[0x4] = _mm_mul_ps(zmm6, temp0_180)
        float temp0_186[0x4] = _mm_mul_ps(temp0_181, _mm_shuffle_ps(temp0_180, temp0_180, 0x29))
        float temp0_187[0x4] = _mm_shuffle_ps(temp0_180, temp0_180, 0x12)
        float temp0_188[0x4] = _mm_shuffle_ps(temp0_184, temp0_184, 0x1a)
        float temp0_189[0x4] = _mm_mul_ps(temp0_183, temp0_187)
        float temp0_191[0x4] = _mm_add_ps(temp0_188, _mm_shuffle_ps(temp0_184, temp0_184, 1))
        _mm_mul_ps(temp0_5, zmm7)
        float temp0_193[0x4] = _mm_add_ps(temp0_189, temp0_186)
        float temp0_194[0x4] = _mm_sub_ps(temp0_186, temp0_189)
        float temp0_195[0x4] = _mm_sub_ps(zmm10, temp0_191)
        float temp0_196[0x4] = _mm_mul_ps(temp0_193, zmm7)
        float temp0_197[0x4] = _mm_mul_ps(temp0_182, temp0_194)
        float temp0_198[0x4] = _mm_mul_ps(temp0_195, zmm7)
        float temp0_199[0x4] = _mm_add_ps(zmm13, zmm13)
        zmm1 = _mm_and_ps(temp0_198, zmm5)
        float temp0_201[0x4] = _mm_mul_ps(zmm13, temp0_199)
        float temp0_202[0x4] = _mm_shuffle_ps(temp0_197, zmm1, 0x32)
        float temp0_204[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_196, zmm1, 0), temp0_202, 0x82)
        float temp0_205[0x4] = _mm_shuffle_ps(temp0_196, zmm1, 0x31)
        float temp0_207[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_197, zmm1, 0x10), temp0_205, 0x88)
        float temp0_209[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_196, temp0_197, 0x12), zmm1, 0xe8)
        float temp0_210[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0x29)
        zmm10[0].q = zmm8 u>> 0x40
        float temp0_211[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
        float temp0_213[0x4] = _mm_mul_ps(temp0_210, _mm_shuffle_ps(zmm13, zmm13, 4))
        float temp0_216[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_201, temp0_201, 0x1a), 
            _mm_shuffle_ps(temp0_201, temp0_201, 1))
        float temp0_217[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
        float temp0_219[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_199, temp0_199, 0x12), temp0_217)
        float temp0_220[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
        float temp0_221[0x4] = _mm_add_ps(temp0_219, temp0_213)
        float temp0_222[0x4] = _mm_sub_ps(temp0_213, temp0_219)
        float temp0_223[0x4] = _mm_mul_ps(temp0_221, temp0_5)
        float temp0_224[0x4] = _mm_mul_ps(temp0_220, temp0_222)
        zmm1 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_216), temp0_5), zmm5)
        float temp0_228[0x4] = _mm_shuffle_ps(temp0_224, zmm1, 0x32)
        float temp0_230[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, zmm1, 0), temp0_228, 0x82)
        float temp0_231[0x4] = _mm_shuffle_ps(temp0_223, zmm1, 0x31)
        float temp0_233[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_224, zmm1, 0x10), temp0_231, 0x88)
        float temp0_235[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_223, temp0_224, 0x12), zmm1, 0xe8)
        float temp0_236[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xaa)
        float temp0_237[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x55)
        float temp0_238[0x4] = _mm_mul_ps(temp0_236, temp0_209)
        float temp0_239[0x4] = _mm_mul_ps(temp0_237, temp0_207)
        zmm10[0].q = temp0_2 u>> 0x40
        float temp0_240[0x4] = _mm_shuffle_ps(temp0_2, zmm10, 0xc4)
        float temp0_241[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0)
        float temp0_243[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xff), temp0_211)
        float temp0_245[0x4] = _mm_add_ps(temp0_239, _mm_mul_ps(temp0_241, temp0_204))
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0), temp0_204)
        float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_238)
        float temp0_250[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0xaa), temp0_209)
        float temp0_251[0x4] = _mm_add_ps(temp0_248, temp0_243)
        float temp0_253[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0x55), temp0_207)
        float temp0_254[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0xff)
        var_138 = temp0_251
        float temp0_255[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
        float temp0_256[0x4] = _mm_add_ps(temp0_253, temp0_247)
        float temp0_257[0x4] = _mm_mul_ps(temp0_255, temp0_207)
        float temp0_258[0x4] = _mm_mul_ps(temp0_254, temp0_211)
        float temp0_259[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
        float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_250)
        float temp0_261[0x4] = _mm_mul_ps(temp0_259, temp0_204)
        float temp0_263[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_209)
        float temp0_264[0x4] = _mm_add_ps(temp0_260, temp0_258)
        float temp0_265[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xff)
        float temp0_266[0x4] = _mm_add_ps(temp0_257, temp0_261)
        float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_211)
        float temp0_268[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0)
        int96_t var_128_2 = temp0_264[0].12
        float temp0_269[0x4] = _mm_shuffle_ps(temp0_240, temp0_240, 0x55)
        float temp0_270[0x4] = _mm_add_ps(temp0_266, temp0_263)
        float temp0_271[0x4] = _mm_mul_ps(temp0_269, temp0_207)
        float temp0_273[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xaa), temp0_209)
        float temp0_274[0x4] = _mm_mul_ps(temp0_268, temp0_204)
        float temp0_275[0x4] = _mm_add_ps(temp0_270, temp0_267)
        float temp0_277[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_240, temp0_240, 0xff), temp0_211)
        float temp0_278[0x4] = _mm_add_ps(temp0_271, temp0_274)
        int96_t var_118_2 = temp0_275[0].12
        int96_t var_108_2 = _mm_add_ps(_mm_add_ps(temp0_278, temp0_273), temp0_277)[0].12
        zmm10, zmm12 = sub_1407740e0(&var_138, 0x322bcc77)
        float zmm2_3[0x4] = var_138[0]
        float zmm1_3 = var_138[1]
        float zmm4_3[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f405c0, zmm12, 2), data_143f404e0 ^ zmm10)
        uint32_t zmm0_3[0x4] = var_138[2]
        zmm4_3 ^= data_143f404e0
        zmm2_3[0] = zmm2_3[0] * zmm4_3[0]
        zmm1_3 = zmm1_3 * zmm4_3[0]
        var_138[0] = zmm2_3[0]
        zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
        var_138[1] = zmm1_3
        var_138[2] = zmm0_3[0]
        zmm0_3 = var_128_2:8.d
        float temp0_283[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
        zmm1_3 = var_128_2:4.d * temp0_283[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_283[0]
        float zmm3_3 = var_128_2.d * temp0_283[0]
        zmm2_3 = var_118_2.d
        float temp0_284[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
        var_128_2:4.d = zmm1_3
        var_128_2:8.d = zmm0_3[0]
        zmm0_3 = var_118_2:8.d
        zmm1_3 = var_118_2:4.d * temp0_284[0]
        zmm0_3[0] = zmm0_3[0] f* temp0_284[0]
        zmm2_3[0] = zmm2_3[0] * temp0_284[0]
        var_118_2:4.d = zmm1_3
        var_118_2:8.d = zmm0_3[0]
        var_128_2.d = zmm3_3
        var_118_2.d = zmm2_3[0]
        sub_14077e4a0(&var_f8, &var_138)
        zmm6 = var_f8
        float zmm5_2[0x4] = data_143f405b0
        float temp0_285[0x4] = _mm_mul_ps(zmm6, zmm6)
        float temp0_287[0x4] = _mm_add_ps(temp0_285, _mm_shuffle_ps(temp0_285, temp0_285, 0x4e))
        float temp0_289[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_287, temp0_287, 0x39), temp0_287)
        float temp0_290[0x4] = _mm_rsqrt_ps(temp0_289)
        float temp0_291[0x4] = _mm_mul_ps(temp0_289, zmm5_2)
        float temp0_296[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_290, temp0_290), temp0_291)), 
                temp0_290), 
            temp0_290)
        float temp0_299[0x4] =
            _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_296, temp0_296), temp0_291))
        float temp0_301[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_289, 2)
        float temp0_303[0x4] = _mm_add_ps(_mm_mul_ps(temp0_299, temp0_296), temp0_296)
        float temp0_304[0x4] = _mm_unpacklo_ps(var_108_2:4.d, 0)
        zmm5_2 =
            _mm_and_ps(_mm_mul_ps(temp0_303, zmm6) ^ data_143f405a0, temp0_301) ^ data_143f405a0
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_2.d, var_108_2:8.d[0].q), temp0_304[0].q)
        arg2[2] = zmm12
        *arg2 = zmm5_2
else
    void* rdi_1
    
    if (arg4 == 1)
        rdi_1 = *(arg1 + 0xa0)
    
    if (arg4 != 1 || rdi_1 == 0)
        *arg2 = zmm13
        arg2[1] = temp0_2
        arg2[2] = temp0_5
    else
        zmm7 = *(arg1 + 0x1e0)
        zmm6 = *(arg1 + 0x1c0)
        float var_e8[0x4]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_5, zmm7), data_143f405c0, 1))
                == 0)
            float temp0_141[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), _mm_shuffle_ps(zmm13, zmm13, 0x1b))
            float temp0_142[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_143[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_144[0x4] = _mm_mul_ps(zmm7, temp0_2)
            float temp0_145[0x4] = __mulps_xmmps_memps(temp0_141, data_143f40580)
            float temp0_146[0x4] = _mm_mul_ps(temp0_143, zmm13)
            float temp0_147[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_148[0x4] = _mm_mul_ps(temp0_5, zmm7)
            float temp0_149[0x4] = _mm_add_ps(temp0_145, temp0_146)
            float temp0_151[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm13, zmm13, 0x4e))
            float temp0_152[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
            float temp0_155[0x4] = __mulps_xmmps_memps(temp0_151, data_143f40570)
            float temp0_156[0x4] = _mm_mul_ps(temp0_152, temp0_154)
            float var_c8_2[0x4] = temp0_148
            float temp0_159[0x4] = _mm_add_ps(_mm_add_ps(temp0_149, temp0_155), 
                __mulps_xmmps_memps(temp0_156, data_143f40560))
            float temp0_161[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_144, temp0_144, 0xc9), temp0_147)
            var_e8 = temp0_159
            float temp0_164[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_144, temp0_144, 0xd2), temp0_153), temp0_161)
            float temp0_165[0x4] = _mm_add_ps(temp0_164, temp0_164)
            float temp0_166[0x4] = _mm_mul_ps(temp0_143, temp0_165)
            float temp0_168[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_165, temp0_165, 0xd2), temp0_153)
            float temp0_169[0x4] = _mm_shuffle_ps(temp0_165, temp0_165, 0xc9)
            float temp0_170[0x4] = _mm_add_ps(temp0_166, temp0_144)
            float var_d8_2[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_168, _mm_mul_ps(temp0_169, temp0_147)), temp0_170), 
                *(arg1 + 0x1d0))
        else
            zmm10 = data_143f404f0
            float temp0_10[0x4] = _mm_add_ps(zmm6, zmm6)
            zmm8 = *(arg1 + 0x1d0)
            float temp0_11[0x4] = _mm_shuffle_ps(zmm6, zmm6, 4)
            float temp0_12[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            _mm_mul_ps(temp0_5, zmm7)
            float temp0_15[0x4] = _mm_mul_ps(temp0_11, _mm_shuffle_ps(temp0_10, temp0_10, 0x29))
            float temp0_16[0x4] = _mm_mul_ps(temp0_10, zmm6)
            float temp0_17[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x12)
            float temp0_19[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), temp0_17)
            float temp0_22[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_16, temp0_16, 0x1a), 
                _mm_shuffle_ps(temp0_16, temp0_16, 1))
            float temp0_23[0x4] = _mm_add_ps(temp0_19, temp0_15)
            float temp0_24[0x4] = _mm_sub_ps(temp0_15, temp0_19)
            float temp0_25[0x4] = _mm_sub_ps(zmm10, temp0_22)
            float temp0_26[0x4] = _mm_mul_ps(temp0_23, zmm7)
            float temp0_27[0x4] = _mm_mul_ps(temp0_12, temp0_24)
            float temp0_28[0x4] = _mm_mul_ps(temp0_25, zmm7)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm13, zmm13, 4)
            zmm1 = __andps_xmmxud_memxud(temp0_28, data_143f40590)
            float temp0_31[0x4] = _mm_shuffle_ps(temp0_27, zmm1, 0x32)
            float temp0_33[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, zmm1, 0), temp0_31, 0x82)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_26, zmm1, 0x31)
            float temp0_36[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_27, zmm1, 0x10), temp0_34, 0x88)
            float temp0_38[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_26, temp0_27, 0x12), zmm1, 0xe8)
            float temp0_39[0x4] = _mm_add_ps(zmm13, zmm13)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_40[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_41[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
            float temp0_43[0x4] = _mm_mul_ps(zmm13, temp0_39)
            float temp0_45[0x4] = _mm_mul_ps(temp0_29, _mm_shuffle_ps(temp0_39, temp0_39, 0x29))
            float temp0_46[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0x12)
            float temp0_47[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0x1a)
            float temp0_48[0x4] = _mm_mul_ps(temp0_41, temp0_46)
            float temp0_50[0x4] = _mm_add_ps(temp0_47, _mm_shuffle_ps(temp0_43, temp0_43, 1))
            float temp0_51[0x4] = _mm_add_ps(temp0_48, temp0_45)
            float temp0_52[0x4] = _mm_sub_ps(temp0_45, temp0_48)
            float temp0_53[0x4] = _mm_sub_ps(zmm10, temp0_50)
            float temp0_54[0x4] = _mm_mul_ps(temp0_51, temp0_5)
            float temp0_55[0x4] = _mm_mul_ps(temp0_42, temp0_52)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_53, temp0_5), data_143f40590)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, zmm1, 0x32)
            float temp0_60[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, zmm1, 0), temp0_58, 0x82)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_54, zmm1, 0x31)
            float temp0_63[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1, 0x10), temp0_61, 0x88)
            float temp0_65[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_54, temp0_55, 0x12), zmm1, 0xe8)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xaa)
            float temp0_67[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_68[0x4] = _mm_mul_ps(temp0_66, temp0_38)
            float temp0_69[0x4] = _mm_mul_ps(temp0_67, temp0_36)
            zmm10[0].q = temp0_2 u>> 0x40
            float temp0_70[0x4] = _mm_shuffle_ps(temp0_2, zmm10, 0xc4)
            float temp0_71[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xff), temp0_40)
            float temp0_75[0x4] = _mm_add_ps(temp0_69, _mm_mul_ps(temp0_71, temp0_33))
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0), temp0_33)
            float temp0_78[0x4] = _mm_add_ps(temp0_75, temp0_68)
            float temp0_80[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0xaa), temp0_38)
            float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_73)
            float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_63, temp0_63, 0x55), temp0_36)
            float temp0_84[0x4] = _mm_shuffle_ps(temp0_63, temp0_63, 0xff)
            var_138 = temp0_81
            float temp0_85[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_86[0x4] = _mm_add_ps(temp0_83, temp0_77)
            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_36)
            float temp0_88[0x4] = _mm_mul_ps(temp0_84, temp0_40)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_80)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
            float temp0_93[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_38)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_88)
            float temp0_95[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
            float temp0_96[0x4] = _mm_add_ps(temp0_87, temp0_91)
            float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_40)
            float temp0_98[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0)
            int96_t var_128_1 = temp0_94[0].12
            float temp0_99[0x4] = _mm_shuffle_ps(temp0_70, temp0_70, 0x55)
            float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_93)
            float temp0_101[0x4] = _mm_mul_ps(temp0_99, temp0_36)
            float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xaa), temp0_38)
            float temp0_104[0x4] = _mm_mul_ps(temp0_98, temp0_33)
            float temp0_105[0x4] = _mm_add_ps(temp0_100, temp0_97)
            float temp0_107[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_70, temp0_70, 0xff), temp0_40)
            float temp0_108[0x4] = _mm_add_ps(temp0_101, temp0_104)
            int96_t var_118_1 = temp0_105[0].12
            int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_108, temp0_103), temp0_107)[0].12
            int128_t zmm10_1
            float zmm12_1[0x4]
            zmm10_1, zmm12_1 = sub_1407740e0(&var_138, 0x322bcc77)
            float zmm2_1[0x4] = var_138[0]
            float zmm1_1 = var_138[1]
            float zmm4_1[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f405c0, zmm12_1, 2), data_143f404e0 ^ zmm10_1)
            uint32_t zmm0_1[0x4] = var_138[2]
            zmm4_1 ^= data_143f404e0
            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
            zmm1_1 = zmm1_1 * zmm4_1[0]
            var_138[0] = zmm2_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
            var_138[1] = zmm1_1
            var_138[2] = zmm0_1[0]
            zmm0_1 = var_128_1:8.d
            float temp0_113[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            zmm1_1 = var_128_1:4.d * temp0_113[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_113[0]
            float zmm3_1 = var_128_1.d * temp0_113[0]
            zmm2_1 = var_118_1.d
            float temp0_114[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            var_128_1:4.d = zmm1_1
            var_128_1:8.d = zmm0_1[0]
            zmm0_1 = var_118_1:8.d
            zmm1_1 = var_118_1:4.d * temp0_114[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_114[0]
            zmm2_1[0] = zmm2_1[0] * temp0_114[0]
            var_118_1:4.d = zmm1_1
            var_118_1:8.d = zmm0_1[0]
            var_128_1.d = zmm3_1
            var_118_1.d = zmm2_1[0]
            sub_14077e4a0(&var_f8, &var_138)
            uint32_t zmm6_1[0x4] = var_f8
            float zmm5_1[0x4] = data_143f405b0
            uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
            float var_c8_1[0x4] = zmm12_1
            zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
            zmm1_2 = _mm_rsqrt_ps(zmm4_2)
            float temp0_121[0x4] = _mm_mul_ps(zmm4_2, zmm5_1)
            float temp0_126[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_121)), 
                    zmm1_2), 
                zmm1_2)
            float temp0_129[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_126, temp0_126), temp0_121))
            uint32_t zmm0_2[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_129, temp0_126), temp0_126)
            float temp0_134[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
            zmm5_1 =
                _mm_and_ps(_mm_mul_ps(temp0_133, zmm6_1) ^ data_143f405a0, zmm0_2) ^ data_143f405a0
            float var_d8_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_134[0].q)
            var_e8 = zmm5_1
        
        void* rax_4 = *(rdi_1 + 0x130)
        int128_t* r8 = rax_4 + 0x1c0
        
        if (rax_4 == 0)
            r8 = &data_143dbb0c0
        
        sub_140ad7d70(&var_e8, arg2, r8)
__security_check_cookie(rax_1 ^ &var_168)
return arg2
