// 函数: sub_142ae8730
// 地址: 0x142ae8730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r14 = *(arg1 + 0x48)
int64_t rsi = arg2
int64_t rdi = sx.q((*(*r14 + 0x38))(r14))
uint64_t result

if (*arg6 s> 0)
    result = 0
else
    if (arg5 s< 0)
        *arg6 = 1
    else if (arg4 == 0 && arg5 s> 0)
        *arg6 = 1
    
    if (rsi s<= arg3)
        int32_t rbp_1 = 0
        
        if (rsi s< 0)
            rsi = 0
        else if (rsi s> rdi)
            rsi = rdi
        
        if (arg3 s>= 0)
            rbp_1 = arg3.d
            
            if (arg3 s> rdi)
                rbp_1 = rdi.d
        
        if (rsi.d s< rdi.d && (zx.d((*(*r14 + 0x40))(r14, zx.q(rsi.d))) & 0xfffffc00) == 0xdc00
                && (*(*r14 + 0x48))(r14, zx.q(rsi.d)) - 0x10000 u<= 0xfffff)
            rsi = zx.q(rsi.d - 1)
        
        if (rbp_1 s< rdi.d && (zx.d((*(*r14 + 0x40))(r14, zx.q(rbp_1))) & 0xfffffc00) == 0xdc00
                && (*(*r14 + 0x48))(r14, zx.q(rbp_1)) - 0x10000 u<= 0xfffff)
            rbp_1 -= 1
        
        int32_t rbx_1 = arg5 + rsi.d
        int32_t rdi_2 = rbp_1 - rsi.d
        
        if (rdi_2 s<= arg5)
            rbx_1 = rbp_1
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142a47d50(&var_98, arg4, 0, arg5)
        (*(*r14 + 0x10))(r14, zx.q(rsi.d), zx.q(rbx_1), &var_98, arg1)
        sub_142ae8520(arg1, sx.q(rbx_1), 1)
        int32_t result_1 = sub_142a8c440(arg4, arg5, rdi_2, arg6)
        sub_142a47ff0(&var_98)
        result = zx.q(result_1)
    else
        *arg6 = 8
        result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
