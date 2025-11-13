// 函数: sub_142b86fd0
// 地址: 0x142b86fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rax_2 = *arg3
char* var_b8 = arg2
void var_b0
int32_t result = (*(rax_2 + 0x50))(arg3, &var_b0, arg4)

if (*arg4 s<= 0)
    int32_t rsi_1 = 0
    result = sub_142ac2da0(&var_b0, 0, &var_b8, arg3)
    
    while (result.b != 0)
        char* r8_2 = var_b8
        int64_t rcx_2 = 0
        
        while (true)
            char rax_3 = r8_2[rcx_2]
            rcx_2 += 1
            
            if (rax_3 != *(rcx_2 + &icu_64::number::impl::LongNameHandler::`vftable'{for `icu_64::number::impl::ModifierStore'}
                    .__offset(0xf)))
                int64_t rax_4 = 0
                
                while (true)
                    char rcx_3 = r8_2[rax_4]
                    rax_4 += 1
                    
                    if (rcx_3 != *(rax_4 + 0x14367e47f))
                        result = sub_142b450b0(r8_2, arg4)
                        break
                    
                    if (rax_4 == 4)
                        result = 7
                        break
                
                break
            
            if (rcx_2 == 5)
                result = (rcx_2 + 1).d
                break
        
        if (*arg4 s> 0)
            break
        
        int64_t rbx_2 = sx.q(result) << 6
        
        if ((*(*(arg1 + 8) + rbx_2 + 8) & 1) != 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 =
                sub_142a9c7e0(arg3, &var_88)
            sub_142a48050(*(arg1 + 8) + rbx_2, rax_6)
            result = sub_142a47ff0(&var_88)
            
            if (*arg4 s> 0)
                break
        
        rsi_1 += 1
        result = sub_142ac2da0(&var_b0, rsi_1, &var_b8, arg3)

__security_check_cookie(rax_1 ^ &var_d8)
return result
