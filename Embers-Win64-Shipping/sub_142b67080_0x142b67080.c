// 函数: sub_142b67080
// 地址: 0x142b67080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result

if (*arg5 s<= 0)
    if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0)
        *arg5 = 0x1e
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_70_1 = 2
        void var_a0
        sub_142b8bd80(&var_a0, arg2, arg4, arg3)
        void* rbx_1 = nullptr
        int64_t var_b8 = 0
        int32_t var_b0_1 = 0
        var_b8.o = var_b8.o
        sub_142b66530(arg1, &var_a0, arg4, &var_78, 1, &var_b8, 0, arg5)
        int64_t var_88
        
        if (*arg5 s<= 0)
            if (var_88 == 0)
                int32_t r8_3
                int32_t var_6c
                
                if (var_70_1 s< 0)
                    r8_3 = var_6c
                else
                    r8_3 = sx.d(var_70_1) s>> 5
                char rax_2 = var_70_1.b
                
                if ((rax_2 & 0x11) == 0)
                    void var_6e
                    rbx_1 = &var_6e
                    void* var_60
                    
                    if ((rax_2 & 2) == 0)
                        rbx_1 = var_60
                
                sub_142aa05d0(arg1, rbx_1, r8_3)
            else
                *arg5 = 0x10002
        result = sub_142a47ff0(&var_78)

__security_check_cookie(result_1 ^ &var_f8)
return result
