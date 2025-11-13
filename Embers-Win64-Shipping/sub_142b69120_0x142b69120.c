// 函数: sub_142b69120
// 地址: 0x142b69120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_78 = -2
void var_f8
uint64_t var_28 = __security_cookie ^ &var_f8
uint64_t result

if (*arg3 s> 0)
    result.b = 0
else
    result = zx.q(*(arg2 + 8))
    void* rdi_1
    
    if ((result.b & 0x11) == 0)
        rdi_1 = arg2 + 0xa
        
        if ((result.b & 2) == 0)
            rdi_1 = *(arg2 + 0x18)
    
    if ((result.b & 0x11) != 0 || rdi_1 == 0)
        *arg3 = 1
        result.b = 0
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_60_1 = 2
        int64_t var_b8 = *(arg1 + 8)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_b0_1 = &var_68
        int64_t var_a8_1 = (zx.o(0)).q
        int64_t var_98_1 = 0
        int32_t var_90_1 = 0
        char var_8c_1 = 0
        uint64_t rbx
        
        if (sub_142b1e9d0(&var_b8, 5, arg3) != 0)
            int16_t rax_3 = *(arg2 + 8)
            int32_t rax_5
            
            if (rax_3 s< 0)
                rax_5 = *(arg2 + 0xc)
            else
                rax_5 = sx.d(rax_3) s>> 5
            
            rbx = zx.q(sub_142b1a300(*(arg1 + 8), rdi_1, rdi_1 + (sx.q(rax_5) << 1), 
                *(arg1 + 0x10), 0, &var_b8, arg3))
        else
            rbx.b = 0
        
        if (var_a8_1 != 0)
            sub_142a4a600(var_b0_1, ((var_98_1 - var_a8_1) s>> 1).d)
        
        sub_142a47ff0(&var_68)
        result = zx.q(rbx.b)

__security_check_cookie(var_28 ^ &var_f8)
return result
