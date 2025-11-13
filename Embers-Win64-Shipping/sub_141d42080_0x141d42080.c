// 函数: sub_141d42080
// 地址: 0x141d42080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
int32_t* r15 = *arg2
uint64_t r13_1 = sx.q(arg2[1].d) << 2 u>> 2

if (r15 u> &r15[arg2[1]])
    r13_1 = 0

if (r13_1 != 0)
    float zmm3[0x4] = data_143f373f0
    float zmm7[0x4] = data_143f373e0
    uint32_t zmm9[0x4] = data_143f37420
    float zmm15[0x4] = data_143f37400
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm8[0x4]
    float var_68_1[0x4] = zmm8
    float zmm10[0x4]
    float var_88_1[0x4] = zmm10
    float zmm11[0x4]
    float var_98_1[0x4] = zmm11
    float zmm12[0x4]
    float var_a8_1[0x4] = zmm12
    float zmm13[0x4]
    float var_b8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_c8_1[0x4] = zmm14
    
    do
        int64_t r14_1 = sx.q(*r15)
        int64_t rdx = *(arg1 + 0x130)
        int64_t rdi_1 = *(arg1 + 0x140)
        zmm14 = data_143f37510
        int64_t rcx = sx.q(*(*(arg1 + 0x170) + (r14_1 << 2)))
        int64_t rbx_2 = r14_1 * 6
        zmm13 = *(rdx + (rbx_2 << 3) + 0x20)
        float var_118[0x4]
        int96_t var_e8_1
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm4[0x4]
        float zmm5[0x4]
        
        if (rcx.d != 0xffffffff)
            float (* rcx_5)[0x4] = rcx * 0x30 + rdi_1
            zmm6 = rcx_5[2]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm6), zmm14, 1)) == 0)
                zmm4 = *rcx_5
                zmm2 = *(rdx + (rbx_2 << 3))
                float temp0_298[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_300[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_298)
                float temp0_301[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_302[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                float temp0_303[0x4] = _mm_mul_ps(temp0_302, zmm2)
                float temp0_305[0x4] = _mm_add_ps(_mm_mul_ps(temp0_300, zmm15), temp0_303)
                float temp0_307[0x4] = _mm_mul_ps(temp0_301, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_310[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_311[0x4] = _mm_mul_ps(temp0_307, zmm3)
                zmm3 = *(rdx + (rbx_2 << 3) + 0x10)
                float temp0_312[0x4] = _mm_mul_ps(temp0_310, zmm7)
                float temp0_313[0x4] = _mm_add_ps(temp0_305, temp0_311)
                float temp0_314[0x4] = _mm_mul_ps(zmm3, zmm6)
                float temp0_315[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_316[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                zmm12 = _mm_mul_ps(zmm6, zmm13)
                zmm6 = _mm_add_ps(temp0_313, temp0_312)
                float temp0_319[0x4] = _mm_shuffle_ps(temp0_314, temp0_314, 0xd2)
                float temp0_321[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_314, temp0_314, 0xc9), temp0_315)
                float temp0_323[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_319, temp0_316), temp0_321)
                float temp0_324[0x4] = _mm_add_ps(temp0_323, temp0_323)
                float temp0_325[0x4] = _mm_mul_ps(temp0_302, temp0_324)
                float temp0_327[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_324, temp0_324, 0xd2), temp0_316)
                float temp0_328[0x4] = _mm_shuffle_ps(temp0_324, temp0_324, 0xc9)
                float temp0_329[0x4] = _mm_add_ps(temp0_325, temp0_314)
                zmm7 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_327, _mm_mul_ps(temp0_328, temp0_315)), temp0_329), 
                    rcx_5[1])
            else
                zmm1 = *rcx_5
                zmm10 = data_143f37410
                zmm8 = rcx_5[1]
                float temp0_169[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_170[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_171[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                _mm_mul_ps(zmm6, zmm13)
                float temp0_173[0x4] = _mm_mul_ps(temp0_169, zmm1)
                float temp0_175[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0x29), temp0_171)
                float temp0_176[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_177[0x4] = _mm_shuffle_ps(temp0_173, temp0_173, 0x1a)
                float temp0_179[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_169, temp0_169, 0x12), temp0_176)
                float temp0_181[0x4] =
                    _mm_add_ps(temp0_177, _mm_shuffle_ps(temp0_173, temp0_173, 1))
                float temp0_182[0x4] = _mm_add_ps(temp0_179, temp0_175)
                float temp0_183[0x4] = _mm_sub_ps(temp0_175, temp0_179)
                zmm3 = *(rdx + (rbx_2 << 3))
                float temp0_184[0x4] = _mm_sub_ps(zmm10, temp0_181)
                float temp0_185[0x4] = _mm_mul_ps(temp0_182, zmm6)
                float temp0_186[0x4] = _mm_mul_ps(temp0_170, temp0_183)
                float temp0_187[0x4] = _mm_mul_ps(temp0_184, zmm6)
                float temp0_188[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                zmm1 = _mm_and_ps(temp0_187, zmm9)
                float temp0_190[0x4] = _mm_shuffle_ps(temp0_186, zmm1, 0x32)
                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_185, zmm1, 0), temp0_190, 0x82)
                float temp0_193[0x4] = _mm_shuffle_ps(temp0_185, zmm1, 0x31)
                float temp0_195[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_186, zmm1, 0x10), temp0_193, 0x88)
                float temp0_197[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_185, temp0_186, 0x12), zmm1, 0xe8)
                float temp0_198[0x4] = _mm_add_ps(zmm3, zmm3)
                zmm10[0].q = zmm8 u>> 0x40
                float temp0_199[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                float temp0_200[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_201[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                float temp0_202[0x4] = _mm_mul_ps(zmm3, temp0_198)
                float temp0_204[0x4] =
                    _mm_mul_ps(temp0_188, _mm_shuffle_ps(temp0_198, temp0_198, 0x29))
                float temp0_206[0x4] =
                    _mm_mul_ps(temp0_200, _mm_shuffle_ps(temp0_198, temp0_198, 0x12))
                float temp0_209[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_202, temp0_202, 0x1a), 
                    _mm_shuffle_ps(temp0_202, temp0_202, 1))
                float temp0_210[0x4] = _mm_add_ps(temp0_206, temp0_204)
                float temp0_211[0x4] = _mm_sub_ps(temp0_204, temp0_206)
                float temp0_212[0x4] = _mm_sub_ps(zmm10, temp0_209)
                float temp0_213[0x4] = _mm_mul_ps(temp0_210, zmm13)
                float temp0_214[0x4] = _mm_mul_ps(temp0_201, temp0_211)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_212, zmm13), data_143f37420)
                float temp0_219[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_213, zmm1, 0), 
                    _mm_shuffle_ps(temp0_214, zmm1, 0x32), 0x82)
                float temp0_220[0x4] = _mm_shuffle_ps(temp0_214, zmm1, 0x10)
                float temp0_221[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0x55)
                float temp0_223[0x4] =
                    _mm_shuffle_ps(temp0_220, _mm_shuffle_ps(temp0_213, zmm1, 0x31), 0x88)
                float temp0_224[0x4] = _mm_mul_ps(temp0_221, temp0_195)
                float temp0_225[0x4] = _mm_shuffle_ps(temp0_213, temp0_214, 0x12)
                zmm5 = *(rdx + (rbx_2 << 3) + 0x10)
                float temp0_226[0x4] = _mm_shuffle_ps(temp0_225, zmm1, 0xe8)
                float temp0_228[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_219, temp0_219, 0xaa), temp0_197)
                zmm10[0].q = zmm5 u>> 0x40
                float temp0_229[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
                float temp0_230[0x4] = _mm_shuffle_ps(temp0_219, temp0_219, 0)
                float temp0_232[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_219, temp0_219, 0xff), temp0_199)
                float temp0_234[0x4] = _mm_add_ps(temp0_224, _mm_mul_ps(temp0_230, zmm9))
                float temp0_236[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0), zmm9)
                float temp0_237[0x4] = _mm_add_ps(temp0_234, temp0_228)
                float temp0_239[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0xaa), temp0_197)
                float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_232)
                float temp0_242[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_223, temp0_223, 0x55), temp0_195)
                float temp0_243[0x4] = _mm_shuffle_ps(temp0_223, temp0_223, 0xff)
                var_118 = temp0_240
                float temp0_244[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0x55)
                float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_236)
                float temp0_246[0x4] = _mm_mul_ps(temp0_244, temp0_195)
                float temp0_247[0x4] = _mm_mul_ps(temp0_243, temp0_199)
                float temp0_248[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0)
                float temp0_249[0x4] = _mm_add_ps(temp0_245, temp0_239)
                float temp0_250[0x4] = _mm_mul_ps(temp0_248, zmm9)
                float temp0_252[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xaa), temp0_197)
                float temp0_253[0x4] = _mm_add_ps(temp0_249, temp0_247)
                float temp0_254[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xff)
                float temp0_255[0x4] = _mm_add_ps(temp0_246, temp0_250)
                float temp0_256[0x4] = _mm_mul_ps(temp0_254, temp0_199)
                float temp0_257[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0)
                int96_t var_108_2 = temp0_253[0].12
                float temp0_258[0x4] = _mm_shuffle_ps(temp0_229, temp0_229, 0x55)
                float temp0_259[0x4] = _mm_add_ps(temp0_255, temp0_252)
                float temp0_260[0x4] = _mm_mul_ps(temp0_258, temp0_195)
                float temp0_262[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xaa), temp0_197)
                float temp0_263[0x4] = _mm_mul_ps(temp0_257, zmm9)
                float temp0_264[0x4] = _mm_add_ps(temp0_259, temp0_256)
                float temp0_266[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_229, temp0_229, 0xff), temp0_199)
                float temp0_267[0x4] = _mm_add_ps(temp0_260, temp0_263)
                int96_t var_f8_2 = temp0_264[0].12
                var_e8_1 = _mm_add_ps(_mm_add_ps(temp0_267, temp0_262), temp0_266)[0].12
                zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_118, 0x322bcc77)
                float zmm2_2[0x4] = var_118[0]
                float zmm1_2 = var_118[1]
                zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143f37500 ^ zmm10)
                    ^ data_143f37500
                zmm2_2[0] = zmm2_2[0] * zmm14[0]
                zmm1_2 = zmm1_2 * zmm14[0]
                uint32_t zmm0_2[0x4] = var_118[2]
                zmm0_2[0] = zmm0_2[0] f* zmm14[0]
                var_118[0] = zmm2_2[0]
                float temp0_272[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                var_118[2] = zmm0_2[0]
                zmm0_2 = var_108_2:8.d
                zmm0_2[0] = zmm0_2[0] f* temp0_272[0]
                var_118[1] = zmm1_2
                zmm1_2 = var_108_2:4.d * temp0_272[0]
                float zmm3_2 = var_108_2.d * temp0_272[0]
                zmm2_2 = var_f8_2.d
                var_108_2:8.d = zmm0_2[0]
                zmm0_2 = var_f8_2:8.d
                var_108_2:4.d = zmm1_2
                float temp0_273[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                zmm0_2[0] = zmm0_2[0] f* temp0_273[0]
                zmm2_2[0] = zmm2_2[0] * temp0_273[0]
                zmm1_2 = var_f8_2:4.d * temp0_273[0]
                var_f8_2:8.d = zmm0_2[0]
                var_108_2.d = zmm3_2
                var_f8_2.d = zmm2_2[0]
                var_f8_2:4.d = zmm1_2
                uint32_t var_128[0x4]
                sub_14077e4a0(&var_128, &var_118)
                zmm5 = var_128
                zmm6 = data_143f373d0
                float temp0_274[0x4] = _mm_mul_ps(zmm5, zmm5)
                float temp0_276[0x4] =
                    _mm_add_ps(temp0_274, _mm_shuffle_ps(temp0_274, temp0_274, 0x4e))
                float temp0_278[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_276, temp0_276, 0x39), temp0_276)
                float temp0_279[0x4] = _mm_rsqrt_ps(temp0_278)
                float temp0_280[0x4] = _mm_mul_ps(temp0_278, zmm6)
                float temp0_285[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_279, temp0_279), temp0_280)), 
                        temp0_279), 
                    temp0_279)
                float temp0_288[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_285, temp0_285), temp0_280))
                float temp0_290[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_278, 2)
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_288, temp0_285), temp0_285), zmm5)
                        ^ data_143f373c0, 
                    temp0_290) ^ data_143f373c0
                var_128 = zmm6
                zmm9 = data_143f37420
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), 
                    _mm_unpacklo_ps(var_e8_1:4.d, zx.o(0)[0].q)[0].q)
        else
            zmm8 = *(arg1 + 0x1b0)
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13, zmm8), zmm14, 1)) == 0)
                zmm4 = *(arg1 + 0x190)
                zmm2 = *(rdx + (rbx_2 << 3))
                float temp0_130[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0)
                float temp0_132[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_130)
                float temp0_133[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                float temp0_134[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                zmm12 = _mm_mul_ps(zmm13, zmm8)
                float temp0_136[0x4] = _mm_mul_ps(temp0_134, zmm2)
                float temp0_138[0x4] = _mm_add_ps(_mm_mul_ps(temp0_132, zmm15), temp0_136)
                float temp0_140[0x4] = _mm_mul_ps(temp0_133, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                float temp0_143[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                float temp0_144[0x4] = _mm_mul_ps(temp0_140, zmm3)
                zmm3 = *(rdx + (rbx_2 << 3) + 0x10)
                float temp0_145[0x4] = _mm_mul_ps(temp0_143, zmm7)
                float temp0_146[0x4] = _mm_mul_ps(zmm3, zmm8)
                float temp0_147[0x4] = _mm_add_ps(temp0_138, temp0_144)
                float temp0_148[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xd2)
                float temp0_149[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xc9)
                zmm6 = _mm_add_ps(temp0_147, temp0_145)
                float temp0_151[0x4] = _mm_shuffle_ps(temp0_146, temp0_146, 0xd2)
                float temp0_153[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_146, temp0_146, 0xc9), temp0_148)
                float temp0_155[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_151, temp0_149), temp0_153)
                float temp0_156[0x4] = _mm_add_ps(temp0_155, temp0_155)
                float temp0_157[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xd2)
                float temp0_158[0x4] = _mm_shuffle_ps(temp0_156, temp0_156, 0xc9)
                float temp0_159[0x4] = _mm_mul_ps(temp0_157, temp0_149)
                float temp0_160[0x4] = _mm_mul_ps(temp0_158, temp0_148)
                float temp0_161[0x4] = _mm_mul_ps(temp0_156, temp0_134)
                zmm7 = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_159, temp0_160), _mm_add_ps(temp0_161, temp0_146)), 
                    *(arg1 + 0x1a0))
            else
                zmm3 = *(arg1 + 0x190)
                zmm10 = data_143f37410
                float temp0_4[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_5[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_6[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                _mm_mul_ps(zmm8, zmm13)
                float temp0_9[0x4] = _mm_mul_ps(zmm3, temp0_4)
                float temp0_11[0x4] = _mm_mul_ps(temp0_6, _mm_shuffle_ps(temp0_4, temp0_4, 0x29))
                float temp0_12[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x12)
                float temp0_13[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x1a)
                float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_12)
                float temp0_16[0x4] = _mm_add_ps(temp0_13, _mm_shuffle_ps(temp0_9, temp0_9, 1))
                float temp0_17[0x4] = _mm_add_ps(temp0_14, temp0_11)
                float temp0_18[0x4] = _mm_sub_ps(temp0_11, temp0_14)
                float temp0_19[0x4] = _mm_sub_ps(zmm10, temp0_16)
                float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm8)
                float temp0_21[0x4] = _mm_mul_ps(temp0_5, temp0_18)
                float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm8)
                zmm8 = *(arg1 + 0x1a0)
                zmm1 = _mm_and_ps(temp0_22, zmm9)
                float temp0_24[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
                zmm9 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_24, 0x82)
                float temp0_27[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
                float temp0_29[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_27, 0x88)
                float temp0_31[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
                zmm1 = *(rdx + (rbx_2 << 3))
                zmm10[0].q = zmm8 u>> 0x40
                float temp0_32[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_33[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                float temp0_34[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                float temp0_35[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_37[0x4] = _mm_mul_ps(zmm1, temp0_32)
                float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x29), temp0_35)
                float temp0_41[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_36)
                float temp0_44[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0x1a), 
                    _mm_shuffle_ps(temp0_37, temp0_37, 1))
                float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_39)
                float temp0_46[0x4] = _mm_sub_ps(temp0_39, temp0_41)
                float temp0_47[0x4] = _mm_sub_ps(zmm10, temp0_44)
                float temp0_48[0x4] = _mm_mul_ps(temp0_45, zmm13)
                float temp0_49[0x4] = _mm_mul_ps(temp0_34, temp0_46)
                zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_47, zmm13), data_143f37420)
                float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0), 
                    _mm_shuffle_ps(temp0_49, zmm1, 0x32), 0x82)
                float temp0_55[0x4] = _mm_shuffle_ps(temp0_49, zmm1, 0x10)
                float temp0_56[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x31)
                float temp0_57[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
                float temp0_58[0x4] = _mm_shuffle_ps(temp0_55, temp0_56, 0x88)
                float temp0_59[0x4] = _mm_mul_ps(temp0_57, temp0_29)
                float temp0_60[0x4] = _mm_shuffle_ps(temp0_48, temp0_49, 0x12)
                zmm5 = *(rdx + (rbx_2 << 3) + 0x10)
                float temp0_61[0x4] = _mm_shuffle_ps(temp0_60, zmm1, 0xe8)
                float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_31)
                zmm10[0].q = zmm5 u>> 0x40
                float temp0_64[0x4] = _mm_shuffle_ps(zmm5, zmm10, 0xc4)
                float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
                float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_33)
                float temp0_69[0x4] = _mm_add_ps(temp0_59, _mm_mul_ps(temp0_65, zmm9))
                float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0), zmm9)
                float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_63)
                float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0xaa), temp0_31)
                float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
                float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_58, temp0_58, 0x55), temp0_29)
                float temp0_78[0x4] = _mm_shuffle_ps(temp0_58, temp0_58, 0xff)
                var_118 = temp0_75
                float temp0_79[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0x55)
                float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
                float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_29)
                float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_33)
                float temp0_83[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0)
                float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
                float temp0_85[0x4] = _mm_mul_ps(temp0_83, zmm9)
                float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_61, temp0_61, 0xaa), temp0_31)
                float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
                float temp0_89[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xff)
                float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
                float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_33)
                float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
                int96_t var_108_1 = temp0_88[0].12
                float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
                float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
                float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_29)
                float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_31)
                float temp0_98[0x4] = _mm_mul_ps(temp0_92, zmm9)
                float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
                float temp0_101[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_33)
                float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
                int96_t var_f8_1 = temp0_99[0].12
                var_e8_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
                zmm10, zmm12, zmm14, zmm15 = sub_1407740e0(&var_118, 0x322bcc77)
                float zmm2_1[0x4] = var_118[0]
                float zmm1_1 = var_118[1]
                zmm14 = _mm_and_ps(_mm_cmpeq_ps(zmm14, zmm12, 2), data_143f37500 ^ zmm10)
                    ^ data_143f37500
                zmm2_1[0] = zmm2_1[0] * zmm14[0]
                uint32_t zmm0_1[0x4] = var_118[2]
                zmm0_1[0] = zmm0_1[0] f* zmm14[0]
                zmm1_1 = zmm1_1 * zmm14[0]
                var_118[0] = zmm2_1[0]
                float temp0_107[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0x55)
                var_118[2] = zmm0_1[0]
                zmm0_1 = var_108_1:8.d
                zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
                var_118[1] = zmm1_1
                zmm1_1 = var_108_1:4.d * temp0_107[0]
                float zmm3_1 = var_108_1.d * temp0_107[0]
                zmm2_1 = var_f8_1.d
                var_108_1:8.d = zmm0_1[0]
                zmm0_1 = var_f8_1:8.d
                var_108_1:4.d = zmm1_1
                float temp0_108[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
                zmm2_1[0] = zmm2_1[0] * temp0_108[0]
                zmm1_1 = var_f8_1:4.d * temp0_108[0]
                var_f8_1:8.d = zmm0_1[0]
                var_108_1.d = zmm3_1
                var_f8_1.d = zmm2_1[0]
                var_f8_1:4.d = zmm1_1
                uint32_t var_138[0x4]
                sub_14077e4a0(&var_138, &var_118)
                zmm5 = var_138
                zmm6 = data_143f373d0
                float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
                float temp0_111[0x4] =
                    _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
                float temp0_113[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
                float temp0_114[0x4] = _mm_rsqrt_ps(temp0_113)
                float temp0_115[0x4] = _mm_mul_ps(temp0_113, zmm6)
                float temp0_120[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_114, temp0_114), temp0_115)), 
                        temp0_114), 
                    temp0_114)
                float temp0_123[0x4] =
                    _mm_sub_ps(zmm6, _mm_mul_ps(_mm_mul_ps(temp0_120, temp0_120), temp0_115))
                float temp0_125[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_113, 2)
                zmm6 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120), zmm5)
                        ^ data_143f373c0, 
                    temp0_125) ^ data_143f373c0
                var_138 = zmm6
                zmm9 = data_143f37420
                zmm7 = _mm_unpacklo_ps(_mm_unpacklo_ps(var_e8_1.d, var_e8_1:8.d[0].q), 
                    _mm_unpacklo_ps(var_e8_1:4.d, zx.o(0)[0].q)[0].q)
        zmm3 = data_143f373f0
        r15 = &r15[1]
        *(rdi_1 + (rbx_2 << 3) + 0x10) = zmm7
        r12 += 1
        zmm7 = data_143f373e0
        *(rdi_1 + (rbx_2 << 3) + 0x20) = zmm12
        *(rdi_1 + (rbx_2 << 3)) = zmm6
        int64_t rax_5 = *(arg1 + 0x160)
        *(r14_1 + rax_5) &= 0xe
    while (r12 != r13_1)

*(arg1 + 0x1c0) = 0
int64_t* result
result.b = arg2[1].d s> 0
return result
