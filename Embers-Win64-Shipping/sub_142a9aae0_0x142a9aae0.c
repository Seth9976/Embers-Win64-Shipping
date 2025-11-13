// 函数: sub_142a9aae0
// 地址: 0x142a9aae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_128 = -2
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t result

if ((*(*arg1 + 0x28))(arg1, arg5, arg4) == 0)
    result = 0
else
    int32_t rax_5 = (*(*arg2 + 0x48))(arg2)
    struct icu_64::UObject::icu_64::Locale::VTable* var_118
    sub_142a459c0(&var_118)
    int64_t r8_1 = *arg2
    (*(r8_1 + 0x58))(arg2, &var_118, r8_1)
    int64_t result_1 = (*(*arg1 + 0x30))(arg1, &var_118, zx.q(rax_5), arg3, arg4)
    sub_142a45a20(&var_118)
    result = result_1

__security_check_cookie(rax_1 ^ &var_158)
return result
