// 函数: sub_142b888c0
// 地址: 0x142b888c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t var_78 = 0
int32_t var_74 = 0
void* rax_2 = sub_142a951b0(*arg1, arg1[6], arg2, arg3, arg4, &var_74, &var_78)
int32_t r8_1

if (var_78 s<= 0)
    r8_1 = var_74

void* result

if (var_78 s> 0 || r8_1 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    void* result_1 = sub_142a48aa0(arg5, sub_142a47e10(&var_68, arg4, 0xffffffff), 0)
    sub_142a47ff0(&var_68)
    result = result_1
else
    result = sub_142a66950(arg5, rax_2, r8_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
