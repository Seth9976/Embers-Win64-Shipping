// 函数: sub_141a6c610
// 地址: 0x141a6c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = *arg2
*(arg1 + 0x45c) |= 2
int32_t var_9c = 0
uint128_t var_c8 = zmm0
uint64_t var_a8 = arg2[2].q
int64_t var_90 = 0
int64_t var_88 = 0
int32_t var_78 = 0
int32_t var_98 = 0
zmm0 = *arg2
int128_t var_b8 = arg2[1]
int32_t var_a0 = 0x3f800000
int128_t zmm1 = arg2[1]
int32_t var_7c = 0x80000000
uint128_t var_68 = zmm0
uint64_t var_48 = arg2[2].q
int128_t var_58 = zmm1
void var_40
sub_1405ac190(&var_40, &var_a0)
int32_t var_20 = arg3
int32_t var_1c = var_7c
int32_t var_18 = var_78
char var_74
char var_14
char var_14_1 = var_14 ^ ((var_14 ^ ((var_74 & 0xc0) | arg4)) & 0x3f)
uint128_t zmm0_1
int512_t zmm1_1
zmm0_1, zmm1_1 = sub_141a474c0(&arg1[0x94], &var_68, &arg1[5], data_143f29fb0)
*(arg1 + 0x45c) &= 0xfffffffd
int64_t result = sub_141a3a160(arg1, zmm1_1, zmm0_1)

if (var_90 == 0)
    return result

return sub_140a74f90(var_90)
