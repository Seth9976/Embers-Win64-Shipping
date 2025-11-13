// 函数: sub_14198beb0
// 地址: 0x14198beb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t var_78 = 0x24
void* var_80 = nullptr
void** const var_88 = &data_142da8520
char var_70 = 0
sub_1407c36f0(&var_80, 0)
void* rcx_1

if ((var_80.b & 1) == 0)
    rcx_1 = var_80
else
    rcx_1 = &var_80 + (var_80 s>> 1)

int64_t var_58
int64_t* var_98 = &var_58
__builtin_memcpy(rcx_1, 
    "\x00\x00\x02\x00\x03\x00\x00\x00\x03\x00\x01\x00\x04\x00\x05\x00\x07\x00\x04\x00\x07\x00\x06\x00\x"
"00\x00\x01\x00\x05\x00\x00\x00\x05\x00\x04\x00\x02\x00\x06\x00\x07\x00\x02\x00\x07\x00\x03\x00\x00"
"00\x04\x00\x06\x00\x00\x00\x06\x00\x02\x00\x01\x00\x03\x00", 
    0x40)
int32_t var_a0 = 1
*(rcx_1 + 0x40) = 0x5000700010007
uint128_t zmm0 = data_143dbb1e0
int64_t* rcx_3 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
void** const* var_50 = &var_88
var_58 = 0
int32_t var_48 = 1
uint128_t var_44 = zmm0
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
void var_68
(*(*rcx_3 + 0x4d8))(rcx_3, &var_68, &data_143f02b98, 2, var_78 * 2, var_a0, var_98)
sub_1405d1600(arg1 + 0x10, &var_68)
sub_14081c9d0(&var_68)
int64_t result = sub_140a1d5c0(&var_80)
__security_check_cookie(rax_1 ^ &var_c8)
return result
