// 函数: sub_142ab0f10
// 地址: 0x142ab0f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_50 = 2
int32_t rax_12

for (int32_t i = 0; i != 0xffffffff; i = rax_12 + 1)
    if (i s>= sub_142a4a1f0(arg2))
        break
    
    if (i s< sub_142a4a1f0(arg2))
        int64_t rsi_1 = sx.q(i) * 2
        int32_t rax_9
        
        do
            int16_t rcx_2 = *(arg2 + 8)
            int32_t rax_6
            
            if (rcx_2 s< 0)
                rax_6 = *(arg2 + 0xc)
            else
                rax_6 = sx.d(rcx_2) s>> 5
            
            int16_t rcx_3
            
            if (i u>= rax_6)
                rcx_3 = -1
            else
                void* rax_7 = arg2 + 0xa
                
                if ((rcx_2.b & 2) == 0)
                    rax_7 = *(arg2 + 0x18)
                
                rcx_3 = *(rsi_1 + rax_7)
            
            if (sub_142b13730(zx.d(rcx_3)) == 0)
                break
            
            i += 1
            rsi_1 += 2
            rax_9 = sub_142a4a1f0(arg2)
        while (i s< rax_9)
    
    int32_t i_1 = i
    
    if (i s>= 0)
        int16_t rax_10 = *(arg2 + 8)
        int32_t rcx_7
        
        if (rax_10 s< 0)
            rcx_7 = *(arg2 + 0xc)
        else
            rcx_7 = sx.d(rax_10) s>> 5
        
        if (i s> rcx_7)
            if (rax_10 s< 0)
                i_1 = *(arg2 + 0xc)
            else
                i_1 = sx.d(rax_10) s>> 5
    else
        i_1 = 0
    
    int16_t rax_11 = *(arg2 + 8)
    int32_t r9_2
    
    if (rax_11 s< 0)
        r9_2 = *(arg2 + 0xc)
    else
        r9_2 = sx.d(rax_11) s>> 5
    
    rax_12 = sub_142a491f0(arg2, 0x3b, i_1, r9_2 - i_1)
    
    if (rax_12 == 0xffffffff)
        sub_142a48d00(&var_58, arg2, i, sub_142a4a1f0(arg2) - i)
        break
    
    if (rax_12 s>= sub_142a4a1f0(arg2))
        break
    
    sub_142a48d00(&var_58, arg2, i, rax_12 - i + 1)

sub_142a48aa0(arg2, &var_58, 0)
sub_142a47ff0(&var_58)
__security_check_cookie(rax_1 ^ &var_88)
return &icu_64::UObject::`vftable'
