// 函数: sub_142bf5440
// 地址: 0x142bf5440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char _Buffer[0x70]
__stdio_common_vsprintf(data_143cd5b30 | 2, &_Buffer, 0x64, arg3, nullptr, arg4)
int32_t result
result.b = (*(arg1 + 0xc0))(arg1, arg2, &_Buffer, *(arg1 + 0xc8)) != 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
