// 函数: sub_142b42bf0
// 地址: 0x142b42bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t result = sub_142b467c0(arg1)

if (result == 3)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142b46920(arg1, &var_68)
    char rcx_1 = (rax_2[1].w).b
    void* rbx_1
    
    if ((rcx_1 & 0x11) == 0)
        rbx_1 = rax_2 + 0xa
        
        if ((rcx_1 & 2) == 0)
            rbx_1 = rax_2[3]
    else
        rbx_1 = nullptr
    
    sub_142a47ff0(&var_68)
    int32_t var_a8[0x4]
    var_a8[0] = 0
    void var_90
    sub_142ab67d0(&var_90, rbx_1, &var_a8)
    
    if (var_a8[0] s<= 0)
        sub_142ab6090(arg2 + 0x10, &var_90)
    else
        *arg3 = 0x10113
    
    result = sub_142ab6900(&var_90)
else
    *arg3 = 0x10113

__security_check_cookie(rax_1 ^ &var_c8)
return result
