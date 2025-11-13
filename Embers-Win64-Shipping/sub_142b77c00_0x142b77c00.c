// 函数: sub_142b77c00
// 地址: 0x142b77c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_248 = -2
void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t** result

if (*arg5 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_168
    sub_142a47f60(&var_168, arg3, arg4)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 = j_sub_142a7dd00(0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_2c0 = rax_3
    int64_t** result_1 = nullptr
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rbx_1 = sub_142a479b0(rax_3, &var_168)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5 = j_sub_142a7dd00(0x40)
    var_2c0 = rax_5
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6
    
    if (rax_5 == 0)
        rax_6 = nullptr
    else
        rax_6 = sub_142a479b0(rax_5, &var_168)
    
    sub_142a86f50(*arg2, rax_6, rbx_1, arg5)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_128
    sub_142a9db60(&var_128)
    int32_t r14_1 = 0
    int32_t rbx_2 = arg4
    
    if (rbx_2 s> 0)
        do
            uint32_t r15_1 = zx.d(*(arg3 + (sx.q(r14_1) << 1)))
            
            if ((r15_1 & 0xfffff800) == 0xd800)
                if (test_bit(r15_1, 0xa))
                    if (r14_1 s> 0)
                        uint32_t rdx_4 = zx.d(*(arg3 + (sx.q(r14_1 - 1) << 1)))
                        
                        if ((rdx_4 & 0xfffffc00) == 0xd800)
                            r15_1 += (rdx_4 - 0xd7f7) << 0xa
                else if (r14_1 + 1 != rbx_2)
                    uint32_t rcx_5 = zx.d(*(arg3 + (sx.q(r14_1 + 1) << 1)))
                    
                    if ((rcx_5 & 0xfffffc00) == 0xdc00)
                        r15_1 = ((r15_1 - 0xd7f7) << 0xa) + rcx_5
            
            if (sub_142b1dc30(*(arg1 + 0xc0), r15_1, &var_128) != 0)
                void var_228
                sub_142b18760(&var_228, &var_128)
                
                if (sub_142b18960(&var_228) != 0)
                    while (true)
                        int64_t* var_2a8 = nullptr
                        
                        if (*arg5 s<= 0)
                            int32_t var_2e8
                            var_2e8.q = arg5
                            void var_2a0
                            sub_142a86da0(&var_2a0, sub_142a4b0a0, sub_142a4b070, 0, var_2e8)
                            
                            if (*arg5 s<= 0)
                                var_2a8 = &var_2a0
                                std::ios_base::precision(&var_2a0, sub_140a4f210)
                        
                        std::ios_base::width(var_2a8, sub_140a4f210)
                        int32_t var_220
                        
                        if (sub_142b77810(arg1, &var_2a8, var_220, arg3, arg4, r14_1, arg5) != 0)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
                            sub_142a47f60(&var_1a8, arg3, r14_1)
                            sub_142a48580(&var_1a8, var_220)
                            var_2c0.d = 0xffffffff
                            void* rax_24 = sub_142a86e70(var_2a8, &var_2c0)
                            void* rbx_4 = rax_24
                            
                            if (rax_24 != 0)
                                while (true)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_1e8
                                    sub_142a479b0(&var_1e8, *(rbx_4 + 8))
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_25 = j_sub_142a7dd00(0x40)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        var_240_1 = rax_25
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rbx_5
                                    
                                    if (rax_25 == 0)
                                        rbx_5 = nullptr
                                    else
                                        rbx_5 = sub_142a479b0(rax_25, &var_1a8)
                                    
                                    if (rbx_5 == 0)
                                        *arg5 = 7
                                        sub_142a47ff0(&var_1e8)
                                        sub_142a47ff0(&var_1a8)
                                        int64_t* rcx_30 = var_2a8
                                        
                                        if (rcx_30 != 0)
                                            sub_142a869e0(rcx_30)
                                        
                                        sub_142b187a0(&var_228)
                                        break
                                    
                                    int16_t var_1e0
                                    int32_t r9_3
                                    int32_t var_1dc
                                    
                                    if (var_1e0 s< 0)
                                        r9_3 = var_1dc
                                    else
                                        r9_3 = sx.d(var_1e0) s>> 5
                                    sub_142a48d00(rbx_5, &var_1e8, 0, r9_3)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_28 = j_sub_142a7dd00(0x40)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        var_238_1 = rax_28
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                                        rax_29
                                    
                                    if (rax_28 == 0)
                                        rax_29 = nullptr
                                    else
                                        rax_29 = sub_142a479b0(rax_28, rbx_5)
                                    
                                    sub_142a86f50(*arg2, rax_29, rbx_5, arg5)
                                    rbx_4 = sub_142a86e70(var_2a8, &var_2c0)
                                    sub_142a47ff0(&var_1e8)
                                    
                                    if (rbx_4 == 0)
                                        goto label_142b77f41
                                
                                break
                            
                        label_142b77f41:
                            sub_142a47ff0(&var_1a8)
                        
                        int64_t* rcx_25 = var_2a8
                        
                        if (rcx_25 != 0)
                            sub_142a869e0(rcx_25)
                        
                        if (sub_142b18960(&var_228) == 0)
                            rbx_2 = arg4
                            goto label_142b77f6f
                    
                    goto label_142b77fd3
                
            label_142b77f6f:
                sub_142b187a0(&var_228)
            
            int32_t rax_32
            rax_32.b = r15_1 u> 0xffff
            r14_1 += rax_32 + 1
        while (r14_1 s< rbx_2)
    
    if (*arg5 s<= 0)
        result_1 = arg2
    
label_142b77fd3:
    sub_142a9dbc0(&var_128)
    sub_142a47ff0(&var_168)
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_308)
return result
