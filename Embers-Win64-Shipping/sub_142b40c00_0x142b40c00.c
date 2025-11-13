// 函数: sub_142b40c00
// 地址: 0x142b40c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result = __RTDynamicCast(arg2, 0, &class icu_64::Format `RTTI Type Descriptor', 
    &class icu_64::number::impl::LocalizedNumberFormatterAsFormat `RTTI Type Descriptor', 0)

if (result != 0)
    int32_t var_a8 = 0
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_58
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
        sub_142ab85b0(result + 0x148, &var_58, &var_a8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_4 =
        sub_142ab85b0(arg1 + 0x148, &var_98, &var_a8)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
    
    if ((rax_4[1].b & 1) == 0)
        int16_t rax_5 = rax_4[1].w
        int32_t r8_4
        
        if (rax_5 s< 0)
            r8_4 = *(rax_4 + 0xc)
        else
            r8_4 = sx.d(rax_5) s>> 5
        
        int16_t rax_6 = rax_3[1].w
        int32_t rax_8
        
        if (rax_6 s< 0)
            rax_8 = *(rax_3 + 0xc)
        else
            rax_8 = sx.d(rax_6) s>> 5
        
        char rax_9
        
        if ((rax_3[1].b & 1) == 0 && r8_4 == rax_8)
            rax_9 = sub_142a490e0(rax_4, rax_3, r8_4)
        
        if ((rax_3[1].b & 1) != 0 || r8_4 != rax_8 || rax_9 == 0)
            rbx_1.b = 0
        else
            rbx_1.b = 1
    else
        rbx_1.b = rax_3[1].b & 1
    
    sub_142a47ff0(&var_98)
    sub_142a47ff0(&var_58)
    result = zx.q(rbx_1.b)

__security_check_cookie(rax_1 ^ &var_d8)
return result
