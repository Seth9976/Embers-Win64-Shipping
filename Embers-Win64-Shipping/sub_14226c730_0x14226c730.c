// 函数: sub_14226c730
// 地址: 0x14226c730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* rcx = *arg2
int128_t* rax_4
void var_48
int128_t var_78

if (rcx == 0)
    rax_4 = &var_78
    int128_t zmm1 = data_143dbb0d0
    var_78 = data_143dbb0c0
    int128_t var_58_1 = data_143dbb0e0
    int128_t var_68_1 = zmm1
else
    rax_4 = sub_1417cbc40(&var_48, (*(*rcx + 0xa0))(rcx, &var_78))
*arg1 = *rax_4
arg1[1] = rax_4[1]
arg1[2] = rax_4[2]
__security_check_cookie(rax_1 ^ &var_98)
return arg1
