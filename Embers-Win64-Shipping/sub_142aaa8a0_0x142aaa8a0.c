// 函数: sub_142aaa8a0
// 地址: 0x142aaa8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int16_t* result

if (*arg6 s> 0)
    result = nullptr
else
    int32_t var_f8 = 0
    char var_e8[0xa0]
    sub_142a4d590(arg2, &var_e8, 0x9d, &var_f8)
    int32_t rax_2 = var_f8
    
    if (rax_2 s> 0 || rax_2 == 0xffffff84)
        *arg6 = 1
        result = nullptr
    else
        char var_f4
        sub_142a8d6e0(arg1, &var_f4, 3)
        char var_f1_1 = 0
        var_f8 = 0
        char** rax_3 = sub_142a641c0("icudt64l-curr", &var_e8, &var_f8)
        char** rax_4 = sub_142a625a0(rax_3, "CurrencyPlurals", rax_3, &var_f8)
        char** rax_5 = sub_142a62230(rax_4, &var_f4, rax_4, &var_f8)
        void* result_1 = sub_142a63c50(rax_5, arg4, arg5, &var_f8)
        
        if (var_f8 s<= 0)
        label_142aaaa22:
            sub_142a5f860(rax_5)
            int32_t rax_8 = var_f8
            
            if (rax_8 s> 0)
                *arg5 = std::_WChar_traits<wchar_t>::length(arg1)
                result = arg1
                *arg6 = 0xffffff81
            else
                if (rax_8 == 0xffffff81)
                    *arg6 = rax_8
                else if (rax_8 == 0xffffff80 && *arg6 != 0xffffff81)
                    *arg6 = rax_8
                
                result = result_1
        else
            var_f8 = 0
            result_1 = sub_142a63c50(rax_5, "other", arg5, &var_f8)
            
            if (var_f8 s<= 0)
                goto label_142aaaa22
            
            sub_142a5f860(rax_5)
            result = sub_142aaa5f0(arg1, arg2, 1, arg3, arg5, arg6)

__security_check_cookie(rax_1 ^ &var_128)
return result
