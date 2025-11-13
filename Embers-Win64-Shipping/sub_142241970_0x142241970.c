// 函数: sub_142241970
// 地址: 0x142241970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4]
float var_88[0x4] = zmm9
float zmm10[0x4]
float var_98[0x4] = zmm10
float zmm11[0x4]
float var_a8[0x4] = zmm11
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm15[0x4]
float var_e8[0x4] = zmm15
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t rax_2 = *arg4
int64_t r12 = sx.q(arg5)
void* r13 = *(arg2 + 0x430)
void* var_140 = arg3
int64_t rcx_1 = r12 * 6
float zmm6[0x4] = *(rax_2 + (rcx_1 << 3))
float zmm13[0x4] = *(rax_2 + (rcx_1 << 3) + 0x10)
float zmm14[0x4] = *(rax_2 + (rcx_1 << 3) + 0x20)
int64_t rcx_2 = *(r13 + 0x1a8)
int32_t rdi = *(rcx_2 + r12 * 0xc + 8)

if (rdi == 0xffffffff)
label_1422423d5:
    *arg1 = data_143dbb0c0
    arg1[1] = data_143dbb0d0
    arg1[2] = data_143dbb0e0
else
    while (true)
        int64_t rbx_1 = sx.q(rdi)
        int64_t rsi_1 = rbx_1 * 3
        int32_t rax_4 = sub_142249710(arg3, *(rcx_2 + (rsi_1 << 2)))
        
        if (rdi == r12.d)
            goto label_1422423d5
        
        uint32_t var_158[0x4]
        float var_138[0x4]
        
        if (rax_4 s>= 0 && rax_4 s< *(arg2 + 0x808))
            int128_t* rax_8 = sub_142218c50(*(*(arg2 + 0x800) + (sx.q(rax_4) << 3)), &var_138, 1, 0)
            float zmm5_1[0x4] = *rax_8
            zmm8 = rax_8[2]
            
            if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm8), data_143f519a0, 1)) == 0)
                float temp0_301[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                float temp0_304[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), _mm_shuffle_ps(zmm6, zmm6, 0x1b))
                float temp0_305[0x4] = _mm_mul_ps(zmm13, zmm8)
                float temp0_306[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                float temp0_307[0x4] = __mulps_xmmps_memps(temp0_304, data_143f51580)
                float temp0_308[0x4] = _mm_mul_ps(temp0_306, zmm6)
                float temp0_309[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                float temp0_310[0x4] = _mm_mul_ps(zmm14, zmm8)
                float temp0_311[0x4] = _mm_add_ps(temp0_307, temp0_308)
                float temp0_313[0x4] = _mm_mul_ps(temp0_301, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
                float temp0_314[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa)
                float temp0_315[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                float temp0_316[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xb1)
                float temp0_317[0x4] = __mulps_xmmps_memps(temp0_313, data_143f51570)
                float temp0_318[0x4] = _mm_mul_ps(temp0_314, temp0_316)
                float temp0_319[0x4] = _mm_add_ps(temp0_311, temp0_317)
                float temp0_320[0x4] = _mm_shuffle_ps(temp0_305, temp0_305, 0xd2)
                float temp0_321[0x4] = __mulps_xmmps_memps(temp0_318, data_143f51560)
                float temp0_322[0x4] = _mm_mul_ps(temp0_320, temp0_315)
                float temp0_323[0x4] = _mm_add_ps(temp0_319, temp0_321)
                float temp0_326[0x4] = _mm_sub_ps(temp0_322, 
                    _mm_mul_ps(_mm_shuffle_ps(temp0_305, temp0_305, 0xc9), temp0_309))
                float temp0_327[0x4] = _mm_add_ps(temp0_326, temp0_326)
                float temp0_328[0x4] = _mm_mul_ps(temp0_306, temp0_327)
                float temp0_330[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_327, temp0_327, 0xd2), temp0_315)
                float temp0_331[0x4] = _mm_shuffle_ps(temp0_327, temp0_327, 0xc9)
                float temp0_332[0x4] = _mm_add_ps(temp0_328, temp0_305)
                float temp0_336[0x4] = __addps_xmmps_memps(
                    _mm_add_ps(_mm_sub_ps(temp0_330, _mm_mul_ps(temp0_331, temp0_309)), temp0_332), 
                    rax_8[1])
                *arg1 = temp0_323
                arg1[1] = temp0_336
                arg1[2] = temp0_310
            else
                zmm10 = data_143f515b0
                float temp0_172[0x4] = _mm_add_ps(zmm5_1, zmm5_1)
                float temp0_173[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 4)
                float temp0_174[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_175[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                _mm_mul_ps(zmm8, zmm14)
                float temp0_177[0x4] = _mm_mul_ps(zmm5_1, temp0_172)
                float temp0_179[0x4] =
                    _mm_mul_ps(temp0_173, _mm_shuffle_ps(temp0_172, temp0_172, 0x29))
                float temp0_180[0x4] = _mm_shuffle_ps(temp0_172, temp0_172, 0x12)
                float temp0_181[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x1a)
                float temp0_182[0x4] = _mm_mul_ps(temp0_175, temp0_180)
                float temp0_184[0x4] =
                    _mm_add_ps(temp0_181, _mm_shuffle_ps(temp0_177, temp0_177, 1))
                float temp0_185[0x4] = _mm_add_ps(temp0_182, temp0_179)
                float temp0_186[0x4] = _mm_sub_ps(temp0_179, temp0_182)
                float temp0_187[0x4] = _mm_sub_ps(zmm10, temp0_184)
                float temp0_188[0x4] = _mm_mul_ps(temp0_185, zmm8)
                float temp0_189[0x4] = _mm_mul_ps(temp0_174, temp0_186)
                float temp0_190[0x4] = _mm_mul_ps(temp0_187, zmm8)
                float temp0_191[0x4] = _mm_add_ps(zmm6, zmm6)
                zmm8 = rax_8[1]
                float zmm1_2[0x4] = __andps_xmmxud_memxud(temp0_190, data_143f515c0)
                float temp0_193[0x4] = _mm_shuffle_ps(temp0_189, zmm1_2, 0x32)
                float temp0_195[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, zmm1_2, 0), temp0_193, 0x82)
                float temp0_196[0x4] = _mm_shuffle_ps(temp0_188, zmm1_2, 0x31)
                float temp0_198[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_189, zmm1_2, 0x10), temp0_196, 0x88)
                float temp0_199[0x4] = _mm_mul_ps(zmm6, temp0_191)
                float temp0_201[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_188, temp0_189, 0x12), zmm1_2, 0xe8)
                float temp0_202[0x4] = _mm_shuffle_ps(temp0_191, temp0_191, 0x29)
                zmm10[0].q = zmm8 u>> 0x40
                float temp0_203[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                float temp0_205[0x4] = _mm_mul_ps(temp0_202, _mm_shuffle_ps(zmm6, zmm6, 4))
                float temp0_206[0x4] = _mm_shuffle_ps(temp0_199, temp0_199, 0x1a)
                float temp0_207[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_209[0x4] =
                    _mm_add_ps(temp0_206, _mm_shuffle_ps(temp0_199, temp0_199, 1))
                float temp0_211[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_191, temp0_191, 0x12), temp0_207)
                float temp0_212[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float temp0_213[0x4] = _mm_add_ps(temp0_211, temp0_205)
                float temp0_214[0x4] = _mm_sub_ps(temp0_205, temp0_211)
                float temp0_215[0x4] = _mm_mul_ps(temp0_213, zmm14)
                float temp0_216[0x4] = _mm_mul_ps(temp0_212, temp0_214)
                zmm1_2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_209), zmm14), 
                    data_143f515c0)
                float temp0_220[0x4] = _mm_shuffle_ps(temp0_216, zmm1_2, 0x32)
                float temp0_222[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, zmm1_2, 0), temp0_220, 0x82)
                float temp0_223[0x4] = _mm_shuffle_ps(temp0_215, zmm1_2, 0x31)
                float temp0_225[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_216, zmm1_2, 0x10), temp0_223, 0x88)
                float temp0_227[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_215, temp0_216, 0x12), zmm1_2, 0xe8)
                float temp0_228[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0x55)
                float temp0_229[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0xaa)
                float temp0_230[0x4] = _mm_mul_ps(temp0_228, temp0_198)
                float temp0_231[0x4] = _mm_mul_ps(temp0_229, temp0_201)
                zmm10[0].q = zmm13 u>> 0x40
                float temp0_232[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
                float temp0_233[0x4] = _mm_shuffle_ps(temp0_222, temp0_222, 0)
                float temp0_235[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_222, temp0_222, 0xff), temp0_203)
                float temp0_237[0x4] = _mm_add_ps(temp0_230, _mm_mul_ps(temp0_233, temp0_195))
                float temp0_239[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0), temp0_195)
                float temp0_240[0x4] = _mm_add_ps(temp0_237, temp0_231)
                float temp0_242[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0xaa), temp0_201)
                float temp0_243[0x4] = _mm_add_ps(temp0_240, temp0_235)
                float temp0_245[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_225, temp0_225, 0x55), temp0_198)
                float temp0_246[0x4] = _mm_shuffle_ps(temp0_225, temp0_225, 0xff)
                float var_198[0x4] = temp0_243
                float temp0_247[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0x55)
                float temp0_248[0x4] = _mm_add_ps(temp0_245, temp0_239)
                float temp0_249[0x4] = _mm_mul_ps(temp0_247, temp0_198)
                float temp0_250[0x4] = _mm_mul_ps(temp0_246, temp0_203)
                float temp0_251[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0)
                float temp0_252[0x4] = _mm_add_ps(temp0_248, temp0_242)
                float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_195)
                float temp0_255[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_227, temp0_227, 0xaa), temp0_201)
                float temp0_256[0x4] = _mm_add_ps(temp0_249, temp0_253)
                float temp0_257[0x4] = _mm_shuffle_ps(temp0_227, temp0_227, 0xff)
                float temp0_258[0x4] = _mm_add_ps(temp0_252, temp0_250)
                float temp0_259[0x4] = _mm_mul_ps(temp0_257, temp0_203)
                float temp0_260[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0)
                float temp0_261[0x4] = _mm_add_ps(temp0_256, temp0_255)
                float temp0_262[0x4] = _mm_mul_ps(temp0_260, temp0_195)
                int96_t var_188_1 = temp0_258[0].12
                float temp0_263[0x4] = _mm_shuffle_ps(temp0_232, temp0_232, 0x55)
                float temp0_264[0x4] = _mm_add_ps(temp0_261, temp0_259)
                float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_198)
                int96_t var_178_1 = temp0_264[0].12
                float temp0_266[0x4] = _mm_add_ps(temp0_265, temp0_262)
                float temp0_268[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xaa), temp0_201)
                float temp0_270[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_232, temp0_232, 0xff), temp0_203)
                int96_t var_168_1 = _mm_add_ps(_mm_add_ps(temp0_266, temp0_268), temp0_270)[0].12
                zmm10, zmm12, zmm15 = sub_1407740e0(&var_198, 0x322bcc77)
                float zmm2_3[0x4] = var_198[0]
                float zmm1_3 = var_198[1]
                zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143f51990 ^ zmm10)
                uint32_t zmm0_3[0x4] = var_198[2]
                zmm15 ^= data_143f51990
                zmm2_3[0] = zmm2_3[0] * zmm15[0]
                zmm1_3 = zmm1_3 * zmm15[0]
                zmm0_3[0] = zmm0_3[0] f* zmm15[0]
                var_198[0] = zmm2_3[0]
                var_198[1] = zmm1_3
                var_198[2] = zmm0_3[0]
                zmm0_3 = var_188_1:8.d
                float temp0_275[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
                zmm1_3 = var_188_1:4.d * temp0_275[0]
                zmm0_3[0] = zmm0_3[0] f* temp0_275[0]
                float zmm3_3 = var_188_1.d * temp0_275[0]
                zmm2_3 = var_178_1.d
                var_188_1:4.d = zmm1_3
                var_188_1:8.d = zmm0_3[0]
                zmm0_3 = var_178_1:8.d
                float temp0_276[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
                zmm1_3 = var_178_1:4.d * temp0_276[0]
                zmm0_3[0] = zmm0_3[0] f* temp0_276[0]
                zmm2_3[0] = zmm2_3[0] * temp0_276[0]
                var_178_1:4.d = zmm1_3
                var_178_1:8.d = zmm0_3[0]
                var_188_1.d = zmm3_3
                var_178_1.d = zmm2_3[0]
                sub_14077e4a0(&var_158, &var_198)
                uint32_t zmm5_2[0x4] = var_158
                zmm7 = data_143f515a0
                uint32_t zmm1_4[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
                zmm1_4 = _mm_add_ps(zmm1_4, _mm_shuffle_ps(zmm1_4, zmm1_4, 0x4e))
                float temp0_281[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_4, zmm1_4, 0x39), zmm1_4)
                zmm1_4 = _mm_rsqrt_ps(temp0_281)
                float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm7)
                float temp0_288[0x4] = _mm_add_ps(
                    _mm_mul_ps(_mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(zmm1_4, zmm1_4), temp0_283)), 
                        zmm1_4), 
                    zmm1_4)
                float temp0_291[0x4] =
                    _mm_sub_ps(zmm7, _mm_mul_ps(_mm_mul_ps(temp0_288, temp0_288), temp0_283))
                uint32_t zmm0_4[0x4] =
                    _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_281, 2)
                float temp0_295[0x4] = _mm_add_ps(_mm_mul_ps(temp0_291, temp0_288), temp0_288)
                float temp0_296[0x4] = _mm_unpacklo_ps(var_168_1:4.d, 0)
                *arg1 = _mm_and_ps(_mm_mul_ps(temp0_295, zmm5_2) ^ data_143f51590, zmm0_4)
                    ^ data_143f51590
                arg1[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_168_1.d, var_168_1:8.d[0].q), 
                    temp0_296[0].q)
                arg1[2] = zmm12
            
            break
        
        int128_t* rcx_6 = rbx_1 * 0x30 + *arg4
        zmm7 = rcx_6[2]
        float zmm5[0x4] = *rcx_6
        
        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm14, zmm7), data_143f519a0, 1)) == 0)
            float temp0_135[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0), _mm_shuffle_ps(zmm6, zmm6, 0x1b))
            float temp0_136[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
            float temp0_137[0x4] = _mm_mul_ps(zmm7, zmm13)
            float temp0_138[0x4] = __mulps_xmmps_memps(temp0_135, data_143f51580)
            float temp0_139[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
            zmm14 = _mm_mul_ps(zmm14, zmm7)
            float temp0_142[0x4] = _mm_add_ps(temp0_138, _mm_mul_ps(temp0_139, zmm6))
            float temp0_144[0x4] = _mm_mul_ps(temp0_136, _mm_shuffle_ps(zmm6, zmm6, 0x4e))
            float temp0_147[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm6, zmm6, 0xb1))
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_144, data_143f51570)
            float temp0_149[0x4] = __mulps_xmmps_memps(temp0_147, data_143f51560)
            float temp0_150[0x4] = _mm_add_ps(temp0_142, temp0_148)
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_137, temp0_137, 0xd2)
            zmm6 = _mm_add_ps(temp0_150, temp0_149)
            float temp0_153[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
            float temp0_154[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
            float temp0_156[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_137, temp0_137, 0xc9), temp0_153)
            float temp0_158[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_151, temp0_154), temp0_156)
            float temp0_159[0x4] = _mm_add_ps(temp0_158, temp0_158)
            float temp0_160[0x4] = _mm_mul_ps(temp0_139, temp0_159)
            float temp0_162[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_159, temp0_159, 0xd2), temp0_154)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_159, temp0_159, 0xc9)
            float temp0_164[0x4] = _mm_add_ps(temp0_160, temp0_137)
            zmm13 = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_162, _mm_mul_ps(temp0_163, temp0_153)), temp0_164), 
                rcx_6[1])
        else
            zmm10 = data_143f515b0
            float temp0_4[0x4] = _mm_add_ps(zmm5, zmm5)
            zmm8 = rcx_6[1]
            float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 4)
            float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
            _mm_mul_ps(zmm14, zmm7)
            float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x29), temp0_5)
            float temp0_10[0x4] = _mm_mul_ps(temp0_4, zmm5)
            float temp0_13[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(temp0_4, temp0_4, 0x12), _mm_shuffle_ps(zmm5, zmm5, 0xff))
            float temp0_16[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_10, temp0_10, 0x1a), 
                _mm_shuffle_ps(temp0_10, temp0_10, 1))
            float temp0_17[0x4] = _mm_add_ps(temp0_13, temp0_9)
            float temp0_18[0x4] = _mm_sub_ps(temp0_9, temp0_13)
            float temp0_19[0x4] = _mm_add_ps(zmm6, zmm6)
            float temp0_20[0x4] = _mm_mul_ps(temp0_17, zmm7)
            float temp0_21[0x4] = _mm_mul_ps(temp0_6, temp0_18)
            float temp0_22[0x4] = _mm_sub_ps(zmm10, temp0_16)
            float temp0_23[0x4] = _mm_mul_ps(zmm6, temp0_19)
            float zmm1[0x4] = __andps_xmmxud_memxud(_mm_mul_ps(temp0_22, zmm7), data_143f515c0)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x32)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, zmm1, 0), temp0_26, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_20, zmm1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_20, temp0_21, 0x12), zmm1, 0xe8)
            float temp0_34[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0x29)
            zmm10[0].q = zmm8 u>> 0x40
            float temp0_35[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, _mm_shuffle_ps(zmm6, zmm6, 4))
            float temp0_38[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x1a)
            float temp0_39[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_41[0x4] = _mm_add_ps(temp0_38, _mm_shuffle_ps(temp0_23, temp0_23, 1))
            float temp0_43[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_19, temp0_19, 0x12), temp0_39)
            float temp0_44[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
            float temp0_45[0x4] = _mm_add_ps(temp0_43, temp0_37)
            float temp0_46[0x4] = _mm_sub_ps(temp0_37, temp0_43)
            float temp0_47[0x4] = _mm_mul_ps(temp0_45, zmm14)
            float temp0_48[0x4] = _mm_mul_ps(temp0_44, temp0_46)
            zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_41), zmm14), 
                data_143f515c0)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_48, zmm1, 0x32)
            float temp0_54[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_47, zmm1, 0), temp0_52, 0x82)
            float temp0_55[0x4] = _mm_shuffle_ps(temp0_47, zmm1, 0x31)
            float temp0_57[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_48, zmm1, 0x10), temp0_55, 0x88)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_47, temp0_48, 0x12)
            float temp0_59[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0x55)
            float temp0_60[0x4] = _mm_shuffle_ps(temp0_58, zmm1, 0xe8)
            float temp0_62[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xaa), temp0_33)
            float temp0_63[0x4] = _mm_mul_ps(temp0_59, temp0_31)
            zmm10[0].q = zmm13 u>> 0x40
            float temp0_64[0x4] = _mm_shuffle_ps(zmm13, zmm10, 0xc4)
            float temp0_65[0x4] = _mm_shuffle_ps(temp0_54, temp0_54, 0)
            float temp0_67[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_54, temp0_54, 0xff), temp0_35)
            float temp0_69[0x4] = _mm_add_ps(temp0_63, _mm_mul_ps(temp0_65, temp0_28))
            float temp0_71[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0), temp0_28)
            float temp0_72[0x4] = _mm_add_ps(temp0_69, temp0_62)
            float temp0_74[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0xaa), temp0_33)
            float temp0_75[0x4] = _mm_add_ps(temp0_72, temp0_67)
            float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_57, temp0_57, 0x55), temp0_31)
            float temp0_78[0x4] = _mm_shuffle_ps(temp0_57, temp0_57, 0xff)
            var_138 = temp0_75
            float temp0_79[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
            float temp0_80[0x4] = _mm_add_ps(temp0_77, temp0_71)
            float temp0_81[0x4] = _mm_mul_ps(temp0_79, temp0_31)
            float temp0_82[0x4] = _mm_mul_ps(temp0_78, temp0_35)
            float temp0_83[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0)
            float temp0_84[0x4] = _mm_add_ps(temp0_80, temp0_74)
            float temp0_85[0x4] = _mm_mul_ps(temp0_83, temp0_28)
            float temp0_87[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_88[0x4] = _mm_add_ps(temp0_84, temp0_82)
            float temp0_89[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float temp0_90[0x4] = _mm_add_ps(temp0_81, temp0_85)
            float temp0_91[0x4] = _mm_mul_ps(temp0_89, temp0_35)
            float temp0_92[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0)
            int96_t var_128_1 = temp0_88[0].12
            float temp0_93[0x4] = _mm_shuffle_ps(temp0_64, temp0_64, 0x55)
            float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_87)
            float temp0_95[0x4] = _mm_mul_ps(temp0_93, temp0_31)
            float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xaa), temp0_33)
            float temp0_98[0x4] = _mm_mul_ps(temp0_92, temp0_28)
            float temp0_99[0x4] = _mm_add_ps(temp0_94, temp0_91)
            float temp0_101[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_64, temp0_64, 0xff), temp0_35)
            float temp0_102[0x4] = _mm_add_ps(temp0_95, temp0_98)
            int96_t var_118_1 = temp0_99[0].12
            int96_t var_108_1 = _mm_add_ps(_mm_add_ps(temp0_102, temp0_97), temp0_101)[0].12
            zmm10, zmm12, zmm15 = sub_1407740e0(&var_138, 0x322bcc77)
            float zmm2_1[0x4] = var_138[0]
            float zmm1_1 = var_138[1]
            zmm15 = _mm_and_ps(_mm_cmpeq_ps(zmm15, zmm12, 2), data_143f51990 ^ zmm10)
            uint32_t zmm0_1[0x4] = var_138[2]
            zmm15 ^= data_143f51990
            zmm2_1[0] = zmm2_1[0] * zmm15[0]
            zmm1_1 = zmm1_1 * zmm15[0]
            var_138[0] = zmm2_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm15[0]
            var_138[1] = zmm1_1
            float temp0_107[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
            zmm1_1 = var_128_1:4.d * temp0_107[0]
            var_138[2] = zmm0_1[0]
            zmm0_1 = var_128_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_107[0]
            float zmm3_1 = var_128_1.d * temp0_107[0]
            zmm2_1 = var_118_1.d
            var_128_1:4.d = zmm1_1
            var_128_1:8.d = zmm0_1[0]
            zmm0_1 = var_118_1:8.d
            float temp0_108[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
            zmm1_1 = var_118_1:4.d * temp0_108[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
            zmm2_1[0] = zmm2_1[0] * temp0_108[0]
            var_118_1:4.d = zmm1_1
            var_118_1:8.d = zmm0_1[0]
            var_128_1.d = zmm3_1
            var_118_1.d = zmm2_1[0]
            sub_14077e4a0(&var_158, &var_138)
            zmm5 = var_158
            zmm14 = zmm12
            zmm6 = data_143f515a0
            float temp0_109[0x4] = _mm_mul_ps(zmm5, zmm5)
            float temp0_111[0x4] = _mm_add_ps(temp0_109, _mm_shuffle_ps(temp0_109, temp0_109, 0x4e))
            float temp0_113[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_111, temp0_111, 0x39), temp0_111)
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
            float temp0_127[0x4] = _mm_add_ps(_mm_mul_ps(temp0_123, temp0_120), temp0_120)
            float temp0_128[0x4] = _mm_unpacklo_ps(var_108_1:4.d, 0)
            zmm6 =
                _mm_and_ps(_mm_mul_ps(temp0_127, zmm5) ^ data_143f51590, temp0_125) ^ data_143f51590
            zmm13 =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_108_1.d, var_108_1:8.d[0].q), temp0_128[0].q)
            var_158 = zmm6
        
        rcx_2 = *(r13 + 0x1a8)
        rdi = *(rcx_2 + (rsi_1 << 2) + 8)
        
        if (rdi == 0xffffffff)
            goto label_1422423d5
        
        arg3 = var_140

__security_check_cookie(rax_1 ^ &var_1c8)
return arg1
