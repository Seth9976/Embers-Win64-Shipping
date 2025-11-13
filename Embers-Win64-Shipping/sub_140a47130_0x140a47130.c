// 函数: sub_140a47130
// 地址: 0x140a47130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
struct icu_64::UObject::icu_64::Locale::VTable* var_f8
sub_142a456d0(&var_f8, sub_142a463c0())
int32_t rcx_1 = 0
*arg1 = 0
arg1[1] = 0
char* var_d0

if (var_d0 != 0 && *var_d0 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (var_d0[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_1.d + 1)
        rcx_1 = arg1[1].d
    
    int32_t rax_3 = rcx_1 + rbx_1.d + 1
    arg1[1].d = rax_3
    
    if (rax_3 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    sub_1405a7220(*arg1, rbx_1.d + 1, var_d0, rbx_1.d + 1, 0x3f)

sub_142a45a20(&var_f8)
__security_check_cookie(rax_1 ^ &var_128)
return arg1
