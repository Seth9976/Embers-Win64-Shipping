// 函数: sub_142a64700
// 地址: 0x142a64700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_90 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t* rsi = arg3
char* rdi = arg2
struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** result

if (*arg4 s> 0)
    result = nullptr
else
    int32_t var_dc
    int32_t* rax_2 = sub_142a65a60(arg1, &var_dc, arg4)
    int32_t* r13_1 = rax_2
    
    if (*arg4 s> 0)
        result = nullptr
    else
        struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** result_1 = nullptr
        void* r12_1 = nullptr
        int32_t r14_1 = 0
        int32_t var_e4_1 = 0
        
        if (rdi != 0 || rsi != 0)
            int32_t r13_2 = 8
            void* rax_3 = sub_142a7dd00(0x20)
            r12_1 = rax_3
            
            if (rax_3 != 0)
                char** rax_4 = sub_142a64160(nullptr, "zoneinfo64", arg4)
                char** rax_5 = sub_142a625a0(rax_4, "Names", rax_4, arg4)
                char** rcx_1 = rax_5
                int32_t var_d8_1 = 0
                
                if (var_dc s> 0)
                    void* var_b8_1 = nullptr
                    int32_t* rax_6 = rax_2
                    int32_t* var_b0_1 = rax_6
                    
                    while (true)
                        int32_t rax_7 = *rax_6
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        sub_142a66a00(&var_88, rcx_1, rax_7, arg4)
                        
                        if (*arg4 s<= 0)
                            if (rdi == 0)
                                goto label_142a64967
                            
                            char var_e0 = 0
                            int16_t var_80
                            int32_t r8_5
                            int32_t var_7c
                            
                            if (var_80 s< 0)
                                r8_5 = var_7c
                            else
                                r8_5 = sx.d(var_80) s>> 5
                            char rax_9 = sub_142a48fb0(&var_88, 0, r8_5, u"Etc/Unknown", 0, 0xb)
                            void* rdi_2
                            
                            if (rax_9 != 0)
                                int32_t var_e8 = 0
                                char** rax_10 = sub_142a64160(nullptr, "zoneinfo64", &var_e8)
                                char** rax_11 = sub_142a625a0(rax_10, "Names", nullptr, &var_e8)
                                int32_t rax_12 = sub_142a65200(rax_11, &var_88, &var_e8)
                                sub_142a625a0(rax_10, "Regions", rax_11, &var_e8)
                                void* rax_13 = sub_142a63b20(rax_11, rax_12, nullptr, &var_e8)
                                rdi_2 = nullptr
                                
                                if (var_e8 s<= 0)
                                    rdi_2 = rax_13
                                
                                sub_142a5f860(rax_11)
                                sub_142a5f860(rax_10)
                            
                            if (rax_9 == 0 || rdi_2 == 0)
                                *arg4 = 1
                            else
                                int32_t rax_14 = std::_WChar_traits<wchar_t>::length(rdi_2)
                                sub_142a8d6e0(rdi_2, &var_e0, sub_142a92b70(rax_14, 4))
                                
                                if (rax_14 s> 4)
                                    *arg4 = 0xf
                                else
                                    int32_t rax_16 = sub_142a8c3f0(&var_e0, 4, rax_14, arg4)
                                    
                                    if (*arg4 s<= 0)
                                        if (sub_142a862b0(&var_e0, arg2, rax_16) != 0)
                                            goto label_142a649ef
                                        
                                        r14_1 = var_e4_1
                                        rsi = arg3
                                    label_142a64967:
                                        
                                        if (rsi == 0)
                                        label_142a649b0:
                                            
                                            if (r13_2 s> r14_1)
                                                goto label_142a649d0
                                            
                                            r13_2 += 8
                                            void* rax_20 = sub_142a7dd30(r12_1, sx.q(r13_2) << 2)
                                            
                                            if (rax_20 != 0)
                                                r12_1 = rax_20
                                            label_142a649d0:
                                                int32_t* rsi_3 = var_b8_1
                                                *(rsi_3 + r12_1) = rax_7
                                                var_e4_1 = r14_1 + 1
                                                var_b8_1 = &rsi_3[1]
                                            label_142a649ef:
                                                sub_142a47ff0(&var_88)
                                                rsi = arg3
                                                goto label_142a649fb
                                            
                                            *arg4 = 7
                                        else
                                            struct 
                                                icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable
                                                ** rax_18 = sub_142a64ce0(&var_88, arg4)
                                            
                                            if (*arg4 s<= 0)
                                                struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable
                                                    * rdx_7 = *rax_18
                                                int32_t rax_19 =
                                                    rdx_7->__offset(0x38).q(rax_18, rdx_7)
                                                struct icu_64::BasicTimeZone::icu_64::OlsonTimeZone::VTable
                                                    * r8_11 = *rax_18
                                                r8_11->__offset(0x0).q(rax_18, 1, r8_11)
                                                rsi = arg3
                                                
                                                if (rax_19 == *rsi)
                                                    goto label_142a649b0
                                                
                                                sub_142a47ff0(&var_88)
                                            label_142a649fb:
                                                int32_t rdi_6 = var_d8_1 + 1
                                                var_d8_1 = rdi_6
                                                rax_6 = &var_b0_1[1]
                                                var_b0_1 = rax_6
                                                
                                                if (rdi_6 s>= var_dc)
                                                    break
                                                
                                                r14_1 = var_e4_1
                                                rdi = arg2
                                                rcx_1 = rax_5
                                                continue
                        
                        sub_142a47ff0(&var_88)
                        break
                
                if (*arg4 s> 0)
                    sub_142a7dcd0(r12_1)
                    r12_1 = nullptr
                
                sub_142a5f860(rax_5)
                r14_1 = var_e4_1
                r13_1 = rax_2
                goto label_142a64a67
            
            *arg4 = 7
            result = nullptr
        else
        label_142a64a67:
            
            if (*arg4 s<= 0)
                struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** result_2 =
                    j_sub_142a7dd00(0x90)
                struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** result_3 =
                    result_2
                
                if (r12_1 != 0)
                    if (result_2 != 0)
                        sub_142a85450(result_2)
                        *result_2 =
                            &icu_64::TZEnumeration::`vftable'{for `icu_64::StringEnumeration'}
                        *(result_2 + 0x8c) = 0
                        result_2[0xf] = r12_1
                        result_2[0x10] = r12_1
                        result_2[0x11].d = r14_1
                        result_1 = result_2
                else if (result_2 != 0)
                    sub_142a85450(result_2)
                    *result_2 = &icu_64::TZEnumeration::`vftable'{for `icu_64::StringEnumeration'}
                    *(result_2 + 0x8c) = 0
                    result_2[0xf] = r13_1
                    result_2[0x10] = 0
                    result_2[0x11].d = var_dc
                    result_1 = result_2
                
                if (result_1 == 0)
                    *arg4 = 7
            else if (r12_1 != 0)
                sub_142a7dcd0(r12_1)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_118)
return result
