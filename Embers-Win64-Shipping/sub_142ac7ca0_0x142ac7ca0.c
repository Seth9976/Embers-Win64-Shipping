// 函数: sub_142ac7ca0
// 地址: 0x142ac7ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
sub_142a4ab40(arg2)

if (*arg3 s<= 0)
    int32_t rcx_1 = 0
    int16_t rax_2 = *(arg1 + 8)
    int32_t rdx_1
    
    if (rax_2 s< 0)
        rdx_1 = *(arg1 + 0xc)
    else
        rdx_1 = sx.d(rax_2) s>> 5
    
    if (rdx_1 s< 0)
        if (rax_2 s< 0)
            rcx_1 = *(arg1 + 0xc)
        else
            rcx_1 = sx.d(rax_2) s>> 5
    
    int32_t rdx_3
    
    if (rax_2 s< 0)
        rdx_3 = *(arg1 + 0xc)
    else
        rdx_3 = sx.d(rax_2) s>> 5
    
    int32_t rax_3 = sub_142a4a330(arg1, &data_143656118, 0, 2, rcx_1, rdx_3 - rcx_1)
    
    if (rax_3 s>= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_70_1 = 2
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
            sub_142a4ad20(arg1, &var_b8, 0, rax_3)
        int16_t rcx_5 = rax_4[1].w
        int32_t r9_3
        
        if (rcx_5 s< 0)
            r9_3 = *(rax_4 + 0xc)
        else
            r9_3 = sx.d(rcx_5) s>> 5
        
        int32_t rax_5 = sub_142a49270(rax_4, 0x48, 0, r9_3)
        sub_142a47ff0(&var_b8)
        
        if (rax_5 s>= 0)
            sub_142a48050(&var_78, sub_142a4ad20(arg1, &var_b8, rax_5 + 1, rax_3 - rax_5 - 1))
            sub_142a47ff0(&var_b8)
        
        sub_142a48aa0(arg2, sub_142a4ad20(arg1, &var_b8, 0, rax_3 + 2), 0)
        sub_142a47ff0(&var_b8)
        int32_t r9_9
        int32_t var_6c
        
        if (var_70_1 s< 0)
            r9_9 = var_6c
        else
            r9_9 = sx.d(var_70_1) s>> 5
        sub_142a48d00(arg2, &var_78, 0, r9_9)
        sub_142a48d70(arg2, &data_143656120, 0, 0xffffffff)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_9 =
            sub_142a4ad20(arg1, &var_b8, rax_3 + 2, 0x7fffffff)
        int16_t rcx_17 = rax_9[1].w
        int32_t r9_11
        
        if (rcx_17 s< 0)
            r9_11 = *(rax_9 + 0xc)
        else
            r9_11 = sx.d(rcx_17) s>> 5
        
        sub_142a48d00(arg2, rax_9, 0, r9_11)
        sub_142a47ff0(&var_b8)
        sub_142a47ff0(&var_78)
    else
        *arg3 = 1

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
