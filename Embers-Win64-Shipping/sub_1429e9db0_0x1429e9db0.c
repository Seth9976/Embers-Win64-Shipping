// 函数: sub_1429e9db0
// 地址: 0x1429e9db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298
void* result

if (arg3 == 0)
    int128_t* r8_3 = arg5
    
    if (arg4 == 0)
        result = sub_1403adc70(arg1, arg2, r8_3, arg6)
    else
        result = sub_14038c32a(arg1 - sx.q(arg2 * 2), arg2, r8_3, arg6, 0x10, arg4)
else if (arg4 == 0)
    result = sub_14038c089(arg1, arg2, arg5, arg6, 0x10, arg3)
else
    uint128_t var_268[0x24]
    sub_14038c089(arg1 - sx.q(arg2 * 2), arg2, &var_268, 0x10, 0x15, arg3)
    result = sub_14038c32a(&var_268, 0x10, arg5, arg6, 0x10, arg4)

__security_check_cookie(rax_1 ^ &var_298)
return result
