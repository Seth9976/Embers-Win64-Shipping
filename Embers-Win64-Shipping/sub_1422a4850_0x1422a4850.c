// 函数: sub_1422a4850
// 地址: 0x1422a4850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result
int32_t rdi = *(arg1 + 0x20)
uint32_t count = rdi * 2

if (rdi != neg.d(rdi))
    int64_t var_60
    int64_t* var_70_1 = &var_60
    int32_t var_48_1 = 1
    char var_30_1 = 0
    int64_t* rcx_1 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    int128_t var_44_1 = data_143dbb1e0
    int128_t var_58
    int128_t* var_78_1 = &var_58
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    __builtin_memset(&var_60, 0, 0x18)
    void var_68
    (*(*rcx_1 + 0x490))(rcx_1, &var_68, &data_143f02b98, 2, count, 1, var_78_1, var_70_1)
    sub_1405d1600(arg1 + 0x10, &var_68)
    sub_14081c9d0(&var_68)
    memcpy(var_60, *(arg1 + 0x18), count)
    int64_t* rcx_5 = data_143f0f180
    result = (*(*rcx_5 + 0x118))(rcx_5, &data_143f02b98, *(arg1 + 0x10))

__security_check_cookie(result_1 ^ &var_a8)
return result
