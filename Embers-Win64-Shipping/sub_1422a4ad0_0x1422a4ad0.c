// 函数: sub_1422a4ad0
// 地址: 0x1422a4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result

if (*(arg1 + 0x300) s> 0)
    int64_t rdx
    rdx.b = 1
    (*(*(arg1 + 0x2f0) + 0x38))(arg1 + 0x2f0, rdx)
    int64_t rdx_1
    rdx_1.b = 1
    (*(*(arg1 + 0x310) + 0x38))(arg1 + 0x310, rdx_1)
    char rcx_2 = (data_1439c7a34).b
    int128_t zmm0 = data_143dbb1e0
    int64_t* var_60_1 = arg1 + 0x2f0
    int64_t var_68 = 0
    int32_t var_58_1 = 1
    int64_t* rcx_3 = data_143f0f180
    int32_t var_44_1 = (1 << rcx_2) - 1
    int128_t var_54_1 = zmm0
    char var_40_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    void var_78
    (*(*rcx_3 + 0x498))(rcx_3, &var_78, &data_143f02b98, zx.q(*(arg1 + 0x300) * 0xc), 0x201, 
        &var_68)
    sub_1405d1600(arg1 + 0x330, &var_78)
    sub_1405d1550(&var_78)
    int64_t* rcx_6 = data_143f0f180
    int64_t* var_80_1
    var_80_1.b = 0x1c
    (*(*rcx_6 + 0x4b8))(rcx_6, &var_78, &data_143f02b98, *(arg1 + 0x330), 4, var_80_1)
    sub_1405d1600(arg1 + 0x338, &var_78)
    sub_1405ec8a0(&var_78)
    int128_t zmm0_1 = data_143dbb1e0
    int32_t r9_4 = *(arg1 + 0x320)
    int32_t var_58_2 = 1
    int64_t* rcx_10 = data_143f0f180
    int32_t rdi_2 = (1 << (data_1439c7a34).b) - 1
    int64_t* var_80_2 = &var_68
    var_68 = 0
    int128_t var_54_2 = zmm0_1
    int32_t var_44_2 = rdi_2
    char var_40_2 = 0
    int64_t var_38_2 = 0
    int32_t var_30_2 = 0
    int64_t* var_60_2 = arg1 + 0x310
    (*(*rcx_10 + 0x498))(rcx_10, &var_78, &data_143f02b98, zx.q(r9_4 << 2), 0x201, var_80_2)
    sub_1405d1600(arg1 + 0x340, &var_78)
    sub_1405d1550(&var_78)
    int64_t* rcx_13 = data_143f0f180
    var_80_2.b = 0x3c
    (*(*rcx_13 + 0x4b8))(rcx_13, &var_78, &data_143f02b98, *(arg1 + 0x340), 4, var_80_2)
    sub_1405d1600(arg1 + 0x348, &var_78)
    result = sub_1405ec8a0(&var_78)

__security_check_cookie(result_1 ^ &var_a8)
return result
