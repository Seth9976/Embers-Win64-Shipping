// 函数: sub_141f49090
// 地址: 0x141f49090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = arg2[1]
float var_20 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
int64_t var_28 = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
float var_18[0x4] = *arg2
float zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]
float zmm10[0x4]
sub_141f48240(arg1, &var_28, &var_18, arg3, zmm7, zmm8, zmm9, zmm10, arg4, arg5)
float zmm2_1[0x4] = arg2[2]
float var_10_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)[0]
var_28 = (_mm_unpacklo_ps(zmm2_1, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)[0].q)).q
float var_20_1 = var_10_1
return sub_141f48ee0(arg1, &var_28)
