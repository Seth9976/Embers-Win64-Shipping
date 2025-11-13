// 函数: sub_141f37520
// 地址: 0x141f37520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_48
(*(*arg1 + 0x570))(arg1, &var_48)
int32_t var_40
uint128_t zmm0
zmm0.d = var_40.d f* arg4.d
uint128_t zmm2
zmm2.d = var_48.d f* arg4.d
zmm0.d = zmm0.d f+ arg3[2]
int32_t var_44
int64_t zmm1
zmm1.d = var_44.d f* arg4.d
zmm2.d = zmm2.d f+ *arg3
zmm1.d = zmm1.d f+ arg3[1]
int32_t var_30 = zmm0.d
zmm0 = _mm_unpacklo_ps(zmm2, zmm1)
uint64_t var_38 = zmm0.q
uint128_t zmm7
uint128_t zmm8
uint128_t zmm9
sub_141f41d80(arg1, arg2, &var_38, arg4, zmm0, arg4, zmm7, zmm8, zmm9)
return arg2
