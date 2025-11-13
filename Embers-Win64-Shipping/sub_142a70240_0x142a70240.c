// 函数: sub_142a70240
// 地址: 0x142a70240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_308 = -2
void var_358
int64_t rax_1 = __security_cookie ^ &var_358
int32_t var_320 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2e8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_2e0 = 2

if (*arg5 s<= 0)
    char** rax_2 = sub_142a64160(nullptr, "plurals", arg5)
    char** rbx_1 = rax_2
    
    if (*arg5 s> 0)
        sub_142a47930(arg2, &var_2e8)
    else
        char const* const rdx_3
        
        if (arg4 == 0)
            rdx_3 = "locales"
        label_142a70331:
            char** rax_3 = sub_142a625a0(rbx_1, rdx_3, nullptr, arg5)
            char** rdi_1 = rax_3
            
            if (*arg5 s<= 0)
                int32_t var_330 = 0
                void* rax_5 = sub_142a63dd0(rdi_1, sub_141a50850(arg3), &var_330, arg5)
                int32_t var_338
                
                if (rax_5 != 0)
                label_142a7042c:
                    char var_148[0x100]
                    sub_142a8d6e0(rax_5, &var_148, var_330 + 1)
                    char** rax_9 = sub_142a625a0(rbx_1, "rules", nullptr, arg5)
                    char** var_300_1 = rax_9
                    
                    if (*arg5 s<= 0)
                        char** rax_10 = sub_142a625a0(rax_9, &var_148, nullptr, arg5)
                        char** var_2f8_1 = rax_10
                        
                        if (*arg5 s<= 0)
                            int32_t i_3 = sub_142a63b10(rax_10)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2a8 =
                                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                            int16_t var_2a0_1 = 2
                            char* var_328 = nullptr
                            
                            if (i_3 s> 0)
                                uint64_t i_2 = zx.q(i_3)
                                uint64_t i
                                
                                do
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_228
                                    sub_142a71650(&var_228, rax_10, &var_328, arg5)
                                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* 
                                        var_268
                                    sub_142a47e10(&var_268, var_328, 0xffffffff)
                                    int16_t var_260
                                    int32_t r9_10
                                    int32_t var_25c
                                    
                                    if (var_260 s< 0)
                                        r9_10 = var_25c
                                    else
                                        r9_10 = sx.d(var_260) s>> 5
                                    sub_142a48d00(&var_2a8, &var_268, 0, r9_10)
                                    var_338.w = 0x3a
                                    sub_142a48d70(&var_2a8, &var_338, 0, 1)
                                    int16_t var_220
                                    int32_t r9_12
                                    int32_t var_21c
                                    
                                    if (var_220 s< 0)
                                        r9_12 = var_21c
                                    else
                                        r9_12 = sx.d(var_220) s>> 5
                                    sub_142a48d00(&var_2a8, &var_228, 0, r9_12)
                                    var_338.w = 0x3b
                                    sub_142a48d70(&var_2a8, &var_338, 0, 1)
                                    sub_142a47ff0(&var_268)
                                    sub_142a47ff0(&var_228)
                                    i = i_2
                                    i_2 -= 1
                                while (i != 1)
                                rbx_1 = rax_2
                                rdi_1 = rax_3
                            
                            sub_142a47930(arg2, &var_2a8)
                            sub_142a47ff0(&var_2a8)
                        else
                            sub_142a47930(arg2, &var_2e8)
                        
                        if (rax_10 != 0)
                            sub_142a5f860(rax_10)
                    else
                        sub_142a47930(arg2, &var_2e8)
                    
                    if (rax_9 != 0)
                        sub_142a5f860(rax_9)
                else
                    var_338 = 0
                    char* rax_6 = sub_141a50850(arg3)
                    void var_1e8
                    void* rdx_6 = &var_1e8 - rax_6
                    char i_1
                    
                    do
                        i_1 = *rax_6
                        *(rdx_6 + rax_6) = i_1
                        rax_6 = &rax_6[1]
                    while (i_1 != 0)
                    
                    if (sub_142a4d5b0(&var_1e8, &var_1e8, 0x9d, &var_338) s> 0)
                        while (true)
                            var_330 = 0
                            rax_5 = sub_142a63dd0(rdi_1, &var_1e8, &var_330, &var_338)
                            
                            if (rax_5 != 0)
                                *arg5 = 0
                                break
                            
                            var_338 = 0
                            
                            if (sub_142a4d5b0(&var_1e8, &var_1e8, 0x9d, &var_338) s<= 0)
                                goto label_142a7034d_1
                        
                        goto label_142a7042c
                    
                label_142a7034d:
                    sub_142a47930(arg2, &var_2e8)
            else
            label_142a7034d_1:
                sub_142a47930(arg2, &var_2e8)
            
            if (rdi_1 != 0)
                sub_142a5f860(rdi_1)
        else
            if (arg4 == 1)
                rdx_3 = "locales_ordinals"
                goto label_142a70331
            
            *arg5 = 1
            sub_142a47930(arg2, &var_2e8)
    
    if (rbx_1 != 0)
        sub_142a5f860(rbx_1)
else
    sub_142a47930(arg2, &var_2e8)

sub_142a47ff0(&var_2e8)
__security_check_cookie(rax_1 ^ &var_358)
return arg2
