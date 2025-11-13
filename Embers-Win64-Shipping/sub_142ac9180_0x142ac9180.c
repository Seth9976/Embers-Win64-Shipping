// 函数: sub_142ac9180
// 地址: 0x142ac9180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result

if (*arg3 s<= 0)
    int32_t rdx = 0
    int16_t rax_1 = *(arg2 + 8)
    int32_t r8_1
    
    if (rax_1 s< 0)
        r8_1 = *(arg2 + 0xc)
    else
        r8_1 = sx.d(rax_1) s>> 5
    
    if (r8_1 s< 0)
        if (rax_1 s< 0)
            rdx = *(arg2 + 0xc)
        else
            rdx = sx.d(rax_1) s>> 5
    
    int32_t rcx_1
    
    if (rax_1 s< 0)
        rcx_1 = *(arg2 + 0xc)
    else
        rcx_1 = sx.d(rax_1) s>> 5
    
    result = sub_142a4a330(arg2, &data_143656110, 0, 3, rdx, rcx_1 - rdx)
    int32_t rsi_1 = result.d
    
    if (result.d s>= 0)
        sub_142a48aa0(arg1 + 0x240, arg2, 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
        sub_142acc400(sub_142a4ad20(arg2, &var_68, 0, rsi_1), arg1 + 0x470)
        sub_142a47ff0(&var_68)
        sub_142acc400(sub_142a4ad20(arg2, &var_68, rsi_1 + 3, 0x7fffffff), arg1 + 0x4b0)
        result = sub_142a47ff0(&var_68)
    else
        *arg3 = 1

__security_check_cookie(result_1 ^ &var_a8)
return result
