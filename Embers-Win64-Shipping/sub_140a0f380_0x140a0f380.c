// 函数: sub_140a0f380
// 地址: 0x140a0f380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rbx = arg1[1]
void* rdi = *arg1
char rcx = (data_1439c7a34).b
int128_t var_58 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int128_t var_44 = data_143dbb1e0
int32_t var_48 = 1
int32_t var_34 = (1 << rcx) - 1
int64_t var_28 = 0
int32_t var_20 = 0
char var_30 = 0
void var_68
(*(*rcx_1 + 0x560))(rcx_1, &var_68, &data_143f02b98, zx.q(*(rbx + 0x50)), *(rbx + 0x1c), 3, 1, 1, 
    0x100, &var_58)
sub_1405d1600(rdi + 0x40, &var_68)
sub_1405d1550(&var_68)
int64_t* rcx_4 = data_143f0f180
(*(*rcx_4 + 0x560))(rcx_4, &var_68, &data_143f02b98, zx.q(*(rbx + 0x54)), *(rbx + 0x1c) u>> 1, 3, 
    1, 1, 0x100, &var_58)
sub_1405d1600(rdi + 0x48, &var_68)
sub_1405d1550(&var_68)
int64_t* rcx_7 = data_143f0f180
(*(*rcx_7 + 0x560))(rcx_7, &var_68, &data_143f02b98, zx.q(*(rbx + 0x58)), *(rbx + 0x1c) u>> 1, 3, 
    1, 1, 0x100, &var_58)
sub_1405d1600(rdi + 0x50, &var_68)
int64_t result = sub_1405d1550(&var_68)
__security_check_cookie(rax_1 ^ &var_b8)
return result
