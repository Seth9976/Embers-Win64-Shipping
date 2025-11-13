// 函数: sub_142b87170
// 地址: 0x142b87170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = -2
void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int32_t rsi = 0
void* r14 = arg1 + 0x58

while (true)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108
    sub_142b86c90(&var_108, arg2, rsi, arg4)
    
    if (*arg4 s<= 0)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_140_1 = 2
        sub_142b62570(&var_148, &var_108, 0, 1, arg4)
        
        if (*arg4 s> 0)
            j_sub_142a47ff0(&var_148)
        else
            void* rdx_2 = arg1 + 8
            
            if (arg1 == 0)
                rdx_2 = nullptr
            
            void var_158
            int128_t var_168 = *sub_142b3c5c0(&var_158, rdx_2, 0, rsi)
            void var_c8
            struct icu_64::number::impl::Modifier::icu_64::number::impl::SimpleModifier::VTable** 
                rax_3 = sub_142b3c5d0(&var_c8, &var_148, arg3, 0, &var_168)
            sub_142a48050(r14 - 0x40, &rax_3[1])
            *r14 = rax_3[9].b
            *(r14 + 1) = *(rax_3 + 0x49)
            *(r14 + 4) = *(rax_3 + 0x4c)
            *(r14 + 8) = rax_3[0xa].d
            *(r14 + 0xc) = *(rax_3 + 0x54)
            *(r14 + 0x10) = *(rax_3 + 0x58)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c0
            sub_142a47ff0(&var_c0)
            sub_142b3c8d0(&var_c8)
            j_sub_142a47ff0(&var_148)
            sub_142a47ff0(&var_108)
            rsi += 1
            r14 += 0x68
            
            if (rsi s>= 6)
                break
            
            continue
    
    sub_142a47ff0(&var_108)
    break

__security_check_cookie(rax_1 ^ &var_1a8)
return &icu_64::UObject::`vftable'
