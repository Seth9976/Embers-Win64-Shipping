// 函数: sub_142085830
// 地址: 0x142085830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int128_t zmm0 = data_143dbb1e0
int32_t var_68 = 1
int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
int64_t var_78 = 0
int32_t var_54 = rax_3
int128_t var_64 = zmm0
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int64_t* var_70 = arg2
int32_t rax_5 = (*(*arg2 + 0x18))(arg2, arg5, 0)
int64_t* rcx_2 = data_143f0f180
void var_88
(*(*rcx_2 + 0x498))(rcx_2, &var_88, &data_143f02b98, zx.q(rax_5), arg3, &var_78)
sub_1405d1600(arg7, &var_88)
sub_1405d1550(&var_88)
char result = sub_1419d5c70(data_143f0f1a0)

if (result != 0)
    int64_t* rcx_6 = data_143f0f180
    int64_t* var_90
    var_90.b = arg6
    (*(*rcx_6 + 0x4b8))(rcx_6, &var_88, &data_143f02b98, *arg7, arg4, var_90)
    sub_1405d1600(arg8, &var_88)
    result = sub_1405ec8a0(&var_88)

__security_check_cookie(rax_1 ^ &var_b8)
return result
