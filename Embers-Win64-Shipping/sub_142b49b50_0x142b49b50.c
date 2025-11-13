// 函数: sub_142b49b50
// 地址: 0x142b49b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char result
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_5
void* rcx_5
char result_1

if (sub_142ab9920(arg3) != 0)
    if ((*(arg3 + 0x98) & 1) == 0 || *(arg1 + 0x10) == 0)
        result = 0
    else if (sub_142b49cc0(*(arg1 + 8), arg3 + 0x50) == 0)
        result = 0
    else
        int32_t rax_6 = sub_1408e52c0(arg2)
        int64_t* rcx_8 = *(arg1 + 0x10)
        result_1 = (*(*rcx_8 + 0x10))(rcx_8, arg2, arg3, arg4)
        
        if (rax_6 != sub_1408e52c0(arg2))
            rax_5 = sub_142b498a0(*(arg1 + 0x10), &var_78)
            rcx_5 = arg3 + 0x90
            goto label_142b49c44
        
        result = result_1
else if ((*(arg3 + 0x58) & 1) == 0 || *(arg1 + 8) == 0)
    result = 0
else
    int32_t rax_2 = sub_1408e52c0(arg2)
    int64_t* rcx_2 = *(arg1 + 8)
    result_1 = (*(*rcx_2 + 0x10))(rcx_2, arg2, arg3, arg4)
    
    if (rax_2 == sub_1408e52c0(arg2))
        result = result_1
    else
        rax_5 = sub_142b498a0(*(arg1 + 8), &var_78)
        rcx_5 = arg3 + 0x50
    label_142b49c44:
        sub_142a48050(rcx_5, rax_5)
        sub_142a47ff0(&var_78)
        result = result_1
__security_check_cookie(rax_1 ^ &var_98)
return result
