// 函数: sub_142485c50
// 地址: 0x142485c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5b8
int64_t rax_1 = __security_cookie ^ &var_5b8
void var_588
sub_1422d7fd0(&var_588)
int32_t zmm0 = *arg3
int32_t var_598 = arg2.d
sub_1405af800(&var_588, arg4)
(*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f61838), &var_598)
*arg3 = zmm0
char* result = sub_1405af800(arg4, &var_588)
int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

__security_check_cookie(rax_1 ^ &var_5b8)
return result
