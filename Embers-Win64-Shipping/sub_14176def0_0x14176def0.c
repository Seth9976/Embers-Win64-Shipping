// 函数: sub_14176def0
// 地址: 0x14176def0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_168 = arg1[6][0]
float var_154 = (*arg1)[0x19]
int128_t var_138 = data_142d3f660
float var_140 = (*arg1)[0x1a]
int64_t var_15c = 0
int64_t var_148 = 0
int64_t var_164 = 0
int64_t var_150 = 0
int32_t var_13c = 0
float var_108
sub_1417349b0(&var_108, &arg1[0xe], &var_168)
int128_t zmm1_1 = data_142d3f660
var_168 = (*arg1)[0x1b]
float var_154_1 = arg1[7][0]
float var_140_1 = (*arg1)[0x1d]
int64_t var_15c_1 = 0
int64_t var_148_1 = 0
int64_t var_164_1 = 0
int64_t var_150_1 = 0
int128_t var_138_1 = zmm1_1
int32_t var_13c_1 = 0
float var_c8
float zmm12_1[0x4]
float zmm13_1[0x4]
zmm12_1, zmm13_1 = sub_1417349b0(&var_c8, &arg1[0xf], &var_168)
float zmm7[0x4] = arg3[1]
float zmm8 = *arg3
float zmm10[0x4] = arg3[2]
int32_t var_e8
float zmm1_2[0x4] = var_e8
float var_b8
float zmm5 = zmm7[0] * var_b8
float zmm11 = var_108
float var_f8
float zmm0_2 = var_f8 * zmm7[0]
zmm1_2[0] = zmm1_2[0] * zmm10[0]
zmm11 = zmm11 * zmm8 + zmm0_2
float var_f4
zmm0_2 = var_f4 * zmm7[0]
zmm11 = zmm11 + zmm1_2[0]
int32_t var_e4
zmm1_2 = var_e4
zmm1_2[0] = zmm1_2[0] * zmm10[0]
float var_104
float zmm9 = var_104 * zmm8 + zmm0_2 + zmm1_2[0]
int32_t var_e0
zmm1_2 = var_e0
float var_100
float var_f0
float zmm6 = var_100 * zmm8 + var_f0 * zmm7[0]
zmm1_2[0] = zmm1_2[0] * zmm10[0]
zmm0_2 = zmm8 * var_c8
zmm6 = zmm6 + zmm1_2[0]
int32_t var_a8
zmm10[0] = zmm10[0] f* var_a8
zmm5 = zmm5 + zmm0_2 + zmm10[0]
float var_b4
float zmm4 = zmm7[0] * var_b4
int32_t var_a4
zmm10[0] = zmm10[0] f* var_a4
int32_t var_b0
zmm7[0] = zmm7[0] f* var_b0
float var_c4
zmm4 = zmm4 + zmm8 * var_c4 + zmm10[0]
int32_t var_a0
zmm10[0] = zmm10[0] f* var_a0
float var_c0
zmm7[0] = zmm7[0] + zmm8 * var_c0
zmm7[0] = zmm7[0] + zmm10[0]
zmm7[0] = zmm7[0] + zmm6
float zmm2 = (zmm4 + zmm9) * zmm7[0] + (zmm5 + zmm11) * zmm8
zmm7[0] = zmm7[0] * zmm10[0]
zmm12_1[0] = zmm12_1[0] / (zmm2 + zmm7[0])
zmm11 = zmm11 * zmm12_1[0]
zmm9 = zmm9 * zmm12_1[0]
zmm6 = zmm6 * zmm12_1[0]
zmm12_1 ^= data_142d3f780
float var_118 = zmm11
zmm12_1[0] = zmm12_1[0] * zmm4
zmm0_2 = zmm12_1[0] * zmm5
zmm12_1[0] = zmm12_1[0] * zmm7[0]
float var_124 = zmm12_1[0]
float var_114 = zmm9
float var_110 = zmm6
float var_128 = zmm0_2
float var_120 = zmm12_1[0]
sub_14176e790(arg1, zmm13_1, &var_118, &var_128)
return sub_141781940(arg1) __tailcall
