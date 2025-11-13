// 函数: sub_14104c420
// 地址: 0x14104c420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void var_58
(*(*arg1 + 0x50))(arg1, &var_58)
int64_t rax_3 = *arg1
int64_t result_1 = 0
int64_t* var_68
(*(rax_3 + 0x38))(arg1, &data_142efcae0, &var_68)
int64_t* rcx_1 = var_68
int64_t* var_78 = &result_1
int64_t rax_4 = *rcx_1
int64_t var_98
__builtin_memset(&var_98, 0, 0x20)
int64_t var_90
int64_t var_88
int64_t var_80
(*(rax_4 + 0x130))(rcx_1, &var_58, zx.q(arg2), zx.q(arg3), var_98, var_90, var_88, var_80, var_78)
int64_t* rcx_2 = var_68
(*(*rcx_2 + 0x10))(rcx_2)
int64_t result = result_1
__security_check_cookie(rax_1 ^ &var_b8)
return result
