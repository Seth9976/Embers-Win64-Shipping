// 函数: sub_1421ba020
// 地址: 0x1421ba020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    int32_t r9_1 = 1
    int128_t var_58
    int128_t* var_70_1 = &var_58
    int64_t* rcx_1 = data_143f0f180
    int32_t rax_2 = (1 << (data_1439c7a34).b) - 1
    int32_t var_78_1 = 0x201
    var_58 = zx.o(0)
    int32_t var_48_1 = 1
    int32_t var_34_1 = rax_2
    int128_t var_44_1 = data_143dbb1e0
    
    if (*(arg1 + 0x20) s>= 1)
        r9_1 = *(arg1 + 0x20)
    
    char var_30_1 = 0
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    void var_68
    (*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, zx.q(r9_1 << 2), var_78_1, var_70_1)
    sub_1405d1600(arg1 + 0x10, &var_68)
    sub_1405d1550(&var_68)
    int64_t* rcx_4 = data_143f0f180
    var_70_1.b = 0xf
    (*(*rcx_4 + 0x4b8))(rcx_4, &var_68, &data_143f02b98, *(arg1 + 0x10), 4, var_70_1)
    sub_1405d1600(arg1 + 0x18, &var_68)
    result = sub_1405ec8a0(&var_68)

__security_check_cookie(result_1 ^ &var_98)
return result
