// 函数: sub_141482500
// 地址: 0x141482500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
uint128_t zmm6 = arg4
int32_t* r13 = nullptr
int32_t var_2e8 = 0
uint32_t rcx = zx.d(*(*(arg1 + 0x20) + 0x13c))

if (rcx == 1)
label_1414825a8:
    r13 = arg9
    var_2e8 = data_1439b6dfc
else if (rcx == 2)
    r13 = arg10
    var_2e8 = data_1439b6e00
else if (rcx == 3)
    goto label_1414825a8

uint64_t result

if (data_1439b6df8 == 0)
label_141482c5a:
    *arg11 = 1
    *arg12 = 2
    result = sub_14122ea30(arg6 + 0x1ab8, *(arg1 + 0x28))
else
    if (arg2 != 0)
        int32_t rbx_1 = (*U"1111")[sx.q(*(arg6 + 8))]
        
        if (sub_14122e130(rbx_1) == 0 && sub_14131f330(rbx_1) == 0)
            goto label_141482c5a
    
    int32_t* rcx_10
    
    if (*(arg6 + 0x1ac0) == *(arg6 + 0x1aec))
    label_141482672:
        rcx_10 = nullptr
    else
        void* rdx = *(arg6 + 0x1af8)
        void* r8_1 = arg6 + 0x1af0
        int64_t r9_1 = sx.q(*(arg1 + 0x28))
        
        if (rdx != 0)
            r8_1 = rdx
        
        int32_t rax_9 = *(r8_1 + (((sx.q(*(arg6 + 0x1b00)) - 1) & r9_1) << 2))
        
        if (rax_9 == 0xffffffff)
        label_141482672_1:
            rcx_10 = nullptr
        else
            while (true)
                rcx_10 = sx.q(rax_9) * 0x290 + *(arg6 + 0x1ab8)
                
                if (*rcx_10 == r9_1.d)
                    break
                
                rax_9 = rcx_10[0xa0]
                
                if (rax_9 == 0xffffffff)
                    goto label_141482672_2
            
            if (rax_9 == 0xffffffff)
            label_141482672_2:
                rcx_10 = nullptr
    
    int128_t* rbx_2 = &rcx_10[4]
    
    if (rcx_10 == 0)
        rbx_2 = nullptr
    
    if (rbx_2 == 0)
        result = sub_1413e8f90(arg6)
        
        if (result s>= sx.q(data_1439b6e04 << 0x14))
            *arg11 = 1
            *arg12 = 2
        else
            *arg11 = 2
            *arg12 = 1
            *r13 += 1
            int128_t zmm1_2 = arg7[1]
            int128_t var_2c8 = *arg7
            int128_t var_2b8_1 = zmm1_2
            int128_t var_2a8_1 = arg7[2]
            int128_t var_298_1 = arg7[3]
            int128_t var_288_1 = arg7[4]
            int128_t var_278_1 = arg7[5]
            int128_t var_268_1 = arg7[6]
            int128_t var_258_1 = arg7[7]
            int128_t var_248_1 = arg7[8]
            int128_t var_238_1 = arg7[9]
            int128_t var_228_1 = arg7[0xa]
            int128_t var_218_1 = arg7[0xb]
            int32_t var_208_1 = arg7[0xc].d.d
            int32_t var_204_1 = (*(arg7 + 0xc4)).d
            void var_1f8
            sub_1413be260(&var_1f8, &arg7[0xd])
            char var_b8_1 = arg7[0x21].b
            int32_t var_b4_1 = *(arg7 + 0x214)
            char var_a8_1 = arg7[0x22].b
            int128_t var_d8_1 = arg7[0x1f]
            char var_a7_1 = *(arg7 + 0x221)
            int32_t var_b0_1 = (*(arg7 + 0x218)).d
            int32_t var_60_1 = arg3.d
            int128_t var_c8_1 = arg7[0x20]
            int64_t var_78_1 = 0
            int32_t var_70_1 = 0
            int32_t var_6c_1 = 4
            int64_t var_68_1 = 0
            char var_5c_1 = 1
            sub_14146e9b0(arg6 + 0x1ab8, arg1 + 0x28, &var_2c8)
            void var_98
            result = sub_141413020(&var_98)
            int64_t var_f8
            
            if (var_f8 != 0)
                result = sub_140a74f90(var_f8)
            
            int64_t var_198
            
            if (var_198 != 0)
                result = sub_140a74f90(var_198)
    else
        if (not(*rbx_2 f!= *arg7) && not(*(rbx_2 + 4) f!= *(arg7 + 4))
                && not(*(rbx_2 + 8) f!= *(arg7 + 8)))
            void* r8_3 = &rbx_2[1]
            
            for (int64_t i = 0; i s< 4; )
                int64_t j = 0
                void* rax_10 = r8_3
                
                do
                    if (*rax_10 f!= *(arg7 - rbx_2 + rax_10))
                        goto label_141482a77
                    
                    j += 1
                    rax_10 += 4
                while (j s< 4)
                
                i += 1
                r8_3 += 0x10
        
        void* rcx_27
        
        if (*rbx_2 f!= *arg7 || *(rbx_2 + 4) f!= *(arg7 + 4) || *(rbx_2 + 8) f!= *(arg7 + 8)
            || rbx_2[5].d f!= arg7[5].d || *(rbx_2 + 0x54) f!= *(arg7 + 0x54)
            || *(rbx_2 + 0x58) f!= *(arg7 + 0x58) || *(rbx_2 + 0x5c) f!= *(arg7 + 0x5c)
            || rbx_2[6].d f!= arg7[6].d || *(rbx_2 + 0x64) f!= *(arg7 + 0x64)
            || *(rbx_2 + 0x68) f!= *(arg7 + 0x68) || *(rbx_2 + 0x6c) f!= *(arg7 + 0x6c)
            || rbx_2[7].d f!= arg7[7].d || *(rbx_2 + 0x74) f!= *(arg7 + 0x74)
            || *(rbx_2 + 0x78) f!= *(arg7 + 0x78) || *(rbx_2 + 0x7c) f!= *(arg7 + 0x7c)
            || rbx_2[8].d f!= arg7[8].d || rbx_2[9].d f!= arg7[9].d
            || *(rbx_2 + 0x94) f!= *(arg7 + 0x94) || *(rbx_2 + 0x98) f!= *(arg7 + 0x98)
            || *(rbx_2 + 0x9c) f!= *(arg7 + 0x9c) || rbx_2[0xa].d f!= arg7[0xa].d
            || *(rbx_2 + 0xa4) f!= *(arg7 + 0xa4) || arg7[0x22].b != rbx_2[0x22].b
            || *(arg7 + 0x221) != *(rbx_2 + 0x221))
        label_141482a77:
            rcx_27 = &rbx_2[0x23]
        label_141482a7e:
            *arg11 = 1
            *arg12 = 2
            sub_141425640(rcx_27)
        else
            int64_t* rcx_11 = rbx_2[0x26].q
            void* rsi_3 = &rbx_2[0x23]
            
            if (rcx_11 != 0)
            label_14148289c:
                int64_t rax_16 = *((*(*rcx_11 + 0x10))(rcx_11) + 0x14)
                
                if (rax_16.d != *arg8 || (rax_16 u>> 0x20).d != arg8[1])
                    goto label_1414828c6
                
                *arg11 = 1
                *arg12 = 0
            else
                if (*(rbx_2 + 0x258) s> rcx_11.d)
                    void* rax_13 = *(rsi_3 + 0x20)
                    void* rcx_12 = rsi_3
                    
                    if (rax_13 != 0)
                        rcx_12 = rax_13
                    
                    rcx_11 = *rcx_12
                    goto label_14148289c
                
            label_1414828c6:
                
                if (sub_1413e8f90(arg6) s>= sx.q(data_1439b6e04) << 0x14)
                    rcx_27 = rsi_3
                    goto label_141482a7e
                
                *arg11 = 2
                *arg12 = 1
                *r13 += 1
                int64_t* rcx_17 = *(rsi_3 + 0x30)
                
                if (rcx_17 != 0)
                label_141482918:
                    
                    if (*((*(*rcx_17 + 0x10))(rcx_17) + 0x14) s<= *arg5)
                        int64_t* rcx_20 = *(rsi_3 + 0x30)
                        
                        if (rcx_20 == 0)
                            void* rax_23 = *(rsi_3 + 0x20)
                            void* rcx_21 = rsi_3
                            
                            if (rax_23 != 0)
                                rcx_21 = rax_23
                            
                            rcx_20 = *rcx_21
                        
                        if ((*((*(*rcx_20 + 0x10))(rcx_20) + 0x14) u>> 0x20).d s<= arg5[1])
                            int64_t* rcx_22 = *(rsi_3 + 0x30)
                            
                            if (rcx_22 == 0)
                                void* rax_28 = *(rsi_3 + 0x20)
                                void* rcx_23 = rsi_3
                                
                                if (rax_28 != 0)
                                    rcx_23 = rax_28
                                
                                rcx_22 = *rcx_23
                            
                            int64_t rdx_3 = *((*(*rcx_22 + 0x10))(rcx_22) + 0x14)
                            
                            if (*r13 u> var_2e8)
                            label_141482a26:
                                int64_t* rcx_25 = *(rsi_3 + 0x30)
                                
                                if (rcx_25 == 0)
                                    void* rax_34 = *(rsi_3 + 0x20)
                                    
                                    if (rax_34 != 0)
                                        rsi_3 = rax_34
                                    
                                    rcx_25 = *rsi_3
                                
                                int64_t rax_37 = *((*(*rcx_25 + 0x10))(rcx_25) + 0x14)
                                *arg8 = rax_37.d
                                arg8[1] = (rax_37 u>> 0x20).d
                                sub_1414766e0(arg7, rbx_2)
                                *arg11 = 1
                                *arg12 = 0
                                *r13 -= 1
                            else
                                int32_t r10_1 = *arg8
                                uint32_t r8_5 = (rdx_3 u>> 0x20).d
                                
                                if (r10_1 s< rdx_3.d || arg8[1] s< r8_5)
                                    int64_t rcx_24 = *arg8
                                    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(rdx_3.d))
                                    uint32_t r9_3 = (rcx_24 u>> 0x20).d
                                    float zmm2 = zmm1_1.d f- zmm6.d
                                    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rcx_24.d))
                                    arg4 = _mm_cvtepi32_ps(zx.o((rdx_3 u>> 0x20).d))
                                    zmm1_1.d = zmm1_1.d f- zmm0_1.d
                                    zmm2 = zmm2 f/ zmm1_1.d
                                    
                                    if (r9_3 s>= r8_5)
                                        zmm1_1 = zx.o(0)
                                    else
                                        zmm1_1.d = arg4.d f- zmm6.d
                                        arg4.d = arg4.d f- _mm_cvtepi32_ps(zx.o(r9_3)).d
                                        zmm1_1.d = zmm1_1.d f/ arg4.d
                                    
                                    if (r10_1 s>= rdx_3.d)
                                        zmm2 = (zx.o(0)).d
                                    
                                    zmm2 = _mm_max_ss(zmm2, zmm1_1.d)
                                    
                                    if (not(zmm2 f<= (zx.o(0)).d) && not(zmm2 >= 0.5f))
                                        goto label_141482a26
                else if (*(rsi_3 + 0x28) s> rcx_17.d)
                    void* rax_19 = *(rsi_3 + 0x20)
                    void* rcx_18 = rsi_3
                    
                    if (rax_19 != 0)
                        rcx_18 = rax_19
                    
                    rcx_17 = *rcx_18
                    goto label_141482918
        result = sub_1414766e0(rbx_2, arg7)
        *(rbx_2 + 0x268) = arg3.d

__security_check_cookie(rax_1 ^ &var_308)
return result
