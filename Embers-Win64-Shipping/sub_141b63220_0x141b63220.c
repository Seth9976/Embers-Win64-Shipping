// 函数: sub_141b63220
// 地址: 0x141b63220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* result = sub_1405d16e0(arg1 + 0x58, nullptr)

if (*(arg1 + 0xa8) != 0)
    char rcx_1 = (data_1439c7a34).b
    uint64_t r9_1 = zx.q(*(arg1 + 0x98))
    int128_t var_58
    int128_t* var_70_1 = &var_58
    int32_t var_78_1 = 0xc
    var_58 = zx.o(0)
    int64_t* rcx_2 = data_143f0f180
    int32_t var_34_1 = (1 << rcx_1) - 1
    int32_t var_38_1 = data_1439c7b60
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_48_1 = data_1439c7b50
    void* const var_68
    (*(*rcx_2 + 0x560))(rcx_2, &var_68, &data_143f02b98, r9_1, *(arg1 + 0x9c), 0xb, 1, 1, var_78_1, 
        var_70_1)
    void* const rdx_2 = var_68
    void* const var_60 = rdx_2
    var_68 = nullptr
    sub_1405d16e0(arg1 + 0x58, rdx_2)
    sub_1405d1550(&var_68)
    result = sub_1405d1550(&var_60)

__security_check_cookie(rax_1 ^ &var_b8)
return result
