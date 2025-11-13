// 函数: sub_142b4fc50
// 地址: 0x142b4fc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result

if (*(arg1 + 0x101) == 0)
    *(arg1 + 0x101) = 1
    struct icu_64::ResourceSink::icu_64::TimeZoneNamesImpl::ZoneStringsLoader::VTable* const 
        var_98 = &icu_64::TimeZoneNamesImpl::ZoneStringsLoader::`vftable'{for `icu_64::ResourceSink'}
    int64_t* var_90_1 = arg1
    int64_t* rax_1 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, arg2)
    
    if (*arg2 s<= 0)
        std::ios_base::precision(rax_1, sub_142a7dcd0)
        std::ios_base::width(rax_1, sub_142b51260)
    
    sub_142b4fe70(&var_98, arg2)
    
    if (*arg2 s<= 0)
        struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable** rax_2 =
            j_sub_142a64700(1, nullptr, nullptr, arg2)
        
        if (*arg2 s<= 0)
            struct icu_64::StringEnumeration::icu_64::TZEnumeration::VTable* r8_1 = *rax_2
            void* rax_3 = r8_1->__offset(0x30).q(rax_2, arg2, r8_1)
            void* rbx_1 = rax_3
            
            if (rax_3 != 0)
                while (*arg2 s<= 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
                    sub_142a479b0(&var_68, rbx_1)
                    void* rax_4 = sub_142a4a210(&var_68)
                    
                    if (sub_142a86c30(arg1[0x1e], rax_4) == 0)
                        sub_142b50530(arg1, rbx_1, arg2)
                        int64_t* rax_7 = (*(*arg1 + 0x20))(arg1, rbx_1, arg2)
                        int64_t* var_78_1 = rax_7
                        
                        if (*arg2 s<= 0)
                            void* rax_10 = (*(*rax_7 + 0x30))(rax_7, arg2)
                            
                            if (rax_10 != 0)
                                while (*arg2 s<= 0)
                                    sub_142b50130(arg1, rax_10, arg2)
                                    rax_10 = (*(*rax_7 + 0x30))(rax_7, arg2)
                                    
                                    if (rax_10 == 0)
                                        break
                            
                            (**rax_7)(rax_7, 1)
                        else if (rax_7 != 0)
                            (**rax_7)(rax_7, 1)
                    
                    sub_142a47ff0(&var_68)
                    void* rax_13 = (*rax_2)->__offset(0x30).q(rax_2, arg2)
                    rbx_1 = rax_13
                    
                    if (rax_13 == 0)
                        break
        
        if (rax_2 != 0)
            (*rax_2)->__offset(0x0).q(rax_2, 1)
    
    var_98 = &icu_64::TimeZoneNamesImpl::ZoneStringsLoader::`vftable'{for `icu_64::ResourceSink'}
    sub_142a869e0(rax_1)
    result = sub_142ac3f40(&var_98)

__security_check_cookie(result_1 ^ &var_b8)
return result
