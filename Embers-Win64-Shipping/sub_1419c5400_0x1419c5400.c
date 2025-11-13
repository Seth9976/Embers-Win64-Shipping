// 函数: sub_1419c5400
// 地址: 0x1419c5400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t var_40 = arg3
int64_t var_30
__builtin_memset(&var_30, 0, 0x14)
void* rbx_2 = sx.q(arg2) * 0x60 + arg1
int64_t* var_38 = &var_30
int32_t var_48
sub_1419be690(rbx_2 + 0x10, &var_48, &var_40, nullptr)
int64_t result = *(rbx_2 + 0x10) + sx.q(var_48) * 0x30 + 0x10
__security_check_cookie(rax_1 ^ &var_68)
return result
