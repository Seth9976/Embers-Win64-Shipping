// 函数: sub_141a88830
// 地址: 0x141a88830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm8[0x4]
float var_48[0x4] = zmm8
float zmm9[0x4]
float var_58[0x4] = zmm9
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
float zmm1[0x4] = data_143f2b810
float (* result)[0x4] = arg2
arg2[1] = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*arg2 = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
arg2[2] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
float var_148[0x4]
uint32_t var_108[0x4]
float zmm9_1[0x4]

if (*arg1 == 0)
    int32_t rdx_2 = *(arg1 + 0xc)
    int32_t rax_7
    
    if ((rdx_2 & 0x7fffffff) != 0x7fffffff && rdx_2 s>= 0)
        rax_7 = *(arg1 + 0x10)
    
    void var_158
    
    if ((rdx_2 & 0x7fffffff) == 0x7fffffff || rdx_2 s< 0 || rax_7 == 0xffffffff || rax_7 s< 0
            || rax_7 s>= arg4[1].d)
        sub_141a91990(&var_158, arg3, arg5, result)
    else
        float (* rax_8)[0x4] = sub_141ab9f30(arg4, rax_7)
        float zmm14_2[0x4] = arg3[2]
        float zmm6_3[0x4] = rax_8[2]
        float zmm3_4[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14_2, zmm6_3), data_143f2b8d0, 1)) == 0)
            float zmm4_3[0x4] = *rax_8
            float zmm2_4[0x4] = *arg3
            zmm3_4 = arg3[1]
            float temp0_302[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0)
            float temp0_304[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0x1b), temp0_302)
            float temp0_305[0x4] = _mm_mul_ps(zmm3_4, zmm6_3)
            float temp0_306[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
            float temp0_307[0x4] = __mulps_xmmps_memps(temp0_304, data_143f2b850)
            float temp0_308[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
            float temp0_309[0x4] = _mm_mul_ps(zmm2_4, temp0_308)
            float temp0_310[0x4] = _mm_mul_ps(zmm6_3, zmm14_2)
            float temp0_311[0x4] = _mm_add_ps(temp0_307, temp0_309)
            float temp0_313[0x4] = _mm_mul_ps(temp0_306, _mm_shuffle_ps(zmm2_4, zmm2_4, 0x4e))
            float temp0_316[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa), 
                _mm_shuffle_ps(zmm2_4, zmm2_4, 0xb1))
            float temp0_317[0x4] = __mulps_xmmps_memps(temp0_313, data_143f2b840)
            float temp0_318[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xd2)
            float temp0_319[0x4] = __mulps_xmmps_memps(temp0_316, data_143f2b830)
            float temp0_320[0x4] = _mm_add_ps(temp0_311, temp0_317)
            float temp0_321[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xd2)
            float temp0_322[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xc9)
            float temp0_323[0x4] = _mm_mul_ps(temp0_318, temp0_322)
            float temp0_324[0x4] = _mm_add_ps(temp0_320, temp0_319)
            float temp0_327[0x4] = _mm_sub_ps(temp0_323, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xc9), temp0_321))
            float temp0_328[0x4] = _mm_add_ps(temp0_327, temp0_327)
            float temp0_329[0x4] = _mm_shuffle_ps(temp0_328, temp0_328, 0xd2)
            float temp0_330[0x4] = _mm_shuffle_ps(temp0_328, temp0_328, 0xc9)
            float temp0_331[0x4] = _mm_mul_ps(temp0_329, temp0_322)
            float temp0_332[0x4] = _mm_mul_ps(temp0_330, temp0_321)
            float temp0_333[0x4] = _mm_mul_ps(temp0_328, temp0_308)
            float temp0_337[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_331, temp0_332), _mm_add_ps(temp0_333, temp0_305)), 
                rax_8[1])
            *result = temp0_324
            result[2] = temp0_310
            result[1] = temp0_337
        else
            float zmm1_5[0x4] = *rax_8
            float zmm11_3[0x4] = data_143f2b810
            zmm9_1 = rax_8[1]
            float temp0_173[0x4] = _mm_add_ps(zmm1_5, zmm1_5)
            float temp0_174[0x4] = _mm_shuffle_ps(zmm6_3, zmm6_3, 0xc9)
            float temp0_175[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 4)
            _mm_mul_ps(zmm6_3, zmm14_2)
            float temp0_177[0x4] = _mm_mul_ps(temp0_173, zmm1_5)
            float temp0_179[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0x29), temp0_175)
            float temp0_180[0x4] = _mm_shuffle_ps(zmm1_5, zmm1_5, 0xff)
            float temp0_181[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x1a)
            float temp0_183[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_173, temp0_173, 0x12), temp0_180)
            float temp0_185[0x4] = _mm_add_ps(temp0_181, _mm_shuffle_ps(temp0_177, temp0_177, 1))
            float temp0_186[0x4] = _mm_add_ps(temp0_183, temp0_179)
            float temp0_187[0x4] = _mm_sub_ps(temp0_179, temp0_183)
            zmm3_4 = *arg3
            float temp0_188[0x4] = _mm_sub_ps(zmm11_3, temp0_185)
            float temp0_189[0x4] = _mm_mul_ps(temp0_186, zmm6_3)
            float temp0_190[0x4] = _mm_mul_ps(temp0_174, temp0_187)
            float temp0_191[0x4] = _mm_mul_ps(temp0_188, zmm6_3)
            float temp0_192[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 4)
            zmm1_5 = __andps_xmmxud_memxud(temp0_191, data_143f2b820)
            float temp0_194[0x4] = _mm_shuffle_ps(temp0_190, zmm1_5, 0x32)
            float temp0_196[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1_5, 0), temp0_194, 0x82)
            float temp0_197[0x4] = _mm_shuffle_ps(temp0_189, zmm1_5, 0x31)
            float temp0_199[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_190, zmm1_5, 0x10), temp0_197, 0x88)
            float temp0_201[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, temp0_190, 0x12), zmm1_5, 0xe8)
            float temp0_202[0x4] = _mm_add_ps(zmm3_4, zmm3_4)
            zmm11_3[0].q = zmm9_1 u>> 0x40
            float temp0_203[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_3, 0xc4)
            float temp0_204[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xff)
            float temp0_205[0x4] = _mm_shuffle_ps(zmm14_2, zmm14_2, 0xc9)
            float temp0_206[0x4] = _mm_mul_ps(zmm3_4, temp0_202)
            float temp0_208[0x4] = _mm_mul_ps(temp0_192, _mm_shuffle_ps(temp0_202, temp0_202, 0x29))
            float temp0_210[0x4] = _mm_mul_ps(temp0_204, _mm_shuffle_ps(temp0_202, temp0_202, 0x12))
            float temp0_213[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_206, temp0_206, 0x1a), 
                _mm_shuffle_ps(temp0_206, temp0_206, 1))
            float temp0_214[0x4] = _mm_add_ps(temp0_210, temp0_208)
            float temp0_215[0x4] = _mm_sub_ps(temp0_208, temp0_210)
            float temp0_216[0x4] = _mm_sub_ps(zmm11_3, temp0_213)
            float temp0_217[0x4] = _mm_mul_ps(temp0_214, zmm14_2)
            float temp0_218[0x4] = _mm_mul_ps(temp0_205, temp0_215)
            zmm1_5 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_216, zmm14_2), data_143f2b820)
            float temp0_223[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_217, zmm1_5, 0), 
                _mm_shuffle_ps(temp0_218, zmm1_5, 0x32), 0x82)
            float temp0_224[0x4] = _mm_shuffle_ps(temp0_218, zmm1_5, 0x10)
            float temp0_225[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0x55)
            float temp0_227[0x4] =
                _mm_shuffle_ps(temp0_224, _mm_shuffle_ps(temp0_217, zmm1_5, 0x31), 0x88)
            float temp0_228[0x4] = _mm_mul_ps(temp0_225, temp0_199)
            float temp0_229[0x4] = _mm_shuffle_ps(temp0_217, temp0_218, 0x12)
            float zmm5_3[0x4] = arg3[1]
            float temp0_230[0x4] = _mm_shuffle_ps(temp0_229, zmm1_5, 0xe8)
            float temp0_232[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xaa), temp0_201)
            zmm11_3[0].q = zmm5_3 u>> 0x40
            float temp0_233[0x4] = _mm_shuffle_ps(zmm5_3, zmm11_3, 0xc4)
            float temp0_234[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0)
            float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xff), temp0_203)
            float temp0_238[0x4] = _mm_add_ps(temp0_228, _mm_mul_ps(temp0_234, temp0_196))
            float temp0_240[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0), temp0_196)
            float temp0_241[0x4] = _mm_add_ps(temp0_238, temp0_232)
            float temp0_243[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_201)
            float temp0_244[0x4] = _mm_add_ps(temp0_241, temp0_236)
            float temp0_246[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0x55), temp0_199)
            float temp0_247[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xff)
            var_148 = temp0_244
            float temp0_248[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0x55)
            float temp0_249[0x4] = _mm_add_ps(temp0_246, temp0_240)
            float temp0_250[0x4] = _mm_mul_ps(temp0_248, temp0_199)
            float temp0_251[0x4] = _mm_mul_ps(temp0_247, temp0_203)
            float temp0_252[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0)
            float temp0_253[0x4] = _mm_add_ps(temp0_249, temp0_243)
            float temp0_254[0x4] = _mm_mul_ps(temp0_252, temp0_196)
            float temp0_256[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_201)
            float temp0_257[0x4] = _mm_add_ps(temp0_253, temp0_251)
            float temp0_258[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xff)
            float temp0_259[0x4] = _mm_add_ps(temp0_250, temp0_254)
            float temp0_260[0x4] = _mm_mul_ps(temp0_258, temp0_203)
            float temp0_261[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0)
            int96_t var_138_2 = temp0_257[0].12
            float temp0_262[0x4] = _mm_shuffle_ps(temp0_233, temp0_233, 0x55)
            float temp0_263[0x4] = _mm_add_ps(temp0_259, temp0_256)
            float temp0_264[0x4] = _mm_mul_ps(temp0_262, temp0_199)
            float temp0_266[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0xaa), temp0_201)
            float temp0_267[0x4] = _mm_mul_ps(temp0_261, temp0_196)
            float temp0_268[0x4] = _mm_add_ps(temp0_263, temp0_260)
            float temp0_270[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_233, temp0_233, 0xff), temp0_203)
            float temp0_271[0x4] = _mm_add_ps(temp0_264, temp0_267)
            int96_t var_128_2 = temp0_268[0].12
            int96_t var_118_2 = _mm_add_ps(_mm_add_ps(temp0_271, temp0_266), temp0_270)[0].12
            int128_t zmm11_4
            float zmm13_4[0x4]
            float zmm15_4[0x4]
            zmm11_4, zmm13_4, zmm15_4 = sub_1407740e0(&var_148, 0x322bcc77)
            float zmm2_5[0x4] = var_148[0]
            float zmm1_6 = var_148[1]
            zmm15_4 = _mm_and_ps(_mm_cmpeq_ps(zmm15_4, zmm13_4, 2), data_143f2b8c0 ^ zmm11_4)
                ^ data_143f2b8c0
            zmm2_5[0] = zmm2_5[0] * zmm15_4[0]
            zmm1_6 = zmm1_6 * zmm15_4[0]
            uint32_t zmm0_6[0x4] = var_148[2]
            zmm0_6[0] = zmm0_6[0] f* zmm15_4[0]
            var_148[0] = zmm2_5[0]
            float temp0_276[0x4] = _mm_shuffle_ps(zmm15_4, zmm15_4, 0x55)
            var_148[2] = zmm0_6[0]
            zmm0_6 = var_138_2:8.d
            zmm0_6[0] = zmm0_6[0] f* temp0_276[0]
            var_148[1] = zmm1_6
            zmm1_6 = var_138_2:4.d * temp0_276[0]
            float zmm3_5 = var_138_2.d * temp0_276[0]
            zmm2_5 = var_128_2.d
            var_138_2:8.d = zmm0_6[0]
            zmm0_6 = var_128_2:8.d
            var_138_2:4.d = zmm1_6
            float temp0_277[0x4] = _mm_shuffle_ps(zmm15_4, zmm15_4, 0xaa)
            zmm0_6[0] = zmm0_6[0] f* temp0_277[0]
            zmm2_5[0] = zmm2_5[0] * temp0_277[0]
            zmm1_6 = var_128_2:4.d * temp0_277[0]
            var_128_2:8.d = zmm0_6[0]
            var_138_2.d = zmm3_5
            var_128_2.d = zmm2_5[0]
            var_128_2:4.d = zmm1_6
            sub_14077e4a0(&var_108, &var_148)
            uint32_t zmm5_4[0x4] = var_108
            float zmm6_4[0x4] = data_143f2b8b0
            uint32_t zmm1_7[0x4] = _mm_mul_ps(zmm5_4, zmm5_4)
            zmm1_7 = _mm_add_ps(zmm1_7, _mm_shuffle_ps(zmm1_7, zmm1_7, 0x4e))
            uint32_t zmm4_4[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_7, zmm1_7, 0x39), zmm1_7)
            zmm1_7 = _mm_rsqrt_ps(zmm4_4)
            uint32_t zmm3_6[0x4] = _mm_mul_ps(zmm4_4, zmm6_4)
            float temp0_289[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_4, _mm_mul_ps(_mm_mul_ps(zmm1_7, zmm1_7), zmm3_6)), 
                    zmm1_7), 
                zmm1_7)
            float temp0_292[0x4] =
                _mm_sub_ps(zmm6_4, _mm_mul_ps(_mm_mul_ps(temp0_289, temp0_289), zmm3_6))
            uint32_t zmm0_7[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_4, 2)
            float temp0_296[0x4] = _mm_add_ps(_mm_mul_ps(temp0_292, temp0_289), temp0_289)
            float temp0_297[0x4] = _mm_unpacklo_ps(var_118_2:4.d, 0)
            zmm6_4 =
                _mm_and_ps(_mm_mul_ps(temp0_296, zmm5_4) ^ data_143f2b8a0, zmm0_7) ^ data_143f2b8a0
            result[1] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_2.d, var_118_2:8.d[0].q), temp0_297[0].q)
            *result = zmm6_4
            result[2] = zmm13_4
else
    float var_f8[0x3][0x4]
    float (* rdx)[0x3][0x4] = &var_f8
    
    if (*(arg1 + 0x5c) == 0xffffffff)
        float (* rax_4)[0x4] = sub_140ad7d70(arg3, rdx, arg5)
        *result = *rax_4
        result[1] = rax_4[1]
        result[2] = rax_4[2]
    else
        float (* rax_2)[0x4] = sub_141a88190(&arg1[0x20], rdx, arg4, zmm8, zmm9)
        float zmm14_1[0x4] = arg3[2]
        float zmm8_1[0x4] = rax_2[2]
        float zmm3_1[0x4]
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14_1, zmm8_1), data_143f2b8d0, 1)) == 0)
            float zmm4_1[0x4] = *rax_2
            float zmm2_1[0x4] = *arg3
            zmm3_1 = arg3[1]
            float temp0_134[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
            float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0x1b), temp0_134)
            float temp0_137[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            float temp0_138[0x4] = _mm_mul_ps(zmm3_1, zmm8_1)
            float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143f2b850)
            float temp0_140[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
            float temp0_141[0x4] = _mm_mul_ps(zmm14_1, zmm8_1)
            float temp0_143[0x4] = _mm_add_ps(temp0_139, _mm_mul_ps(temp0_140, zmm2_1))
            float temp0_145[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x4e))
            float temp0_148[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                _mm_shuffle_ps(zmm2_1, zmm2_1, 0xb1))
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143f2b840)
            float temp0_150[0x4] = _mm_shuffle_ps(temp0_138, temp0_138, 0xd2)
            float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f2b830)
            float temp0_152[0x4] = _mm_add_ps(temp0_143, temp0_149)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
            float temp0_155[0x4] = _mm_mul_ps(temp0_150, temp0_154)
            float temp0_156[0x4] = _mm_add_ps(temp0_152, temp0_151)
            float temp0_159[0x4] = _mm_sub_ps(temp0_155, 
                _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_153))
            float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
            float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
            float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_154)
            float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_153)
            float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_140)
            float temp0_169[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_138)), 
                rax_2[1])
            *result = temp0_156
            result[2] = temp0_141
            result[1] = temp0_169
        else
            zmm3_1 = *rax_2
            float zmm11_1[0x4] = data_143f2b810
            zmm9_1 = rax_2[1]
            float temp0_5[0x4] = _mm_add_ps(zmm3_1, zmm3_1)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 4)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xff)
            float temp0_9[0x4] = _mm_mul_ps(zmm3_1, temp0_5)
            float temp0_11[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
            float temp0_12[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
            float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
            float temp0_14[0x4] = _mm_mul_ps(temp0_8, temp0_12)
            float temp0_16[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
            _mm_mul_ps(zmm8_1, zmm14_1)
            float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_11)
            float temp0_19[0x4] = _mm_sub_ps(temp0_11, temp0_14)
            float temp0_20[0x4] = _mm_sub_ps(zmm11_1, temp0_16)
            float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm8_1)
            float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm8_1)
            float temp0_23[0x4] = _mm_mul_ps(temp0_6, temp0_19)
            float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_22, data_143f2b820)
            float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_23, zmm1_1, 0x32), 0x82)
            float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, zmm1_1, 0x31)
            float temp0_30[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1_1, 0x10), temp0_28, 0x88)
            float temp0_32[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_23, 0x12), zmm1_1, 0xe8)
            zmm1_1 = *arg3
            zmm11_1[0].q = zmm9_1 u>> 0x40
            float temp0_33[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
            float temp0_34[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
            float temp0_35[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xc9)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
            float temp0_38[0x4] = _mm_mul_ps(zmm1_1, temp0_33)
            float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_36)
            float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_37)
            float temp0_45[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
                _mm_shuffle_ps(temp0_38, temp0_38, 1))
            float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_40)
            float temp0_47[0x4] = _mm_sub_ps(temp0_40, temp0_42)
            float temp0_48[0x4] = _mm_sub_ps(zmm11_1, temp0_45)
            float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm14_1)
            float temp0_50[0x4] = _mm_mul_ps(temp0_35, temp0_47)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_48, zmm14_1), data_143f2b820)
            float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_50, zmm1_1, 0x32), 0x82)
            float temp0_56[0x4] = _mm_shuffle_ps(temp0_50, zmm1_1, 0x10)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_49, zmm1_1, 0x31)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, temp0_57, 0x88)
            float temp0_60[0x4] = _mm_mul_ps(temp0_58, temp0_30)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_49, temp0_50, 0x12)
            float zmm5_1[0x4] = arg3[1]
            float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, zmm1_1, 0xe8)
            float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xaa), temp0_32)
            zmm11_1[0].q = zmm5_1 u>> 0x40
            float temp0_65[0x4] = _mm_shuffle_ps(zmm5_1, zmm11_1, 0xc4)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0)
            float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_34)
            float temp0_70[0x4] = _mm_add_ps(temp0_60, _mm_mul_ps(temp0_66, temp0_27))
            float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_27)
            float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_64)
            float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_32)
            float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_68)
            float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_30)
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
            var_148 = temp0_76
            float temp0_80[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
            float temp0_81[0x4] = _mm_add_ps(temp0_78, temp0_72)
            float temp0_82[0x4] = _mm_mul_ps(temp0_80, temp0_30)
            float temp0_83[0x4] = _mm_mul_ps(temp0_79, temp0_34)
            float temp0_84[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
            float temp0_85[0x4] = _mm_add_ps(temp0_81, temp0_75)
            float temp0_86[0x4] = _mm_mul_ps(temp0_84, temp0_27)
            float temp0_88[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), temp0_32)
            float temp0_89[0x4] = _mm_add_ps(temp0_85, temp0_83)
            float temp0_90[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xff)
            float temp0_91[0x4] = _mm_add_ps(temp0_82, temp0_86)
            float temp0_92[0x4] = _mm_mul_ps(temp0_90, temp0_34)
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            int96_t var_138_1 = temp0_89[0].12
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
            float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_30)
            float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_32)
            float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_27)
            float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
            float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_34)
            float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
            int96_t var_128_1 = temp0_100[0].12
            int96_t var_118_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
            int128_t zmm11_2
            float zmm13_2[0x4]
            float zmm15_2[0x4]
            zmm11_2, zmm13_2, zmm15_2 = sub_1407740e0(&var_148, 0x322bcc77)
            float zmm2_2[0x4] = var_148[0]
            float zmm1_2 = var_148[1]
            zmm15_2 = _mm_and_ps(_mm_cmpeq_ps(zmm15_2, zmm13_2, 2), data_143f2b8c0 ^ zmm11_2)
                ^ data_143f2b8c0
            zmm2_2[0] = zmm2_2[0] * zmm15_2[0]
            uint32_t zmm0_2[0x4] = var_148[2]
            zmm0_2[0] = zmm0_2[0] f* zmm15_2[0]
            zmm1_2 = zmm1_2 * zmm15_2[0]
            var_148[0] = zmm2_2[0]
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0x55)
            var_148[2] = zmm0_2[0]
            zmm0_2 = var_138_1:8.d
            zmm0_2[0] = zmm0_2[0] f* temp0_108[0]
            var_148[1] = zmm1_2
            zmm1_2 = var_138_1:4.d * temp0_108[0]
            float zmm3_2 = var_138_1.d * temp0_108[0]
            zmm2_2 = var_128_1.d
            var_138_1:8.d = zmm0_2[0]
            zmm0_2 = var_128_1:8.d
            var_138_1:4.d = zmm1_2
            float temp0_109[0x4] = _mm_shuffle_ps(zmm15_2, zmm15_2, 0xaa)
            zmm0_2[0] = zmm0_2[0] f* temp0_109[0]
            zmm2_2[0] = zmm2_2[0] * temp0_109[0]
            zmm1_2 = var_128_1:4.d * temp0_109[0]
            var_128_1:8.d = zmm0_2[0]
            var_138_1.d = zmm3_2
            var_128_1.d = zmm2_2[0]
            var_128_1:4.d = zmm1_2
            sub_14077e4a0(&var_108, &var_148)
            uint32_t zmm5_2[0x4] = var_108
            float zmm6_2[0x4] = data_143f2b8b0
            uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
            uint32_t zmm4_2[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
            zmm1_3 = _mm_rsqrt_ps(zmm4_2)
            uint32_t zmm3_3[0x4] = _mm_mul_ps(zmm4_2, zmm6_2)
            float temp0_121[0x4] = _mm_add_ps(
                _mm_mul_ps(_mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), zmm3_3)), 
                    zmm1_3), 
                zmm1_3)
            float temp0_124[0x4] =
                _mm_sub_ps(zmm6_2, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), zmm3_3))
            uint32_t zmm0_3[0x4] =
                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_2, 2)
            float temp0_128[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121)
            float temp0_129[0x4] = _mm_unpacklo_ps(var_118_1:4.d, 0)
            zmm6_2 =
                _mm_and_ps(_mm_mul_ps(temp0_128, zmm5_2) ^ data_143f2b8a0, zmm0_3) ^ data_143f2b8a0
            result[1] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_118_1.d, var_118_1:8.d[0].q), temp0_129[0].q)
            *result = zmm6_2
            result[2] = zmm13_2
__security_check_cookie(rax_1 ^ &var_178)
return result
