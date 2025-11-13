// 函数: sub_142a6e400
// 地址: 0x142a6e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::StringEnumeration::VTable** arg_8 = arg1
int64_t var_48 = -2
void* rbp = arg2
struct icu_64::StringEnumeration::icu_64::PluralKeywordEnumeration::VTable** result = arg1
sub_142a85450(arg1)
*result = &icu_64::PluralKeywordEnumeration::`vftable'{for `icu_64::StringEnumeration'}
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi = nullptr
result[0xf].d = 0
sub_142ae6d20(&result[0x10], arg3)

if (*arg3 s<= 0)
    sub_142a87050(&result[0x10], sub_140a4f210)
    uint64_t r14
    r14.b = 1
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** arg_18
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* rax_5
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rcx_5
    
    if (rbp != 0)
        while (true)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_1 =
                j_sub_142a7dd00(0x40)
            arg_18 = rax_1
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_1
            
            if (rax_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1 = sub_142a479b0(rax_1, rbp + 8)
            
            if (rbx_1 == 0)
                goto label_142a6e521
            
            sub_142ae7110(&result[0x10], rbx_1, arg3)
            
            if (*arg3 s> 0)
                rax_5 = *rbx_1
                rcx_5 = rbx_1
                goto label_142a6e57a
            
            int16_t rax_3 = *(rbp + 0x10)
            int32_t r8_2
            
            if (rax_3 s< 0)
                r8_2 = *(rbp + 0x14)
            else
                r8_2 = sx.d(rax_3) s>> 5
            
            r14 = zx.q(r14.b)
            
            if (sub_142a48fb0(rbp + 8, 0, r8_2, u"other", 0, 5) == 0)
                r14 = 0
            
            rbp = *(rbp + 0x48)
            
            if (rbp == 0)
                if (r14.b == 0)
                    return result
                
                break
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 = j_sub_142a7dd00(0x40)
    arg_18 = rax_6
    
    if (rax_6 != 0)
        rdi = Concurrency::agent::agent(rax_6, u"other")
    
    if (rdi == 0)
    label_142a6e521:
        *arg3 = 7
    else
        sub_142ae7110(&result[0x10], rdi, arg3)
        
        if (*arg3 s> 0)
            rax_5 = *rdi
            rcx_5 = rdi
        label_142a6e57a:
            rax_5->__offset(0x0).q(rcx_5, 1)

return result
