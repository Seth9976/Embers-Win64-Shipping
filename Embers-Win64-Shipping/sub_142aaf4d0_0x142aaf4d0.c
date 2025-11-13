// 函数: sub_142aaf4d0
// 地址: 0x142aaf4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_288 = -2
void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
int32_t var_298 = 0

if (*arg4 s<= 0)
    int64_t* rcx_1 = *(arg1 + 0x2a0)
    int32_t rax_3
    
    if (rcx_1 != 0 && arg3 s>= 0)
        rax_3 = (*(*rcx_1 + 0x20))(rcx_1)
    
    if (rcx_1 == 0 || arg3 s< 0 || arg3 s>= rax_3)
        *arg4 = 1
        struct icu_64::UObject::icu_64::Locale::VTable* var_158
        sub_142a459c0(&var_158)
        sub_142a456a0(arg2, &var_158)
        sub_142a45a20(&var_158)
    else
        int64_t* rcx_2 = *(arg1 + 0x2a0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_278
        sub_142a47a60(&var_278, 1, (*(*rcx_2 + 0x28))(rcx_2, zx.q(arg3)), 0xffffffff)
        int32_t var_26c
        int32_t r8_1 = var_26c
        int16_t var_270
        int16_t rcx_4 = var_270
        int32_t rax_7
        
        if (rcx_4 s< 0)
            rax_7 = r8_1
        else
            rax_7 = sx.d(rcx_4) s>> 5
        
        void var_78
        void* rdi_1 = &var_78
        
        if (rax_7 + 1 s<= 0x40)
            goto label_142aaf5f0
        
        void* rax_8 = sub_142a7dd00(sx.q(rax_7 + 1))
        rdi_1 = rax_8
        
        if (rax_8 != 0)
            r8_1 = var_26c
            rcx_4 = var_270
        label_142aaf5f0:
            
            if (rcx_4 s>= 0)
                r8_1 = sx.d(rcx_4) s>> 5
            
            int32_t var_2a0_1 = 0
            sub_142a49990(&var_278, 0, r8_1, rdi_1, rax_7 + 1)
            struct icu_64::UObject::icu_64::Locale::VTable* var_238
            sub_142a45710(&var_238, rdi_1, nullptr, nullptr, nullptr)
            
            if (rdi_1 != &var_78)
                sub_142a7dcd0(rdi_1)
            
            sub_142a456a0(arg2, &var_238)
            sub_142a45a20(&var_238)
            sub_142a47ff0(&var_278)
        else
            *arg4 = 7
            sub_142a45710(arg2, &data_1434cce10, nullptr, nullptr, nullptr)
            sub_142a47ff0(&var_278)
else
    sub_142a45710(arg2, &data_1434cce10, nullptr, nullptr, nullptr)

__security_check_cookie(rax_1 ^ &var_2c8)
return arg2
