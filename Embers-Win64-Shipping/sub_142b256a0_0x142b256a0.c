// 函数: sub_142b256a0
// 地址: 0x142b256a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = -2
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* result

if ((*(arg1 + 0x20) & 0xffe0) != 0 || *(arg1 + 0x58) != 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    sub_142a479b0(&var_58, arg1 + 0x18)
    sub_142a48580(&var_58, arg2)
    void* rdx_2 = *(arg1 + 0x58)
    
    if (rdx_2 != 0)
        int16_t rax_2 = *(rdx_2 + 8)
        int32_t r9_2
        
        if (rax_2 s< 0)
            r9_2 = *(rdx_2 + 0xc)
        else
            r9_2 = sx.d(rax_2) s>> 5
        
        sub_142a48d00(&var_58, rdx_2, 0, r9_2)
    
    sub_142a9e730(*(arg1 + 0x10), &var_58)
    result = sub_142a47ff0(&var_58)
else
    result = sub_142a9e7d0(*(arg1 + 0x10), arg2)

__security_check_cookie(rax_1 ^ &var_88)
return result
