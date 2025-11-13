// 函数: sub_141714920
// 地址: 0x141714920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int32_t* var_a8 = __security_cookie ^ &var_228
int32_t* r13 = arg3
int128_t zmm6
zmm6.d = (*arg4).d f- *arg3
uint128_t zmm7
zmm7.d = (*(arg6 + 4)).d f- arg3[1]
uint128_t zmm1
zmm1.d = (*(arg6 + 8)).d f- arg3[2]
uint128_t zmm4
zmm4.d = (*arg6).d f- *arg3
float zmm5 = *(arg4 + 4) f- arg3[1]
float zmm3[0x4] = *(arg4 + 8)
int64_t zmm0 = zmm7.q
zmm3[0] = zmm3[0] f- arg3[2]
uint128_t zmm8 = zmm1
zmm7.d = zmm7.d f* zmm6.d
zmm1.d = zmm1.d f* zmm6.d
zmm0.d = zmm0.d f* zmm3[0]
zmm8.d = zmm8.d f* zmm5
uint128_t zmm9
zmm9.d = zmm4.d f* zmm3[0]
zmm8.d = zmm8.d f- zmm0.d
zmm4.d = zmm4.d f* zmm5
zmm9.d = zmm9.d f- zmm1.d
zmm7.d = zmm7.d f- zmm4.d
zmm0.d = zmm8.q.d f* zmm8.d
uint128_t zmm2
zmm2.d = zmm9.d f* zmm9.d
zmm1.d = zmm7.d f* zmm7.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
int32_t* result

if (zmm2.d f< 9.99999975e-05f)
    result.b = 1
else
    float temp0_1[0x4] = _mm_sqrt_ss(0, zmm2.d)
    bool cond:0_1 = temp0_1[0] <= 9.99999994e-09f
    zmm2.d = 1f / temp0_1[0]
    zmm1.d = zmm2.d f* zmm8.d
    zmm0.d = zmm2.q.d f* zmm9.d
    zmm2.d = zmm2.d f* zmm7.d
    int32_t var_108 = zmm1.d
    int32_t var_104 = zmm0.d
    int64_t var_100
    var_100.d = zmm2.d
    
    if (cond:0_1)
        result.b = 1
    else
        zmm9 = zx.o(var_108.q)
        void** const var_148_1 = &data_142fc47b8
        float rax_1 = arg3[2]
        int32_t* rsi_1 = *arg1
        float rax_2 = var_100.d
        int64_t var_138 = *arg3
        void var_168
        int32_t* var_1e8_1 = &var_168
        uint64_t var_160
        uint64_t* var_1f0_1 = &var_160
        uint64_t var_178
        uint64_t* var_1f8_1 = &var_178
        zmm3 = *arg1[1]
        int32_t var_150
        int32_t* var_200_1 = &var_150
        var_150 = 0x7f7fffff
        int32_t var_208_1 = rsi_1[0x10].d
        int32_t var_140_1 = 0x1000202
        char var_13c_1 = 0
        uint64_t var_12c_1 = zmm9.q
        var_178 = 0
        int32_t var_170_1 = 0
        var_160 = 0
        float var_158_1 = 0f
        uint128_t zmm14_1
        result, zmm14_1 = sub_14174b4e0(&var_138, &rsi_1[0xa], &rsi_1[0xd], zmm3, var_208_1, 
            var_200_1, var_1f8_1, var_1f0_1, var_1e8_1)
        uint128_t zmm8_1 = zx.o(0)
        int32_t var_128
        uint128_t zmm5_1 = var_128
        float zmm2_1 = var_12c_1.d
        uint128_t zmm15 = var_150
        
        if (result.b == 0)
            goto label_141714d05
        
        float var_1b8
        uint128_t zmm0_1
        uint128_t zmm6_1
        uint128_t zmm7_1
        uint128_t zmm9_1
        
        if (zmm15.d f!= 0f)
            var_208_1.q = arg6
            zmm6_1, zmm8_1, arg5, zmm14_1 =
                sub_1415c64e0(&var_1b8, &var_178, r13, arg4, var_208_1, &var_178)
            float var_1b4
            float zmm2_2 = var_178:4.d - var_1b4
            float zmm1_2 = var_178.d - var_1b8
            int32_t var_1b0
            zmm0_1.d = var_170_1.d f- var_1b0
            zmm0_1.d = zmm0_1.d f* zmm0_1.d
            *arg1[3] = zmm2_2 * zmm2_2 + zmm1_2 * zmm1_2 f+ zmm0_1.d f<= zmm6_1.d
        label_141714d05:
            char* result_1 = arg1[3]
            float r8_6
            
            if (*result_1 != 0)
                zmm5_1 = zx.o(var_160)
                r8_6 = var_158_1
            else
                zmm7_1 = *arg4
                zmm6_1 = *(arg4 + 4)
                zmm9_1 = *(arg4 + 8)
                uint64_t var_198 = *r13
                zmm0_1.d = zmm7_1.d f- *r13
                void** const var_1a8_1 = &data_142fc4eb0
                int32_t rax_6 = r13[2]
                uint128_t var_88_1 = zmm14_1
                float var_18c = zmm0_1.d
                zmm0_1.d = zmm6_1.d f- r13[1]
                int32_t var_1a0_1 = 0x1010303
                char var_19c_1 = 1
                float var_188_1 = zmm0_1.d
                zmm0_1.d = zmm9_1.d f- r13[2]
                int32_t var_184_1 = zmm0_1.d
                uint128_t zmm0_2 = sub_141750780(&var_18c)
                void* rcx_9 = *arg1
                uint128_t zmm3_2 = zmm0_2
                zmm14_1 = *(rcx_9 + 0x40)
                void* var_1c8_1 = &var_168
                void var_d0
                int32_t* var_1d0_1 = &var_d0
                int32_t var_f8
                int32_t* var_1d8_1 = &var_f8
                int64_t* var_1e0_1 = &var_108
                var_1e8_1.d = zmm8_1.d
                uint128_t zmm1_3
                zmm1_3.d = var_18c.d f* zmm3_2.d
                zmm0_2.d = var_184_1.d f* zmm3_2.d
                zmm1_3.d = zmm1_3.d f+ var_198.d
                var_1f0_1.d = (*arg1[1]).d
                zmm0_2.d = zmm0_2.d f+ rax_6
                var_1b8 = zmm1_3.d
                int32_t var_1b0_2 = zmm0_2.d
                var_208_1.q = &var_1b8
                int32_t var_180_1 = zmm3_2.d
                int32_t var_17c_1 = zmm14_1.d
                float var_1b4_2 = var_188_1 f* zmm3_2.d f+ var_198:4.d
                char rax_8
                uint64_t zmm6_2
                float zmm7_2
                int32_t zmm9_2
                int32_t zmm13
                uint128_t zmm14_2
                rax_8, zmm6_2, zmm7_2, zmm9_2, zmm13, zmm14_2 = sub_14174bd50(zmm14_1, zmm3_2, 
                    &var_18c, &var_198, var_208_1, rcx_9 + 0x28, rcx_9 + 0x34, var_1f0_1.d, 
                    var_1e8_1, var_1e0_1, var_1d8_1, var_1d0_1)
                int32_t rcx_10 = *(arg4 + 8)
                var_198 = *arg4
                void** const var_1a8_2 = &data_142fc4eb0
                int32_t var_1a0_2 = 0x1010303
                char var_19c_2 = 1
                uint64_t zmm0_3
                zmm0_3.d = (*arg6).d f- zmm7_2
                float zmm1_4 = *(arg6 + 4) f- zmm6_2.d
                var_18c = zmm0_3.d
                zmm0_3.d = (*(arg6 + 8)).d f- zmm9_2
                int32_t var_184_2 = zmm0_3.d
                uint128_t zmm0_4 = sub_141750780(&var_18c)
                void* var_1c8_2 = &var_168
                uint128_t zmm1_5
                zmm1_5.d = var_18c.d f* zmm0_4.d
                void var_c4
                int32_t* var_1d0_2 = &var_c4
                int32_t var_ec
                int32_t* var_1d8_2 = &var_ec
                int64_t* var_1e0_2 = &var_104
                zmm1_5.d = zmm1_5.d f+ var_198.d
                var_1e8_1.d = 0
                float zmm2_4 = zmm1_4 f* zmm0_4.d f+ var_198:4.d
                var_1f0_1.d = zmm13
                int32_t var_180_2 = zmm0_4.d
                var_1b8 = zmm1_5.d
                zmm1_5.d = var_184_2.d f* zmm0_4.d
                int32_t var_17c_2 = zmm14_2.d
                zmm1_5.d = zmm1_5.d f+ rcx_10
                float var_1b4_3 = zmm2_4
                var_208_1.q = &var_1b8
                int32_t var_1b0_3 = zmm1_5.d
                char rax_10
                float zmm6_3
                float zmm7_3
                float zmm8_3
                int32_t zmm9_3
                int32_t zmm13_1
                uint128_t zmm14_3
                rax_10, zmm6_3, zmm7_3, zmm8_3, zmm9_3, zmm13_1, zmm14_3 = sub_14174bd50(zmm14_2, 
                    zmm0_4, &var_18c, &var_198, var_208_1, rcx_9 + 0x28, rcx_9 + 0x34, var_1f0_1.d, 
                    var_1e8_1, var_1e0_2, var_1d8_2, var_1d0_2)
                int32_t rcx_12 = r13[2]
                uint64_t zmm0_5 = *r13
                zmm7_3 = zmm7_3 f- r13[1]
                zmm6_3 = zmm6_3 f- r13[2]
                int32_t var_1a0_3 = 0x1010303
                var_18c = zmm8_3 f- *r13
                char var_19c_3 = 1
                void** const var_1a8_3 = &data_142fc4eb0
                var_198 = zmm0_5
                uint128_t zmm0_6 = sub_141750780(&var_18c)
                void* var_1c8_3 = &var_168
                void var_b8
                int32_t* var_1d0_3 = &var_b8
                uint128_t zmm1_6
                zmm1_6.d = var_18c.d f* zmm0_6.d
                int32_t var_e0[0x4]
                int32_t* var_1d8_3 = &var_e0
                int64_t* var_1e0_3 = &var_100
                zmm1_6.d = zmm1_6.d f+ var_198.d
                int32_t var_180_3 = zmm0_6.d
                float zmm2_5 = zmm7_3 f* zmm0_6.d f+ var_198:4.d
                int32_t var_17c_3 = zmm14_3.d
                var_1e8_1.d = zmm9_3
                var_1b8 = zmm1_6.d
                zmm1_6.d = zmm6_3.d f* zmm0_6.d
                float var_1b4_4 = zmm2_5
                zmm1_6.d = zmm1_6.d f+ rcx_12
                int32_t var_1b0_4 = zmm1_6.d
                var_1f0_1.d = zmm13_1
                var_208_1.q = &var_1b8
                char rax_11
                float zmm9_4
                int512_t zmm13_2
                int512_t zmm14_4
                rax_11, zmm9_4, zmm13_2, zmm14_4, zmm15 = sub_14174bd50(zmm14_3, zmm0_6, &var_18c, 
                    &var_198, var_208_1, rcx_9 + 0x28, rcx_9 + 0x34, var_1f0_1.d, var_1e8_1, 
                    var_1e0_3, var_1d8_3, var_1d0_3)
                zmm14_4.o = var_88_1
                zmm13_2.o = arg5
                int32_t rcx_14 = -1
                uint128_t zmm6_4 = zx.o(0)
                
                if (rax_8 != 0)
                    zmm6_4 = var_108
                    rcx_14 = 0
                    *result_1 = 1
                    result_1 = arg1[3]
                
                result = result_1
                
                if (rax_10 != 0)
                    zmm0_1 = var_104
                    
                    if (*result_1 == 0 || not(zmm0_1.d f>= zmm6_4.d))
                        rcx_14 = 1
                        zmm6_4 = zmm0_1
                        *result_1 = 1
                        result = arg1[3]
                
                result_1 = result
                
                if (rax_11 != 0)
                    zmm0_1 = var_100.d
                
                if (rax_11 != 0 && (*result == 0 || not(zmm0_1.d f>= zmm6_4.d)))
                    *result = 1
                    zmm6_4 = zmm0_1
                    result_1 = arg1[3]
                    rcx_14 = 2
                label_1417150ec:
                    int64_t rcx_15 = sx.q(rcx_14) * 3
                    result = *arg1
                    void var_c8
                    r8_6 = *(&var_c8 + (rcx_15 << 2))
                    zmm5_1 = zx.o(*(&var_d0 + (rcx_15 << 2)))
                    int128_t zmm4_2 = result[0x10]
                    float zmm1_7 = zmm4_2.d
                    void var_f4
                    float zmm2_6 = *(&var_f4 + (rcx_15 << 2))
                    zmm0_1.d = zmm5_1.d f* zmm4_2.d
                    zmm4_2.d = zmm4_2.d f* r8_6
                    int128_t zmm3_3
                    zmm3_3.d = (&var_f8)[rcx_15].d f- zmm0_1.d
                    zmm1_7 = zmm1_7 f* _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55).d
                    void var_f0
                    zmm0_1.d = (*(&var_f0 + (rcx_15 << 2))).d f- zmm4_2.d
                    var_178.d = zmm3_3.d
                    var_170_1 = zmm0_1.d
                    var_178:4.d = zmm2_6 - zmm1_7
                    
                    if (not(zmm15.d f!= zmm9_4))
                        zmm0_1.d = result[0xa].d f- var_138.d
                        zmm4_2 = var_128
                        zmm5_1 = var_12c_1.d
                        zmm3_3 = rax_2
                        zmm0_1.d = zmm0_1.d f* zmm5_1.d
                        float var_1b0_5
                        
                        if ((result[0xb] f- var_138:4.d) f* zmm4_2.d f+ zmm0_1.d
                                + (result[0xc] f- rax_1) f* zmm3_3.d < zmm9_4)
                            var_1b8 = (zmm5_1 ^ 0x80000000).d
                            int32_t var_1b4_5 = (zmm4_2 ^ 0x80000000).d
                            var_1b0_5 = (zmm3_3 ^ 0x80000000).d
                        else
                            var_1b8.q = var_12c_1
                            var_1b0_5 = rax_2
                        
                        zmm5_1 = zx.o(var_1b8.q)
                        r8_6 = var_1b0_5
                    
                    zmm15 = zmm6_4
                else
                    if (rcx_14 != 0xffffffff)
                        goto label_1417150ec
                    
                    zmm5_1 = zx.o(var_160)
                    r8_6 = var_158_1
            
            if (*result_1 != 0)
                int32_t* r9_5 = *arg1
                
                if (not(zmm15.d f>= *r9_5))
                    int32_t temp0_3
                    int32_t temp1_1
                    temp0_3:temp1_1 = sx.q(arg2)
                    int32_t rax_17 = (temp1_1 - temp0_3) s>> 1
                    char* rcx_16 = sx.q(rax_17)
                    void* rax_18
                    
                    if (rax_17 s>= 0)
                        rax_18 = *(r9_5 + 0x20)
                    
                    if (rax_17 s< 0 || rcx_16.d s>= *(rax_18 + 0x18)
                            || *(rcx_16 + *(rax_18 + 0x10)) != 0xff)
                        *(r9_5 + 4) = var_178
                        r9_5[3] = var_170_1
                        void* rax_20 = *arg1
                        *(rax_20 + 0x10) = zmm5_1.q
                        *(rax_20 + 0x18) = r8_6
                        **arg1 = zmm15.d
                        *(*arg1 + 0x1c) = arg2
                        *arg1[1] = zmm15.d
            
            result.b = 1
        else
            zmm6_1 = rsi_1[0xa]
            zmm8_1 = rsi_1[0xb]
            zmm7_1 = rsi_1[0xc]
            zmm0_1.d = zmm6_1.d f- var_138.d
            var_208_1.q = arg6
            zmm0_1.d = zmm0_1.d f* zmm2_1
            float zmm3_1 =
                (zmm8_1.d f- var_138:4.d) f* zmm5_1.d f+ zmm0_1.d + (zmm7_1.d - rax_1) * rax_2
            zmm0_1.d = zmm6_1.d f- zmm3_1 * zmm2_1
            var_1b8 = zmm0_1.d
            zmm0_1.d = zmm8_1.d f- zmm3_1 f* zmm5_1.d
            int32_t var_1b4_1 = zmm0_1.d
            zmm0_1.d = zmm7_1.d f- zmm3_1 * rax_2
            int32_t var_1b0_1 = zmm0_1.d
            int32_t var_118
            zmm6_1, zmm7_1, zmm8_1, zmm9_1, arg5, zmm14_1 =
                sub_1415c64e0(&var_118, &var_1b8, r13, arg4, var_208_1, &rsi_1[0xa])
            int32_t var_114
            zmm8_1.d = zmm8_1.d f- var_114
            zmm6_1.d = zmm6_1.d f- var_118
            int32_t var_110
            zmm7_1.d = zmm7_1.d f- var_110
            zmm8_1.d = zmm8_1.d f* zmm8_1.d
            zmm6_1.d = zmm6_1.d f* zmm6_1.d
            zmm7_1.d = zmm7_1.d f* zmm7_1.d
            zmm8_1.d = zmm8_1.d f+ zmm6_1.d
            zmm8_1.d = zmm8_1.d f+ zmm7_1.d
            
            if (zmm8_1.d f> *arg1[2])
                zmm8_1 = zx.o(0)
                goto label_141714d05
            
            zmm0_1 = zx.o(var_118.q)
            *rsi_1 = 0
            void* rcx_2 = *arg1
            *(rcx_2 + 4) = zmm0_1.q
            *(rcx_2 + 0xc) = var_110
            void* rax_5 = *arg1
            int32_t rcx_3 = var_100.d
            *(rax_5 + 0x10) = zmm9_1.q
            *(rax_5 + 0x18) = rcx_3
            (*arg1)[7] = arg2
            result.b = 0

__security_check_cookie(var_a8 ^ &var_228)
return result
