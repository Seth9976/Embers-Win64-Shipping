// 函数: sub_142ad88a0
// 地址: 0x142ad88a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1f8
int64_t* result = __security_cookie ^ &var_1f8
int64_t* result_4 = result

if (*arg5 s<= 0)
    result = sub_142a68a70(sub_142a64c40(), arg4, arg5)
    *(arg1 + 0x148) = result
    
    if (*arg5 s<= 0)
        int64_t* result_5 = nullptr
        char* _Str1
        
        if (result == 0)
            _Str1 = nullptr
        else
            int64_t rdx_1 = *result
            _Str1 = (*(rdx_1 + 0xb0))(result, rdx_1)
        
        result = sub_142a641c0(nullptr, sub_141a50850(arg4), arg5)
        int64_t* result_6 = result
        int64_t* result_3 = result
        
        if (*arg5 s<= 0)
            int64_t* result_7 = nullptr
            int64_t var_198_1 = 0
            int64_t* result_1
            void* var_158
            int32_t var_150
            
            if (_Str1 == 0)
            label_142ad8a6b:
                *arg5 = 0
                result =
                    sub_142a62230(result_6, "calendar/gregorian/DateTimePatterns", nullptr, arg5)
                int64_t* result_8 = result
                
                if (result_7 != 0)
                    result = sub_142a5f860(result_7)
                
                result_7 = result_8
                int64_t* result_9 = result_8
            else
                if (strcmp(_Str1, "gregorian") == 0)
                    goto label_142ad8a6b
                
                uint128_t zmm1_1 = *sub_142a85330(&result_1, "calendar/")
                int16_t var_14c
                var_158 = &var_14c:1
                var_150 = 0x28
                var_14c = 0
                int32_t var_120_1 = 0
                sub_142a8cbd0(&var_158, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5)
                void var_178
                uint128_t var_1b8_1 = *sub_142a85330(&var_178, "/DateTimePatterns")
                void var_168
                zmm1_1 = *sub_142a85330(&var_168, _Str1)
                sub_142a8cbd0(
                    sub_142a8cbd0(&var_158, zmm1_1.q, _mm_bsrli_si128(zmm1_1, 8).d, arg5), 
                    var_1b8_1.q, _mm_bsrli_si128(var_1b8_1, 8).d, arg5)
                result = sub_142a62230(result_6, var_158, nullptr, arg5)
                result_7 = result
                int64_t* result_2 = result
                
                if (var_14c.b != 0)
                    result = sub_142a7dcd0(var_158)
                
                if (*arg5 == 2)
                    goto label_142ad8a6b
            
            if (*arg5 s<= 0)
                result_1 = nullptr
                result = sub_142a63b10(result_7)
                
                if (result.d s> 8)
                    char* rax_9 = sub_142a637a0(result_7, 0, arg5)
                    sub_142aa8420(arg1, sub_142a637a0(result_7, 1, arg5), rax_9)
                    result = sub_142b591d0(arg4, arg5)
                    *(arg1 + 0x300) = result
                    
                    if (*arg5 s<= 0)
                        if (result != 0)
                            int32_t var_1c4 = 0
                            sub_142a4ab40(arg1 + 0x1a0)
                            sub_142a4ab40(arg1 + 0x1e0)
                            int32_t var_1c8
                            
                            if (arg2 != 0xffffffff)
                                result = sub_142a620c0(result_7, arg2, nullptr, arg5)
                                result_5 = result
                                result_1 = result
                                
                                if (arg3 == 0xffffffff)
                                    goto label_142ad8d9c
                                
                                if (*arg5 s<= 0)
                                    result = sub_142a63f80(result_5)
                                    void* r14_2
                                    
                                    if (result.d == 0)
                                        r14_2 = sub_142a63f30(result_5, &var_1c8, arg5)
                                    label_142ad8bfd:
                                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                            var_118
                                        sub_142a47a60(&var_118, 1, r14_2, var_1c8)
                                        char** result_10 =
                                            sub_142a620c0(result_7, arg3, nullptr, arg5)
                                        
                                        if (result_5 != 0)
                                            sub_142a5f860(result_5)
                                        
                                        result_5 = result_10
                                        result_1 = result_5
                                        
                                        if (*arg5 s> 0)
                                            *arg5 = 3
                                            result = sub_142a47ff0(&var_118)
                                        else
                                            int32_t rax_15 = sub_142a63f80(result_10)
                                            void* rax_18
                                            
                                            if (rax_15 == 0)
                                                rax_18 = sub_142a63f30(result_10, &var_1c8, arg5)
                                            label_142ad8cbf:
                                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                    * var_d8
                                                sub_142a47a60(&var_d8, 1, rax_18, var_1c8)
                                                int32_t r14_4 = 8
                                                
                                                if (sub_142a63b10(result_7) s>= 0xd)
                                                    r14_4 = arg3 + 5
                                                
                                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                    * var_98
                                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                    ** rax_21 = sub_142a47a60(&var_98, 1, 
                                                    sub_142a63b20(result_7, r14_4, &var_1c8, arg5), 
                                                    var_1c8)
                                                var_158 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                                                var_150.w = 2
                                                sub_142b62570(&var_158, rax_21, 2, 2, arg5)
                                                sub_142b62a90(&var_158, &var_118, &var_d8, 
                                                    arg1 + 0x160, arg5)
                                                j_sub_142a47ff0(&var_158)
                                                sub_142a47ff0(&var_98)
                                                sub_142a47ff0(&var_d8)
                                                sub_142a47ff0(&var_118)
                                                result = sub_142ad94e0(arg1, arg4, arg5)
                                            else
                                                if (rax_15 == 8)
                                                    int32_t var_1c0
                                                    var_1c0.q =
                                                        sub_142a63b20(result_10, 0, &var_1c8, arg5)
                                                    sub_142a4aa20(arg1 + 0x1a0, 1, 
                                                        sub_142a63b20(result_10, 1, &var_1c4, 
                                                            arg5), 
                                                        var_1c4)
                                                    rax_18 = var_1c0.q
                                                    goto label_142ad8cbf
                                                
                                                *arg5 = 3
                                                result = sub_142a47ff0(&var_118)
                                    else
                                        if (result.d == 8)
                                            r14_2 = sub_142a63b20(result_5, 0, &var_1c8, arg5)
                                            sub_142a4aa20(arg1 + 0x1e0, 1, 
                                                sub_142a63b20(result_5, 1, &var_1c4, arg5), var_1c4)
                                            goto label_142ad8bfd
                                        
                                        *arg5 = 3
                                else
                                    *arg5 = 3
                            else if (arg3 == 0xffffffff)
                                *arg5 = 3
                                result = sub_142ad94e0(arg1, arg4, arg5)
                            else
                                result = sub_142a620c0(result_7, arg3, nullptr, arg5)
                                result_5 = result
                                result_1 = result
                            label_142ad8d9c:
                                
                                if (*arg5 s<= 0)
                                    result = sub_142a63f80(result_5)
                                    
                                    if (result.d == 0)
                                        sub_142a4aa20(arg1 + 0x160, 1, 
                                            sub_142a63f30(result_5, &var_1c8, arg5), var_1c8)
                                        result = sub_142ad94e0(arg1, arg4, arg5)
                                    else if (result.d == 8)
                                        void* r12_1 = sub_142a63b20(result_5, 0, &var_1c8, arg5)
                                        sub_142a4aa20(arg1 + 0x1a0, 1, 
                                            sub_142a63b20(result_5, 1, &var_1c4, arg5), var_1c4)
                                        sub_142a4aa20(arg1 + 0x160, 1, r12_1, var_1c8)
                                        result = sub_142ad94e0(arg1, arg4, arg5)
                                    else
                                        *arg5 = 3
                                else
                                    *arg5 = 3
                        else
                            *arg5 = 7
                else
                    *arg5 = 3
                
                if (result_5 != 0)
                    result = sub_142a5f860(result_5)
            
            if (result_7 != 0)
                result = sub_142a5f860(result_7)
        
        if (result_6 != 0)
            result = sub_142a5f860(result_6)

__security_check_cookie(result_4 ^ &var_1f8)
return result
