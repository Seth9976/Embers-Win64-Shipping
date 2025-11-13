// 函数: sub_142aa7250
// 地址: 0x142aa7250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int32_t rax_4

if ((*(arg1 + 8) & 1) == 0)
    int16_t rax_2 = *(arg1 + 8)
    
    if (rax_2 s< 0)
        rax_4 = *(arg1 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5

if ((*(arg1 + 8) & 1) != 0 || rax_4 s>= 0x80)
    sub_142a46dc0(arg2)
else
    int32_t rdi_1 = 0
    char var_b8[0x80]
    int64_t rax_8
    
    while (true)
        int32_t r8_1 = rdi_1
        
        if (rdi_1 s>= 0)
            int16_t rax_5 = *(arg1 + 8)
            int32_t rcx_1
            
            if (rax_5 s< 0)
                rcx_1 = *(arg1 + 0xc)
            else
                rcx_1 = sx.d(rax_5) s>> 5
            
            if (rdi_1 s> rcx_1)
                if (rax_5 s< 0)
                    r8_1 = *(arg1 + 0xc)
                else
                    r8_1 = sx.d(rax_5) s>> 5
        else
            r8_1 = 0
        
        int16_t rax_6 = *(arg1 + 8)
        int32_t r9_2
        
        if (rax_6 s< 0)
            r9_2 = *(arg1 + 0xc)
        else
            r9_2 = sx.d(rax_6) s>> 5
        
        int32_t rax_7 = sub_142a491f0(arg1, 0x40, r8_1, r9_2 - r8_1)
        int64_t rsi_1 = sx.q(rax_7)
        int32_t var_1a0_1 = 0
        rax_8 = sx.q(rdi_1)
        
        if (rax_7 s< 0)
            break
        
        sub_142a49990(arg1, rdi_1, rsi_1.d - rdi_1, &var_b8[rax_8], 0x80 - rdi_1)
        var_b8[rsi_1] = 0x40
        rdi_1 = (rsi_1 + 1).d
    
    sub_142a49990(arg1, rdi_1, 0x7fffffff, &var_b8[rax_8], 0x80 - rdi_1)
    struct icu_64::UObject::icu_64::Locale::VTable* var_198
    sub_142a45b10(arg2, sub_142a460b0(&var_198, &var_b8))
    sub_142a45a20(&var_198)

__security_check_cookie(rax_1 ^ &var_1c8)
return arg2
