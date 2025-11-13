// 函数: sub_142a49390
// 地址: 0x142a49390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b8 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t r10 = arg4
int64_t var_c8 = arg4
int32_t rsi = arg3
int32_t rdi = arg2
void* result_1 = arg1
int64_t rdx = sx.q(arg5)
int32_t r8 = arg6
int32_t var_e8 = r8
int16_t rcx = *(arg1 + 8)
void* result

if ((rcx.b & 0x11) != 0)
    result = result_1
else
    int32_t rbp_2
    
    if (rcx s< 0)
        rbp_2 = *(result_1 + 0xc)
    else
        rbp_2 = sx.d(rcx) s>> 5
    
    if ((rcx.b & 8) == 0 || r8 != 0)
    label_142a494cc:
        
        if (rdi != rbp_2)
            if (r10 != 0)
                r10 = arg4 + (rdx << 1)
                var_c8 = r10
                
                if (r8 s< 0)
                    int32_t rax_11 = std::_WChar_traits<wchar_t>::length(r10)
                    r8 = rax_11
                    var_e8 = rax_11
                    r10 = var_c8
            else
                r8 = 0
                var_e8 = 0
            
            int16_t rcx_3 = *(result_1 + 8)
            int32_t rax_13
            
            if (rcx_3 s< 0)
                rax_13 = *(result_1 + 0xc)
            else
                rax_13 = sx.d(rcx_3) s>> 5
            
            if (rdi s< 0)
                rdi = 0
            else if (rdi s> rax_13)
                rdi = rax_13
            
            if (rsi s>= 0)
                int32_t rax_14 = rax_13 - rdi
                
                if (rsi s> rax_14)
                    rsi = rax_14
            else
                rsi = 0
            
            int32_t rax_16 = rbp_2 - rsi
            
            if (r8 s<= 0x7fffffff - rax_16)
                int32_t rdx_3 = rax_16 + r8
                int32_t var_e0_1 = rdx_3
                void* r9_1 = result_1 + 0xa
                
                if ((rcx_3.b & 2) == 0)
                    r9_1 = *(result_1 + 0x18)
                
                void* var_d8_1 = r9_1
                
                if ((rcx_3.b & 0x19) != 0)
                label_142a49688:
                    void* rbp_5
                    
                    if ((*(result_1 + 8) & 2) == 0 || rdx_3 s<= 0x1b)
                        rbp_5 = var_d8_1
                    else
                        void var_68
                        sub_142a8bca0(&var_68, r9_1, rbp_2)
                        rbp_5 = &var_68
                        var_d8_1 = &var_68
                        rdx_3 = var_e0_1
                    
                    int64_t var_c0 = 0
                    int32_t r8_4 = 0x7ffffff5
                    
                    if ((rdx_3 s>> 2) + 0x80 s<= 0x7ffffff5 - rdx_3)
                        r8_4 = (rdx_3 s>> 2) + 0x80 + rdx_3
                    
                    if (sub_142a487e0(result_1, rdx_3, r8_4, 0, &var_c0, 0) != 0)
                        void* r9_4 = result_1 + 0xa
                        
                        if ((*(result_1 + 8) & 2) == 0)
                            r9_4 = *(result_1 + 0x18)
                        
                        void* var_d0_1 = r9_4
                        int32_t rbp_6
                        
                        if (r9_4 == rbp_5)
                            rbp_6 = var_e8
                            
                            if (rsi != rbp_6)
                                int32_t rax_32 = rax_16 - rdi
                                
                                if (rax_32 s> 0)
                                    memmove(r9_4 + (sx.q(rdi + rbp_6) << 1), 
                                        var_d8_1 + (sx.q(rsi + rdi) << 1), rax_32 * 2)
                        else
                            if (rdi s> 0)
                                memmove(r9_4, rbp_5, rdi * 2)
                                r9_4 = var_d0_1
                            
                            int32_t rax_28 = rax_16 - rdi
                            
                            if (rax_28 s<= 0)
                                rbp_6 = var_e8
                            else
                                rbp_6 = var_e8
                                memmove(r9_4 + (sx.q(rdi + rbp_6) << 1), 
                                    (sx.q(rsi + rdi) << 1) + rbp_5, rax_28 * 2)
                        
                        if (rbp_6 s> 0)
                            memmove(var_d0_1 + (sx.q(rdi) << 1), var_c8, rbp_6 * 2)
                        
                        if (var_e0_1 s> 0x3ff)
                            *(result_1 + 8) |= 0xffe0
                            *(result_1 + 0xc) = var_e0_1
                        else
                            *(result_1 + 8) &= 0x1f
                            int32_t rax_36
                            rax_36.w = var_e0_1.w << 5
                            *(result_1 + 8) |= rax_36.w
                        
                        int64_t rcx_25 = var_c0
                        
                        if (rcx_25 != 0)
                            sub_142a7dcd0(rcx_25)
                else
                    if ((rcx_3.b & 4) == 0)
                        if (r9_1 u>= r10 + (sx.q(r8) << 1) || r10 u>= r9_1 + (sx.q(rbp_2) << 1))
                            goto label_142a49688
                    else if (*(*(result_1 + 0x18) - 4) != 1 || r9_1 u>= r10 + (sx.q(r8) << 1)
                            || r10 u>= r9_1 + (sx.q(rbp_2) << 1))
                        goto label_142a49688
                    
                    struct icu_64::UObject::VTable* var_a8 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    char var_a0_1 = 2
                    sub_142a48d70(&var_a8, r10, 0, r8)
                    void* var_90
                    
                    if ((var_a0_1 & 1) == 0)
                        void var_9e
                        void* r9_3 = &var_9e
                        
                        if ((var_a0_1 & 2) == 0)
                            r9_3 = var_90
                        
                        char var_f0
                        var_f0.d = var_e8
                        int64_t var_f8
                        var_f8.d = 0
                        result_1 = sub_142a49390(result_1, zx.q(rdi), zx.q(rsi), r9_3, var_f8, 
                            var_f0, var_e8, var_e0_1, var_d8_1)
                    else
                        sub_142a4ab40(result_1)
                    
                    var_a8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    
                    if ((var_a0_1 & 4) != 0)
                        int32_t rax_24 = *(var_90 - 4)
                        *(var_90 - 4) -= 1
                        
                        if (rax_24 == 1)
                            sub_142a7dcd0(var_90 - 4)
                    
                    var_a8 = &icu_64::Replaceable::`vftable'{for `icu_64::UObject'}
                    sub_142a47900(&var_a8)
            else
                sub_142a4ab40(result_1)
            
            result = result_1
        else
            result = sub_142a48d70(result_1, r10, rdx.d, r8)
    else if (rdi != 0)
        if (rdi s>= 0)
            int32_t rax_7
            
            if (rcx s< 0)
                rax_7 = *(result_1 + 0xc)
            else
                rax_7 = sx.d(rcx) s>> 5
            
            if (rdi s> rax_7)
                if (rcx s< 0)
                    rdi = *(result_1 + 0xc)
                else
                    rdi = sx.d(rcx) s>> 5
        else
            rdi = 0
        
        if (rsi s< rbp_2 - rdi)
            goto label_142a494cc
        
        if (rdi s> 0x3ff)
            rcx |= 0xffe0
            *(result_1 + 0xc) = rdi
        else
            rcx = (rcx & 0x1f) | rdi.w << 5
        
        *(result_1 + 8) = rcx
        *(result_1 + 0x10) = rdi
        result = result_1
    else
        if (rsi s>= 0)
            int32_t rax_3
            
            if (rcx s< 0)
                rax_3 = *(result_1 + 0xc)
            else
                rax_3 = sx.d(rcx) s>> 5
            
            if (rsi s> rax_3)
                if (rcx s< 0)
                    rsi = *(result_1 + 0xc)
                else
                    rsi = sx.d(rcx) s>> 5
        else
            rsi = 0
        
        *(result_1 + 0x18) += sx.q(rsi) * 2
        *(result_1 + 0x10) -= rsi
        int32_t rbp_3 = rbp_2 - rsi
        
        if (rbp_3 s> 0x3ff)
            rcx |= 0xffe0
            *(result_1 + 0xc) = rbp_3
        else
            rbp_3.w <<= 5
            rcx = (rcx & 0x1f) | rbp_3.w
        
        *(result_1 + 8) = rcx
        result = result_1

__security_check_cookie(rax_1 ^ &var_118)
return result
