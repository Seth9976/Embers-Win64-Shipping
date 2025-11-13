// 函数: sub_1408e59c0
// 地址: 0x1408e59c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_30 = 0
int64_t var_60
int64_t* var_70 = &var_60
int32_t var_48 = 1
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int128_t zmm0 = data_143dbb1e0
__builtin_memset(&var_60, 0, 0x18)
int128_t var_44 = zmm0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
int128_t var_58
(*(*rcx_1 + 0x490))(rcx_1, &var_68, &data_143f02b98, 4, *(arg1 + 0x18) << 2, 0x202, &var_58, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int64_t* rcx_4 = data_143f0f180
int64_t result = (*(*rcx_4 + 0x118))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
