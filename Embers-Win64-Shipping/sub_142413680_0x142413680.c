// 函数: sub_142413680
// 地址: 0x142413680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t result = *(arg1 + 0x48)

if (result != 0 && data_1439c7a17 != 0)
    int32_t r8_1 = *(arg1 + 0x1c)
    int32_t rdx_1 = *(arg1 + 0x20)
    int128_t zmm0 = data_143dbb1e0
    int64_t result_1 = result
    int32_t rax_3 = *(arg1 + 0x18) * r8_1
    void** const* var_58
    int64_t* var_80_1 = &var_58
    void** const var_70 = &data_14324c650
    int32_t var_88_1 = 8
    int32_t var_90_1 = 1
    int64_t var_50_1 = 0
    int32_t var_48_1 = 1
    int32_t var_60_1 = (rax_3 * rdx_1) << 3
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    var_58 = &var_70
    int128_t var_44_1 = zmm0
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    char var_98_1 = 0xa
    int32_t var_a0_1 = rdx_1
    int32_t var_a8_1 = r8_1
    void var_78
    (*(*rcx_1 + 0x580))(rcx_1, &var_78, &data_143f02b98)
    sub_1405d1600(arg1 + 0x10, &var_78)
    sub_14081c9d0(&var_78)
    result = sub_140a74f90(*(arg1 + 0x48))
    *(arg1 + 0x48) = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
