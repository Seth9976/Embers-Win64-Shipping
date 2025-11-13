// 函数: sub_1421f04f0
// 地址: 0x1421f04f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int32_t r14 = *(arg3 + 0x1548)
int64_t rax_3 = *arg1
int32_t var_298 = r14
uint64_t result = (*(rax_3 + 0x60))()
uint64_t result_1 = result

if ((*(arg1 + 0xc) & 2) != 0 && result != 0)
    result = zx.q(*(result + 0xb4))
    
    if (result.b == 0)
        int64_t r8 = *arg1
        int32_t var_2a8 = *(result_1 + 0xc)
        int32_t rax_5 = (*(r8 + 0x50))(arg1, zx.q(r14), r8)
        void* rcx_1 = *(result_1 + 0x68)
        int32_t var_2a0_1 = 4
        int32_t var_274_1 = 2
        
        if ((*(rcx_1 + 0x28) & 1) != 0)
            var_2a0_1 = *(rcx_1 + 4)
            var_274_1 = *(rcx_1 + 8)
        
        int32_t r14_1 = 0
        int32_t rcx_3
        rcx_3.b = sub_1422eb5d0(arg3) != 0
        int32_t var_288 = rcx_3 + 1
        
        if (sub_1421df8c0(arg7, arg4) != 0)
            void** rax_10 = &data_143a2efc8
            
            if (var_2a0_1 == 4)
                rax_10 = &data_143a2efb0
            
            int128_t zmm7
            int128_t var_58_1 = zmm7
            int128_t zmm9
            int128_t var_78_1 = zmm9
            char var_2b8
            char* var_228_1 = &var_2b8
            var_2b8 = 0
            void*** (* var_230)() = j_sub_140597fc0
            void*** rax_12 =
                sub_14081d830(0x18, sub_140a756e0(&var_230, &data_143958018) + 0x10, 1, 0)
            void*** var_268_1 = rax_12
            
            if (rax_12 == 0)
                var_268_1 = nullptr
            else
                rax_12[1] = 0
                *rax_12 = &data_1432eeae8
                rax_12[2] = 0
            
            int32_t rcx_8 = arg6[0x18].d
            int32_t var_2b0 = rcx_8
            arg6[0x18].d = rcx_8 + 1
            
            if (rcx_8 + 1 s> *(arg6 + 0xc4))
                sub_14083a310(&arg6[0x17], rcx_8)
                rcx_8 = var_2b0
            
            *(arg6[0x17] + (sx.q(rcx_8) << 3)) = var_268_1
            var_268_1[1] = arg7
            uint128_t zmm8
            
            if (*(result_1 + 0xb0) == 0)
                zmm8 = sub_142208cb0(arg2)
            
            int64_t* rax_15 = arg6[0x1b]
            int32_t rbx_1 = var_288
            zmm7 = zx.o(0)
            uint128_t var_68_1 = zmm8
            var_2b0.q = rax_15
            int128_t var_258_1
            __builtin_memset(&var_258_1, 0, 0x14)
            void var_198
            int64_t* rax_16 = sub_141996dc0(rax_15, &var_198, rbx_1 * rax_5 * var_2a8)
            zmm9 = *rax_16
            int64_t zmm6_1 = rax_16[2]
            int128_t var_210_1 = zmm9
            int32_t var_200_1 = zmm6_1.d
            sub_1419a4810(var_2b0.q)
            int32_t var_248
            int64_t* rcx_13
            
            if ((arg1[5].b & 1) == 0)
                zmm8 = zx.o(var_248.q)
            else
                void var_180
                int64_t* rax_17 = sub_141996dc0(var_2b0.q, &var_180, (rbx_1 * var_2a8) << 4)
                rcx_13 = var_2b0.q
                zmm7 = *rax_17
                zmm8 = zx.o(rax_17[2])
                var_258_1 = zmm7
                var_248.q = zmm8.q
                sub_1419a4810(rcx_13)
            
            int64_t rax_18 = zmm9.q
            var_2b0.q = rax_18
            
            if (rax_18 != 0 && ((arg1[5].b & 1) == 0 || var_258_1.q != 0))
                rcx_13.b = 0
                
                if (*(result_1 + 0x44) != 0)
                    rcx_13 = arg1[4]
                    
                    if (rcx_13 == 0)
                        rcx_13.b = 0
                    else
                        int64_t rax_19 = *rcx_13
                        uint64_t rdx_7 = zx.q(var_298)
                        int64_t var_240 = 0
                        int64_t* rax_20
                        rax_20, rcx_13 = (*(rax_19 + 0x40))(rcx_13, rdx_7, &var_240)
                        
                        if (rax_20 == 0)
                            rbx_1 = var_288
                            rcx_13.b = 0
                        else
                            int64_t rdx_8 = *rax_20
                            int32_t rax_21
                            rax_21, rcx_13 = (*(rdx_8 + 0x1d8))(rax_20, rdx_8)
                            
                            if (rax_21 == 2)
                                rbx_1 = var_288
                                rcx_13.b = 1
                            else
                                int64_t rdx_9 = *rax_20
                                int32_t rax_22
                                rax_22, rcx_13 = (*(rdx_9 + 0x1d8))(rax_20, rdx_9)
                                
                                if (rax_22 == 5)
                                    rbx_1 = var_288
                                    rcx_13.b = 1
                                else
                                    int32_t rax_24
                                    rax_24, rcx_13 = (*(*rax_20 + 0x1d8))(rax_20)
                                    
                                    if (rax_24 == 6 || *(result_1 + 0x44) - 3 u<= 1)
                                        rbx_1 = var_288
                                        rcx_13.b = 1
                                    else
                                        rbx_1 = var_288
                                        rcx_13.b = 0
                
                char var_2e8
                float (* var_2e0)[0x4]
                void* var_2d8
                int32_t var_2d0
                void* var_2c8
                float (* var_2c0)[0x4]
                
                if (*(arg6 + 0xec) == 0)
                    float (* rbx_4)[0x4] = nullptr
                    
                    if (rcx_13.b != 0)
                        int32_t rcx_26 = var_2a8
                        
                        if (rcx_26 s<= data_143f50874)
                            rbx_4 = data_143f50868
                        else
                            int32_t rax_38 = 0x40
                            
                            if (rcx_26 s>= 0x40)
                                rax_38 = rcx_26
                            
                            int64_t rcx_27 = data_143f50868
                            data_143f50874 = rax_38
                            float (* rax_39)[0x4] = sub_140a84c80(rcx_27, sx.q(rax_38) << 3, 0)
                            rcx_26 = var_2a8
                            rbx_4 = rax_39
                            data_143f50868 = rax_39
                        
                        data_143f50870 = rcx_26
                        var_2c0 = rbx_4
                        var_2c8 = arg2 + 0x80
                        var_2d0.q = arg3
                        var_2e0.d = *(result_1 + 0x10)
                        var_2e8.q = *(result_1 + 0x28)
                        sub_1421fd3b0(arg1, *(result_1 + 0x44), *(result_1 + 0xb0), 
                            *(result_1 + 0xc), var_2e8, var_2e0, (*(result_1 + 0x30)).d, var_2d0, 
                            var_2c8, var_2c0, var_2b8)
                    
                    var_2d0 = var_288
                    var_2d8 = arg2 + 0x80
                    var_2e8.q = rbx_4
                    sub_1421f4700(arg1, var_2b0.q, var_258_1.q, 0, var_2e8, arg3 + 0x60c, var_2d8.d)
                else
                    char var_1a8_1 = rcx_13.b
                    uint64_t result_2 = result_1
                    void* var_1e0_1 = arg2
                    int32_t var_1a4_1 = var_2a8
                    int32_t var_1a0_1 = 1
                    int32_t var_19c_1 = rbx_1
                    void*** rax_29 = sub_140a82f30(0x68, 8)
                    char var_2b7 = 0
                    *rax_29 = &data_1433027f8
                    *(rax_29 + 8) = arg1.o
                    *(rax_29 + 0x18) = arg3.o
                    *(rax_29 + 0x28) = zmm9
                    int128_t zmm0_1
                    zmm0_1.q = zmm6_1
                    double temp0_1[0x2] = _mm_unpacklo_pd(zmm7, zmm8.q)
                    *(rax_29 + 0x38) = zmm0_1
                    *(rax_29 + 0x48) = temp0_1
                    *(rax_29 + 0x58) = var_1a8_1.o
                    void*** var_b8_1 = rax_29
                    int64_t (* var_c8)(int64_t* arg1)
                    int64_t (* rax_30)(int64_t* arg1) = var_c8
                    
                    if (rax_29 != -8)
                        rax_30 = j_sub_1421d9670
                    
                    int64_t (* var_c8_1)(int64_t* arg1) = rax_30
                    char* var_218_1 = &var_2b7
                    void*** (* var_220)() = j_sub_140597fc0
                    int64_t* rax_32 =
                        sub_14081d830(0x40, sub_140a756e0(&var_220, &data_143958018) + 0x10, 1, 0)
                    int64_t* rbx_3 = rax_32
                    int128_t var_a8
                    
                    if (rax_32 == 0)
                        rbx_3 = nullptr
                    else
                        *rax_32 = var_c8_1
                        rax_32[2] = var_b8_1
                        var_b8_1 = nullptr
                        *(rax_32 + 0x20) = var_a8
                        int128_t var_98
                        *(rax_32 + 0x30) = var_98
                        int64_t (* rax_33)(int64_t* arg1) = var_c8_1
                        
                        if (*rbx_3 != 0)
                            rax_33 = nullptr
                        
                        var_c8_1 = rax_33
                    
                    int32_t rcx_23 = arg6[0x1f].d
                    var_298 = rcx_23
                    arg6[0x1f].d = rcx_23 + 1
                    
                    if (rcx_23 + 1 s> *(arg6 + 0xfc))
                        sub_14083a310(&arg6[0x1e], rcx_23)
                        rcx_23 = var_298
                    
                    *(arg6[0x1e] + (sx.q(rcx_23) << 3)) = rbx_3
                    
                    if (var_c8_1 != 0)
                        int64_t* rax_36 = var_b8_1
                        int64_t* rcx_25 = &var_a8
                        
                        if (rax_36 != 0)
                            rcx_25 = rax_36
                        
                        (*(*rcx_25 + 0x10))(rcx_25)
                
                int128_t zmm1_2 = *(arg1 + 0x110)
                int128_t var_168 = *(arg1 + 0x100)
                int128_t var_158_1 = zmm1_2
                int128_t var_148_1 = *(arg1 + 0x120)
                int128_t var_138_1 = *(arg1 + 0x130)
                int128_t var_128_1 = *(arg1 + 0x140)
                int128_t var_118_1 = *(arg1 + 0x150)
                int128_t var_108_1 = *(arg1 + 0x160)
                int128_t var_f8_1 = *(arg1 + 0x170)
                int128_t var_e8_1 = *(arg1 + 0x180)
                int128_t var_d8_1 = *(arg1 + 0x190)
                sub_1421f22f0(arg2, arg3, &var_298, &var_2b0)
                float zmm3_1[0x4] = var_298
                int32_t zmm1_3 = var_2b0
                int64_t* rcx_32 = data_143f0f180
                float temp0_2[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                int32_t var_294
                temp0_2[0] = var_294
                var_2e0.d = 1
                float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
                temp0_3[0] = zmm1_3
                var_2e8.d = 1
                float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
                int32_t var_2ac
                temp0_4[0] = var_2ac
                float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
                var_288.o = temp0_5
                float var_f8_2[0x4] = temp0_5
                (*(*rcx_32 + 0xf8))(rcx_32, &var_288, &var_168, &data_143f50e30, var_2e8, var_2e0, 
                    var_2d8, var_2d0, var_2c8, var_2c0)
                void* rax_49 = var_288.q
                var_2a8.q = rax_49
                
                if (rax_49 != 0)
                    *(rax_49 + 8) += 1
                
                sub_1405d1550(&var_288)
                sub_1405d1600(&var_268_1[2], &var_2a8)
                sub_1405d1550(&var_2a8)
                sub_1405d16e0(arg7 + 0x158, var_268_1[2])
                int64_t var_208
                sub_142221960(arg7, var_208, var_200_1, rax_5.w)
                (*(*arg1 + 0x58))(arg1)
                sub_142221890(arg7, var_258_1:8.q, var_248)
                void* rax_52 = *(result_1 + 0x68)
                
                if ((*(rax_52 + 0x28) & 1) != 0)
                    int64_t rcx_40 = *(rax_52 + 0x20)
                    *(arg7 + 0x160) = *(rax_52 + 4)
                    *(arg7 + 0x168) = rcx_40
                
                sub_1422221c0(arg7, rax_10)
        
        int32_t rax_54 = *(arg1 + 0xbc)
        int32_t rbx_6 = *(arg1 + 0x3c)
        
        if (rax_54 s>= 0 && rbx_6 s> rax_54)
            rbx_6 = rax_54
        
        int64_t* rax_55 = sub_140820290(arg6)
        int64_t* rsi_1 = rax_55
        int64_t* rcx_43 = rax_55[0xd]
        
        if (rcx_43 != 0)
            rax_55 = rcx_43
        
        void** rcx_44 = &data_143a2eff8
        
        if (var_274_1 == 2)
            rcx_44 = &data_143a2efe0
        
        rax_55[2] = rcx_44
        *(rax_55 + 0x44) = var_274_1
        rax_55[9].d = rbx_6
        rax_55[8].d = 0
        rsi_1[0xf] = arg7
        rsi_1[0x11] = 0
        int64_t rcx_45
        
        if (*(result_1 + 0xb0) != 1)
            rcx_45 = *(arg2 + 0x360)
        else
            rcx_45 = *(arg2 + 0x140)
        
        *rax_55 = rcx_45
        rax_55[0xa].d = 0
        *(rax_55 + 0x54) = var_2a0_1 * rbx_6 - 1
        *(rsi_1 + 0x9c) ^= (zx.d(*(arg2 + 0x168)) << 2 ^ *(rsi_1 + 0x9c)) & 4
        int32_t rbx_7 = *(rsi_1 + 0x9c)
        int32_t rcx_54 = ((zx.d(sub_14082c3b0(arg2, arg3)) << 0xd ^ rbx_7) & 0xe000) ^ rbx_7
        *(rsi_1 + 0x9c) = rcx_54
        int64_t rax_61 = arg1[4]
        int32_t rcx_56 = (rcx_54 & 0xffffe07f) | 0x10000
        *(rsi_1 + 0x9c) = rcx_56
        rsi_1[0x10] = rax_61
        
        if (*(arg2 + 0x35) s< 0 || (*(arg2 + 0x36) & 1) != 0)
            r14_1 = 0x20000
        
        *(rsi_1 + 0x9c) = (rcx_56 & 0xfffdffff) | r14_1
        result = sub_1422dd2a0(arg6, arg5, rsi_1)
    else if (result.b == 1)
        void* rax_62 = arg6[0xc]
        void* r10_1 = &arg6[0xa]
        
        if (rax_62 != 0)
            r10_1 = rax_62
        
        result = (*(*arg1 + 0x70))(arg1, arg2, *(r10_1 + (sx.q(arg5) << 3)), arg3, 0)
    else if (result.b == 2)
        void* rax_63 = arg6[0xc]
        void* rcx_61 = &arg6[0xa]
        
        if (rax_63 != 0)
            rcx_61 = rax_63
        
        result = (*(*arg1 + 0x70))(arg1, arg2, *(rcx_61 + (sx.q(arg5) << 3)), arg3, 1)

__security_check_cookie(rax_1 ^ &var_308)
return result
