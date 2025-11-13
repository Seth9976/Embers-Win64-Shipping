// 函数: sub_14198c5c0
// 地址: 0x14198c5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_48 = 1
char var_30 = 0
int128_t var_58
int128_t* var_78 = &var_58
char rcx = (data_1439c7a34).b
int32_t var_80 = 1
var_58 = zx.o(0)
int64_t* rcx_1 = data_143f0f180
int32_t var_34 = (1 << rcx) - 1
int128_t var_44 = data_143dbb1e0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
(*(*rcx_1 + 0x4d8))(rcx_1, &var_68, &data_143f02b98, 2, 0x48, var_80, var_78)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int64_t* rcx_4 = data_143f0f180
void* rax_6 = (*(*rcx_4 + 0x110))(rcx_4, &data_143f02b98, *(arg1 + 0x10), 0, 0x48, 1)
__builtin_memcpy(rax_6, 
    "\x00\x00\x02\x00\x03\x00\x00\x00\x03\x00\x01\x00\x04\x00\x05\x00\x07\x00\x04\x00\x07\x00\x06\x00\x"
"00\x00\x01\x00\x05\x00\x00\x00\x05\x00\x04\x00\x02\x00\x06\x00\x07\x00\x02\x00\x07\x00\x03\x00\x00"
"00\x04\x00\x06\x00\x00\x00\x06\x00\x02\x00\x01\x00\x03\x00", 
    0x40)
*(rax_6 + 0x40) = 0x5000700010007
int64_t* rcx_5 = data_143f0f180
int64_t result = (*(*rcx_5 + 0x118))(rcx_5, &data_143f02b98, *(arg1 + 0x10))
__security_check_cookie(rax_1 ^ &var_a8)
return result
