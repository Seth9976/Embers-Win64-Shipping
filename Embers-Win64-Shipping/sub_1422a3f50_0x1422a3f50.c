// 函数: sub_1422a3f50
// 地址: 0x1422a3f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
char var_50 = 0
char rcx = (data_1439c7a34).b
int64_t var_88
int64_t* var_98 = &var_88
int32_t r9 = *(arg1 + 0x4c)
int128_t var_78 = zx.o(0)
int128_t* var_a0 = &var_78
int64_t* rcx_1 = data_143f0f180
int32_t var_68 = 1
int128_t var_64 = data_143dbb1e0
int32_t var_54 = (1 << rcx) - 1
int64_t var_48 = 0
int32_t var_40 = 0
var_88 = 0
int64_t var_80
(*(*rcx_1 + 0x488))(rcx_1, &var_80, &data_143f02b98, zx.q(r9 << 2), 0x201, var_a0, var_98)
sub_1405d1600(arg1 + 0x10, &var_80)
sub_1405d1550(&var_80)
memcpy(var_88, *(arg1 + 0x40), *(arg1 + 0x4c) << 2)
int64_t* rcx_5 = data_143f0f180
(*(*rcx_5 + 0x138))(rcx_5, &data_143f02b98, *(arg1 + 0x10))
int64_t* rcx_6 = data_143f0f180
var_a0.b = 0x1c
(*(*rcx_6 + 0x4b8))(rcx_6, &var_80, &data_143f02b98, *(arg1 + 0x10), 4, var_a0)
sub_1405d1600(arg1 + 0x18, &var_80)
sub_1405ec8a0(&var_80)
int64_t* rcx_10 = data_143f0f180
int512_t zmm0_1
zmm0_1.o = zx.o(0)
int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
uint64_t rax_9 = zx.q(*(arg1 + 0x5c))
int32_t var_68_1 = 1
int128_t var_64_1 = data_143dbb1e0
char var_50_1 = 0
int64_t var_48_1 = 0
int32_t var_40_1 = 0
int64_t* var_98_1 = &var_80
int128_t* var_a0_1 = &var_78
__builtin_memset(&var_80, 0, 0x18)
(*(*rcx_10 + 0x488))(zmm0_1, &var_88, &data_143f02b98, zx.q((rax_9 * 3).d << 2), 0x201, var_a0_1, 
    var_98_1)
sub_1405d1600(arg1 + 0x20, &var_88)
sub_1405d1550(&var_88)
memcpy(var_80, *(arg1 + 0x50), *(arg1 + 0x5c) * 0xc)
int64_t* rcx_14 = data_143f0f180
(*(*rcx_14 + 0x138))(rcx_14, &data_143f02b98, *(arg1 + 0x20))
int64_t* rcx_15 = data_143f0f180
var_a0_1.b = 0x15
(*(*rcx_15 + 0x4b8))(rcx_15, &var_88, &data_143f02b98, *(arg1 + 0x20), 2, var_a0_1)
sub_1405d1600(arg1 + 0x28, &var_88)
sub_1405ec8a0(&var_88)
int32_t r9_6 = *(arg1 + 0x6c)
int64_t* var_98_2 = &var_80
int512_t zmm0_2
zmm0_2.o = zx.o(0)
int32_t var_68_2 = 1
int64_t* rcx_19 = data_143f0f180
int128_t* var_a0_2 = &var_78
int128_t var_64_2 = data_143dbb1e0
int32_t var_54_2 = (1 << (data_1439c7a34).b) - 1
char var_50_2 = 0
int64_t var_48_2 = 0
int32_t var_40_2 = 0
__builtin_memset(&var_80, 0, 0x18)
(*(*rcx_19 + 0x488))(zmm0_2, &var_88, &data_143f02b98, zx.q(r9_6 << 2), 0x201, var_a0_2, var_98_2)
sub_1405d1600(arg1 + 0x30, &var_88)
sub_1405d1550(&var_88)
memcpy(var_80, *(arg1 + 0x60), *(arg1 + 0x6c) << 2)
int64_t* rcx_23 = data_143f0f180
(*(*rcx_23 + 0x138))(rcx_23, &data_143f02b98, *(arg1 + 0x30))
int64_t* rcx_24 = data_143f0f180
var_a0_2.b = 0x1c
(*(*rcx_24 + 0x4b8))(rcx_24, &var_88, &data_143f02b98, *(arg1 + 0x30), 4, var_a0_2)
sub_1405d1600(arg1 + 0x38, &var_88)
int64_t result = sub_1405ec8a0(&var_88)
*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    result = sub_1405dadb0(arg1 + 0x60, 0)

*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) != 0)
    result = sub_1405dadb0(arg1 + 0x40, 0)

*(arg1 + 0x58) = 0

if (*(arg1 + 0x5c) != 0)
    result = sub_14083ad30(arg1 + 0x50, 0)

__security_check_cookie(rax_1 ^ &var_c8)
return result
