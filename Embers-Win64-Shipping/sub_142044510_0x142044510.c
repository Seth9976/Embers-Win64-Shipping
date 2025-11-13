// 函数: sub_142044510
// 地址: 0x142044510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char rax_2 = *(arg1 + 0xc)
uint32_t rax_3

if (rax_2 != 4)
    rax_3 = zx.d(rax_2)
else
    rax_3 = data_1439c7a08

char result = sub_14076f990((*U"1111")[sx.q(rax_3)])

if (result != 0)
    int128_t var_58
    int128_t* var_70_1 = &var_58
    int32_t var_48_1 = 1
    int64_t* rcx_2 = data_143f0f180
    int32_t var_34_1 = (1 << (data_1439c7a34).b) - 1
    var_58 = zx.o(0)
    int64_t var_28_1 = 0
    int32_t var_20_1 = 0
    int128_t var_44_1 = data_143dbb1e0
    char var_30_1 = 0
    void var_68
    (*(*rcx_2 + 0x498))(rcx_2, &var_68, &data_143f02b98, 0x20, 0x204, var_70_1)
    sub_1405d1600(arg1 + 0x10, &var_68)
    sub_1405d1550(&var_68)
    int64_t* rcx_5 = data_143f0f180
    var_70_1.b = 0x1c
    (*(*rcx_5 + 0x4b8))(rcx_5, &var_68, &data_143f02b98, *(arg1 + 0x10), 4, var_70_1)
    sub_1405d1600(arg1 + 0x18, &var_68)
    result = sub_1405ec8a0(&var_68)

__security_check_cookie(rax_1 ^ &var_98)
return result
