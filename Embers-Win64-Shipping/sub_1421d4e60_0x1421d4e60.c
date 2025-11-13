// 函数: sub_1421d4e60
// 地址: 0x1421d4e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int128_t var_58
int128_t* var_70 = &var_58
char var_30 = 0
char rcx = (data_1439c7a34).b
int32_t rdx = 4

if (data_1439c7a0c != 0)
    rdx = 0x204

var_58 = zx.o(0)
int32_t var_48 = 1
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << rcx) - 1
int64_t var_28 = 0
int32_t var_20 = 0
int128_t var_44 = data_143dbb1e0
void var_68
(*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, 0x10000, rdx, var_70)
sub_1405d1600(arg1 + 0x10, &var_68)
int64_t result = sub_1405d1550(&var_68)

if (data_1439c7a0c != 0)
    int64_t* rcx_4 = data_143f0f180
    var_70.b = 0x11
    (*(*rcx_4 + 0x4b8))(rcx_4, &var_68, &data_143f02b98, *(arg1 + 0x10), 8, var_70)
    sub_1405d1600(arg1 + 0x18, &var_68)
    result = sub_1405ec8a0(&var_68)

__security_check_cookie(rax_1 ^ &var_98)
return result
