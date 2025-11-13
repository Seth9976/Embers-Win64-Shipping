// 函数: sub_142b7b8e0
// 地址: 0x142b7b8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_10 = rbx
int64_t var_e0 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t result

if (*arg4 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_d0_1 = 2
    int64_t r8_1 = sx.q(sub_142b7c5a0(arg1, arg2 + 1, &var_d8))
    int32_t result_1
    
    if (r8_1.d s<= arg2)
    label_142b7bc3e:
        
        if (*arg4 s<= 0)
            *arg4 = 3
            *(arg1 + 0x30) = "not a valid special reset position"
            
            if (*(arg1 + 0x28) != 0)
                sub_142b7c7c0(arg1)
        
        result_1 = arg2
    else
        void* rcx = *(arg1 + 0x10)
        int16_t rax_3 = *(rcx + 8)
        int32_t rdx_2
        
        if (rax_3 s< 0)
            rdx_2 = *(rcx + 0xc)
        else
            rdx_2 = sx.d(rax_3) s>> 5
        
        if (r8_1.d u>= rdx_2)
            goto label_142b7bc3e
        
        void* rcx_1
        
        if ((rax_3.b & 2) == 0)
            rcx_1 = *(rcx + 0x18)
        else
            rcx_1 = rcx + 0xa
        
        if (*(rcx_1 + (r8_1 << 1)) != 0x5d || (var_d0_1 & 0xffe0) == 0)
            goto label_142b7bc3e
        
        result_1 = (r8_1 + 1).d
        int32_t rdi_1 = 0
        
        while (true)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
                sub_142a47e10(&var_98, (&data_14367cd80)[sx.q(rdi_1)], 0xffffffff)
            int32_t var_cc
            
            if ((var_d0_1.b & 1) == 0)
                int32_t r8_3
                
                if (var_d0_1 s< 0)
                    r8_3 = var_cc
                else
                    r8_3 = sx.d(var_d0_1) s>> 5
                
                int16_t rcx_4 = rax_4[1].w
                int32_t rcx_6
                
                if (rcx_4 s< 0)
                    rcx_6 = *(rax_4 + 0xc)
                else
                    rcx_6 = sx.d(rcx_4) s>> 5
                
                char rax_5
                
                if ((rax_4[1].b & 1) == 0 && r8_3 == rcx_6)
                    rax_5 = sub_142a490e0(&var_d8, rax_4, r8_3)
                
                if ((rax_4[1].b & 1) != 0 || r8_3 != rcx_6 || rax_5 == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
            else
                rbx.b = rax_4[1].b & 1
            
            sub_142a47ff0(&var_98)
            int16_t var_f8
            int16_t var_f0
            
            if (rbx.b != 0)
                var_f8 = 0xfffe
                sub_142a4afe0(arg3)
                int16_t rax_12 = *(arg3 + 8)
                int32_t r8_11
                
                if (rax_12 s< 0)
                    r8_11 = *(arg3 + 0xc)
                else
                    r8_11 = sx.d(rax_12) s>> 5
                
                rdi_1.w += 0x2800
                var_f0 = rdi_1.w
                sub_142a48d70(sub_142a49390(arg3, 0, r8_11, &var_f8, 0, 1), &var_f0, 0, 1)
                break
            
            rdi_1 += 1
            
            if (rdi_1 s>= 0xe)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 =
                    sub_142a47a60(&var_98, 1, &data_14367d410, 0xffffffff)
                
                if ((var_d0_1.b & 1) == 0)
                    int32_t r8_5
                    
                    if (var_d0_1 s< 0)
                        r8_5 = var_cc
                    else
                        r8_5 = sx.d(var_d0_1) s>> 5
                    
                    int16_t rcx_11 = rax_6[1].w
                    int32_t rcx_13
                    
                    if (rcx_11 s< 0)
                        rcx_13 = *(rax_6 + 0xc)
                    else
                        rcx_13 = sx.d(rcx_11) s>> 5
                    
                    char rax_7
                    
                    if ((rax_6[1].b & 1) == 0 && r8_5 == rcx_13)
                        rax_7 = sub_142a490e0(&var_d8, rax_6, r8_5)
                    
                    if ((rax_6[1].b & 1) != 0 || r8_5 != rcx_13 || rax_7 == 0)
                        rbx.b = 0
                    else
                        rbx.b = 1
                else
                    rbx.b = rax_6[1].b & 1
                
                sub_142a47ff0(&var_98)
                void* rax_9
                
                if (rbx.b == 0)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                        sub_142a47a60(&var_98, 1, variable top", 0xffffffff)
                    
                    if ((var_d0_1.b & 1) == 0)
                        int32_t r8_9
                        
                        if (var_d0_1 s< 0)
                            r8_9 = var_cc
                        else
                            r8_9 = sx.d(var_d0_1) s>> 5
                        
                        int16_t rcx_21 = rax_10[1].w
                        int32_t rcx_23
                        
                        if (rcx_21 s< 0)
                            rcx_23 = *(rax_10 + 0xc)
                        else
                            rcx_23 = sx.d(rcx_21) s>> 5
                        
                        char rax_11
                        
                        if ((rax_10[1].b & 1) == 0 && r8_9 == rcx_23)
                            rax_11 = sub_142a490e0(&var_d8, rax_10, r8_9)
                        
                        if ((rax_10[1].b & 1) != 0 || r8_9 != rcx_23 || rax_11 == 0)
                            rbx.b = 0
                        else
                            rbx.b = 1
                    else
                        rbx.b = rax_10[1].b & 1
                    
                    sub_142a47ff0(&var_98)
                    
                    if (rbx.b == 0)
                        goto label_142b7bc3e
                    
                    var_f8 = 0x2807
                    rax_9 = sub_142adbb40(arg3, 0xfffe)
                else
                    var_f0 = 0xfffe
                    sub_142a4afe0(arg3)
                    int16_t rax_8 = *(arg3 + 8)
                    int32_t r8_7
                    
                    if (rax_8 s< 0)
                        r8_7 = *(arg3 + 0xc)
                    else
                        r8_7 = sx.d(rax_8) s>> 5
                    
                    var_f8 = 0x2809
                    rax_9 = sub_142a49390(arg3, 0, r8_7, &var_f0, 0, 1)
                
                sub_142a48d70(rax_9, &var_f8, 0, 1)
                goto label_142b7bc6c
    
label_142b7bc6c:
    sub_142a47ff0(&var_d8)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_128)
return result
