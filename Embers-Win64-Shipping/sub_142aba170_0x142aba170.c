// 函数: sub_142aba170
// 地址: 0x142aba170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_140 = -2
void var_1f8
void** result = __security_cookie ^ &var_1f8
void** result_4 = result

if (*arg3 s<= 0)
    sub_142ab9e20(arg1, *(arg1 + 8))
    result = sub_142ab9fc0(arg1, arg3)
    *(arg1 + 8) = result
    
    if (*arg3 s<= 0)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_1 = sub_142aab3f0(arg2, arg3)
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** r12_1 = rax_1
        result = 7
        
        if (r12_1 == 0 && *arg3 s<= r12_1.d)
            *arg3 = 7
        
        if (*arg3 s<= 0)
            int32_t i_1 = 0
            char** rax_2 = sub_142a641c0(nullptr, *(arg2 + 0x28), &i_1)
            char** var_138_1 = rax_2
            char** rax_3 = sub_142a62230(rax_2, "NumberElements", nullptr, &i_1)
            char** var_130_1 = rax_3
            sub_142a62230(rax_3, sub_142aabaa0(r12_1), rax_2, &i_1)
            sub_142a62230(rax_2, "patterns", rax_2, &i_1)
            int32_t var_18c
            result = sub_142a63c50(rax_2, "decimalFormat", &var_18c, &i_1)
            void** result_5 = result
            void** result_1 = result
            int32_t rcx_7 = i_1
            
            if (rcx_7 == 2)
                result = sub_142aabaa0(r12_1)
                int64_t r9_5 = "latn" - result
                uint32_t i
                uint32_t r8_4
                
                do
                    r8_4 = zx.d(*result)
                    i = zx.d(*(result + r9_5))
                    
                    if (r8_4 != i)
                        break
                    
                    result += 1
                while (i != 0)
                
                if (r8_4 - i == 0)
                    result_5 = result_1
                else
                    i_1 = 0
                    sub_142a62230(rax_3, "latn", rax_2, &i_1)
                    sub_142a62230(rax_2, "patterns", rax_2, &i_1)
                    result = sub_142a63c50(rax_2, "decimalFormat", &var_18c, &i_1)
                    result_5 = result
                    result_1 = result
                
                rcx_7 = i_1
            
            int32_t r9_9 = var_18c
            int32_t var_184_1 = r9_9
            void* var_170_1 = nullptr
            int32_t var_180_1 = 0
            char var_1a4_1 = 0
            
            if (rcx_7 s<= 0)
                int32_t rax_5 = 0
                
                if (r9_9 s> 0)
                    void** result_7 = result_5
                    int32_t rdx_5 = r9_9 - 1
                    void* r8_9 = result_5 + 2
                    
                    do
                        if (*result_7 == 0x3b)
                            var_1a4_1 = 1
                            var_170_1 = r8_9
                            var_180_1 = rdx_5
                            var_184_1 = rax_5
                        
                        rax_5 += 1
                        r8_9 += 2
                        rdx_5 -= 1
                        result_7 += 2
                    while (rax_5 s< r9_9)
                
                char** rax_6 = sub_142a641c0("icudt64l-curr", *(arg2 + 0x28), &i_1)
                char** var_128_1 = rax_6
                char** rax_7 = sub_142a62230(rax_6, "CurrencyUnitPatterns", nullptr, &i_1)
                char** var_120_1 = rax_7
                result = sub_142a6fdf0(*(arg1 + 0x10), &i_1)
                void** result_6 = result
                void** result_3 = result
                
                if (result == 0)
                    int32_t i_2 = i_1
                    result = 7
                    
                    if (i_2 s<= 0)
                        i_2 = 7
                    
                    i_1 = i_2
                
                if (i_1 s<= 0)
                    result = (*(*result_6 + 0x20))(result_6, 0, &i_1)
                    void** result_2 = result
                    
                    if (result != 0)
                        while (i_1 s<= 0)
                            int32_t i_4 = 0
                            int32_t var_190
                            result = sub_142a63c50(rax_7, result, &var_190, &i_4)
                            int32_t i_3 = i_4
                            
                            if (i_3 == 7 || result == 0)
                                i_1 = i_3
                                break
                            
                            if (i_3 s<= 0 && var_190 s> 0)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                                    j_sub_142a7dd00(0x40)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    var_118_1 = rax_9
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** r12_2
                                
                                if (rax_9 == 0)
                                    r12_2 = nullptr
                                else
                                    r12_2 = sub_142a47f60(rax_9, result, var_190)
                                
                                if (r12_2 == 0)
                                    i_1 = 7
                                    goto label_142aba788
                                
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_11 = sub_142a47f60(&var_c8, result_1, var_184_1)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
                                sub_142a58a40(r12_2, 
                                    sub_142a47a60(&var_108, 1, &data_143654f68, 3), rax_11)
                                sub_142a47ff0(&var_108)
                                sub_142a47ff0(&var_c8)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_13 = sub_142a47a60(&var_108, 1, &data_143654f50, 3)
                                sub_142a58a40(r12_2, sub_142a47a60(&var_c8, 1, &data_143654f70, 3), 
                                    rax_13)
                                sub_142a47ff0(&var_c8)
                                sub_142a47ff0(&var_108)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                                
                                if (var_1a4_1 != 0)
                                    sub_142a47f60(&var_108, result, var_190)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_15 = sub_142a47f60(&var_88, var_170_1, var_180_1)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_16 = sub_142a47a60(&var_c8, 1, &data_143654f68, 3)
                                    int16_t rcx_30 = rax_15[1].w
                                    int32_t rcx_32
                                    
                                    if (rcx_30 s< 0)
                                        rcx_32 = *(rax_15 + 0xc)
                                    else
                                        rcx_32 = sx.d(rcx_30) s>> 5
                                    
                                    int16_t rax_17 = rax_16[1].w
                                    int32_t rax_19
                                    
                                    if (rax_17 s< 0)
                                        rax_19 = *(rax_16 + 0xc)
                                    else
                                        rax_19 = sx.d(rax_17) s>> 5
                                    
                                    int16_t var_100
                                    int32_t var_fc
                                    int32_t r8_20
                                    
                                    if (var_100 s< 0)
                                        r8_20 = var_fc
                                    else
                                        r8_20 = sx.d(var_100) s>> 5
                                    
                                    sub_142a49d10(&var_108, 0, r8_20, rax_16, 0, rax_19, rax_15, 0, 
                                        rcx_32)
                                    sub_142a47ff0(&var_c8)
                                    sub_142a47ff0(&var_88)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_20 = sub_142a47a60(&var_c8, 1, &data_143654f50, 3)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_21 = sub_142a47a60(&var_88, 1, &data_143654f70, 3)
                                    int16_t rcx_38 = rax_20[1].w
                                    int32_t rcx_40
                                    
                                    if (rcx_38 s< 0)
                                        rcx_40 = *(rax_20 + 0xc)
                                    else
                                        rcx_40 = sx.d(rcx_38) s>> 5
                                    
                                    int16_t rax_22 = rax_21[1].w
                                    int32_t rax_24
                                    
                                    if (rax_22 s< 0)
                                        rax_24 = *(rax_21 + 0xc)
                                    else
                                        rax_24 = sx.d(rax_22) s>> 5
                                    
                                    int32_t r8_22
                                    
                                    if (var_100 s< 0)
                                        r8_22 = var_fc
                                    else
                                        r8_22 = sx.d(var_100) s>> 5
                                    
                                    sub_142a49d10(&var_108, 0, r8_22, rax_21, 0, rax_24, rax_20, 0, 
                                        rcx_40)
                                    sub_142a47ff0(&var_88)
                                    sub_142a47ff0(&var_c8)
                                    int16_t var_198 = 0x3b
                                    sub_142a48d70(r12_2, &var_198, 0, 1)
                                    int32_t r9_15
                                    
                                    if (var_100 s< 0)
                                        r9_15 = var_fc
                                    else
                                        r9_15 = sx.d(var_100) s>> 5
                                    
                                    sub_142a48d00(r12_2, &var_108, 0, r9_15)
                                    sub_142a47ff0(&var_108)
                                
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                    rax_26 = sub_142a47e10(&var_88, result_2, 0xffffffff)
                                sub_142a5a080(*(arg1 + 8), rax_26, r12_2, arg3)
                                sub_142a47ff0(&var_88)
                                result_6 = result_3
                            
                            result = (*(*result_6 + 0x20))(result_6, 0, &i_1)
                            result_2 = result
                            
                            if (result == 0)
                                break
                            
                            continue
                
                if (i_1 == 7)
                label_142aba788:
                    result = arg3
                    *result = 7
                
                if (result_6 != 0)
                    result = (**result_6)(result_6, 1)
                
                if (rax_7 != 0)
                    result = sub_142a5f860(rax_7)
                
                if (rax_6 != 0)
                    result = sub_142a5f860(rax_6)
                
                r12_1 = rax_1
            else if (rcx_7 == 7)
                result = zx.q(rcx_7)
                *arg3 = rcx_7
            
            if (rax_3 != 0)
                result = sub_142a5f860(rax_3)
            
            if (rax_2 != 0)
                result = sub_142a5f860(rax_2)
        
        if (r12_1 != 0)
            result = (*r12_1)->__offset(0x0).q(r12_1, 1)

__security_check_cookie(result_4 ^ &var_1f8)
return result
