// 函数: sub_142b36680
// 地址: 0x142b36680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t result = __security_cookie ^ &var_c8
int64_t result_1 = result

if (*arg3 s<= 0)
    sub_142b35cc0(arg1 + 0x40)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_80_1 = 2
    int32_t rdi_1 = 0
    
    if (sub_142a4a1f0(arg2) s> 0)
        int32_t rax_11
        
        do
            int32_t r8 = rdi_1
            
            if (rdi_1 s>= 0)
                int16_t rax_2 = *(arg2 + 8)
                int32_t rcx_3
                
                if (rax_2 s< 0)
                    rcx_3 = *(arg2 + 0xc)
                else
                    rcx_3 = sx.d(rax_2) s>> 5
                
                if (rdi_1 s> rcx_3)
                    if (rax_2 s< 0)
                        r8 = *(arg2 + 0xc)
                    else
                        r8 = sx.d(rax_2) s>> 5
            else
                r8 = 0
            
            int16_t rax_3 = *(arg2 + 8)
            int32_t r9_2
            
            if (rax_3 s< 0)
                r9_2 = *(arg2 + 0xc)
            else
                r9_2 = sx.d(rax_3) s>> 5
            
            int32_t rax_4 = sub_142a491f0(arg2, 0x3b, r8, r9_2 - r8)
            int32_t rsi_1 = rax_4
            
            if (rax_4 == 0xffffffff)
                rsi_1 = sub_142a4a1f0(arg2)
            
            sub_142a4afe0(&var_88)
            int32_t r8_3
            int32_t var_7c
            
            if (var_80_1 s< 0)
                r8_3 = var_7c
            else
                r8_3 = sx.d(var_80_1) s>> 5
            sub_142a49310(&var_88, 0, r8_3, arg2, rdi_1, rsi_1 - rdi_1)
            int32_t rax_9 = *(arg1 + 0x48)
            int64_t rdx
            
            if (rax_9 != 0)
                rdx = *(arg1 + 0x40)
            
            int64_t r8_4
            
            if (rax_9 == 0 || rdx == 0)
                r8_4 = 0
            else
                r8_4 = *(rdx + (zx.q(rax_9 - 1) << 3))
            
            int32_t var_a0_1
            var_a0_1.q = arg3
            int32_t var_a8_1
            var_a8_1.q = arg1 + 0x40
            sub_142b343d0(&var_88, arg1, r8_4, *(arg1 + 0x80), var_a8_1, var_a0_1)
            rdi_1 = rsi_1 + 1
            rax_11 = sub_142a4a1f0(arg2)
        while (rdi_1 s< rax_11)
    
    int64_t rbx_1 = 0
    int32_t rbp_1 = *(arg1 + 0x48)
    int32_t rsi_2 = 0
    
    if (rbp_1 s> 0)
        int64_t** rdi_2 = nullptr
        
        do
            int64_t* rcx_10 = *(arg1 + 0x40)
            
            if (rcx_10 != 0)
                rcx_10 = *(rdi_2 + rcx_10)
            
            int64_t rax_12 = *rcx_10
            
            if (rax_12 != 0)
                if (rax_12 s< rbx_1)
                    *arg3 = 9
                    break
                
                rbx_1 = rax_12
            else
                sub_142b35320(rcx_10, rbx_1, arg3)
            
            rsi_2 += 1
            rdi_2 = &rdi_2[1]
            int64_t rax_13 = rbx_1 + 1
            
            if (*(arg1 + 0x98) != 0)
                rax_13 = rbx_1
            
            rbx_1 = rax_13
        while (rsi_2 s< rbp_1)
    
    result = sub_142a47ff0(&var_88)

__security_check_cookie(result_1 ^ &var_c8)
return result
