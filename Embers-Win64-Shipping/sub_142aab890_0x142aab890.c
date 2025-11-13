// 函数: sub_142aab890
// 地址: 0x142aab890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = -2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char** rax_2 = sub_142a64160(nullptr, "numberingSystems", arg2)
char** var_90 = rax_2
char** rax_3 = sub_142a625a0(rax_2, "numberingSystems", nullptr, arg2)
char** var_88 = rax_3
char** rax_4 = sub_142a625a0(rax_3, arg1, nullptr, arg2)
char** var_80 = rax_4
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
sub_142aabac0(&var_78, rax_4, "desc", arg2)
sub_142a625a0(rax_4, "radix", rax_3, arg2)
int32_t rax_5 = sub_142a63750(rax_3, arg2)
sub_142a625a0(rax_4, "algorithmic", rax_3, arg2)
int32_t* rdx_3
rdx_3.b = sub_142a63750(rax_3, arg2) == 1
int32_t rcx_7 = *arg2
struct icu_64::UObject::icu_64::NumberingSystem::VTable** result

if (rcx_7 s<= 0)
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** result_1 =
        sub_142aab790(rax_5, rdx_3.b, &var_78, arg2)
    
    if (result_1 == 0)
        if (*arg2 s<= result_1.d)
            *arg2 = 7
        
        goto label_142aab9bb
    
    if (*arg2 s<= 0)
        if (arg1 != 0)
            strncpy(result_1 + 0x4d, arg1, 8)
            *(result_1 + 0x55) = 0
        else
            *(result_1 + 0x4d) = arg1.b
        
        result = result_1
    else
    label_142aab9bb:
        result = nullptr
        
        if (result_1 != 0)
            (*result_1)->__offset(0x0).q(result_1, 1)
else
    if (rcx_7 != 7)
        *arg2 = 0x10
    
    result = nullptr

sub_142a47ff0(&var_78)

if (rax_4 != 0)
    sub_142a5f860(rax_4)

if (rax_3 != 0)
    sub_142a5f860(rax_3)

if (rax_2 != 0)
    sub_142a5f860(rax_2)

__security_check_cookie(rax_1 ^ &var_b8)
return result
