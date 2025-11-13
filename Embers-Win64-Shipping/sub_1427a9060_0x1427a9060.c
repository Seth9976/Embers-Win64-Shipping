// 函数: sub_1427a9060
// 地址: 0x1427a9060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char** r15 = arg2
int32_t rsi = arg4
char* result
int32_t r9
result, r9 = sub_1427a6ad0(r15, arg3, arg4)

if (result != 0)
    float zmm1[0x4] = data_143dbb1fc
    int32_t var_1e8
    int32_t* r8_1 = &var_1e8
    int32_t zmm2 = data_143dbb200
    int32_t var_25c_1 = 0x3f800000
    float var_268[0x4]
    var_268[0] = data_143dbb1f8[0]
    float zmm10[0x4] = 0x3f800000
    float temp0_1[0x4] = _mm_shuffle_ps(var_268, var_268, 0xe1)
    temp0_1[0] = zmm1[0]
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    int128_t zmm11 = zx.o(0)
    temp0_2[0] = zmm2
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc9)
    float var_268_1[0x4] = temp0_3
    float temp0_5[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xff), *(arg1 + 0xb0))
    float var_1d8_1 = 0f
    float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0x55), *(arg1 + 0x90))
    int32_t var_1d0_1 = 0
    float temp0_9[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0xaa), *(arg1 + 0xa0))
    float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_3, temp0_3, 0), *(arg1 + 0x80))
    float temp0_14[0x4] = _mm_add_ps(_mm_add_ps(temp0_5, temp0_9), _mm_add_ps(temp0_7, temp0_11))
    float var_198 = temp0_14[0]
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    float temp0_16[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0xaa)
    float var_194_1 = temp0_15[0]
    float var_190_1 = temp0_16[0]
    int32_t var_1f8
    float zmm6_1[0x4] = sub_1427af460(arg1 + 0x160, &var_1f8, r8_1)
    zmm6_1[0] = zmm6_1[0] f- *(result + 0x630)
    temp0_15[0] = temp0_15[0] f- *(result + 0x634)
    temp0_16[0] = temp0_16[0] f- *(result + 0x638)
    float var_108_1 = zmm6_1[0]
    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
    temp0_15[0] = temp0_15[0] * temp0_15[0]
    temp0_16[0] = temp0_16[0] * temp0_16[0]
    temp0_15[0] = temp0_15[0] + zmm6_1[0]
    float var_f8_1 = temp0_15[0]
    var_1d8_1 = temp0_16[0]
    temp0_15[0] = temp0_15[0] + temp0_16[0]
    float var_250
    float zmm2_1[0x4]
    float zmm3_1[0x4]
    float zmm4_1[0x4]
    
    if (not(temp0_15[0] <= 9.99999994e-09f))
        zmm4_1 = 0x3f000000
        zmm3_1 = zx.o(0)
        zmm2_1 = 0x3f000000
        zmm3_1[0] = temp0_15[0]
        float temp0_17[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1[0])
        zmm3_1[0] = zmm3_1[0] * 0.5f
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3_1[0] = zmm3_1[0] * temp0_17[0]
        zmm2_1[0] = 0.5f - zmm3_1[0]
        temp0_17[0] = temp0_17[0] * zmm2_1[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        temp0_17[0] = temp0_17[0] * temp0_17[0]
        zmm3_1[0] = zmm3_1[0] * temp0_17[0]
        zmm4_1[0] = 0.5f - zmm3_1[0]
        temp0_17[0] = temp0_17[0] * zmm4_1[0]
        temp0_17[0] = temp0_17[0] + temp0_17[0]
        var_250 = temp0_17[0]
        temp0_17[0] = temp0_17[0] * zmm6_1[0]
        temp0_17[0] = temp0_17[0] * temp0_15[0]
        temp0_17[0] = temp0_17[0] * temp0_16[0]
        var_108_1 = temp0_17[0]
        var_f8_1 = temp0_17[0]
        var_1d8_1 = temp0_17[0]
    
    float zmm0_2[0x4] = 0x3f800000
    
    if (*(arg1 + 0x180) != 0)
        zmm0_2 = sub_1427a22c0(result, &var_198, r8_1.d, r9)
        **(arg1 + 0x180) = zmm0_2[0]
    
    zmm0_2[0] = zmm0_2[0] f* *(arg1 + 0x16c)
    result = *(arg1 + 0x188)
    uint128_t zmm15
    zmm15.q = fconvert.d(zmm0_2[0])
    int64_t var_228_1 = zmm15.q
    float var_e8[0x4] = data_142f2cb40
    float zmm12[0x4]
    
    if (result == 0 || *result != 1)
        zmm12 = *(arg1 + 0x170)
    else
        zmm12 = *(arg1 + 0x17c)
        zmm12[0] = zmm12[0] f* *(arg1 + 0x170)
    
    int32_t i = 0
    float var_254_1 = zmm12[0]
    int32_t i_1 = 0
    
    if (r15[1].d s> 0)
        int32_t r12_1 = 1
        int64_t r13_1 = 0
        void* r14
        void* var_38_1 = r14
        float zmm9[0x4]
        float var_78_1[0x4] = zmm9
        int128_t zmm13
        int128_t var_b8_1 = zmm13
        int128_t zmm14 = 0x80000000
        
        do
            if ((rsi & r12_1) != 0)
                int32_t rdx_3 = *(arg1 + 0x174)
                float zmm1_1[0x4] = data_143dbb1fc
                int64_t* rcx_4 = arg5 + 0x50
                zmm2_1 = data_143dbb200
                float temp0_18[0x4] = _mm_cvtepi32_ps(zx.o(rdx_3))
                int64_t* rax_2 = rcx_4[2]
                var_268_1[0].q = 0
                var_268_1[2] = 0
                
                if (rax_2 != 0)
                    rcx_4 = rax_2
                
                zmm13.d = 6.28318548f / temp0_18[0]
                int64_t* rdi_1 = *(rcx_4 + r13_1)
                zmm0_2 = data_143dbb1f8
                int32_t var_200_1 = zmm13.d
                float zmm5_1[0x4]
                float zmm7[0x4]
                float zmm8[0x4]
                
                if (*(arg1 + 0x178) == 0)
                    zmm4_1 = *(arg1 + 0xb0)
                    zmm5_1 = *(arg1 + 0xa0)
                    zmm6_1 = *(arg1 + 0x90)
                    zmm7 = *(arg1 + 0x80)
                    char* rax_4 = *(arg1 + 0x190)
                    int32_t var_14c_1 = 0x3f800000
                    float var_158[0x4]
                    var_158[0] = zmm0_2[0]
                    float temp0_35[0x4] = _mm_shuffle_ps(var_158, var_158, 0xe1)
                    temp0_35[0] = zmm1_1[0]
                    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc6)
                    temp0_36[0] = zmm2_1[0]
                    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xc9)
                    var_158 = temp0_37
                    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0)
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0x55)
                    float temp0_40[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xaa)
                    float temp0_41[0x4] = _mm_mul_ps(temp0_38, zmm7)
                    float temp0_43[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_37, temp0_37, 0xff), zmm4_1)
                    float temp0_44[0x4] = _mm_mul_ps(temp0_39, zmm6_1)
                    float temp0_45[0x4] = _mm_mul_ps(temp0_40, zmm5_1)
                    var_268_1 =
                        _mm_add_ps(_mm_add_ps(temp0_41, temp0_44), _mm_add_ps(temp0_45, temp0_43))
                    float* rax_6
                    int32_t var_1f0
                    
                    if (rax_4 == 0)
                        rcx_4.b = 0
                    label_1427a96fc:
                        float var_188
                        rax_6 = &var_188
                        int32_t var_13c_1 = 0
                        float var_148[0x4]
                        var_148[0] = var_1f8[0]
                        int64_t var_1a8_1 = 0
                        float temp0_49[0x4] = _mm_shuffle_ps(var_148, var_148, 0xe1)
                        int32_t var_1f4
                        temp0_49[0] = var_1f4[0]
                        int32_t var_1a0_1 = 0
                        float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc6)
                        temp0_50[0] = var_1f0[0]
                        float temp0_51[0x4] = _mm_shuffle_ps(temp0_50, temp0_50, 0xc9)
                        var_148 = temp0_51
                        float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0)
                        float temp0_53[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0x55)
                        float temp0_54[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xaa)
                        float temp0_55[0x4] = _mm_mul_ps(temp0_52, zmm7)
                        float temp0_56[0x4] = _mm_mul_ps(temp0_53, zmm6_1)
                        float temp0_58[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_51, temp0_51, 0xff), zmm4_1)
                        float temp0_62[0x4] = _mm_add_ps(_mm_add_ps(temp0_55, temp0_56), 
                            _mm_add_ps(_mm_mul_ps(temp0_54, zmm5_1), temp0_58))
                        var_188 = temp0_62[0]
                        float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
                        float var_180_1 = _mm_shuffle_ps(temp0_62, temp0_62, 0xaa)[0]
                        float var_184_1 = temp0_63[0]
                    else
                        rcx_4 = zx.q(*rax_4)
                        
                        if (rcx_4.b == 0)
                            goto label_1427a96fc
                        
                        int32_t var_120_1 = var_1f0
                        int64_t var_128
                        rax_6 = &var_128
                        var_128 = var_1f8.q
                    int32_t rax_7 = rax_6[2]
                    int64_t var_1c8_1 = *rax_6
                    int64_t* rax_9
                    int32_t var_1e0
                    
                    if (rcx_4.b == 0)
                        float var_17c
                        rax_9 = &var_17c
                        int32_t var_12c_1 = 0
                        float var_138[0x4]
                        var_138[0] = var_1e8[0]
                        int64_t var_1a8_2 = 0
                        float temp0_65[0x4] = _mm_shuffle_ps(var_138, var_138, 0xe1)
                        int32_t var_1e4
                        temp0_65[0] = var_1e4[0]
                        int32_t var_1a0_2 = 0
                        float temp0_66[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xc6)
                        temp0_66[0] = var_1e0[0]
                        float temp0_67[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xc9)
                        var_138 = temp0_67
                        float temp0_68[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0)
                        float temp0_69[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0x55)
                        float temp0_70[0x4] = _mm_shuffle_ps(temp0_67, temp0_67, 0xaa)
                        float temp0_71[0x4] = _mm_mul_ps(temp0_68, zmm7)
                        float temp0_72[0x4] = _mm_mul_ps(temp0_69, zmm6_1)
                        float temp0_74[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_67, temp0_67, 0xff), zmm4_1)
                        float temp0_78[0x4] = _mm_add_ps(_mm_add_ps(temp0_71, temp0_72), 
                            _mm_add_ps(_mm_mul_ps(temp0_70, zmm5_1), temp0_74))
                        var_17c = temp0_78[0]
                        float temp0_79[0x4] = _mm_shuffle_ps(temp0_78, temp0_78, 0x55)
                        float var_174_1 = _mm_shuffle_ps(temp0_78, temp0_78, 0xaa)[0]
                        float var_178_1 = temp0_79[0]
                    else
                        int32_t var_114_1 = var_1e0
                        int64_t var_11c
                        rax_9 = &var_11c
                        var_11c = var_1e8.q
                    zmm0_2 = zx.o(*rax_9)
                    zmm7 = zx.o(0)
                    zmm8 = var_1c8_1.d
                    zmm10 = rax_7
                    zmm9 = var_1c8_1:4.d
                    zmm14 = var_268_1[0]
                    result = zx.q(rax_9[1].d)
                    zmm9[0] = zmm9[0] * var_f8_1
                    float var_1b0_1 = result.d
                    int64_t var_1b8_1 = zmm0_2.q
                    zmm7[0] = fconvert.s(zmm15.q)
                    zmm15 = var_268_1[1]
                    zmm8[0] = zmm8[0] * zmm7[0]
                    zmm9[0] = zmm9[0] * zmm7[0]
                    zmm8[0] = zmm8[0] f+ zmm14.d
                    zmm9[0] = zmm9[0] f+ zmm15.d
                    float var_238 = zmm8[0]
                    zmm10[0] = zmm10[0] * zmm7[0]
                    float var_234_1 = zmm9[0]
                    zmm10[0] = zmm10[0] * var_1d8_1
                    zmm10[0] = zmm10[0] + var_268_1[2]
                    float var_230_1 = zmm10[0]
                    zmm8[0] = zmm8[0] * var_108_1
                    zmm9[0] = zmm9[0] + zmm8[0]
                    zmm9[0] = zmm9[0] + zmm10[0]
                    zmm9[0] f- zmm11.d
                    r14.b = zmm9[0] f< zmm11.d
                    int32_t j = 0
                    
                    if (rdx_3 s> 0)
                        do
                            zmm1_1 = zx.o(0)
                            j += 1
                            zmm1_1[0] = float.s(j)
                            zmm1_1[0] = zmm1_1[0] f* zmm13.d
                            zmm0_2, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, zmm15 =
                                __libm_sse2_sincosf_(zmm1_1)
                            zmm6_1 = var_1b8_1.d
                            float temp0_81[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
                            zmm9[0] = zmm9[0] * temp0_81[0]
                            zmm8[0] = zmm8[0] * temp0_81[0]
                            float zmm5_2 = var_1b8_1:4.d * zmm0_2[0]
                            zmm6_1[0] = zmm6_1[0] * zmm0_2[0]
                            zmm5_2 = zmm5_2 + zmm9[0]
                            float zmm4_3 = var_1b0_1 * zmm0_2[0]
                            zmm2_1 = var_108_1
                            zmm6_1[0] = zmm6_1[0] + zmm8[0]
                            zmm10[0] = zmm10[0] * temp0_81[0]
                            zmm7[0] = zmm7[0] * zmm5_2
                            zmm4_3 = zmm4_3 + zmm10[0]
                            zmm2_1[0] = zmm2_1[0] * zmm6_1[0]
                            zmm7[0] = zmm7[0] f+ zmm15.d
                            zmm7[0] = zmm7[0] * zmm6_1[0]
                            zmm7[0] = zmm7[0] f+ zmm14.d
                            float var_244_1 = zmm7[0]
                            zmm1_1 = var_1d8_1
                            zmm1_1[0] = zmm1_1[0] * zmm4_3
                            float var_248 = zmm7[0]
                            zmm7[0] = zmm7[0] * zmm4_3
                            zmm7[0] = zmm7[0] + var_268_1[2]
                            float var_240_1 = zmm7[0]
                            zmm0_2 = var_f8_1
                            zmm0_2[0] = zmm0_2[0] * zmm5_2
                            zmm2_1[0] = zmm2_1[0] + zmm0_2[0]
                            zmm2_1[0] = zmm2_1[0] + zmm1_1[0]
                            zmm2_1[0] f- zmm11.d
                            rsi.b = zmm2_1[0] f< zmm11.d
                            float var_280_2
                            int32_t var_278_2
                            void* r9_2
                            
                            if (r14.b == 0 || rsi.b == 0)
                                zmm0_2 = 0x3f000000
                                r9_2 = &var_e8
                                char var_270_2 = 1
                                var_278_2 = zmm11.d
                                var_280_2 = 0.5f
                            else
                                char var_270_1 = 1
                                r9_2 = arg1 + 0x150
                                var_278_2 = zmm11.d
                                var_280_2 = zmm12[0]
                            
                            result = (*(*rdi_1 + 0x30))(zmm0_2, &var_238, &var_248, r9_2, 1, 
                                var_280_2, var_278_2, 1, var_268_1, i_1, var_250)
                            r14 = zx.q(rsi.b)
                            var_238 = var_248[0]
                            float var_230_2 = var_240_1[0]
                            float var_234_2 = var_244_1[0]
                        while (j s< *(arg1 + 0x174))
                        
                        i = i_1
                        rsi = arg4
                    
                    r15 = arg2
                else
                    result = *r15
                    zmm8 = zmm10
                    int32_t var_15c_1 = 0x3f800000
                    float var_168[0x4]
                    var_168[0] = zmm0_2[0]
                    void* rcx_5 = *(result + r13_1)
                    float temp0_19[0x4] = _mm_shuffle_ps(var_168, var_168, 0xe1)
                    temp0_19[0] = zmm1_1[0]
                    float temp0_20[0x4] = _mm_shuffle_ps(temp0_19, temp0_19, 0xc6)
                    zmm5_1 = *(rcx_5 + 0x358)
                    temp0_20[0] = zmm2_1[0]
                    zmm9 = *(rcx_5 + 0x348)
                    zmm4_1 = *(rcx_5 + 0x368)
                    bool cond:3_1 = zmm4_1[0] f>= zmm11.d
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_20, temp0_20, 0xc9)
                    var_168 = temp0_21
                    float temp0_23[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_21, temp0_21, 0xff), *(arg1 + 0xb0))
                    float temp0_25[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_21, temp0_21, 0x55), *(arg1 + 0x90))
                    float temp0_27[0x4] = __mulps_xmmps_memps(
                        _mm_shuffle_ps(temp0_21, temp0_21, 0xaa), *(arg1 + 0xa0))
                    float temp0_29[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_21, temp0_21, 0), *(arg1 + 0x80))
                    float temp0_30[0x4] = _mm_add_ps(temp0_23, temp0_27)
                    var_250 = zmm5_1[0]
                    zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                    float temp0_31[0x4] = _mm_add_ps(temp0_25, temp0_29)
                    zmm3_1 = zmm9
                    zmm3_1[0] = zmm3_1[0] * zmm5_1[0]
                    zmm1_1 = zmm10
                    var_268_1 = _mm_add_ps(temp0_30, temp0_31)
                    zmm2_1 = zmm9
                    zmm2_1[0] = zmm2_1[0] * zmm9[0]
                    
                    if (cond:3_1)
                        zmm4_1[0] = zmm4_1[0] + zmm10[0]
                        zmm9 ^= zmm14
                        zmm1_1[0] = zmm1_1[0] / zmm4_1[0]
                        zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
                        zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                        zmm10[0] = zmm10[0] - zmm5_1[0]
                        zmm6_1 = zmm1_1 ^ zmm14
                    else
                        zmm10[0] = zmm10[0] - zmm4_1[0]
                        zmm1_1[0] = zmm1_1[0] / zmm10[0]
                        zmm5_1[0] = zmm5_1[0] * zmm1_1[0]
                        zmm1_1[0] = zmm1_1[0] * zmm3_1[0]
                        zmm5_1[0] = zmm5_1[0] - zmm10[0]
                        zmm6_1 = zmm1_1 ^ zmm14
                    
                    zmm13 = var_268_1[0]
                    zmm10 = zx.o(0)
                    zmm14 = var_268_1[1]
                    int32_t j_1 = 0
                    zmm2_1[0] = zmm2_1[0] * zmm1_1[0]
                    zmm10[0] = fconvert.s(zmm15.q)
                    zmm15 = var_268_1[2]
                    zmm8[0] = zmm8[0] - zmm2_1[0]
                    zmm10[0] = zmm10[0] * zmm6_1[0]
                    zmm10[0] = zmm10[0] * zmm8[0]
                    zmm10[0] = zmm10[0] f+ zmm14.d
                    zmm10[0] = zmm10[0] f+ zmm13.d
                    float var_20c_1 = zmm10[0]
                    float var_210 = zmm10[0]
                    zmm10[0] = zmm10[0] * zmm9[0]
                    zmm10[0] = zmm10[0] f+ zmm15.d
                    float var_208_1 = zmm10[0]
                    
                    if (rdx_3 s> 0)
                        do
                            j_1 += 1
                            float temp0_33[0x4] = _mm_cvtepi32_ps(zx.o(j_1))
                            temp0_33[0] = temp0_33[0] f* var_200_1
                            zmm0_2, zmm6_1, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13, zmm14, 
                                zmm15 = __libm_sse2_sincosf_(temp0_33)
                            int64_t rax_3 = *rdi_1
                            zmm0_2[0] = zmm0_2[0] * zmm12[0]
                            float temp0_34[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 1)
                            zmm0_2[0] = zmm0_2[0] * var_250
                            temp0_34[0] = temp0_34[0] * zmm8[0]
                            zmm0_2[0] = zmm0_2[0] * zmm7[0]
                            temp0_34[0] = temp0_34[0] + zmm0_2[0]
                            temp0_34[0] = temp0_34[0] * zmm6_1[0]
                            temp0_34[0] = temp0_34[0] * zmm9[0]
                            temp0_34[0] = temp0_34[0] + zmm0_2[0]
                            temp0_34[0] = temp0_34[0] * zmm10[0]
                            temp0_34[0] = temp0_34[0] - zmm0_2[0]
                            float var_280_1 = var_254_1[0]
                            temp0_34[0] = temp0_34[0] f+ zmm13.d
                            temp0_34[0] = temp0_34[0] * zmm10[0]
                            temp0_34[0] = temp0_34[0] * zmm10[0]
                            temp0_34[0] = temp0_34[0] f+ zmm14.d
                            float var_220 = temp0_34[0]
                            temp0_34[0] = temp0_34[0] f+ zmm15.d
                            float var_21c_1 = temp0_34[0]
                            float var_218_1 = temp0_34[0]
                            result = (*(rax_3 + 0x30))(rdi_1, &var_210, &var_220, arg1 + 0x150, 1, 
                                var_280_1, zmm11.d, 1, var_268_1, i_1, var_250)
                            var_210 = var_220[0]
                            float var_208_2 = var_218_1[0]
                            float var_20c_2 = var_21c_1[0]
                        while (j_1 s< *(arg1 + 0x174))
                        
                        i = i_1
                    
                    rsi = arg4
                zmm15 = zx.o(var_228_1)
                zmm14 = 0x80000000
                zmm10 = 0x3f800000
            
            i += 1
            r12_1 = rol.d(r12_1, 1)
            r13_1 += 8
            i_1 = i
        while (i s< r15[1].d)

return result
