// 函数: sub_141b51d30
// 地址: 0x141b51d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_44 = 0
int64_t var_3c = 0
int64_t var_30 = 0
int128_t zmm0
zmm0.d = float.s(zx.q(arg2))
int32_t var_c = 0x3f800000
int32_t zmm1 = float.s(zx.q(arg3))
int128_t zmm2
zmm2.d = 1f f/ zmm0.d
float zmm4 = 1f f/ zmm1
int128_t zmm5 = zmm2
zmm2.d = zmm2.d f+ zmm2.d
zmm5.d = zmm5.d f* zmm0.d
zmm5 ^= data_142d3f780
int128_t var_28 = data_14306d0d0
float var_14 = zmm4 f* zmm1
int32_t var_48 = zmm2.d
float var_34 = zmm4 * -2f
int32_t var_18 = zmm5.d
int32_t var_10 = 0x3f000000
sub_141b4d3f0(arg1, &var_48)
return arg1
