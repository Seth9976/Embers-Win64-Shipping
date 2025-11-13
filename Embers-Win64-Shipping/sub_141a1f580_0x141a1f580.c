// 函数: sub_141a1f580
// 地址: 0x141a1f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_48 = 1
int64_t var_60
int64_t* var_78 = &var_60
char var_30 = 0
uint64_t r9 = zx.q(*(arg1 + 0x20))
int128_t var_58
int128_t* var_80 = &var_58
int64_t* rcx_1 = data_143f0f180
int128_t var_44 = data_143dbb1e0
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int64_t var_28 = 0
int32_t var_20 = 0
__builtin_memset(&var_60, 0, 0x18)
void var_68
(*(*rcx_1 + 0x488))(rcx_1, &var_68, &data_143f02b98, r9, 1, var_80, var_78)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_1405d1550(&var_68)
memcpy(var_60, *(arg1 + 0x18), *(arg1 + 0x20))
*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) != 0)
    sub_1405c5510(arg1 + 0x18, 0)

int64_t* rcx_6 = data_143f0f180
int64_t result = (*(*rcx_6 + 0x138))(rcx_6, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
