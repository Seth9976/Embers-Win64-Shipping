// 函数: sub_142ae02a0
// 地址: 0x142ae02a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result

if (*arg3 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_b0_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_70_1 = 2
    
    for (int32_t i = 0; i s<= 3; i += 1)
        int64_t* inptr = sub_142a6d490(i, arg2)
        
        if (inptr != 0)
            int64_t* rax_1 = __RTDynamicCast(inptr, 0, 
                &class icu_64::DateFormat `RTTI Type Descriptor', 
                &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
            
            if (rax_1 != 0)
                int64_t r8 = *rax_1
                (*(r8 + 0xe8))(rax_1, &var_b8, r8)
                int32_t rax_2 = *(arg1 + 0x11f8)
                
                if (rax_2 s<= 0)
                    int32_t var_d8_1
                    var_d8_1.q = &var_78
                    sub_142ae04a0(arg1, &var_b8, nullptr, 0, var_d8_1, arg3)
                else
                    *arg3 = rax_2
            
            (**inptr)(inptr, 1)
        
        if (*arg3 s> 0)
            break
        
        int64_t* inptr_1 = sub_142a6d740(i, arg2)
        
        if (inptr_1 != 0)
            int64_t* rax_4 = __RTDynamicCast(inptr_1, 0, 
                &class icu_64::DateFormat `RTTI Type Descriptor', 
                &class icu_64::SimpleDateFormat `RTTI Type Descriptor', 0)
            
            if (rax_4 != 0)
                int64_t r8_1 = *rax_4
                (*(r8_1 + 0xe8))(rax_4, &var_b8, r8_1)
                int32_t rax_5 = *(arg1 + 0x11f8)
                
                if (rax_5 s<= 0)
                    int32_t var_d8_2
                    var_d8_2.q = &var_78
                    sub_142ae04a0(arg1, &var_b8, nullptr, 0, var_d8_2, arg3)
                else
                    *arg3 = rax_5
                
                if (i == 3 && (var_b0_1 & 0xffe0) != 0 && *arg3 s<= 0)
                    sub_142ae2a40(arg1, &var_b8, arg3)
            
            (**inptr_1)(inptr_1, 1)
        
        if (*arg3 s> 0)
            break
    
    sub_142a47ff0(&var_78)
    result = sub_142a47ff0(&var_b8)

__security_check_cookie(result_1 ^ &var_f8)
return result
