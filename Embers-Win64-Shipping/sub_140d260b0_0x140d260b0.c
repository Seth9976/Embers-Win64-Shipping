// 函数: sub_140d260b0
// 地址: 0x140d260b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_868
int64_t rax_1 = __security_cookie ^ &var_868
void var_838
void* result

if (sub_140b2b020(arg1, arg2, &var_838, 0x400, 1).b == 0)
    result.b = 0
else if (sub_140a54510(&var_838, u"NONE").d != 0)
    result = sub_140d2ee50(arg3, arg5, &var_838, 0)
    
    if (result != 0)
        *arg4 = result
        result.b = 1
    else
        if (arg6 != 0)
            *arg6 = 1
        
        result.b = 0
else
    *arg4 = nullptr
    result.b = 1

__security_check_cookie(rax_1 ^ &var_868)
return result
