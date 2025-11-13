// 函数: sub_14211c4d0
// 地址: 0x14211c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = arg1[9].q

if (rdi != 0)
    uint128_t var_118_1 = *arg1
    uint128_t var_108_1 = arg1[1]
    uint128_t var_f8_1 = arg1[2]
    uint128_t var_e8_1 = arg1[3]
    uint128_t var_d8_1 = arg1[4]
    uint128_t var_c8_1 = arg1[5]
    uint128_t var_b8_1 = arg1[6]
    uint128_t var_a8_1 = arg1[7]
    uint64_t arg_8 = arg1[8].q
    int32_t rsi_1 = *(arg1 + 0x88)
    int32_t rax_1 = sub_1422c5440(&data_143a2fdb0, rdi)
    uint128_t var_98 = var_118_1
    uint128_t var_78_1 = var_f8_1
    uint128_t var_88_1 = var_108_1
    uint128_t var_58_1 = var_d8_1
    uint128_t var_68_1 = var_e8_1
    uint128_t var_38_1 = var_b8_1
    uint128_t var_48_1 = var_c8_1
    uint64_t var_18_1 = arg_8
    int32_t var_10_1 = rsi_1
    uint128_t var_28_1 = var_a8_1
    
    if (rax_1 == 0xffffffff)
        sub_1422b87a0(&data_143a2fdb0, &var_98, rdi)
    else
        sub_1422d2db0(&data_143a2fdb0, zx.q(rax_1), &var_98)

int64_t result = arg1[9].q
*(*(arg1 + 0x98) + 0x180) = result
return result
