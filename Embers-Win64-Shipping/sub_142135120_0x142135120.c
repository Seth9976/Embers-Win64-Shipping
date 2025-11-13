// 函数: sub_142135120
// 地址: 0x142135120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char var_30 = 0
int32_t var_48 = 1
int128_t var_58
int128_t* var_70 = &var_58
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
var_58 = zx.o(0)
int64_t var_28 = 0
int32_t var_20 = 0
int128_t var_44 = data_143dbb1e0
void var_68
(*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, 0x30, 0x201, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
int64_t* rcx_4 = data_143f0f180
var_70.b = 1
(*(*rcx_4 + 0x4b8))(rcx_4, &var_68, &data_143f02b98, *(arg1 + 0x10), 0x10, var_70)
sub_1405d1600(arg1 + 0x18, &var_68)
int64_t result = sub_1405ec8a0(&var_68)
__security_check_cookie(rax_1 ^ &var_98)
return result
