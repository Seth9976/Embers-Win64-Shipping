// 函数: sub_142b747e0
// 地址: 0x142b747e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
struct icu_64::BreakIterator::icu_64::WholeStringBreakIterator::VTable** result_1 = arg4
int32_t var_1f8 = 0
struct icu_64::BreakIterator::icu_64::WholeStringBreakIterator::VTable** result

if (*arg6 s> 0)
    result = nullptr
else
    int32_t r8 = arg3 & 0xe0
    struct icu_64::UObject::icu_64::Locale::VTable* var_1e8
    struct icu_64::UObject::icu_64::Locale::VTable* var_108
    struct icu_64::UObject::icu_64::Locale::VTable** rcx_4
    
    if (r8 == 0)
        if (result_1 == 0)
            struct icu_64::UObject::icu_64::Locale::VTable** rax_6
            int32_t rdi_2
            
            if (arg1 == 0)
                rax_6 = sub_142a45710(&var_108, arg2, nullptr, nullptr, nullptr)
                rdi_2 = 2
            else
                rax_6 = sub_142a456d0(&var_1e8, arg1)
                rdi_2 = (result_1 + 1).d
            
            result_1 = sub_142a554b0(rax_6, arg6)
            
            if ((rdi_2.b & 2) != 0)
                rdi_2 &= 0xfffffffd
                sub_142a45a20(&var_108)
            
            if ((rdi_2.b & 1) == 0)
                goto label_142b7495c
            
            rcx_4 = &var_1e8
        label_142b74957:
            sub_142a45a20(rcx_4)
            goto label_142b7495c
        
        result = result_1
    else if (result_1 == 0)
        if (r8 == 0x20)
            struct icu_64::UObject::icu_64::BreakIterator::VTable** rax_4 = j_sub_142a7dd00(0x150)
            
            if (rax_4 == 0)
                result_1 = nullptr
            else
                result_1 = sub_142b746b0(rax_4)
            
            if (result_1 == 0)
                *arg6 = 7
            
            goto label_142b7495c
        
        if (r8 == 0x40)
            struct icu_64::UObject::icu_64::Locale::VTable** rax_2
            int32_t rdi_1
            
            if (arg1 == 0)
                rax_2 = sub_142a45710(&var_1e8, arg2, nullptr, nullptr, nullptr)
                rdi_1 = 8
            else
                rax_2 = sub_142a456d0(&var_108, arg1)
                rdi_1 = 4
            
            result_1 = sub_142a55490(rax_2, arg6)
            
            if ((rdi_1.b & 8) != 0)
                rdi_1 &= 0xfffffff7
                sub_142a45a20(&var_1e8)
            
            if ((rdi_1.b & 4) == 0)
                goto label_142b7495c
            
            rcx_4 = &var_108
            goto label_142b74957
        
        *arg6 = 1
    label_142b7495c:
        int64_t* rcx_10 = *arg5
        
        if (rcx_10 != 0)
            (**rcx_10)(rcx_10, 1)
        
        *arg5 = result_1
        result = result_1
    else
        *arg6 = 1
        result = nullptr

__security_check_cookie(rax_1 ^ &var_228)
return result
