// 函数: sub_142b89310
// 地址: 0x142b89310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rax_2 = 0
void* result

while (true)
    char rcx = (*"root")[rax_2]
    rax_2 += 1
    
    if (rcx != arg2[rax_2 - 1])
        if (strchr(arg2, 0x5f) == 0)
            if (*(arg1 + 0x490) == 0x201)
                sub_142b888c0(arg1 + 0xf0, "Languages%short", nullptr, arg2, arg3)
            
            if (*(arg1 + 0x490) != 0x201 || (*(arg3 + 8) & 1) != 0)
                sub_142b888c0(arg1 + 0xf0, "Languages", nullptr, arg2, arg3)
            
            result = sub_142b88730(arg1, 0, arg3)
            break
    else if (rax_2 != 5)
        continue
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_68
    void* result_1 = sub_142a48050(arg3, sub_142a47e10(&var_68, arg2, 0xffffffff))
    sub_142a47ff0(&var_68)
    result = result_1
    break

__security_check_cookie(rax_1 ^ &var_98)
return result
