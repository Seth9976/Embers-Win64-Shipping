// 函数: sub_142c591e0
// 地址: 0x142c591e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void var_28
int32_t result = sub_142c70d80(2, arg1, &var_28)

if (result == 0)
    void var_20
    result = sub_142c70d80(result + 0x17, arg1, &var_20)
    
    if (result == 0)
        __security_check_cookie(rax_1 ^ &var_48)
        return result

result.b = 1
__security_check_cookie(rax_1 ^ &var_48)
return result
