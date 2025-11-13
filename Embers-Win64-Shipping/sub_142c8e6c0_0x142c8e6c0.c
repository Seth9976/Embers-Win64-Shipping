// 函数: sub_142c8e6c0
// 地址: 0x142c8e6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t var_38 = *arg3
int64_t var_30 = *arg2
void** rax_4 = sub_142c91ea0(&data_1436bb7c8, arg1, 0x10)
int64_t result

if (rax_4 == 0)
    result = 0x1b
else
    sub_142c8ff50(rax_4)
    int128_t var_28
    sub_142c91e30(rax_4, &var_28)
    *arg4 = var_28
    arg4[1].q = *arg2
    result = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
