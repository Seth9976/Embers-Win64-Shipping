// 函数: sub_142bc43d0
// 地址: 0x142bc43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t* rsi = arg2
int64_t* r12 = arg1
int512_t zmm0 = memset(arg1, 0, 0xc0)
(**(arg4 + 8))(r12, 0, 0, arg3, arg1)
r12[0x12] = rsi
int32_t rax_3 = sub_1408e52d0(rsi)
int32_t rax_4 = sub_142b96500(rsi, 0x1f)
int32_t rdi_1 = rax_4

if (rax_4 == 0)
    if (strncmp(rsi[7], "%!PS-Adobe-3.0 Resource-CIDFont", zx.q(rax_4 + 0x1f)) != 0)
        rdi_1 = 2
    
    sub_142b96620(rsi)
    
    if (rdi_1 == 0)
    label_142bc44a0:
        int32_t r15_1 = 0
        void var_168
        void* rbx_1 = &var_168
        int32_t rdi_2 = 0x109
        int32_t r13_1 = sub_1408e52d0(rsi)
        
        while (true)
            int32_t rax_7 = sub_1408e52d0(rsi)
            char* rbp_2 = zx.q(rsi[1].d - rax_7)
            
            if (rdi_2 u< rbp_2.d)
                rbp_2 = zx.q(rdi_2)
            
            int32_t rax_8
            rax_8, zmm0 = sub_142b96990(rsi, rbx_1, rbp_2.d, zmm0)
            rdi_1 = rax_8
            
            if (rax_8 != 0)
                break
            
            *(rbp_2 + rbx_1) = rax_8.b
            uint64_t r14_1 = zx.q(rbp_2.d)
            void* rsi_2 = rbx_1 - 6 + r14_1
            void* _Str1 = &var_168
            
            if (&var_168 u< rsi_2)
                while (true)
                    int32_t rax_9
                    
                    if (*_Str1 == 0x53)
                        rax_9 = strncmp(_Str1, "StartData", 9)
                    
                    int32_t r14_2
                    
                    if (*_Str1 == 0x53 && rax_9 == 0)
                        r14_2 = _Str1.d - &var_168 + 0xa
                    else
                        void* _Str1_3 = _Str1 + 1
                        int32_t rax_10
                        
                        if (*(_Str1 + 1) == 0x73)
                            rax_10 = strncmp(_Str1, "/sfnts", 6)
                        
                        if (*(_Str1 + 1) == 0x73 && rax_10 == 0)
                            r14_2 = _Str1.d - &var_168 + 7
                        else
                            _Str1 = _Str1_3
                            
                            if (_Str1_3 u>= rsi_2)
                                break
                            
                            continue
                    
                    int32_t r14_3 = r14_2 + r13_1
                    int32_t rbx_5 = r14_3 - rax_3
                    int32_t rax_14 = sub_142b97060(arg2, rax_3, arg5)
                    rdi_1 = rax_14
                    
                    if (rax_14 != 0)
                        goto label_142bc477d
                    
                    int32_t rax_15 = sub_142b96670(arg2, rbx_5, &r12[0x13])
                    rdi_1 = rax_15
                    
                    if (rax_15 != 0)
                        goto label_142bc477d
                    
                    char* _Str1_2 = r12[0x13]
                    *(r12 + 0xa4) = r14_3
                    r12[2] = &_Str1_2[zx.q(rbx_5)]
                    r12[0x14].d = rbx_5
                    r12[1] = _Str1_2
                    *r12 = _Str1_2
                    r12[0x17].d = 0xffffffff
                    r12[8](r12)
                    r12[7](r12)
                    char* _String = *r12
                    r12[8](r12)
                    r12[7](r12)
                    char* _Str1_1 = *r12
                    int64_t r15_2 = r12[2]
                    
                    if (_Str1_1 u<= r15_2 - 6)
                        int64_t* rax_18 = arg1
                        
                        do
                            if (rax_18[3].d != 0)
                                rdi_1 = rax_18[3].d
                                goto label_142bc477d
                            
                            if (*_Str1_1 == 0x53 && _Str1_1 u<= r15_2 - 9
                                    && strncmp(_Str1_1, "StartData", 9) == 0)
                                int32_t rax_23 = strncmp(_Str1_2, "(Hex)", 5)
                                
                                if (rax_23 != 0)
                                    goto label_142bc477d
                                
                                int32_t rax_24 = strtol(_String, nullptr, rax_23 + 0xa)
                                
                                if (rax_24 s< 0)
                                    goto label_142bc474b
                                
                                arg1[0x15].d = rax_24
                                goto label_142bc477d
                            
                            if (_Str1_1[1] == 0x73 && strncmp(_Str1_1, "/sfnts", 6) == 0)
                                rdi_1 = 2
                                goto label_142bc477d
                            
                            arg1[8](arg1)
                            arg1[7](arg1)
                            rax_18 = arg1
                            _Str1_2 = _String
                            _String = _Str1_1
                            _Str1_1 = *rax_18
                        while (_Str1_1 u<= r15_2 - 6)
                    
                    rsi = arg2
                    sub_142b97020(rsi, &r12[0x13])
                    int32_t rax_22 = sub_142b97060(rsi, r14_3, arg5)
                    rdi_1 = rax_22
                    
                    if (rax_22 != 0)
                        goto label_142bc477d
                    
                    r12 = arg1
                    goto label_142bc44a0
            
            if (r15_1 + rbp_2.d u< 9)
            label_142bc474b:
                rdi_1 = 3
                break
            
            memmove(&var_168, &var_1a8 + zx.q(r15_1) + r14_1 + 0x37, 9)
            rsi = arg2
            void var_15f
            rbx_1 = &var_15f
            rdi_2 = 0x100
            r15_1 = 9
            r13_1 += 0x100

label_142bc477d:
__security_check_cookie(rax_1 ^ &var_1a8)
return zx.q(rdi_1)
