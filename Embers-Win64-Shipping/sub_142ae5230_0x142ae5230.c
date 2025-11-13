// 函数: sub_142ae5230
// 地址: 0x142ae5230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a45710(&var_f8, nullptr, nullptr, nullptr, nullptr)
char* rbx_1

if (sub_142a45d30(arg2, &var_f8) != 0)
    rbx_1 = nullptr
else
    rbx_1 = sub_141a50850(arg2)

sub_142a45a20(&var_f8)
int32_t var_108 = 0
char** rax_4 = sub_142a641c0(nullptr, rbx_1, &var_108)
char** result = sub_142a62230(rax_4, "contextTransforms/relative", rax_4, &var_108)

if (var_108 s> 0)
label_142ae5325:
    
    if (rax_4 != 0)
        result = sub_142a5f860(rax_4)
else if (rax_4 != 0)
    int32_t var_104 = 0
    result = sub_142a63700(rax_4, &var_104, &var_108)
    
    if (var_108 s<= 0 && result != 0 && var_104 s>= 2)
        *(arg1 + 0x2ea) = *result
        result = zx.q(*(result + 4))
        *(arg1 + 0x2eb) = result.b
    
    goto label_142ae5325

__security_check_cookie(rax_1 ^ &var_138)
return result
