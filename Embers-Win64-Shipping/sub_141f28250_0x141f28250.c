// 函数: sub_141f28250
// 地址: 0x141f28250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x175) = 1
float var_128[0x4]
memset(&var_128, 0, 0x88)
float zmm1[0x4] = var_128
float temp0[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xd2)
temp0[0] = 0x3f800000
float var_98[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
int128_t var_118
int128_t var_88 = var_118
float var_108[0x4]
float var_78[0x4] = var_108
int128_t var_f8
int128_t var_68 = var_f8
float var_e8[0x4]
float var_58[0x4] = var_e8
int128_t var_d8
int128_t var_48 = var_d8
float var_c8[0x4]
float var_38[0x4] = var_c8
int128_t var_b8
int128_t var_28 = var_b8
int64_t var_a8
int64_t var_18 = var_a8
int32_t var_10 = arg1[0x2d].d.d
sub_1405a9f90(&arg1[0x22], &var_98)
*(arg1 + 0xc4) = data_143dbb1f8.q
*(arg1 + 0xcc) = data_143dbb200
jump(*(*arg1 + 0x460))
