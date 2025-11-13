// 函数: sub_1411e9350
// 地址: 0x1411e9350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg5
void* rsi = arg3
void* r13 = arg2
int64_t result = sx.q(r15[1].d)

if (result.d != 0)
    void* i = *r15
    
    for (void* r9_1 = result * 0xe0 + i; i != r9_1; i += 0xe0)
        void* rcx = *(i + 0x70)
        result = sx.q(*(i + 0x78))
        void* rdx_2 = result * 0xc0 + rcx
        
        if (rcx != rdx_2)
            result = zx.q(*(arg3 + 0x28))
            
            do
                if (*(rcx + 0x6c) == result.d)
                    goto label_1411e93fa
                
                rcx += 0xc0
            while (rcx != rdx_2)
    
    if (data_1439b6114 s> 0)
    label_1411e93fa:
        *arg1
        void*** var_1a8 = sub_1410fccd0(arg1, &data_143ec4ca0, u"SceneDephtTexture", 0)
        int128_t zmm6_1
        result, zmm6_1 = sub_1419a9d70(arg1, arg4 + 0x28, &data_1439b70c8, u"External")
        int64_t result_1 = result
        char var_218_1 = 0
        int64_t result_4 = result
        
        if (data_1439b6114 s> 0 && data_143e75b68 s> 0)
            goto label_1411e9adc
        
        void* rcx_4 = *r15
        void*** r13_1 = nullptr
        void*** r14_1 = nullptr
        void* var_1b0_1 = rcx_4
        result = sx.q(r15[1].d) * 0xe0 + rcx_4
        int64_t result_2 = result
        
        if (rcx_4 == result)
            goto label_1411e9ad5
        
        int128_t var_48_1 = zmm6_1
        zmm6_1 = zx.o(0)
        int64_t result_5
        void arg_30
        uint128_t zmm0_1
        
        do
            uint128_t* rbx_1 = *(rcx_4 + 0x70)
            uint128_t* var_1c0_1 = rbx_1
            result = &rbx_1[sx.q(*(rcx_4 + 0x78)) * 0xc]
            int64_t result_3 = result
            
            if (rbx_1 != result)
                int32_t* rdi_1 = &rbx_1[5]
                int32_t* var_1b8_1 = rdi_1
                
                do
                    result = zx.q(*(rsi + 0x28))
                    
                    if (rdi_1[7] == result.d)
                        int64_t var_210
                        
                        if (r13_1 == 0)
                            void* rdi_2 = r15[6]
                            int32_t var_1d8
                            sub_140865c40(&arg1[0x22], &var_1d8, rdi_2)
                            int64_t rax_6 = sx.q(var_1d8)
                            void* const rcx_6
                            
                            if (rax_6.d == 0xffffffff)
                                rcx_6 = nullptr
                            else
                                rcx_6 = arg1[0x22] + rax_6 * 0x18
                            
                            int64_t* rax_8 = rcx_6 + 8
                            
                            if (rcx_6 == 0)
                                rax_8 = nullptr
                            
                            if (rax_8 == 0)
                                void*** rax_9 = sub_14081d830(0x48, arg1[1], 1, 0)
                                void*** rcx_7 = rax_9
                                
                                if (rax_9 == 0)
                                    rcx_7 = nullptr
                                else
                                    rcx_7[2] = 0
                                    rcx_7[1] = u"External"
                                    rcx_7[3].b = 0
                                    *(rcx_7 + 0x1c) = 0
                                    rcx_7[4] = 0
                                    rcx_7[5].w = 0x200
                                    *rcx_7 = &data_142f285d0
                                    int128_t zmm0_2 = *(rdi_2 + 0xb8)
                                    rcx_7[8] = 0
                                    *(rcx_7 + 0x30) = zmm0_2
                                
                                int64_t rax_10 = r15[6]
                                void*** var_208 = rcx_7
                                rcx_7[8] = rax_10
                                void*** rdx_7 = var_208
                                int32_t rcx_8 = *(rdx_7 + 0x3c)
                                
                                if (rcx_8 == 0)
                                    rdx_7[2] = *r15[6]
                                else if (rcx_8 == 1)
                                    rdx_7[2] = *(r15[6] + 8)
                                else if (rcx_8 == 2)
                                    rdx_7[2] = *(r15[6] + 0x10)
                                
                                void* var_a0_1 = &r15[6]
                                void** var_a8 = &var_208
                                void var_190
                                sub_1411610a0(&arg1[0xe], &var_190, &var_a8, nullptr)
                                var_210 = r15[6]
                                int64_t* var_98 = &var_210
                                void** var_90_1 = &var_208
                                void var_18c
                                sub_14107baa0(&arg1[0x22], &var_18c, &var_98, nullptr)
                                r13_1 = var_208
                            else
                                r13_1 = *rax_8
                            
                            int64_t var_1e0_1 = 1
                            
                            if ((r13_1[7].d & 0x100) != 0)
                                var_1e0_1.d = 4
                                var_1e0_1:4.d = 0x1c
                            
                            void*** rax_15
                            rax_15, zmm6_1 = sub_14081d830(0x28, arg1[1], 1, 0)
                            r14_1 = rax_15
                            
                            if (rax_15 == 0)
                                r14_1 = nullptr
                            else
                                rax_15[1] = r13_1[1]
                                rax_15[2] = 0
                                *r14_1 = &data_142f285c0
                                *(r14_1 + 0x18) = r13_1.o
                        
                        int64_t* rbx_3 = r15[4]
                        var_218_1 = 1
                        int32_t var_1d4
                        sub_140865c40(&arg1[0x18], &var_1d4, rbx_3)
                        int64_t rax_16 = sx.q(var_1d4)
                        void* const rcx_15
                        
                        if (rax_16.d == 0xffffffff)
                            rcx_15 = nullptr
                        else
                            rcx_15 = arg1[0x18] + rax_16 * 0x18
                        
                        int64_t* rax_18 = rcx_15 + 8
                        
                        if (rcx_15 == 0)
                            rax_18 = nullptr
                        
                        void*** r15_1
                        
                        if (rax_18 == 0)
                            int128_t* rax_20 = (*(*rbx_3 + 0x10))(rbx_3)
                            void*** rax_21 = sub_14081d830(0x88, arg1[1], 1, 0)
                            void*** rcx_17 = rax_21
                            
                            if (rax_21 == 0)
                                rcx_17 = nullptr
                            else
                                rcx_17[2] = 0
                                rcx_17[1] = u"DeepShadowDepthTexture"
                                rcx_17[3].b = 0
                                *(rcx_17 + 0x1c) = 0
                                rcx_17[4] = 0
                                rcx_17[5].w = 0x200
                                *rcx_17 = &data_142f11960
                                *(rcx_17 + 0x30) = *rax_20
                                *(rcx_17 + 0x40) = rax_20[1]
                                *(rcx_17 + 0x50) = rax_20[2]
                                *(rcx_17 + 0x60) = rax_20[3]
                                int128_t zmm0_3 = rax_20[4]
                                rcx_17[0x10] = 0
                                *(rcx_17 + 0x70) = zmm0_3
                            
                            int64_t rax_22 = r15[4]
                            void*** var_200 = rcx_17
                            rcx_17[0x10] = rax_22
                            void* var_80_1 = &r15[4]
                            var_200[2] = *(r15[4] + 0x10)
                            void**** var_88 = &var_200
                            void var_188
                            sub_14107bc20(&arg1[4], &var_188, &var_88, nullptr)
                            var_210 = r15[4]
                            int64_t* var_78 = &var_210
                            void**** var_70_1 = &var_200
                            void var_184
                            zmm6_1 = sub_14107baa0(&arg1[0x18], &var_184, &var_78, nullptr)
                            r15_1 = var_200
                        else
                            r15_1 = *rax_18
                        
                        int64_t* rbx_5 = arg5[5]
                        int32_t var_1d0
                        sub_140865c40(&arg1[0x18], &var_1d0, rbx_5)
                        int64_t rax_26 = sx.q(var_1d0)
                        void* const rcx_22
                        
                        if (rax_26.d == 0xffffffff)
                            rcx_22 = nullptr
                        else
                            rcx_22 = arg1[0x18] + rax_26 * 0x18
                        
                        int64_t* rax_28 = rcx_22 + 8
                        
                        if (rcx_22 == 0)
                            rax_28 = nullptr
                        
                        void*** rcx_23
                        
                        if (rax_28 == 0)
                            int128_t* rax_30 = (*(*rbx_5 + 0x10))(rbx_5, 0)
                            void*** rax_31 = sub_14081d830(0x88, arg1[1], 1, 0)
                            void*** rcx_25 = rax_31
                            
                            if (rax_31 == 0)
                                rcx_25 = rax_31
                            else
                                rcx_25[1] = u"DeepShadowLayerTexture"
                                rcx_25[2] = 0
                                rcx_25[3].b = 0
                                *(rcx_25 + 0x1c) = 0
                                rcx_25[4] = 0
                                rcx_25[5].w = 0x200
                                *rcx_25 = &data_142f11960
                                *(rcx_25 + 0x30) = *rax_30
                                *(rcx_25 + 0x40) = rax_30[1]
                                *(rcx_25 + 0x50) = rax_30[2]
                                *(rcx_25 + 0x60) = rax_30[3]
                                int128_t zmm0_4 = rax_30[4]
                                rcx_25[0x10] = 0
                                *(rcx_25 + 0x70) = zmm0_4
                            
                            int64_t rax_32 = arg5[5]
                            void*** var_1f8 = rcx_25
                            rcx_25[0x10] = rax_32
                            int64_t* var_60_1 = &arg5[5]
                            var_1f8[2] = *(arg5[5] + 0x10)
                            void**** var_68 = &var_1f8
                            void var_180
                            sub_14107bc20(&arg1[4], &var_180, &var_68, nullptr)
                            var_210 = arg5[5]
                            int64_t* var_58 = &var_210
                            void**** var_50_1 = &var_1f8
                            void var_17c
                            zmm6_1 = sub_14107baa0(&arg1[0x18], &var_17c, &var_58, nullptr)
                            rcx_23 = var_1f8
                        else
                            rcx_23 = *rax_28
                        
                        rdi_1 = var_1b8_1
                        rbx_1 = var_1c0_1
                        zmm0_1 = zx.o(data_143dbb1f8.q)
                        rsi = arg3
                        float zmm1_1[0x4] = rbx_1[1]
                        int32_t var_d0_1 = data_143dbb200
                        int64_t var_b0_1 = 0
                        result_5 = result_1
                        int64_t var_e0
                        var_e0:4.d = rdi_1[4]
                        uint64_t var_d8_1 = zmm0_1.q
                        int128_t var_c8_1 = zx.o(0)
                        int128_t var_108
                        var_108.d = rdi_1[-1]
                        bool var_e8_1 = *(arg5 + 0x1c) != 0
                        var_108:4.d = *rdi_1
                        var_108:8.d = rdi_1[1]
                        uint128_t var_148_1 = *rbx_1
                        var_108:0xc.d = rdi_1[2]
                        float var_138_1[0x4] = zmm1_1
                        void*** var_158_1 = r14_1
                        uint128_t var_128_1 = rbx_1[2]
                        zmm0_1 = data_1439b6140
                        bool var_160_1 = *(*(rsi + 0x20) + 0x13c) == 0
                        int128_t var_f8
                        var_f8.q = r15_1
                        var_f8:8.q = rcx_23
                        float var_118_1[0x4] = rbx_1[3]
                        
                        if (zmm0_1.d f> zmm6_1.d)
                            int32_t var_e4_2 = zmm0_1.d
                        else
                            int32_t var_e4_1 = 0
                        
                        zmm0_1 = data_1439b613c
                        
                        if (zmm0_1.d f> zmm6_1.d)
                            var_e0.d = zmm0_1.d
                        else
                            var_e0.d = 0
                        
                        result, zmm6_1 = sub_1411cfcd0(arg1, &var_1a8, arg2, 0, &result_5, &arg_30)
                        r15 = arg5
                    
                    rbx_1 = &rbx_1[0xc]
                    rdi_1 = &rdi_1[0x30]
                    var_1c0_1 = rbx_1
                    var_1b8_1 = rdi_1
                while (rbx_1 != result_3)
                
                rcx_4 = var_1b0_1
            
            rcx_4 += 0xe0
            var_1b0_1 = rcx_4
        while (rcx_4 != result_2)
        
        if (var_218_1 == 0)
            result_4 = result_1
        label_1411e9ad5:
            r13 = arg2
        label_1411e9adc:
            
            if (r15[0x18] != 0)
                void* i_1 = *r15
                result = sx.q(r15[1].d)
                
                for (void* rdi_5 = result * 0xe0 + i_1; i_1 != rdi_5; i_1 += 0xe0)
                    void* rcx_30 = *(arg3 + 0x20)
                    int128_t var_108_1
                    __builtin_memset(&var_108_1, 0, 0x21)
                    result_5 = result_4
                    float zmm3[0x4] = *(rcx_30 + 0x20)
                    char rdx_22 = *(rcx_30 + 0x13c)
                    zmm0_1 = *(rcx_30 + 0x60)
                    float temp0_2[0x4] = _mm_unpacklo_ps(*(rcx_30 + 0x40), (*(rcx_30 + 0x50))[0].q)
                    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    int32_t var_198_1 = zmm0_1.d
                    zmm0_1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    float temp0_5[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
                    int32_t var_d0_2 = var_198_1
                    temp0_5[0] = zmm0_1.d
                    float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
                    int32_t rax_46
                    rax_46.b = rdx_22 != 0
                    int64_t var_d8_2 = temp0_2.q
                    temp0_6[0] = temp0_3[0]
                    int64_t var_158_2 = 0
                    float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
                    bool var_160_2 = rdx_22 == 0
                    int32_t var_b8_1 = *(i_1 + 0xcc)
                    int32_t var_e4_3 = 0x3f800000
                    int64_t var_e0_1 = 0x3f800000
                    void* var_b0_2 = &r15[8]
                    temp0_7[0] = _mm_cvtepi32_ps(zx.o(rax_46))[0]
                    float var_c8_2[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
                    result = sub_1411cfcd0(arg1, &var_1a8, r13, 1, &result_5, &arg_30)
                    result_4 = result_1

return result
