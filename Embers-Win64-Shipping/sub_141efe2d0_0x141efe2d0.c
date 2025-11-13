// 函数: sub_141efe2d0
// 地址: 0x141efe2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
int64_t r9
result, r9 = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    int64_t* rsi_1 = *(arg1[0x29] + 0x298)
    result = sub_141ea5e60(rsi_1)
    
    if (result.b != 0)
        int64_t arg_8
        
        if (rsi_1 == 0)
        label_141eff357:
            r9.b = 1
            arg_8 = 0
            return (*(*arg1 + 0x6f0))(arg1, 0, 0, r9)
        
        int32_t rax_2 = *(rsi_1 + 0xc)
        int32_t r8_1 = data_143e1d9b4
        r9 = data_143e1d9a0
        void* const rdx_4
        
        if (rax_2 s>= r8_1)
            rdx_4 = nullptr
        else
            int16_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(rax_2)
            uint32_t rdx_2 = zx.d(temp0_1)
            int32_t rax_4 = temp1_1 + rdx_2
            rdx_4 = *(r9 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_2) * 0x18
        
        if (((*(rdx_4 + 8) u>> 0x1d).b & 1) != 0)
            goto label_141eff357
        
        void* rax_11 = rsi_1[0x14]
        
        if (rax_11 == 0)
            goto label_141eff357
        
        int32_t rax_12 = *(rax_11 + 0xc)
        void* const rdx_8
        
        if (rax_12 s>= r8_1)
            rdx_8 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_12)
            uint32_t rdx_6 = zx.d(temp2_1)
            int32_t rax_14 = temp3_1 + rdx_6
            rdx_8 = *(r9 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(zx.d(rax_14.w) - rdx_6) * 0x18
        
        if (((*(rdx_8 + 8) u>> 0x1d).b & 1) != 0)
            goto label_141eff357
        
        int32_t r15_1 = arg1[0x18].d
        arg1[0x18].d = r15_1 | 1
        float zmm0[0x4] = data_14399f720
        void* rdx_9 = arg1[0x29]
        int32_t var_298 = data_143dbb1f8
        int32_t zmm1 = data_143dbb200
        float var_1c8[0x4] = zmm0
        float var_294_1 = data_143dbb1fc[0]
        int32_t var_290_1 = zmm1
        int32_t var_268
        float var_1d8[0x4]
        result = sub_141ea3bd0(rsi_1, *(rdx_9 + 0x2a0), &var_268, &var_1d8)
        
        if (result.b != 0)
            float zmm3[0x4] = *(arg1 + 0x170)
            float zmm4_1[0x4] = var_1d8
            uint32_t zmm5_1[0x4] = data_143f3a9d0
            arg_8.d = 0x322bcc77
            float zmm9[0x4]
            float var_68_1[0x4] = zmm9
            float zmm10[0x4]
            float var_78_1[0x4] = zmm10
            float zmm1_1[0x4] = _mm_and_ps(_mm_sub_ps(zmm3, zmm4_1), zmm5_1)
            float zmm2_1[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
            float zmm11[0x4]
            float var_88_1[0x4] = zmm11
            result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm2_1, zmm1_1, 1)))
            int32_t var_264
            int32_t var_260
            int64_t r14
            
            if (result.d == 0)
            label_141efe58f:
                r14.b = 0
                
                if (var_268[0] f!= arg1[0x30].d || var_264[0] f!= *(arg1 + 0x184)
                        || not(var_260[0] f== arg1[0x31].d))
                    zmm11 = *(arg1 + 0x174)
                    zmm9 = arg1[0x2f].d
                    zmm10 = *(arg1 + 0x17c)
                    goto label_141efe5ea
            else
                result = zx.q(_mm_movemask_ps(_mm_cmpeq_ps(zmm2_1, 
                    _mm_and_ps(_mm_add_ps(zmm4_1, zmm3), zmm5_1), 1)))
                
                if (result.d == 0)
                    goto label_141efe58f
                
                r14.b = 1
                zmm11 = *(arg1 + 0x174)
                zmm3 = arg1[0x2e].d ^ 0x80000000
                zmm9 = arg1[0x2f].d
                zmm10 = *(arg1 + 0x17c)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                zmm3[0] = (zmm11 ^ 0x80000000)[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                zmm3[0] = (zmm9 ^ 0x80000000)[0]
                float zmm0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
                zmm3[0] = zmm10[0]
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
                float var_288[0x4] = zmm3
                zmm2_1 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), zmm0_1)
                zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0x4e)
                zmm0_1 = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xff), zmm3)
                zmm2_1 = __mulps_xmmps_memps(zmm2_1, data_143f3ab50)
                zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xb1)
                zmm2_1 = _mm_add_ps(zmm2_1, zmm0_1)
                zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
                zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa))
                zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f3ab40)
                zmm3 = __mulps_xmmps_memps(zmm3, data_143f3ab30)
                var_1c8 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm1_1), zmm3)
            label_141efe5ea:
                zmm5_1 = zmm10
                float zmm8[0x4] = arg1[0x2e].d
                zmm11[0] = zmm11[0] + zmm11[0]
                zmm9[0] = zmm9[0] + zmm9[0]
                zmm8[0] = zmm8[0] + zmm8[0]
                zmm10[0] = zmm10[0] * zmm11[0]
                int32_t var_24c_1 = 0
                zmm11[0] = zmm11[0] * zmm11[0]
                int32_t var_23c_1 = 0
                zmm8[0] = zmm8[0] * zmm11[0]
                int32_t var_22c_1 = 0
                zmm8[0] = zmm8[0] * zmm8[0]
                int32_t var_21c_1 = 0x3f800000
                zmm5_1[0] = zmm5_1[0] f* zmm8[0]
                zmm0_1 = 0x3f800000
                zmm10[0] = zmm10[0] * zmm9[0]
                zmm11[0] = zmm11[0] * zmm9[0]
                zmm9[0] = zmm9[0] * zmm9[0]
                zmm8[0] = zmm8[0] * zmm9[0]
                zmm2_1 = var_1d8[2]
                zmm9[0] = zmm9[0] + zmm11[0]
                zmm9[0] = zmm9[0] + zmm8[0]
                zmm11[0] = zmm11[0] + zmm8[0]
                zmm0_1[0] = 1f - zmm9[0]
                zmm8[0] = zmm8[0] - zmm10[0]
                zmm10[0] = zmm10[0] + zmm8[0]
                float var_258 = zmm0_1[0]
                zmm10[0] = zmm10[0] + zmm8[0]
                float var_248_1 = zmm8[0]
                float var_254_1 = zmm10[0]
                zmm11[0] = zmm11[0] f- zmm5_1[0]
                zmm5_1[0] = zmm5_1[0] f+ zmm11[0]
                zmm8[0] = zmm8[0] - zmm10[0]
                zmm3 = var_1d8[1]
                float var_238_1 = zmm10[0]
                float var_228_1 = arg1[0x30].d[0]
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f - zmm9[0]
                uint32_t var_240_1 = zmm5_1[0]
                float var_234_1 = zmm11[0]
                zmm1_1 = var_1d8[0]
                float zmm12[0x4] = zmm1_1
                float var_250_1 = zmm8[0]
                float var_244_1 = zmm0_1[0]
                float var_224_1 = (*(arg1 + 0x184))[0]
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f - zmm11[0]
                float var_230_1 = zmm0_1[0]
                float var_220_1 = arg1[0x31].d[0]
                zmm12[0] = zmm12[0] * 2f
                zmm3[0] = zmm3[0] * 2f
                zmm2_1[0] = zmm2_1[0] * 2f
                zmm5_1 = zmm3
                zmm12[0] = zmm12[0] * zmm1_1[0]
                zmm5_1[0] = zmm5_1[0] f* zmm1_1[0]
                zmm0_1 = var_1d8[3]
                void* rcx_8 = arg1[0x29]
                zmm12[0] = zmm12[0] * zmm0_1[0]
                int32_t var_20c_1 = 0
                zmm2_1[0] = zmm2_1[0] * zmm0_1[0]
                int32_t var_1fc_1 = 0
                zmm3[0] = zmm3[0] * zmm0_1[0]
                zmm0_1 = 0x3f800000
                int32_t var_1ec_1 = 0
                zmm2_1[0] = zmm2_1[0] * zmm1_1[0]
                int32_t var_1dc_1 = 0x3f800000
                zmm2_1[0] = zmm2_1[0] * zmm2_1[0]
                zmm3[0] = zmm3[0] * zmm3[0]
                zmm2_1[0] = zmm2_1[0] * zmm3[0]
                zmm2_1[0] = zmm2_1[0] + zmm3[0]
                zmm2_1[0] = zmm2_1[0] + zmm12[0]
                zmm3[0] = zmm3[0] + zmm12[0]
                zmm0_1[0] = 1f - zmm2_1[0]
                zmm1_1 = zmm5_1
                zmm1_1[0] = zmm1_1[0] - zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] f+ zmm5_1[0]
                float var_218 = zmm0_1[0]
                zmm3[0] = zmm3[0] + zmm2_1[0]
                float var_208_1 = zmm1_1[0]
                float var_214_1 = zmm2_1[0]
                zmm2_1[0] = zmm2_1[0] - zmm12[0]
                zmm2_1[0] = zmm2_1[0] - zmm3[0]
                zmm12[0] = zmm12[0] + zmm2_1[0]
                float var_1f8_1 = zmm3[0]
                float var_1e8_1 = var_268[0]
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f - zmm2_1[0]
                float var_1f4_1 = zmm2_1[0]
                int128_t zmm13
                zmm13.d = 1f - zmm3[0]
                float var_210_1 = zmm2_1[0]
                float var_200_1 = zmm12[0]
                float var_204_1 = zmm0_1[0]
                float var_1e4_1 = var_264[0]
                float var_1e0_1 = var_260[0]
                int32_t var_1f0_1 = zmm13.d
                char rax_23
                int64_t r9_2
                rax_23, r9_2 = sub_141dce090(rcx_8)
                float var_2c8[0x4]
                float var_278
                float var_1b8[0x4]
                float zmm0_2[0x4]
                float zmm4_2[0x4]
                float zmm6[0x4]
                
                if (rax_23 == 0)
                    void* rdx_13 = arg1[0x16]
                    zmm4_2 = *(rdx_13 + 0x1c0)
                    var_288 = zmm4_2
                    int64_t var_2b8
                    int64_t var_2a8
                    
                    if (r14.b != 0 && (arg1[0x71].b & 0x40) == 0)
                        zmm2_1 = var_1c8
                        zmm6 = *(rdx_13 + 0x1c0)
                        zmm3 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x1b)
                        zmm1_1 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x4e)
                        zmm3 = _mm_mul_ps(zmm3, _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
                        zmm0_2 = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm4_2)
                        zmm3 = __mulps_xmmps_memps(zmm3, data_143f3ab50)
                        zmm4_2 = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xb1)
                        var_2c8 = zmm6
                        zmm3 = _mm_add_ps(zmm3, zmm0_2)
                        zmm1_1 = _mm_mul_ps(zmm1_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55))
                        zmm4_2 = _mm_mul_ps(zmm4_2, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa))
                        zmm1_1 = __mulps_xmmps_memps(zmm1_1, data_143f3ab40)
                        zmm4_2 = __mulps_xmmps_memps(zmm4_2, data_143f3ab30)
                        float var_1a8[0x4] = _mm_add_ps(_mm_add_ps(zmm3, zmm1_1), zmm4_2)
                        zmm6 = sub_140acd070(&var_2b8, &var_1a8)
                        int64_t* rcx_13 = arg1[0x29]
                        int32_t var_2b0
                        int32_t var_2a0_1 = var_2b0
                        var_2a8 = var_2b8
                        (*(*rcx_13 + 0x6f0))(rcx_13, &var_2a8, zx.o(0))
                        rdx_13 = arg1[0x16]
                        float zmm3_1[0x4] = data_143f3a9d0
                        arg_8.d = 0x358637bd
                        float zmm4_3[0x4] = *(rdx_13 + 0x1c0)
                        float zmm1_2[0x4] = _mm_sub_ps(zmm6, zmm4_3)
                        float zmm2_2[0x4] = _mm_shuffle_ps(0x358637bd, 0x358637bd, 0)
                        var_288 = zmm4_3
                        uint32_t temp0_166 =
                            _mm_movemask_ps(_mm_cmpeq_ps(zmm2_2, _mm_and_ps(zmm1_2, zmm3_1), 1))
                        uint32_t temp0_170
                        
                        if (temp0_166 != 0)
                            temp0_170 = _mm_movemask_ps(_mm_cmpeq_ps(zmm2_2, 
                                _mm_and_ps(_mm_add_ps(zmm4_3, zmm6), zmm3_1), 1))
                        
                        if (temp0_166 == 0 || temp0_170 == 0)
                            char rax_32 = arg1[0x3e].b
                            
                            if ((rax_32 & 8) != 0)
                            label_141efee0e:
                                var_2b8.d = 0
                                int32_t var_2b0_1 = 0
                                (*(*arg1 + 0x478))(arg1, &data_143dbb1f8, 
                                    sub_140ade170(&var_2b8, &var_1b8), 0, 0, 0)
                                rdx_13 = arg1[0x16]
                                zmm4_3 = *(rdx_13 + 0x1c0)
                                var_288 = zmm4_3
                            else if ((rax_32 & 4) != 0 && *(arg1[0x29] + 0x258) != 0)
                                goto label_141efee0e
                        
                        if (*(arg1[0x29] + 0x258) != 0)
                            zmm1_2 = var_2c8[2]
                            zmm3_1 = var_2c8[0] ^ 0x80000000
                            zmm2_2 = var_2c8[3]
                            float zmm0_3[0x4] = var_2c8[1] ^ 0x80000000
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                            zmm3_1[0] = zmm0_3[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                            zmm3_1[0] = (zmm1_2 ^ 0x80000000)[0]
                            zmm0_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x27)
                            zmm3_1[0] = zmm2_2[0]
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x39)
                            var_2c8 = zmm3_1
                            zmm2_2 = _mm_mul_ps(_mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b), zmm0_3)
                            zmm1_2 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
                            zmm0_3 = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0xff), zmm3_1)
                            zmm2_2 = __mulps_xmmps_memps(zmm2_2, data_143f3ab50)
                            zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
                            zmm2_2 = _mm_add_ps(zmm2_2, zmm0_3)
                            zmm1_2 = _mm_mul_ps(zmm1_2, _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55))
                            zmm3_1 = _mm_mul_ps(zmm3_1, _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa))
                            zmm1_2 = __mulps_xmmps_memps(zmm1_2, data_143f3ab40)
                            zmm3_1 = __mulps_xmmps_memps(zmm3_1, data_143f3ab30)
                            var_1b8 = _mm_add_ps(_mm_add_ps(zmm2_2, zmm1_2), zmm3_1)
                            sub_140adf5d0(&var_288, &var_2a8)
                            (*(*arg1 + 0x608))(arg1, &var_2a8, sub_140adf5d0(&var_1b8, &var_2c8))
                            rdx_13 = arg1[0x16]
                            var_288 = *(rdx_13 + 0x1c0)
                    
                    zmm6 = *(rdx_13 + 0x1d0)
                    void* rax_37 = arg1[0x29]
                    zmm8 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    void* rcx_19 = *(rax_37 + 0x290)
                    zmm9 = *(rcx_19 + 0x1e8)
                    zmm9[0] = zmm9[0] f* *(rcx_19 + 0x420)
                    zmm8[0] = zmm8[0] - zmm9[0]
                    float var_198[0x4]
                    int32_t zmm6_1
                    int32_t zmm7_1
                    int32_t zmm8_1
                    int32_t zmm15_1
                    zmm6_1, zmm7_1, zmm8_1, zmm9, zmm15_1 = sub_1408041d0(&var_258, &var_198)
                    var_2c8[3] = 0x3f800000
                    float zmm2_3[0x4] = var_2c8
                    zmm2_3[0] = zmm6_1
                    int32_t var_2a0_2 = 0
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xe1)
                    zmm2_3[0] = zmm7_1
                    var_2a8 = 0
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                    zmm2_3[0] = zmm8_1
                    int32_t var_2a0_3 = 0
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                    var_2c8 = zmm2_3
                    float var_168[0x4]
                    float zmm3_2[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_168)
                    var_2c8[3] = 0x3f800000
                    float var_178[0x4]
                    float zmm0_5[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_178)
                    var_2a8 = 0
                    float var_188[0x4]
                    float zmm1_3[0x4] =
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_188)
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm0_5)
                    zmm1_3 = _mm_add_ps(zmm1_3, 
                        __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_198))
                    zmm2_3 = var_2c8
                    zmm3_2 = _mm_add_ps(zmm3_2, zmm1_3)
                    zmm2_3[0] = zmm3_2[0]
                    zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                    zmm1_3 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xe1)
                    zmm2_3[0] = zmm0_5[0]
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc6)
                    zmm2_3[0] = zmm1_3[0]
                    zmm2_3 = _mm_shuffle_ps(zmm2_3, zmm2_3, 0xc9)
                    var_2c8 = zmm2_3
                    zmm3_2 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xff), var_1e8_1.o)
                    zmm0_5 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0xaa), var_1f8_1.o)
                    zmm1_3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0x55), var_208_1.o)
                    zmm3_2 = _mm_add_ps(_mm_add_ps(zmm3_2, zmm0_5), 
                        _mm_add_ps(zmm1_3, 
                            __mulps_xmmps_memps(_mm_shuffle_ps(zmm2_3, zmm2_3, 0), var_218.o)))
                    zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
                    zmm9[0] = zmm9[0] + zmm0_5[0]
                    var_2a8 = (_mm_unpacklo_ps(zmm3_2, _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)[0].q)).q
                    float var_2a0_4 = zmm9[0]
                    (*(*arg1 + 0x4e8))(arg1, &var_278, &var_2a8)
                    float zmm4_4[0x4] = var_278
                    int32_t var_270
                    zmm1_3 = var_270
                    int32_t var_274
                    zmm2_3 = var_274
                    zmm3_2 = *(arg1[0x16] + 0x1d0)
                    zmm4_4[0] = zmm4_4[0] - zmm3_2[0]
                    zmm0_5 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                    zmm2_3[0] = zmm2_3[0] - zmm0_5[0]
                    zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
                    zmm1_3[0] = zmm1_3[0] - zmm3_2[0]
                    zmm0_5 = _mm_unpacklo_ps(zmm4_4, zmm2_3[0].q)
                    float var_2a0_5 = zmm1_3[0]
                    int64_t rax_42 = *arg1
                    var_2a8 = zmm0_5.q
                    int64_t* rax_43 = (*(rax_42 + 0x4e0))(arg1, &var_2c8, &var_2a8)
                    var_298.q = *rax_43
                    int32_t rax_44 = rax_43[1].d
                    
                    if (arg1[0x71].b s>= 0)
                        zmm0_5 = var_268
                        zmm1_3 = var_264
                        zmm0_5[0] = zmm0_5[0] f- arg1[0x30].d
                        zmm1_3[0] = zmm1_3[0] f- *(arg1 + 0x184)
                        
                        if (r14.b == 0 && not(zmm0_5[0] f!= zmm15_1) && not(zmm1_3[0] f!= zmm15_1))
                            var_298.q = 0
                        
                        void var_158
                        memset(&var_158, 0, 0x88)
                        int32_t var_150_1 = 0x3f800000
                        int64_t r9_3
                        r9_3.b = 1
                        zmm1_3 = *(arg1[0x16] + 0x1d0)
                        int64_t rax_47 = *arg1
                        float zmm0_6[0x4] = _mm_shuffle_ps(zmm1_3, zmm1_3, 0x55)
                        var_2b8.d = zmm1_3[0]
                        float var_2b0_4 = _mm_shuffle_ps(zmm1_3, zmm1_3, 0xaa)[0]
                        var_2b8:4.d = zmm0_6[0]
                        (*(rax_47 + 0x478))(arg1, &var_298, &var_288, r9_3, &var_158, 0)
                        zmm0_6 = var_2b8.d
                        zmm0_6[0] = zmm0_6[0] f+ var_298
                        zmm1_3 = var_2b8:4.d
                        zmm1_3[0] = zmm1_3[0] + var_294_1
                        zmm3_2 = *(arg1[0x16] + 0x1d0)
                        zmm2_3 = zmm3_2
                        zmm2_3[0] = zmm2_3[0] - zmm0_6[0]
                        float zmm4_5[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x55)
                        zmm0_6 = var_2b0_4
                        zmm4_5[0] = zmm4_5[0] - zmm1_3[0]
                        zmm0_6[0] = zmm0_6[0] f+ rax_44
                        zmm3_2 = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xaa)
                        zmm3_2[0] = zmm3_2[0] - zmm0_6[0]
                        
                        if (_mm_and_ps(zmm2_3, 0x7fffffff)[0] > 9.99999975e-05f)
                            (*(*arg1 + 0x918))(arg1, &var_298, &var_2b8, &var_158)
                        else if (_mm_and_ps(zmm4_5, 0x7fffffff)[0] > 9.99999975e-05f)
                            (*(*arg1 + 0x918))(arg1, &var_298, &var_2b8, &var_158)
                        else if (not(_mm_and_ps(zmm3_2, 0x7fffffff)[0] <= 9.99999975e-05f))
                            (*(*arg1 + 0x918))(arg1, &var_298, &var_2b8, &var_158)
                    else
                        int64_t* rcx_23 = arg1[0x16]
                        var_2a8 = var_278.q
                        int32_t var_2a0_6 = var_270
                        sub_141f49fa0(rcx_23, &var_2a8, &var_288, 0, 0, 0)
                else
                    void* rax_24 = arg1[0x29]
                    zmm4_2 = data_143f3ab70
                    zmm3 = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(
                            _mm_unpacklo_ps(*(rax_24 + 0x2b4), (*(rax_24 + 0x2bc))[0].q), 
                            _mm_unpacklo_ps(*(rax_24 + 0x2b8), zx.o(0)[0].q)[0].q), 
                        data_143f3abc0)
                    zmm3 = _mm_sub_ps(zmm3, 
                        __mulps_xmmps_memps(
                            _mm_cvtepi32_ps(_mm_cvtps_epi32(__mulps_xmmps_memps(zmm3, 
                                data_143f3abb0))), 
                            data_143f3aba0))
                    zmm1_1 = data_142dc1870
                    zmm0_2 = __andps_xmmxud_memxud(zmm3, data_143f3a9d0)
                    zmm2_1 = __orps_xmmxud_memxud(__andps_xmmxud_memxud(zmm3, data_143f3ab90), 
                        data_143f3ab80)
                    zmm4_2 = _mm_cmpeq_ps(zmm4_2, zmm0_2, 1)
                    zmm0_2 = data_142dc1850
                    zmm2_1 = _mm_sub_ps(zmm2_1, zmm3)
                    zmm10 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x55)
                    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0)
                    zmm2_1 = _mm_and_ps(zmm2_1 ^ zmm3, zmm4_2) ^ zmm3
                    zmm3 = _mm_mul_ps(zmm2_1, zmm2_1)
                    zmm10 = _mm_add_ps(_mm_mul_ps(zmm10, zmm3), zmm0_2)
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm10 = _mm_add_ps(_mm_mul_ps(zmm10, zmm3), zmm0_2)
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                    zmm10 = _mm_add_ps(_mm_mul_ps(zmm10, zmm3), zmm0_2)
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
                    zmm10 = _mm_add_ps(_mm_mul_ps(zmm10, zmm3), zmm0_2)
                    zmm0_2 = data_142dc1860
                    zmm9 = _mm_mul_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0x55), zmm3)
                    zmm0_2 = _mm_shuffle_ps(zmm0_2, zmm0_2, 0)
                    zmm10 = _mm_mul_ps(zmm10, zmm3)
                    zmm9 = _mm_add_ps(zmm9, zmm0_2)
                    zmm10 = _mm_add_ps(zmm10, zmm1_1)
                    zmm1_1 = data_142dc1880
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                    zmm9 = _mm_mul_ps(zmm9, zmm3)
                    zmm10 = _mm_mul_ps(zmm10, zmm2_1)
                    zmm9 = _mm_add_ps(zmm9, zmm0_2)
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)
                    var_288 = zmm10
                    zmm9 = _mm_add_ps(_mm_mul_ps(zmm9, zmm3), zmm0_2)
                    zmm0_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                    zmm1_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0)
                    zmm9 = _mm_mul_ps(
                        _mm_add_ps(_mm_mul_ps(_mm_add_ps(_mm_mul_ps(zmm9, zmm3), zmm0_2), zmm3), 
                            zmm1_1), 
                        _mm_and_ps(data_143f3ab60 ^ data_143f3a950, zmm4_2) ^ data_143f3a950)
                    zmm11 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    zmm13 = *(rax_24 + 0x2a8)
                    int128_t zmm15 = *(rax_24 + 0x2b0)
                    zmm3 = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                    zmm2_1 = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                    zmm8 = zmm11
                    zmm11[0] = zmm11[0] * zmm9[0]
                    int32_t var_24c_2 = 0
                    zmm2_1[0] = zmm2_1[0] * zmm10[0]
                    float zmm5_2[0x4] = zmm9
                    int32_t var_23c_2 = 0
                    zmm5_2[0] = zmm5_2[0] * zmm3[0]
                    int32_t var_22c_2 = 0
                    zmm12 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                    zmm9[0] = zmm9[0] * zmm2_1[0]
                    int32_t var_21c_2 = 0x3f800000
                    zmm12[0] = zmm12[0] * zmm3[0]
                    zmm8[0] = zmm8[0] * zmm2_1[0]
                    zmm6 = zmm9 ^ 0x80000000
                    zmm12[0] = zmm12[0] * zmm11[0]
                    zmm8[0] = zmm8[0] - zmm12[0]
                    zmm3[0] = zmm3[0] * zmm2_1[0]
                    zmm12[0] = zmm12[0] * zmm10[0]
                    zmm2_1[0] = zmm2_1[0] * zmm3[0]
                    zmm12[0] = zmm12[0] + zmm3[0]
                    zmm12[0] = zmm12[0] * zmm9[0]
                    zmm9 = var_218.o
                    zmm3[0] = zmm3[0] * zmm12[0]
                    zmm11[0] = zmm11[0] * zmm2_1[0]
                    zmm11[0] = zmm11[0] * zmm12[0]
                    zmm11[0] = zmm11[0] - zmm3[0]
                    zmm3 = var_258.o
                    zmm3[0] = zmm11[0]
                    zmm4_2 = var_1e8_1.o
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm2_1[0] = zmm2_1[0] + zmm11[0]
                    zmm0_2 = var_288
                    zmm3[0] = zmm5_2[0]
                    zmm5_2 = var_1f8_1.o
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    zmm3[0] = zmm0_2[0]
                    var_2c8 = zmm11
                    zmm11 = var_208_1.o
                    zmm10 = zmm2_1 ^ 0x80000000
                    int128_t zmm14 = *(rax_24 + 0x2ac)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    zmm2_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4_2)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm11)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_2)
                    zmm2_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2_1, zmm0_2), zmm1_1), zmm3)
                    zmm3 = var_248_1.o
                    zmm3[0] = zmm8[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm3[0] = zmm12[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    var_218.o = zmm2_1
                    zmm3[0] = zmm6[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    zmm2_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    bool cond:0_1 = (arg1[0x71].b & 0x40) == 0
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4_2)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm11)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_2)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_2)
                    zmm0_2 = var_2c8
                    zmm2_1 = _mm_add_ps(_mm_add_ps(zmm2_1, zmm1_1), zmm3)
                    zmm3 = var_238_1.o
                    zmm3[0] = zmm10[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm3[0] = zmm0_2[0]
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    zmm3[0] = zmm12[0]
                    var_208_1.o = zmm2_1
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    zmm2_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm4_2)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm11)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_2)
                    zmm2_1 = _mm_add_ps(_mm_add_ps(_mm_add_ps(zmm2_1, zmm0_2), zmm1_1), zmm3)
                    zmm3 = var_228_1.o
                    zmm3[0] = zmm13.d
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    zmm3[0] = zmm14.d
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
                    var_1f8_1.o = zmm2_1
                    zmm3[0] = zmm15.d
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
                    zmm2_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0)
                    zmm2_1 = _mm_mul_ps(zmm2_1, zmm11)
                    zmm1_1 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm0_2 = _mm_mul_ps(zmm0_2, zmm9)
                    zmm1_1 = _mm_mul_ps(zmm1_1, zmm5_2)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    zmm2_1 = _mm_add_ps(zmm2_1, zmm0_2)
                    zmm3 = _mm_mul_ps(zmm3, zmm4_2)
                    var_1e8_1.o = _mm_add_ps(_mm_add_ps(zmm2_1, zmm1_1), zmm3)
                    void* rax_25
                    uint32_t (* rcx_9)[0x4]
                    
                    if (cond:0_1)
                        uint32_t (* rax_26)[0x4]
                        rax_26, r9_2 = sub_140ae1ba0(&var_218, &var_1b8)
                        rcx_9 = rax_26
                        rax_25 = arg1[0x16]
                    else
                        rax_25 = arg1[0x16]
                        rcx_9 = &var_288
                        var_288 = *(rax_25 + 0x1c0)
                    
                    zmm1_1 = var_1e8_1
                    zmm2_1 = var_1e4_1
                    r9_2.b = 1
                    var_288 = *rcx_9
                    zmm3 = *(rax_25 + 0x1d0)
                    int64_t rax_27 = *arg1
                    zmm1_1[0] = zmm1_1[0] - zmm3[0]
                    zmm0_2 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm2_1[0] = zmm2_1[0] - zmm0_2[0]
                    var_278 = zmm1_1[0]
                    zmm1_1 = var_1e0_1
                    zmm1_1[0] = zmm1_1[0] - zmm3[0]
                    float var_274_1 = zmm2_1[0]
                    float var_270_1 = zmm1_1[0]
                    (*(rax_27 + 0x478))(arg1, &var_278, &var_288, r9_2, 0, 0)
                arg_8 = 0
                result = (*(*rsi_1 + 0x3e8))(rsi_1, 0)
                
                if (result.b != 0)
                    result = arg1[0x29]
                    int64_t* rcx_28 = *(result + 0x280)
                    
                    if (rcx_28 != 0)
                        result = sub_14230a3e0(rcx_28, &var_298, &var_1c8)
        
        arg1[0x18].d = r15_1

return result
