// 函数: sub_142b89170
// 地址: 0x142b89170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* result = arg4
int32_t rax_2 = strcmp(arg2, "currency")

if (rax_2 != 0)
    if (*(arg1 + 0x490) == 0x201)
        sub_142b888c0(arg1 + 0xf0, "Types%short", arg2, arg3, result)
    
    if (*(arg1 + 0x490) != 0x201 || (*(result + 8) & 1) != 0)
        sub_142b888c0(arg1 + 0xf0, "Types", arg2, arg3, result)
    
    if (arg5 == 0)
        result = sub_142b88730(arg1, 5, result)
else
    int32_t var_94 = rax_2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
    sub_142a47e10(&var_78, arg3, 0xffffffff)
    char var_98 = 0
    char* rax_3 = sub_141a50850(arg1 + 8)
    int32_t var_90
    int16_t* rax_5 = sub_142aaa5f0(sub_142a4a210(&var_78), rax_3, 1, &var_98, &var_90, &var_94)
    
    if (var_94 s<= 0)
        sub_142a66950(result, rax_5, var_90)
        
        if (arg5 == 0)
            result = sub_142b88730(arg1, 5, result)
    else
        sub_142a48100(result, &var_78)
    
    sub_142a47ff0(&var_78)

__security_check_cookie(rax_1 ^ &var_c8)
return result
