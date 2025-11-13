// 函数: sub_14281b6ec
// 地址: 0x14281b6ec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int128_t* var_38 = arg1
int64_t var_20 = 0
int64_t var_18 = 0xf
char var_30 = 0
SimpleString::operator=(&var_30, &data_1437020ab)
arg1[1].q = 0
*(arg1 + 0x18) = 0
sub_140593830(arg1, &var_30)
arg1[3].q = 0
*(arg1 + 0x38) = 0
sub_140593830(&arg1[2], arg2)
arg1[4].d = 1

if (var_18 u>= 0x10)
    sub_14058ba50(var_30.q, var_18 + 1)

__security_check_cookie(rax_1 ^ &var_58)
return arg1
