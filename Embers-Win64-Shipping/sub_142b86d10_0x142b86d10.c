// 函数: sub_142b86d10
// 地址: 0x142b86d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_200 = -2
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
char rdi = arg4
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_1d8 = arg3
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1c8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_1c0 = 2
sub_142b62570(&var_1c8, arg3, 1, 1, arg5)

if (*arg5 s<= 0)
    int32_t r14_1 = 0
    void* r15_1 = arg1 + 0x58
    
    while (true)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
        sub_142b86c90(&var_108, arg2, r14_1, arg5)
        
        if (*arg5 s<= 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_188 =
                &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
            int16_t var_180_1 = 2
            sub_142b62c00(&var_1c8, &var_108, &var_188, arg5)
            
            if (*arg5 s<= 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_140_1 = 2
                sub_142b62570(&var_148, &var_188, 0, 1, arg5)
                
                if (*arg5 s> 0)
                    j_sub_142a47ff0(&var_148)
                else
                    void* rdx_4 = arg1 + 8
                    
                    if (arg1 == 0)
                        rdx_4 = nullptr
                    
                    void var_1e8
                    int128_t var_1f8 = *sub_142b3c5c0(&var_1e8, rdx_4, 0, r14_1)
                    void var_c8
                    struct 
                        icu_64::number::impl::Modifier::icu_64::number::impl::SimpleModifier::VTable
                        ** rax_3 = sub_142b3c5d0(&var_c8, &var_148, rdi, 0, &var_1f8)
                    sub_142a48050(r15_1 - 0x40, &rax_3[1])
                    *r15_1 = rax_3[9].b
                    *(r15_1 + 1) = *(rax_3 + 0x49)
                    *(r15_1 + 4) = *(rax_3 + 0x4c)
                    *(r15_1 + 8) = rax_3[0xa].d
                    *(r15_1 + 0xc) = *(rax_3 + 0x54)
                    *(r15_1 + 0x10) = *(rax_3 + 0x58)
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c0
                    sub_142a47ff0(&var_c0)
                    sub_142b3c8d0(&var_c8)
                    j_sub_142a47ff0(&var_148)
                    sub_142a47ff0(&var_188)
                    sub_142a47ff0(&var_108)
                    r14_1 += 1
                    r15_1 += 0x68
                    rdi = arg4
                    
                    if (r14_1 s>= 6)
                        break
                    
                    continue
            
            sub_142a47ff0(&var_188)
        
        sub_142a47ff0(&var_108)
        break

j_sub_142a47ff0(&var_1c8)
sub_142a47ff0(arg3)
__security_check_cookie(rax_1 ^ &var_238)
return &icu_64::UObject::`vftable'
