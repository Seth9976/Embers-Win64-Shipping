// 函数: sub_142b439b0
// 地址: 0x142b439b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_f8 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int16_t var_dc
void* var_e8 = &var_dc:1
int32_t var_e0 = 0x28
var_dc = 0
void* rdi = nullptr
int32_t var_b0 = 0
int32_t result_1 = 0
void* var_100
int64_t* var_f0 = &var_100
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142b46920(arg1, &var_68)
char rcx = (rax_2[1].w).b

if ((rcx & 0x11) == 0)
    rdi = rax_2 + 0xa
    
    if ((rcx & 2) == 0)
        rdi = rax_2[3]

var_100 = rdi
int32_t rax_3 = sub_142b467c0(arg1)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
sub_142a47a60(&var_a8, 0, var_100, rax_3)
sub_142a8cd50(&var_e8, &var_a8, &result_1)
sub_142a47ff0(&var_a8)
sub_142a47ff0(&var_68)
struct icu_64::UObject::icu_64::NumberingSystem::VTable** result = zx.q(result_1)

if (result.d == 0x1a)
    *arg3 = 0x10113
else if (result.d s<= 0)
    result = sub_142aab890(var_e8, arg3)
    
    if (result == 0 || *arg3 s> 0)
        *arg3 = 0x10113
    else
        result = sub_142ab84f0(arg2 + 0x88, result)
else
    *arg3 = result.d

if (var_dc.b != 0)
    result = sub_142a7dcd0(var_e8)

__security_check_cookie(rax_1 ^ &var_128)
return result
