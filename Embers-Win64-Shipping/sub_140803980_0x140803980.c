// 函数: sub_140803980
// 地址: 0x140803980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* rcx = data_143f0f180
void var_68
(*(*rcx + 0x4a8))(rcx, &var_68, &data_143f02b98, *(*(arg1 + 0x10) + 0x188))
sub_1405d1600(arg1 + 0x40, &var_68)
sub_1405ec8a0(&var_68)
sub_1405d16e0(arg1 + 0x48, *(*(arg1 + 0x10) + 0x110))
sub_1405d16e0(arg1 + 0x50, *(*(arg1 + 0x10) + 0xb8))
sub_1405d16e0(arg1 + 0x58, *(*(arg1 + 0x10) + 0xc8))
void* rdx_8 = *(arg1 + 0x10)
*(arg1 + 0x60) = *(rdx_8 + 0xe8)
int64_t* result = sub_1405d16e0(arg1 + 0x68, *(rdx_8 + 0x158))
int32_t count = *(arg1 + 0x20) << 4

if (count != 0)
    int64_t var_60
    int64_t* var_78_1 = &var_60
    char var_30_1 = 0
    int32_t var_48_1 = 1
    int64_t* rcx_8 = data_143f0f180
    int128_t zmm0_1 = data_143dbb1e0
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_58
    int128_t* var_80_1 = &var_58
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    __builtin_memset(&var_60, 0, 0x18)
    int128_t var_44_1 = zmm0_1
    (*(*rcx_8 + 0x488))(rcx_8, &var_68, &data_143f02b98, zx.q(count), 0x201, var_80_1, var_78_1)
    sub_1405d1600(arg1 + 0x28, &var_68)
    sub_1405d1550(&var_68)
    memcpy(var_60, *(arg1 + 0x18), count)
    int64_t* rcx_12 = data_143f0f180
    (*(*rcx_12 + 0x138))(rcx_12, &data_143f02b98, *(arg1 + 0x28))
    int64_t* rcx_13 = data_143f0f180
    var_80_1.b = 0x30
    (*(*rcx_13 + 0x4b8))(rcx_13, &var_68, &data_143f02b98, *(arg1 + 0x28), 0x10, var_80_1)
    sub_1405d1600(arg1 + 0x30, &var_68)
    result = sub_1405ec8a0(&var_68)

__security_check_cookie(rax_1 ^ &var_a8)
return result
