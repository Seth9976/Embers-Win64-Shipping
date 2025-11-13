// 函数: sub_14198e460
// 地址: 0x14198e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t var_38 = 0x10000
int32_t var_34 = 0x20002
int32_t var_30 = 0x30001
int32_t var_2c = 0x40000
void* var_a0 = nullptr
int32_t var_98 = 9
void** const var_a8 = &data_142da8520
char var_90 = 0
sub_1407c36f0(&var_a0, 0)
void* rcx_1

if ((var_a0.b & 1) == 0)
    rcx_1 = var_a0
else
    rcx_1 = &var_a0 + (var_a0 s>> 1)

int64_t var_78
int64_t* var_b8 = &var_78
*rcx_1 = var_38.o
*(rcx_1 + 0x10) = 5
int128_t zmm0 = data_143dbb1e0
int64_t* rcx_3 = data_143f0f180
int32_t var_54 = (1 << (data_1439c7a34).b) - 1
void** const* var_70 = &var_a8
var_78 = 0
int32_t var_68 = 1
int128_t var_64 = zmm0
char var_50 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void var_88
(*(*rcx_3 + 0x4d8))(rcx_3, &var_88, &data_143f02b98, 2, var_98 * 2, 1, var_b8)
sub_1405d1600(arg1 + 0x10, &var_88)
sub_14081c9d0(&var_88)
int64_t result = sub_140a1d5c0(&var_a0)
__security_check_cookie(rax_1 ^ &var_e8)
return result
