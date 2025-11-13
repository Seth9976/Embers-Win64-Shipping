// 函数: sub_1421ba8a0
// 地址: 0x1421ba8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result
uint64_t r9 = zx.q(*(arg1 + 0x24))

if (r9.d s> 0)
    if (data_1439c7a08 s<= 1)
        r9 = zx.q(*(arg1 + 0x20))
    
    int128_t var_58
    int128_t* var_70_1 = &var_58
    int32_t var_48_1 = 1
    int64_t* rcx_1 = data_143f0f180
    char var_30_1 = 0
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    var_58 = zx.o(0)
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_44_1 = data_143dbb1e0
    void var_68
    (*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98, zx.q((r9 << 3).d), 0x601, var_70_1)
    sub_1405d1600(arg1 + 0x10, &var_68)
    sub_1405d1550(&var_68)
    int64_t* rcx_4 = data_143f0f180
    var_70_1.b = 0x11
    (*(*rcx_4 + 0x4b8))(rcx_4, &var_68, &data_143f02b98, *(arg1 + 0x10), 8, var_70_1)
    sub_1405d1600(arg1 + 0x18, &var_68)
    result = sub_1405ec8a0(&var_68)

__security_check_cookie(result_1 ^ &var_98)
return result
