// 函数: sub_142b26060
// 地址: 0x142b26060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void var_b8
sub_142b74060(&var_b8, arg3, 0, &arg1[0xc])
void var_138
sub_142b74060(&var_138, arg4, 0, &arg1[0xc])
void* rbx_1 = nullptr
void* rdi = nullptr
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178
sub_142a47fc0(&var_178, 0xffff)
int16_t var_198 = 0xffff
sub_142a48d70(&var_178, &var_198, 0, 1)

while (true)
    if (rbx_1 == 0)
        void var_90
        rbx_1 = &var_90
        
        if (sub_142b743d0(&var_b8, &arg1[0xc]) == 0)
            rbx_1 = &var_178
    
    if (rdi == 0)
        void var_110
        rdi = &var_110
        
        if (sub_142b743d0(&var_138, &arg1[0xc]) == 0)
            rdi = &var_178
    
    if (rbx_1 == &var_178 && rdi == &var_178)
        sub_142a47ff0(&var_178)
        sub_142b74110(&var_138)
        sub_142b74110(&var_b8)
        __security_check_cookie(rax_1 ^ &var_1b8)
        return &icu_64::UObject::`vftable'
    
    char rax_5 = sub_142a98a20(rbx_1, rdi)
    
    if (rax_5 s< 0)
        sub_142b25c20(arg1, arg2, rbx_1)
        rbx_1 = nullptr
    else if (rax_5 s<= 0)
        arg1[0xb] = rbx_1
        int32_t var_cc
        int32_t var_4c
        sub_142b25cc0(arg1, arg2, var_4c, var_cc)
        arg1[0xb] = 0
        rbx_1 = nullptr
        rdi = nullptr
    else
        sub_142b25c20(arg1, arg2, rdi)
        rdi = nullptr
