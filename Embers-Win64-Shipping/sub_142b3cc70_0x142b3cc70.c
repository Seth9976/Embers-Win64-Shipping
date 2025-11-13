// 函数: sub_142b3cc70
// 地址: 0x142b3cc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_238 = -2
void var_268
int64_t rax_1 = __security_cookie ^ &var_268
char rcx_2

if (arg3 != 0)
    void* rcx_3
    
    if (*arg1 == 0)
        rcx_3 = &arg1[0x58]
    else
        rcx_3 = *(arg1 + 0x58)
    
    rcx_2 = *(sx.q(*(arg1 + 0x80) + arg2) + rcx_3)
else
    void* rdx
    
    if (*arg1 == arg3.b)
        rdx = &arg1[0x58]
    else
        rdx = *(arg1 + 0x58)
    
    rcx_2 = *(sx.q(arg2 - 1 + *(arg1 + 0x80)) + rdx)

uint64_t result

if (rcx_2 == 7)
    int32_t rax_6
    
    if (arg3 != 0)
        rax_6 = sub_142b3f240(arg1, arg2)
    else
        rax_6 = sub_142b3f2f0(arg1, arg2)
    
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_118
    sub_142b3d0f0(&var_118, arg4, 0, arg3, arg5)
    int32_t result_1
    
    if (sub_142a9f280(&var_118, zx.q(rax_6)) != 0)
        int32_t rax_8
        
        if (arg3 != 0)
            rax_8 = sub_142b3f2f0(arg1, arg2)
        else
            rax_8 = sub_142b3f240(arg1, arg2)
        
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable* var_1e8
        sub_142b3d0f0(&var_1e8, arg4, 1, arg3, arg5)
        
        if (sub_142a9f280(&var_1e8, zx.q(rax_8)) != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_228
            sub_142b3d080(&var_228, arg4, arg3, arg5)
            result_1 = sub_142b3fb40(arg1, arg2, &var_228, 0xd, arg5)
            sub_142a47ff0(&var_228)
        else
            result_1 = 0
        
        sub_142a9dbc0(&var_1e8)
    else
        result_1 = 0
    
    sub_142a9dbc0(&var_118)
    result = zx.q(result_1)
else
    result = 0

__security_check_cookie(rax_1 ^ &var_268)
return result
