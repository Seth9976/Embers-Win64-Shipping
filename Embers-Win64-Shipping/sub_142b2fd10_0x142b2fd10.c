// 函数: sub_142b2fd10
// 地址: 0x142b2fd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_438 = -2
void var_478
uint64_t result = __security_cookie ^ &var_478
uint64_t result_1 = result

if (*arg4 s<= 0)
    result = zx.q(*(arg3 + 8))
    int32_t i_1
    
    if (result.w s< 0)
        i_1 = *(arg3 + 0xc)
    else
        i_1 = sx.d(result.w) s>> 5
    
    if (i_1 != 0)
        int32_t rcx_2
        int32_t i
        
        do
            int32_t rax_1 = sub_142a486d0(arg3, i_1 - 1)
            int64_t* rcx_1 = *(arg1 + 8)
            int64_t r8 = *rcx_1
            result = (*(r8 + 0x48))(rcx_1, zx.q(rax_1), r8)
            
            if (result.b == 0)
                result = zx.q(rax_1 - 0x1100)
                
                if (result.d u>= 0x13)
                    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_328
                    sub_142a9db60(&var_328)
                    
                    if (sub_142b1dc30(*(arg1 + 0x18), rax_1, &var_328) != 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_368 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_360_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_3a8 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_3a0_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_3e8 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_3e0_1 = 2
                        void var_428
                        sub_142b18760(&var_428, &var_328)
                        
                        if (sub_142b18960(&var_428) != 0)
                            char j
                            
                            do
                                int64_t* rcx_8 = *(arg1 + 8)
                                int32_t var_420
                                (*(*rcx_8 + 0x30))(rcx_8, zx.q(var_420), &var_368)
                                
                                if (sub_142b31ae0(arg1, arg3, i_1, var_420, &var_368, &var_3a8, 
                                        &var_3e8, arg4) != 0)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        var_458_1
                                    var_458_1.d = 0
                                    int64_t var_258[0x20]
                                    int64_t rbx_3 = sx.q(sub_142b7f9b0(*(arg1 + 0x48), arg2, 
                                        &var_3a8, &var_258, var_458_1.d))
                                    
                                    if (rbx_3.d s<= 0x1f && *arg4 s<= 0)
                                        var_458_1.d = 0
                                        int64_t var_158[0x20]
                                        
                                        if (rbx_3.d != sub_142b7f9b0(*(arg1 + 0x48), arg2, 
                                            &var_3e8, &var_158, var_458_1.d))
                                        label_142b2fefc:
                                            int64_t* rcx_13 = *(arg1 + 0x48)
                                            int32_t rax_10 = (*(*rcx_13 + 0x18))(rcx_13, &var_258, 
                                                zx.q(rbx_3.d), arg4)
                                            sub_142b7ced0(*(arg1 + 0x48), arg2, &var_3e8, rax_10, 
                                                arg4)
                                            
                                            if (rax_10 != 0xffffffff)
                                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable
                                                    ** var_450_1
                                                var_450_1.d = rax_10
                                                int32_t* var_458_2
                                                var_458_2.d = rbx_3.d
                                                sub_142b2ee30(arg1, arg2, &var_3a8, &var_258, 
                                                    var_458_2.d, var_450_1.d, arg4)
                                        else
                                            int64_t rax_8 = 0
                                            
                                            if (rbx_3.d s> 0)
                                                while (var_258[rax_8] == var_158[rax_8])
                                                    rax_8 += 1
                                                    
                                                    if (rax_8 s>= rbx_3)
                                                        goto label_142b2ff5d
                                                
                                                goto label_142b2fefc
                                
                            label_142b2ff5d:
                                j = sub_142b18960(&var_428)
                            while (j != 0)
                        
                        sub_142b187a0(&var_428)
                        sub_142a47ff0(&var_3e8)
                        sub_142a47ff0(&var_3a8)
                        sub_142a47ff0(&var_368)
                    
                    result = sub_142a9dbc0(&var_328)
                
                break
            
            rcx_2.b = rax_1 u> 0xffff
            i = i_1
            i_1 -= rcx_2 + 1
        while (i != rcx_2 + 1)

__security_check_cookie(result_1 ^ &var_478)
return result
