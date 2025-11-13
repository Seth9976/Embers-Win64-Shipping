// 函数: sub_14221a8d0
// 地址: 0x14221a8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t* result = *(arg1 + 0x18)
int32_t r9_1 = result[1].d << 3

if (r9_1 != 0)
    int128_t zmm0 = data_143dbb1e0
    int64_t var_68_1 = *result
    int64_t var_58 = 0
    char var_30_1 = 0
    int32_t var_48_1 = 1
    int128_t var_44_1 = zmm0
    void** const var_70 = &data_142fcc1a0
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int64_t* var_80_1 = &var_58
    void** const* var_50_1 = &var_70
    int32_t var_60_1 = r9_1
    int32_t var_88_1 = 0x201
    void var_78
    (*(*rcx_1 + 0x498))(rcx_1, &var_78, &data_143f02b98)
    sub_1405d1600(arg1 + 0x10, &var_78)
    sub_1405d1550(&var_78)
    int64_t* rcx_4 = data_143f0f180
    var_80_1.b = 0x11
    (*(*rcx_4 + 0x4b8))(rcx_4, &var_78, &data_143f02b98, *(arg1 + 0x10), 8, var_80_1)
    sub_1405d1600(arg1 + 0x20, &var_78)
    result = sub_1405ec8a0(&var_78)

__security_check_cookie(rax_1 ^ &var_a8)
return result
