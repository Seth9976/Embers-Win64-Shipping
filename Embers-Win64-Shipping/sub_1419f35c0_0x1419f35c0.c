// 函数: sub_1419f35c0
// 地址: 0x1419f35c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_b8 = 1
void* var_c0 = nullptr
void** const var_c8 = &data_142da8070
char var_b0 = 0
sub_1407c3800(&var_c0, 0)
void* rcx_1

if ((var_c0.b & 1) == 0)
    rcx_1 = var_c0
else
    rcx_1 = &var_c0 + (var_c0 s>> 1)

*rcx_1 = 0
int128_t zmm0 = data_143dbb1e0
int64_t* rcx_3 = data_143f0f180
int32_t var_34 = (1 << (data_1439c7a34).b) - 1
int64_t var_58
int64_t* var_d0 = &var_58
void** const* var_50 = &var_c8
var_58 = 0
int32_t var_48 = 1
int128_t var_44 = zmm0
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
void var_a8
(*(*rcx_3 + 0x498))(rcx_3, &var_a8, &data_143f02b98, zx.q(var_b8 << 2), 0x201, var_d0)
sub_1405d1600(arg1 + 0x10, &var_a8)
sub_1405d1550(&var_a8)
int64_t* rcx_6 = data_143f0f180
var_d0.b = 0xd
void var_a0
(*(*rcx_6 + 0x4b8))(rcx_6, &var_a0, &data_143f02b98, *(arg1 + 0x10), 4, var_d0)
sub_1405d1600(arg1 + 0x18, &var_a0)
sub_1405ec8a0(&var_a0)
int64_t rax_8 = *(arg1 + 0x18)
int64_t* rcx_9 = data_143f0f180
int32_t var_80 = 1
int32_t var_7c = 1
int64_t var_78 = rax_8
int64_t var_70 = rax_8
int64_t var_68 = rax_8
int64_t var_60 = rax_8
var_d0.d = 1
void* var_98
void var_88
(*(*rcx_9 + 0xf8))(rcx_9, &var_98, &var_88, &data_143f283c0, 2, var_d0)
void* rax_10 = var_98
void* var_90 = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

sub_1405d1550(&var_98)
sub_1405d1600(arg1 + 0x20, &var_90)
sub_1405d1550(&var_90)
int64_t result = sub_140a1d5c0(&var_c0)
__security_check_cookie(rax_1 ^ &var_f8)
return result
