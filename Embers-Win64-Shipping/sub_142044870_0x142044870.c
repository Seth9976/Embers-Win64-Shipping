// 函数: sub_142044870
// 地址: 0x142044870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char var_30 = 0
int128_t* var_60
int64_t* var_78 = &var_60
int32_t var_48 = 1
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int128_t var_58
int128_t* var_80 = &var_58
int128_t var_44 = data_143dbb1e0
int64_t var_28 = 0
int32_t var_20 = 0
__builtin_memset(&var_60, 0, 0x18)
void var_68
(*(*rcx_1 + 0x488))(rcx_1, &var_68, &data_143f02b98, 0x20, 0x201, var_80, var_78)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
int128_t* rax_5 = var_60
int128_t zmm1 = data_142d3f670
*rax_5 = zx.o(0)
rax_5[1] = zmm1
int64_t* rcx_4 = data_143f0f180
(*(*rcx_4 + 0x138))(rcx_4, &data_143f02b98, *(arg1 + 0x10))
int64_t* rcx_5 = data_143f0f180
var_80.b = 0x3d
(*(*rcx_5 + 0x4b8))(rcx_5, &var_68, &data_143f02b98, *(arg1 + 0x10), 4, var_80)
sub_1405d1600(arg1 + 0x18, &var_68)
int64_t result = sub_1405ec8a0(&var_68)
__security_check_cookie(rax_1 ^ &var_a8)
return result
