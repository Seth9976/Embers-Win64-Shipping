// 函数: sub_142a5e9c0
// 地址: 0x142a5e9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result
int64_t* rdx = *(arg1 + 0x170)

if (rdx != 0)
    void* rdx_2 = *rdx + 0x188
    bool cond:0_1
    
    if ((*(arg2 + 8) & 1) == 0)
        int16_t rax_1 = *(arg2 + 8)
        int32_t r8_2
        
        if (rax_1 s< 0)
            r8_2 = *(arg2 + 0xc)
        else
            r8_2 = sx.d(rax_1) s>> 5
        
        int16_t rax_2 = *(rdx_2 + 8)
        int32_t rax_4
        
        if (rax_2 s< 0)
            rax_4 = *(rdx_2 + 0xc)
        else
            rax_4 = sx.d(rax_2) s>> 5
        
        if ((*(rdx_2 + 8) & 1) != 0 || r8_2 != rax_4)
            goto label_142a5ea4a
        
        result = sub_142a490e0(arg2, rdx_2, r8_2)
        cond:0_1 = result.b != 0
        goto label_142a5ea48
    
    result.b = *(rdx_2 + 8) & 1
    cond:0_1 = result.b != 0
label_142a5ea48:
    
    if (not(cond:0_1))
    label_142a5ea4a:
        int16_t rax_5 = *(arg2 + 8)
        int32_t rax_7
        
        if (rax_5 s< 0)
            rax_7 = *(arg2 + 0xc)
        else
            rax_7 = sx.d(rax_5) s>> 5
        
        if (rax_7 s<= 0)
            sub_142a4ab40(**(arg1 + 0x170) + 0x188)
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
                sub_142a47b70(&var_58, sub_142a486d0(arg2, 0))
            sub_142a48050(**(arg1 + 0x170) + 0x188, rax_9)
            sub_142a47ff0(&var_58)
        
        int32_t var_64 = 0
        result = sub_142a5f4f0(arg1, &var_64)

__security_check_cookie(result_1 ^ &var_88)
return result
