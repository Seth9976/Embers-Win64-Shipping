// 函数: sub_142ae88e0
// 地址: 0x142ae88e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rdi = arg3
int64_t* r14 = *(arg1 + 0x48)
uint64_t rsi = arg2
uint64_t result

if (*arg6 s> 0)
    result = 0
else if (arg4 != 0 || arg5 == 0)
    int64_t r15_1 = sx.q((*(*r14 + 0x38))(r14))
    
    if (rsi s<= rdi)
        if (rsi s< 0)
            rsi = 0
        else if (rsi s> r15_1)
            rsi = r15_1
        
        if (rdi s< 0)
            rdi = 0
        else if (rdi s> r15_1)
            rdi = r15_1
        
        if (rsi.d s< r15_1.d && (zx.d((*(*r14 + 0x40))(r14, zx.q(rsi.d))) & 0xfffffc00) == 0xdc00
                && rsi.d s> 0)
            int32_t rbx_1 = (rsi - 1).d
            
            if ((zx.d((*(*r14 + 0x40))(r14, zx.q(rbx_1))) & 0xfffffc00) == 0xd800)
                rsi = zx.q(rbx_1)
        
        if (rdi.d s< r15_1.d
                && (zx.d((*(*r14 + 0x40))(r14, zx.q((rdi - 1).d))) & 0xfffffc00) == 0xd800
                && (zx.d((*(*r14 + 0x40))(r14, zx.q(rdi.d))) & 0xfffffc00) == 0xdc00)
            rdi = zx.q(rdi.d + 1)
        
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        sub_142a47a60(&var_88, (arg5 u>> 0x1f).b, arg4, arg5)
        (*(*r14 + 0x18))(r14, zx.q(rsi.d), zx.q(rdi.d), &var_88)
        int32_t result_1 = (*(*r14 + 0x38))(r14) - r15_1.d
        
        if (*(arg1 + 0x10) s> sx.q(rsi.d))
            *(arg1 + 0x10) = 0
            __builtin_memset(arg1 + 0x1c, 0, 0x14)
        
        sub_142ae8520(arg1, sx.q(result_1 + rdi.d), 1)
        sub_142a47ff0(&var_88)
        result = zx.q(result_1)
    else
        *arg6 = 8
        result = 0
else
    *arg6 = 1
    result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
