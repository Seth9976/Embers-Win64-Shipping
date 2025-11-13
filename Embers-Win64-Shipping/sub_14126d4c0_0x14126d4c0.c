// 函数: sub_14126d4c0
// 地址: 0x14126d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void var_178
int128_t* rax_2 = sub_1422d6b50(&var_178)
int64_t* rcx_1 = data_143f0f180
void* var_188
(*(*rcx_1 + 0xf8))(rcx_1, &var_188, rax_2, &data_143f558b0, 2, 1)
void* rax_3 = var_188
void* var_180 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_1405d1550(&var_188)
sub_1405d1600(arg1 + 0x10, &var_180)
int64_t result = sub_1405d1550(&var_180)
__security_check_cookie(rax_1 ^ &var_1b8)
return result
