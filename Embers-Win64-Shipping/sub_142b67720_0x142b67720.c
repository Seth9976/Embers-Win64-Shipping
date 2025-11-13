// 函数: sub_142b67720
// 地址: 0x142b67720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int32_t rdi = *(arg3 + 8)
int32_t var_134 = rdi
char var_137 = 0
bool var_138 = false
int64_t r13
r13.b = 0

if (*arg4 s<= 0)
    int16_t rax_3 = arg2[1].w
    int32_t rcx_1
    
    if (rax_3 s< 0)
        rcx_1 = *(arg2 + 0xc)
    else
        rcx_1 = sx.d(rax_3) s>> 5
    
    if (rdi + 5 s<= rcx_1)
        int32_t var_148
        int32_t var_140
        int32_t rax_15
        
        if (sub_142b67cd0(arg2, rdi) != 0)
            var_137 = 1
            var_134 = rdi + 2
            int32_t rax_6 = sub_142b13c70(arg2, &var_134, 0)
            int32_t rdi_2 = rax_6
            var_134 = rax_6
            int16_t r14_1 = arg2[1].w
            int32_t rax_8
            
            if (r14_1 s< 0)
                rax_8 = *(arg2 + 0xc)
            else
                rax_8 = sx.d(r14_1) s>> 5
            
            if (rdi_2 s< rax_8 && sub_142a4a1a0(arg2, rdi_2) == 0x5e)
                rdi_2 += 1
                var_134 = rdi_2
                r13.b = 1
            
            if (rdi_2 s>= 0)
                int32_t rax_11
                
                if (r14_1 s< 0)
                    rax_11 = *(arg2 + 0xc)
                else
                    rax_11 = sx.d(r14_1) s>> 5
                
                if (rdi_2 s> rax_11)
                    if (r14_1 s< 0)
                        rdi_2 = *(arg2 + 0xc)
                    else
                        rdi_2 = sx.d(r14_1) s>> 5
            else
                rdi_2 = 0
            
            int32_t rax_13
            
            if (r14_1 s< 0)
                rax_13 = *(arg2 + 0xc)
            else
                rax_13 = sx.d(r14_1) s>> 5
            
            var_140 = rax_13 - rdi_2
            var_148 = rdi_2
            rax_15 = sub_142a4a330(arg2, &data_143671c38, 0, 2, var_148, var_140)
            goto label_142b67960
        
        char rax_16 = sub_142b67d50(arg2, rdi)
        char rax_17
        
        if (rax_16 == 0)
            rax_17 = sub_142b67c50(arg2, rdi)
        
        if (rax_16 == 0 && rax_17 == 0)
            *arg4 = 1
        else
            int16_t rax_18 = sub_142a4a1a0(arg2, rdi + 1)
            r13.b = rax_18 == 0x50
            var_138 = rax_18 == 0x4e
            var_134 = rdi + 2
            int32_t rax_19 = sub_142b13c70(arg2, &var_134, 0)
            int16_t r14_2 = arg2[1].w
            int32_t rax_21
            
            if (r14_2 s< 0)
                rax_21 = *(arg2 + 0xc)
            else
                rax_21 = sx.d(r14_2) s>> 5
            
            if (rax_19 == rax_21)
                *arg4 = 1
            else
                int32_t rdi_6 = rax_19 + 1
                var_134 = rdi_6
                
                if (sub_142a4a1a0(arg2, rax_19) != 0x7b)
                    *arg4 = 1
                else
                    if (rdi_6 s>= 0)
                        int32_t rax_24
                        
                        if (r14_2 s< 0)
                            rax_24 = *(arg2 + 0xc)
                        else
                            rax_24 = sx.d(r14_2) s>> 5
                        
                        if (rdi_6 s> rax_24)
                            if (r14_2 s< 0)
                                rdi_6 = *(arg2 + 0xc)
                            else
                                rdi_6 = sx.d(r14_2) s>> 5
                    else
                        rdi_6 = 0
                    
                    int32_t r9_1
                    
                    if (r14_2 s< 0)
                        r9_1 = *(arg2 + 0xc)
                    else
                        r9_1 = sx.d(r14_2) s>> 5
                    
                    rax_15 = sub_142a491f0(arg2, 0x7d, rdi_6, r9_1 - rdi_6)
                label_142b67960:
                    
                    if (rax_15 s< 0)
                        *arg4 = 1
                    else
                        int32_t r8_1 = var_134
                        
                        if (r8_1 s>= 0)
                            int16_t rax_25 = arg2[1].w
                            int32_t rcx_12
                            
                            if (rax_25 s< 0)
                                rcx_12 = *(arg2 + 0xc)
                            else
                                rcx_12 = sx.d(rax_25) s>> 5
                            
                            if (r8_1 s> rcx_12)
                                if (rax_25 s< 0)
                                    r8_1 = *(arg2 + 0xc)
                                else
                                    r8_1 = sx.d(rax_25) s>> 5
                        else
                            r8_1 = 0
                        
                        int16_t rax_26 = arg2[1].w
                        int32_t r9_4
                        
                        if (rax_26 s< 0)
                            r9_4 = *(arg2 + 0xc)
                        else
                            r9_4 = sx.d(rax_26) s>> 5
                        
                        int32_t rax_27 = sub_142a491f0(arg2, 0x3d, r8_1, r9_4 - r8_1)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_118 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_110_1 = 2
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8 =
                            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                        int16_t var_d0_1 = 2
                        
                        if (rax_27 s< 0 || rax_27 s>= rax_15 || var_138 != 0)
                            (*(*arg2 + 0x10))(arg2, zx.q(var_134), zx.q(rax_15), &var_118, var_148, 
                                var_140, var_138, arg3, var_128)
                            
                            if (var_138 != 0)
                                sub_142a48100(&var_d8, &var_118)
                                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
                                sub_142a48050(&var_118, sub_142a47e10(&var_98, "na", 2))
                                sub_142a47ff0(&var_98)
                        else
                            (*(*arg2 + 0x10))(arg2, zx.q(var_134), zx.q(rax_27), &var_118, var_148, 
                                var_140, var_138, arg3, var_128)
                            (*(*arg2 + 0x10))(arg2, zx.q(rax_27 + 1), zx.q(rax_15), &var_d8)
                        
                        sub_142b671e0(arg1, &var_118, &var_d8, arg4)
                        
                        if (*arg4 s<= 0)
                            if (r13.b != 0)
                                sub_142a9f070(arg1)
                            
                            int32_t rsi_1
                            rsi_1.b = var_137 != 0
                            *(arg3 + 8) = rsi_1 + 1 + rax_15
                        
                        sub_142a47ff0(&var_d8)
                        sub_142a47ff0(&var_118)
    else
        *arg4 = 1

__security_check_cookie(rax_1 ^ &var_168)
return arg1
