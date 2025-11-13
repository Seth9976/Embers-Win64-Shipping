// 函数: sub_141b60650
// 地址: 0x141b60650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rdx = *(arg1 + 0x1c)
*(arg1 + 0x18) = rdx
int32_t var_48 = 1
int64_t* rcx_1 = data_143f0f180
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int128_t var_58 = zx.o(0)
int32_t var_34 = rax_3
char var_30 = 0
int128_t var_44 = data_143dbb1e0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
(*(*rcx_1 + 0x4d8))(rcx_1, &var_68, &data_143f02b98, 4, rdx, 2, &var_58)
sub_1405d1600(arg1 + 0x10, &var_68)
int64_t result = sub_14081c9d0(&var_68)
__security_check_cookie(rax_1 ^ &var_a8)
return result
