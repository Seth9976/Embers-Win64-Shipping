// 函数: sub_1417dcc50
// 地址: 0x1417dcc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_118[0x3][0x4]
float (* rdx)[0x3][0x4] = &var_118
float var_e8[0x4]
int96_t var_d8_1
int96_t var_c8_1
int96_t var_b8_1
uint32_t zmm0_1[0x4]
float zmm1[0x4]
float zmm11_2[0x4]
float zmm14_1[0x4]

if (arg3 != 0)
    float (* rax_2)[0x4] = sub_1417dbd20(arg1, rdx)
    float zmm12_1[0x4] = data_143ef8a30
    uint32_t zmm15_1[0x4] = data_143ef8a40
    float zmm13_2[0x4] = *(arg1 + 0x1d0)
    float zmm7_1[0x4] = rax_2[2]
    float zmm14_2[0x4] = data_143ef8ad0
    zmm12_1[0].q = zx.o(0) u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm12_1, 0xc4)
    float zmm0_3[0x4] = _mm_and_ps(zmm12_1, zmm15_1)
    arg2[1] = zx.o(0)
    arg2[2] = zmm0_3
    float zmm5_2[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm13_2, zmm7_1), zmm14_2, 1)) == 0)
        zmm5_2 = *rax_2
        float zmm2_3[0x4] = *(arg1 + 0x1b0)
        float zmm4_2[0x4] = *(arg1 + 0x1c0)
        float temp0_275[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0)
        float temp0_277[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b), temp0_275)
        float temp0_278[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
        float temp0_279[0x4] = _mm_mul_ps(zmm4_2, zmm7_1)
        float temp0_280[0x4] = __mulps_xmmps_memps(temp0_277, data_143ef8a90)
        float temp0_281[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
        float temp0_282[0x4] = _mm_mul_ps(zmm7_1, zmm13_2)
        float temp0_283[0x4] = _mm_mul_ps(temp0_281, zmm2_3)
        arg2[2] = temp0_282
        float temp0_284[0x4] = _mm_add_ps(temp0_280, temp0_283)
        float temp0_286[0x4] = _mm_mul_ps(temp0_278, _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e))
        float temp0_289[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1))
        float temp0_290[0x4] = __mulps_xmmps_memps(temp0_286, data_143ef8a80)
        float temp0_291[0x4] = _mm_shuffle_ps(temp0_279, temp0_279, 0xd2)
        float temp0_292[0x4] = __mulps_xmmps_memps(temp0_289, data_143ef8a70)
        float temp0_294[0x4] = _mm_add_ps(_mm_add_ps(temp0_284, temp0_290), temp0_292)
        float temp0_295[0x4] = _mm_shuffle_ps(temp0_279, temp0_279, 0xc9)
        *arg2 = temp0_294
        float temp0_296[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
        float temp0_297[0x4] = _mm_mul_ps(temp0_295, temp0_296)
        float temp0_298[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
        float temp0_300[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_291, temp0_298), temp0_297)
        float temp0_301[0x4] = _mm_add_ps(temp0_300, temp0_300)
        float temp0_302[0x4] = _mm_mul_ps(temp0_281, temp0_301)
        float temp0_304[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_301, temp0_301, 0xd2), temp0_298)
        float temp0_305[0x4] = _mm_shuffle_ps(temp0_301, temp0_301, 0xc9)
        float temp0_306[0x4] = _mm_add_ps(temp0_302, temp0_279)
        arg2[1] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(temp0_304, _mm_mul_ps(temp0_305, temp0_296)), temp0_306), 
            rax_2[1])
    else
        zmm1 = *rax_2
        float zmm8_2[0x4] = rax_2[1]
        float temp0_174[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_175[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
        float temp0_176[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        _mm_mul_ps(zmm13_2, zmm7_1)
        float temp0_178[0x4] = _mm_mul_ps(temp0_174, zmm1)
        float temp0_180[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0x29), temp0_176)
        float temp0_181[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_182[0x4] = _mm_shuffle_ps(temp0_178, temp0_178, 0x1a)
        float temp0_184[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_174, temp0_174, 0x12), temp0_181)
        float temp0_186[0x4] = _mm_add_ps(temp0_182, _mm_shuffle_ps(temp0_178, temp0_178, 1))
        float temp0_187[0x4] = _mm_add_ps(temp0_184, temp0_180)
        float temp0_188[0x4] = _mm_sub_ps(temp0_180, temp0_184)
        float zmm3_3[0x4] = *(arg1 + 0x1b0)
        float temp0_189[0x4] = _mm_sub_ps(zmm12_1, temp0_186)
        float temp0_190[0x4] = _mm_mul_ps(temp0_187, zmm7_1)
        float temp0_191[0x4] = _mm_mul_ps(temp0_175, temp0_188)
        float temp0_192[0x4] = _mm_mul_ps(temp0_189, zmm7_1)
        float temp0_193[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 4)
        zmm1 = _mm_and_ps(temp0_192, zmm15_1)
        float temp0_195[0x4] = _mm_shuffle_ps(temp0_191, zmm1, 0x32)
        float temp0_197[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_190, zmm1, 0), temp0_195, 0x82)
        float temp0_198[0x4] = _mm_shuffle_ps(temp0_190, zmm1, 0x31)
        float temp0_200[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_191, zmm1, 0x10), temp0_198, 0x88)
        float temp0_202[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_190, temp0_191, 0x12), zmm1, 0xe8)
        float temp0_203[0x4] = _mm_add_ps(zmm3_3, zmm3_3)
        zmm12_1[0].q = zmm8_2 u>> 0x40
        float temp0_204[0x4] = _mm_shuffle_ps(zmm8_2, zmm12_1, 0xc4)
        float temp0_205[0x4] = _mm_shuffle_ps(zmm3_3, zmm3_3, 0xff)
        float temp0_206[0x4] = _mm_shuffle_ps(zmm13_2, zmm13_2, 0xc9)
        float temp0_207[0x4] = _mm_mul_ps(zmm3_3, temp0_203)
        float temp0_209[0x4] = _mm_mul_ps(temp0_193, _mm_shuffle_ps(temp0_203, temp0_203, 0x29))
        float temp0_211[0x4] = _mm_mul_ps(temp0_205, _mm_shuffle_ps(temp0_203, temp0_203, 0x12))
        float temp0_214[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_207, temp0_207, 0x1a), 
            _mm_shuffle_ps(temp0_207, temp0_207, 1))
        float temp0_215[0x4] = _mm_add_ps(temp0_211, temp0_209)
        float temp0_216[0x4] = _mm_sub_ps(temp0_209, temp0_211)
        float temp0_217[0x4] = _mm_sub_ps(zmm12_1, temp0_214)
        float temp0_218[0x4] = _mm_mul_ps(temp0_215, zmm13_2)
        float temp0_219[0x4] = _mm_mul_ps(temp0_206, temp0_216)
        zmm1 = _mm_and_ps(_mm_mul_ps(temp0_217, zmm13_2), zmm15_1)
        float temp0_224[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_218, zmm1, 0), 
            _mm_shuffle_ps(temp0_219, zmm1, 0x32), 0x82)
        float temp0_225[0x4] = _mm_shuffle_ps(temp0_219, zmm1, 0x10)
        float temp0_226[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0x55)
        float temp0_228[0x4] =
            _mm_shuffle_ps(temp0_225, _mm_shuffle_ps(temp0_218, zmm1, 0x31), 0x88)
        float temp0_229[0x4] = _mm_mul_ps(temp0_226, temp0_200)
        float temp0_230[0x4] = _mm_shuffle_ps(temp0_218, temp0_219, 0x12)
        zmm5_2 = *(arg1 + 0x1c0)
        float temp0_231[0x4] = _mm_shuffle_ps(temp0_230, zmm1, 0xe8)
        float temp0_233[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_224, temp0_224, 0xaa), temp0_202)
        zmm12_1[0].q = zmm5_2 u>> 0x40
        float temp0_234[0x4] = _mm_shuffle_ps(zmm5_2, zmm12_1, 0xc4)
        float temp0_235[0x4] = _mm_shuffle_ps(temp0_224, temp0_224, 0)
        float temp0_237[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_224, temp0_224, 0xff), temp0_204)
        float temp0_239[0x4] = _mm_add_ps(temp0_229, _mm_mul_ps(temp0_235, temp0_197))
        float temp0_241[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0), temp0_197)
        float temp0_242[0x4] = _mm_add_ps(temp0_239, temp0_233)
        float temp0_244[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0xaa), temp0_202)
        float temp0_245[0x4] = _mm_add_ps(temp0_242, temp0_237)
        float temp0_247[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_228, temp0_228, 0x55), temp0_200)
        float temp0_248[0x4] = _mm_shuffle_ps(temp0_228, temp0_228, 0xff)
        var_e8 = temp0_245
        float temp0_249[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0x55)
        float temp0_250[0x4] = _mm_add_ps(temp0_247, temp0_241)
        float temp0_251[0x4] = _mm_mul_ps(temp0_249, temp0_200)
        float temp0_252[0x4] = _mm_mul_ps(temp0_248, temp0_204)
        float temp0_253[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0)
        float temp0_254[0x4] = _mm_add_ps(temp0_250, temp0_244)
        float temp0_255[0x4] = _mm_mul_ps(temp0_253, temp0_197)
        float temp0_257[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_231, temp0_231, 0xaa), temp0_202)
        float temp0_258[0x4] = _mm_add_ps(temp0_254, temp0_252)
        float temp0_259[0x4] = _mm_shuffle_ps(temp0_231, temp0_231, 0xff)
        float temp0_260[0x4] = _mm_add_ps(temp0_251, temp0_255)
        float temp0_261[0x4] = _mm_mul_ps(temp0_259, temp0_204)
        float temp0_262[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0)
        var_d8_1 = temp0_258[0].12
        float temp0_263[0x4] = _mm_shuffle_ps(temp0_234, temp0_234, 0x55)
        float temp0_264[0x4] = _mm_add_ps(temp0_260, temp0_257)
        float temp0_265[0x4] = _mm_mul_ps(temp0_263, temp0_200)
        float temp0_267[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0xaa), temp0_202)
        float temp0_268[0x4] = _mm_mul_ps(temp0_262, temp0_197)
        float temp0_269[0x4] = _mm_add_ps(temp0_264, temp0_261)
        float temp0_271[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_234, temp0_234, 0xff), temp0_204)
        float temp0_272[0x4] = _mm_add_ps(temp0_265, temp0_268)
        var_c8_1 = temp0_269[0].12
        var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_272, temp0_267), temp0_271)[0].12
        int128_t zmm12_2
        zmm11_2, zmm12_2, zmm14_1 = sub_1407740e0(&var_e8, 0x322bcc77)
        zmm0_1 = data_143ef8ac0 ^ zmm12_2
    label_1417dcf5d:
        float zmm2_1[0x4] = var_e8[0]
        float zmm1_1 = var_e8[1]
        zmm14_1 = _mm_and_ps(_mm_cmpeq_ps(zmm14_1, zmm11_2, 2), zmm0_1)
        zmm0_1 = var_e8[2]
        zmm14_1 ^= data_143ef8ac0
        zmm2_1[0] = zmm2_1[0] * zmm14_1[0]
        zmm1_1 = zmm1_1 * zmm14_1[0]
        zmm0_1[0] = zmm0_1[0] f* zmm14_1[0]
        var_e8[0] = zmm2_1[0]
        float temp0_108[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0x55)
        var_e8[1] = zmm1_1
        zmm1_1 = var_d8_1:4.d * temp0_108[0]
        var_e8[2] = zmm0_1[0]
        zmm0_1 = var_d8_1:8.d
        zmm0_1[0] = zmm0_1[0] f* temp0_108[0]
        float zmm3_1 = var_d8_1.d * temp0_108[0]
        zmm2_1 = var_c8_1.d
        var_d8_1:4.d = zmm1_1
        var_d8_1:8.d = zmm0_1[0]
        zmm0_1 = var_c8_1:8.d
        float temp0_109[0x4] = _mm_shuffle_ps(zmm14_1, zmm14_1, 0xaa)
        zmm1_1 = var_c8_1:4.d * temp0_109[0]
        zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
        zmm2_1[0] = zmm2_1[0] * temp0_109[0]
        var_c8_1:4.d = zmm1_1
        var_c8_1:8.d = zmm0_1[0]
        var_d8_1.d = zmm3_1
        var_c8_1.d = zmm2_1[0]
        uint32_t var_128[0x4]
        sub_14077e4a0(&var_128, &var_e8)
        uint32_t zmm6_1[0x4] = var_128
        float zmm5_1[0x4] = data_143ef8ab0
        uint32_t zmm1_2[0x4] = _mm_mul_ps(zmm6_1, zmm6_1)
        arg2[2] = zmm11_2
        zmm1_2 = _mm_add_ps(zmm1_2, _mm_shuffle_ps(zmm1_2, zmm1_2, 0x4e))
        uint32_t zmm4_1[0x4] = _mm_add_ps(_mm_shuffle_ps(zmm1_2, zmm1_2, 0x39), zmm1_2)
        zmm1_2 = _mm_rsqrt_ps(zmm4_1)
        float temp0_116[0x4] = _mm_mul_ps(zmm4_1, zmm5_1)
        float temp0_121[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(zmm1_2, zmm1_2), temp0_116)), 
                zmm1_2), 
            zmm1_2)
        float temp0_124[0x4] =
            _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_121, temp0_121), temp0_116))
        uint32_t zmm0_2[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_1, 2)
        float temp0_128[0x4] = _mm_add_ps(_mm_mul_ps(temp0_124, temp0_121), temp0_121)
        float temp0_129[0x4] = _mm_unpacklo_ps(var_b8_1:4.d, 0)
        zmm5_1 = _mm_and_ps(_mm_mul_ps(temp0_128, zmm6_1) ^ data_143ef8aa0, zmm0_2) ^ data_143ef8aa0
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_b8_1.d, var_b8_1:8.d[0].q), temp0_129[0].q)
        *arg2 = zmm5_1
else
    float (* rax)[0x4] = sub_1417dbd20(arg1, rdx)
    float zmm13[0x4] = data_143ef8a30
    uint32_t zmm15[0x4] = data_143ef8a40
    float zmm12[0x4] = *(arg1 + 0x1a0)
    float zmm7[0x4] = rax[2]
    float zmm14[0x4] = data_143ef8ad0
    zmm13[0].q = zx.o(0) u>> 0x40
    *arg2 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
    float zmm0[0x4] = _mm_and_ps(zmm13, zmm15)
    arg2[1] = zx.o(0)
    arg2[2] = zmm0
    float zmm5[0x4]
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(zmm12, zmm7), zmm14, 1)) != 0)
        float zmm3[0x4] = *rax
        float zmm8_1[0x4] = rax[1]
        float temp0_5[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_6[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        _mm_mul_ps(zmm12, zmm7)
        float temp0_10[0x4] = _mm_mul_ps(zmm3, temp0_5)
        float temp0_12[0x4] = _mm_mul_ps(temp0_7, _mm_shuffle_ps(temp0_5, temp0_5, 0x29))
        float temp0_13[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x12)
        float temp0_14[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x1a)
        float temp0_15[0x4] = _mm_mul_ps(temp0_8, temp0_13)
        float temp0_17[0x4] = _mm_add_ps(temp0_14, _mm_shuffle_ps(temp0_10, temp0_10, 1))
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_12)
        float temp0_19[0x4] = _mm_sub_ps(temp0_12, temp0_15)
        float temp0_20[0x4] = _mm_sub_ps(zmm13, temp0_17)
        float temp0_21[0x4] = _mm_mul_ps(temp0_18, zmm7)
        float temp0_22[0x4] = _mm_mul_ps(temp0_20, zmm7)
        float temp0_23[0x4] = _mm_mul_ps(temp0_6, temp0_19)
        zmm1 = _mm_and_ps(temp0_22, zmm15)
        float temp0_27[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, zmm1, 0), 
            _mm_shuffle_ps(temp0_23, zmm1, 0x32), 0x82)
        float temp0_28[0x4] = _mm_shuffle_ps(temp0_21, zmm1, 0x31)
        float temp0_30[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), temp0_28, 0x88)
        float temp0_32[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_21, temp0_23, 0x12), zmm1, 0xe8)
        zmm1 = *(arg1 + 0x180)
        zmm13[0].q = zmm8_1 u>> 0x40
        float temp0_33[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_34[0x4] = _mm_shuffle_ps(zmm8_1, zmm13, 0xc4)
        float temp0_35[0x4] = _mm_shuffle_ps(zmm12, zmm12, 0xc9)
        float temp0_36[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_37[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_38[0x4] = _mm_mul_ps(zmm1, temp0_33)
        float temp0_40[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x29), temp0_36)
        float temp0_42[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_33, temp0_33, 0x12), temp0_37)
        float temp0_45[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_38, temp0_38, 0x1a), 
            _mm_shuffle_ps(temp0_38, temp0_38, 1))
        float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_40)
        float temp0_47[0x4] = _mm_sub_ps(temp0_40, temp0_42)
        float temp0_48[0x4] = _mm_sub_ps(zmm13, temp0_45)
        float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm12)
        float temp0_50[0x4] = _mm_mul_ps(temp0_35, temp0_47)
        zmm1 = _mm_and_ps(_mm_mul_ps(temp0_48, zmm12), zmm15)
        float temp0_55[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm1, 0), 
            _mm_shuffle_ps(temp0_50, zmm1, 0x32), 0x82)
        float temp0_56[0x4] = _mm_shuffle_ps(temp0_50, zmm1, 0x10)
        float temp0_57[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0x55)
        float temp0_59[0x4] = _mm_shuffle_ps(temp0_56, _mm_shuffle_ps(temp0_49, zmm1, 0x31), 0x88)
        float temp0_60[0x4] = _mm_mul_ps(temp0_57, temp0_30)
        float temp0_61[0x4] = _mm_shuffle_ps(temp0_49, temp0_50, 0x12)
        zmm5 = *(arg1 + 0x190)
        float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, zmm1, 0xe8)
        float temp0_64[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xaa), temp0_32)
        zmm13[0].q = zmm5 u>> 0x40
        float temp0_65[0x4] = _mm_shuffle_ps(zmm5, zmm13, 0xc4)
        float temp0_66[0x4] = _mm_shuffle_ps(temp0_55, temp0_55, 0)
        float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_55, temp0_55, 0xff), temp0_34)
        float temp0_70[0x4] = _mm_add_ps(temp0_60, _mm_mul_ps(temp0_66, temp0_27))
        float temp0_72[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0), temp0_27)
        float temp0_73[0x4] = _mm_add_ps(temp0_70, temp0_64)
        float temp0_75[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0xaa), temp0_32)
        float temp0_76[0x4] = _mm_add_ps(temp0_73, temp0_68)
        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_59, temp0_59, 0x55), temp0_30)
        float temp0_79[0x4] = _mm_shuffle_ps(temp0_59, temp0_59, 0xff)
        var_e8 = temp0_76
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
        var_d8_1 = temp0_89[0].12
        float temp0_94[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
        float temp0_95[0x4] = _mm_add_ps(temp0_91, temp0_88)
        float temp0_96[0x4] = _mm_mul_ps(temp0_94, temp0_30)
        float temp0_98[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_32)
        float temp0_99[0x4] = _mm_mul_ps(temp0_93, temp0_27)
        float temp0_100[0x4] = _mm_add_ps(temp0_95, temp0_92)
        float temp0_102[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xff), temp0_34)
        float temp0_103[0x4] = _mm_add_ps(temp0_96, temp0_99)
        var_c8_1 = temp0_100[0].12
        var_b8_1 = _mm_add_ps(_mm_add_ps(temp0_103, temp0_98), temp0_102)[0].12
        int128_t zmm13_1
        zmm11_2, zmm13_1, zmm14_1 = sub_1407740e0(&var_e8, 0x322bcc77)
        zmm0_1 = data_143ef8ac0 ^ zmm13_1
        goto label_1417dcf5d
    
    zmm5 = *rax
    float zmm2[0x4] = *(arg1 + 0x180)
    float zmm4[0x4] = *(arg1 + 0x190)
    float temp0_134[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0)
    float temp0_136[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0x1b), temp0_134)
    float temp0_137[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
    float temp0_138[0x4] = _mm_mul_ps(zmm4, zmm7)
    float temp0_139[0x4] = __mulps_xmmps_memps(temp0_136, data_143ef8a90)
    float temp0_140[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
    float temp0_141[0x4] = _mm_mul_ps(zmm12, zmm7)
    float temp0_142[0x4] = _mm_mul_ps(temp0_140, zmm2)
    arg2[2] = temp0_141
    float temp0_143[0x4] = _mm_add_ps(temp0_139, temp0_142)
    float temp0_145[0x4] = _mm_mul_ps(temp0_137, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
    float temp0_148[0x4] =
        _mm_mul_ps(_mm_shuffle_ps(zmm5, zmm5, 0xaa), _mm_shuffle_ps(zmm2, zmm2, 0xb1))
    float temp0_149[0x4] = __mulps_xmmps_memps(temp0_145, data_143ef8a80)
    float temp0_150[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143ef8a70)
    float temp0_152[0x4] = _mm_add_ps(temp0_143, temp0_149)
    float temp0_153[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
    float temp0_154[0x4] = _mm_add_ps(temp0_152, temp0_151)
    float temp0_156[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xc9), temp0_150)
    *arg2 = temp0_154
    float temp0_159[0x4] =
        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_138, temp0_138, 0xd2), temp0_153), temp0_156)
    float temp0_160[0x4] = _mm_add_ps(temp0_159, temp0_159)
    float temp0_161[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xd2)
    float temp0_162[0x4] = _mm_shuffle_ps(temp0_160, temp0_160, 0xc9)
    float temp0_163[0x4] = _mm_mul_ps(temp0_161, temp0_153)
    float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_150)
    float temp0_165[0x4] = _mm_mul_ps(temp0_160, temp0_140)
    arg2[1] = __addps_xmmps_memps(
        _mm_add_ps(_mm_sub_ps(temp0_163, temp0_164), _mm_add_ps(temp0_165, temp0_138)), rax[1])
return arg2
