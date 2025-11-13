// 函数: sub_142a9d3a0
// 地址: 0x142a9d3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_60 = -2
void var_88
void* result = __security_cookie ^ &var_88
void* result_1 = result

if (*arg4 s<= 0)
    result = -ffffffffffffffff
    
    do
        result += 1
    while (*(arg2 + result) != 0)
    
    if (result.d s< 0x10)
        char var_40[0x10]
        memcpy(&var_40, arg2, (result + 1).d)
        sub_142a861c0(&var_40)
        char** rax_1 = sub_142a641c0("icudt64l-coll", arg1, arg4)
        char** var_58_1 = rax_1
        char** rax_2 = sub_142a625a0(rax_1, "collations", nullptr, arg4)
        char** var_50_1 = rax_2
        char** rax_3 = sub_142a62230(rax_2, &var_40, nullptr, arg4)
        char** var_48_1 = rax_3
        int32_t var_68
        result = sub_142a63dd0(rax_3, "Sequence", &var_68, arg4)
        
        if (*arg4 s<= 0)
            result = sub_142a66950(arg3, result, var_68)
            
            if ((*(arg3 + 8) & 1) != 0)
                *arg4 = 7
        
        if (rax_3 != 0)
            result = sub_142a5f860(rax_3)
        
        if (rax_2 != 0)
            result = sub_142a5f860(rax_2)
        
        if (rax_1 != 0)
            result = sub_142a5f860(rax_1)
    else
        *arg4 = 1

__security_check_cookie(result_1 ^ &var_88)
return result
