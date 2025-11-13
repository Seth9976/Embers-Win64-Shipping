// 函数: sub_1414ee790
// 地址: 0x1414ee790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_30 = 0
int32_t* var_60
int64_t* var_70 = &var_60
int32_t var_48 = 1
int128_t var_58
int128_t* var_78 = &var_58
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int128_t var_44 = data_143dbb1e0
int64_t var_28 = 0
int32_t var_20 = 0
__builtin_memset(&var_60, 0, 0x18)
void var_68
(*(*rcx_1 + 0x490))(rcx_1, &var_68, &data_143f02b98, 2, 0xc, 1, var_78, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int32_t* rax_5 = var_60
*rax_5 = 0x30000
rax_5[1] = 2
rax_5[2] = 0x30001
int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x118))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
