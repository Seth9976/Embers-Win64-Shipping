// 函数: sub_142ae3bb0
// 地址: 0x142ae3bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_100 = -2
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char* var_108 = arg2
void var_f0
char i = (*(*arg3 + 0x50))(arg3, &var_f0, arg5)

if (*arg5 s<= 0)
    int32_t rdi_1 = 0
    
    for (i = sub_142ac2da0(&var_f0, 0, &var_108, arg3); i != 0; 
            i = sub_142ac2da0(&var_f0, rdi_1, &var_108, arg3))
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8
        sub_142a47e10(&var_c8, var_108, 0xffffffff)
        
        if (sub_142a86c70(**(*(arg1 + 8) + 0x1190), &var_c8) != 1)
            int64_t** r15_1 = *(*(arg1 + 8) + 0x1190)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_6 =
                j_sub_142a7dd00(0x40)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_f8_1 = rax_6
            
            if (rax_6 != 0)
                rax_6 = sub_142a479b0(rax_6, &var_c8)
            
            sub_142a86f70(*r15_1, rax_6, 1, arg5)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
            sub_142a9c7e0(arg3, &var_88)
            
            if ((*(arg1 + 0x18) & 1) == 0)
                *(arg1 + 0x18) &= 0x1f
            else
                *(arg1 + 0x18) = 2
            
            sub_142ae04a0(*(arg1 + 8), &var_88, &var_c8, arg4 == 0, arg1 + 0x10, arg5)
            sub_142a47ff0(&var_88)
        
        sub_142a47ff0(&var_c8)
        rdi_1 += 1

__security_check_cookie(rax_1 ^ &var_138)
return i
