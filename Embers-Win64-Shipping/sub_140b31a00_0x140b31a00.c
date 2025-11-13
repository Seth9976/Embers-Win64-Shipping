// 函数: sub_140b31a00
// 地址: 0x140b31a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void var_98
sub_140b24bd0(&arg3[2], &var_98, 0x60, nullptr)
char var_80

if (var_80 != 0)
    int16_t* var_78
    sub_140b24b40(&arg3[2], &var_78, &var_98)
    char var_60
    
    if (var_60 != 0)
        wchar16 ch = *var_78
        
        if (wcschr(data_1439a92f0, ch) != 0)
            sub_140b3e280()
            wchar16 ch_1 = ch
            void** const var_48_1 = &data_142e78528
            int128_t var_58 = data_143de7b48.o
            sub_140b0e240(arg3, &var_98, &var_58)
            sub_140b0bbf0(&var_58)

*(arg2 + 0x18) = 0
__security_check_cookie(rax_1 ^ &var_b8)
return arg2
