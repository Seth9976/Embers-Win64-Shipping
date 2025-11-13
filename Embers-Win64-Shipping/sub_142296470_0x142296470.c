// 函数: sub_142296470
// 地址: 0x142296470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8

if (*(arg1 + 0x40) == 0)
    *arg2 = 0
else
    char rcx = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t var_78 = 0
    int32_t var_68_1 = 1
    int128_t var_64_1 = zmm0
    char var_50_1 = 0
    int32_t var_54_1 = (1 << rcx) - 1
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    void* var_70_1 = arg1 + 0x20
    char rax_4 = sub_142056ae0()
    char rax_6 = (*(*(arg1 + 0x20) + 0x30))(arg1 + 0x20)
    int64_t* rcx_2 = data_143f0f180
    int64_t* var_98_1 = &var_78
    int32_t rax_7 = *(arg1 + 0x30)
    int32_t rdx = 0x201
    int64_t var_88 = 0
    
    if ((rax_6 | rax_4) == 0)
        rdx = 1
    
    bool var_50_2 = rax_7 == neg.d(rax_7)
    void var_80
    (*(*rcx_2 + 0x4d8))(rcx_2, &var_80, &data_143f02b98, 2, rax_7 * 2, rdx, var_98_1)
    sub_1405d1600(&var_88, &var_80)
    sub_14081c9d0(&var_80)
    *(arg1 + 0x40) = *(arg1 + 0x30)
    *arg2 = var_88
    var_88 = 0
    sub_14081c9d0(&var_88)

__security_check_cookie(rax_1 ^ &var_c8)
return arg2
