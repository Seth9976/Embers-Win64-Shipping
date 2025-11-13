// 函数: sub_1405e6480
// 地址: 0x1405e6480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
int128_t zmm0 = *"vids"
var_28 = zmm0
int64_t result

if (*arg2 == zmm0.q && arg2[1] == var_28:8.q)
    if ((*arg3 == 0x494d767a48617031 && arg3[1] == 0x3790dc259df278b4)
        || (*arg3 == 0x494d767a48617035 && arg3[1] == 0x3790dc259df278b4)
        || (*arg3 == 0x494d767a48617059 && arg3[1] == 0x3790dc259df278b4))
    label_1405e651b:
        result.b = 1
        __security_check_cookie(rax_1 ^ &var_28)
        return result
    
    if (*arg3 == 0x494d767a4861704d && arg3[1] == 0x3790dc259df278b4)
        goto label_1405e651b

result.b = 0
__security_check_cookie(rax_1 ^ &var_28)
return result
