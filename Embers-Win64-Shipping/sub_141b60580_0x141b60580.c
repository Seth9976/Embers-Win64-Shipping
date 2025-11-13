// 函数: sub_141b60580
// 地址: 0x141b60580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t result = __security_cookie ^ &var_98
int64_t result_1 = result

if (*(arg1 + 0x10) == 0)
    *(arg1 + 0x18) = *(arg1 + 0x1c)
    int32_t var_48_1 = 1
    int64_t* rcx_1 = data_143f0f180
    int32_t rax_2 = (1 << (data_1439c7a34).b) - 1
    int128_t var_58 = zx.o(0)
    int32_t var_34_1 = rax_2
    int128_t* var_70_1 = &var_58
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_44_1 = data_143dbb1e0
    char var_30_1 = 0
    int32_t var_78_1 = 2
    void var_68
    (*(*rcx_1 + 0x498))(rcx_1, &var_68, &data_143f02b98)
    sub_1405d1600(arg1 + 0x10, &var_68)
    result = sub_1405d1550(&var_68)

__security_check_cookie(result_1 ^ &var_98)
return result
