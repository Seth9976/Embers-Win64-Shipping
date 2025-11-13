// 函数: sub_141265300
// 地址: 0x141265300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
void var_298
sub_14125c7e0(&var_298)
sub_141299420(arg1, arg2, arg3, &var_298)
int64_t* rcx_2 = data_143f0f180
void* var_2a8
(*(*rcx_2 + 0xf8))(rcx_2, &var_2a8, &var_298, &data_143e8ebc0, 1, 1)
void* rax_3 = var_2a8
void* var_2a0 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_1405d1550(&var_2a8)
sub_1405d1600(arg4, &var_2a0)
int64_t result = sub_1405d1550(&var_2a0)
__security_check_cookie(rax_1 ^ &var_2d8)
return result
