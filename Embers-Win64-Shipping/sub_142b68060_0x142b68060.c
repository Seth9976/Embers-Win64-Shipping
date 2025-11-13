// 函数: sub_142b68060
// 地址: 0x142b68060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8

if (*arg6 s<= 0)
    if (*(arg1 + 0x28) != 0 || *(arg1 + 0x58) != 0)
        *arg6 = 0x1e
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_70_1 = 2
        void var_a0
        sub_142b8bd80(&var_a0, arg2, arg5, arg3)
        void* (* var_b8)(void* arg1, int32_t arg2) = sub_142b682a0
        void* rdi_1 = nullptr
        int32_t var_b0_1 = 0
        var_b8.o = var_b8.o
        sub_142b66530(arg1, &var_a0, arg5, &var_78, arg4, &var_b8, 0, arg6)
        int64_t var_88
        
        if (*arg6 s<= 0)
            if (var_88 == 0)
                int32_t r8_3
                int32_t var_6c
                
                if (var_70_1 s< 0)
                    r8_3 = var_6c
                else
                    r8_3 = sx.d(var_70_1) s>> 5
                char rax_3 = var_70_1.b
                
                if ((rax_3 & 0x11) == 0)
                    void var_6e
                    rdi_1 = &var_6e
                    void* var_60
                    
                    if ((rax_3 & 2) == 0)
                        rdi_1 = var_60
                
                sub_142aa05d0(arg1, rdi_1, r8_3)
            else
                *arg6 = 0x10002
        sub_142a47ff0(&var_78)

__security_check_cookie(rax_1 ^ &var_f8)
return arg1
