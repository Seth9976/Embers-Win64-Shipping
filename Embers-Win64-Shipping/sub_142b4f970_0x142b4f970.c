// 函数: sub_142b4f970
// 地址: 0x142b4f970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
struct icu_64::TimeZoneNames::MatchInfoCollection::VTable** var_48 = __security_cookie ^ &var_c8
struct icu_64::TimeZoneNames::MatchInfoCollection::VTable** result

if (*arg4 s<= 0)
    result = *arg3
    
    if (result != 0)
        int32_t r12_1 = 1
        
        if (*(arg3 + 0xe) != 0)
            r12_1 = result[1].d
        
        int32_t rbp_1 = 0
        
        if (r12_1 s> 0)
            do
                int32_t* rbx_1
                
                if (*(arg3 + 0xe) != 0)
                    rbx_1 = sub_142ae72d0(*arg3, rbp_1)
                else
                    rbx_1 = *arg3
                
                if (rbx_1 != 0 && (*rbx_1 & *(arg1 + 8)) != 0)
                    if (*(arg1 + 0x10) == 0)
                        result = j_sub_142a7dd00(0x10)
                        struct icu_64::TimeZoneNames::MatchInfoCollection::VTable** result_1 =
                            result
                        
                        if (result != 0)
                            result = sub_142ac5de0(result)
                        
                        *(arg1 + 0x10) = result
                    
                    if (*(arg1 + 0x10) == 0 && result == 0)
                        *arg4 = 7
                    else if (*arg4 s<= 0)
                        int64_t rdx_1 = *(rbx_1 + 8)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_3 = &var_88
                        
                        if (rdx_1 == 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 =
                                sub_142a47f60(rcx_3, *(rbx_1 + 0x10), 0xffffffff)
                            sub_142ac6210(*(arg1 + 0x10), *rbx_1, arg2, rax_2, arg4)
                        else
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                                sub_142a47f60(rcx_3, rdx_1, 0xffffffff)
                            sub_142ac62f0(*(arg1 + 0x10), *rbx_1, arg2, rax_1, arg4)
                        
                        sub_142a47ff0(&var_88)
                        
                        if (*arg4 s<= 0 && arg2 s> *(arg1 + 0xc))
                            *(arg1 + 0xc) = arg2
                
                rbp_1 += 1
            while (rbp_1 s< r12_1)
    
    result.b = 1
else
    result.b = 0

__security_check_cookie(var_48 ^ &var_c8)
return result
