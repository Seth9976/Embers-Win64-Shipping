// 函数: sub_142b69650
// 地址: 0x142b69650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (*arg5 s<= 0)
    int16_t rcx
    void* r15_1
    
    if ((*(arg2 + 8) & 1) == 0)
        rcx = *(arg3 + 8)
        
        if ((rcx.b & 0x11) == 0)
            r15_1 = arg3 + 0xa
            
            if ((rcx.b & 2) == 0)
                r15_1 = *(arg3 + 0x18)
        else
            r15_1 = nullptr
    
    if ((*(arg2 + 8) & 1) != 0 || arg2 == arg3 || r15_1 == 0)
        *arg5 = 1
    else
        int16_t rax_2 = *(arg2 + 8)
        int32_t rsi_2
        
        if (rax_2 s< 0)
            rsi_2 = *(arg2 + 0xc)
        else
            rsi_2 = sx.d(rax_2) s>> 5
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_80_1 = 2
        int64_t var_d8 = arg1[1]
        int64_t var_c8_1 = (zx.o(0)).q
        int64_t var_b8_1 = 0
        int32_t var_b0_1 = 0
        char var_ac_1 = 0
        int32_t rax_5
        
        if (rcx s< 0)
            rax_5 = *(arg3 + 0xc)
        else
            rax_5 = sx.d(rcx) s>> 5
        
        if (sub_142b1e9d0(&var_d8, rax_5 + rsi_2, arg5) != 0)
            int16_t rax_7 = *(arg3 + 8)
            int32_t rax_9
            
            if (rax_7 s< 0)
                rax_9 = *(arg3 + 0xc)
            else
                rax_9 = sx.d(rax_7) s>> 5
            
            (*(*arg1 + 0x90))(arg1, r15_1, r15_1 + (sx.q(rax_9) << 1), zx.q(arg4), &var_88, 
                &var_d8, arg5)
        
        if (var_c8_1 != 0)
            sub_142a4a600(arg2, ((var_b8_1 - var_c8_1) s>> 1).d)
        
        if (*arg5 s> 0)
            int32_t var_7c
            int32_t rax_11 = var_7c
            int32_t rdx_6
            
            if (var_80_1 s< 0)
                rdx_6 = rax_11
            else
                rdx_6 = sx.d(var_80_1) s>> 5
            
            if (var_80_1 s>= 0)
                rax_11 = sx.d(var_80_1) s>> 5
            
            int64_t* var_f0
            var_f0.d = rax_11
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f8
            var_f8.d = 0
            sub_142a49310(arg2, rsi_2 - rdx_6, 0x7fffffff, &var_88, var_f8.d, var_f0.d)
        
        sub_142a47ff0(&var_88)

__security_check_cookie(rax_1 ^ &var_118)
return arg2
