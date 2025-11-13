// 函数: sub_142ab0cf0
// 地址: 0x142ab0cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_70 = -2
void var_98
void* result = __security_cookie ^ &var_98
void* result_1 = result
int32_t* rsi = arg3
void* rbp = arg2

if (*arg3 s<= 0)
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    
    if ((*(arg2 + 8) & 0xffe0) != 0)
        arg2.b = 1
        char rax_5 = sub_142ab0e60(rbp, sub_142a47a60(&var_68, arg2.b, &data_1436527d8, 0xffffffff))
        result = sub_142a47ff0(&var_68)
        
        if (rax_5 == 0)
            result = sub_142aae540(arg1, rbp, rsi)
            
            if (result != 0)
                *(arg1 + 0x188) = result
        else
            *rsi = 1
    else
        int64_t* rcx = *(arg1 + 0x2a0)
        
        if (rcx == 0)
            result = sub_142ab0360(arg1)
        else
            sub_142a47a60(&var_68, 1, (*(*rcx + 0x18))(rcx, 0), 0xffffffff)
            *(arg1 + 0x188) = sub_142aae540(arg1, &var_68, rsi)
            result = sub_142a47ff0(&var_68)

__security_check_cookie(result_1 ^ &var_98)
return result
