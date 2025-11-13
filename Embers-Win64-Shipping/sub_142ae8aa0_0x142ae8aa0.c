// 函数: sub_142ae8aa0
// 地址: 0x142ae8aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* r15 = *(arg1 + 0x48)
int64_t result_4 = arg4
uint64_t result_3 = arg3
uint64_t result_2 = arg2
int32_t result = (*(*r15 + 0x38))(r15)

if (*arg6 s<= 0)
    if (result_2 s> result_3 || (result_2 s< result_4 && result_4 s< result_3))
        *arg6 = 8
    else
        int64_t result_1 = sx.q(result)
        
        if (result_2 s< 0)
            result_2 = 0
        else if (result_2 s> result_1)
            result_2 = result_1
        
        if (result_3 s< 0)
            result_3 = 0
        else if (result_3 s> result_1)
            result_3 = result_1
        
        if (result_4 s< 0)
            result_4 = 0
        else if (result_4 s> result_1)
            result_4 = result_1
        
        uint64_t r9 = zx.q(result_4.d)
        int64_t rax_3 = *r15
        uint64_t r8 = zx.q(result_3.d)
        uint64_t rdx = zx.q(result_2.d)
        
        if (arg5 == 0)
            (*(rax_3 + 0x20))(r15, rdx, r8, r9)
        else
            int32_t r12_2 = result_3.d - result_2.d
            (*(rax_3 + 0x20))(r15, rdx, r8, r9)
            
            if (result_4.d s< result_2.d)
                result_2 = zx.q(result_3.d)
                result_3 = zx.q(result_3.d + r12_2)
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            (*(*r15 + 0x18))(r15, zx.q(result_2.d), zx.q(result_3.d), &var_98, var_98, 2)
            sub_142a47ff0(&var_98)
        
        int32_t rax_5 = result_4.d
        
        if (arg5 != 0 && result_2.d s< result_4.d)
            rax_5 = result_2.d
        
        if (sx.q(rax_5) s< *(arg1 + 0x10))
            *(arg1 + 0x10) = 0
            __builtin_memset(arg1 + 0x1c, 0, 0x14)
        
        int32_t rax_9 = result_4.d - result_2.d + result_3.d
        
        if (arg5 != 0 && result_4.d s> result_2.d)
            rax_9 = result_4.d
        
        result = sub_142ae8520(arg1, sx.q(rax_9), 1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
