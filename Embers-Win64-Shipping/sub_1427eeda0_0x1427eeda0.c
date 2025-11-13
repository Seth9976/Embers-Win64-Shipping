// 函数: sub_1427eeda0
// 地址: 0x1427eeda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_a8
(*(*arg1 + 0xa0))(arg1, &var_a8)
int32_t var_9c
int128_t zmm12 = var_9c
int32_t var_a4
int128_t zmm9 = var_a4
int128_t zmm11 = var_a8
int32_t var_a0
int128_t zmm10 = var_a0
int128_t zmm8 = *arg3
int128_t zmm6 = *(arg3 + 4)
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm7 = *(arg3 + 8)
zmm6.d = zmm6.d f+ zmm6.d
zmm7.d = zmm7.d f+ zmm7.d
int128_t zmm13
zmm13.d = zmm12.d f* zmm12.d
zmm13.d = zmm13.d f- 0.5f
float zmm5 = zmm9.d f* zmm6.d + zmm11.d f* zmm8.d + zmm10.d f* zmm7.d
float var_98
float var_c8 =
    var_98 + (zmm9.d f* zmm7.d - zmm10.d f* zmm6.d) f* zmm12.d + zmm13.d f* zmm8.d + zmm11.d * zmm5
float var_94
float var_c4 =
    var_94 + (zmm10.d f* zmm8.d - zmm11.d f* zmm7.d) f* zmm12.d + zmm13.d f* zmm6.d + zmm9.d * zmm5
float var_90
float var_c0 =
    var_90 + (zmm11.d f* zmm6.d - zmm9.d f* zmm8.d) f* zmm12.d + zmm13.d f* zmm7.d + zmm10.d * zmm5
zmm7 = *arg2
float zmm4 = *(arg2 + 4)
zmm7.d = zmm7.d f+ zmm7.d
zmm6 = *(arg2 + 8)
zmm4 = zmm4 + zmm4
zmm6.d = zmm6.d f+ zmm6.d
float zmm3 = zmm10.d f* zmm7.d
zmm5 = zmm9.d * zmm4 + zmm11.d f* zmm7.d + zmm10.d f* zmm6.d
float zmm1 = zmm11.d * zmm5
float zmm2 = (zmm9.d f* zmm6.d - zmm10.d * zmm4) f* zmm12.d
zmm10.d = zmm10.d f* zmm5
float zmm0 = zmm11.d
zmm11.d = zmm11.d f* zmm4
zmm2 = zmm2 + zmm13.d f* zmm7.d + zmm1
zmm1 = zmm9.d * zmm5
zmm3 = zmm3 - zmm0 f* zmm6.d
zmm9.d = zmm9.d f* zmm7.d
zmm0 = zmm13.d
zmm13.d = zmm13.d f* zmm6.d
zmm11.d = zmm11.d f- zmm9.d
float var_b8 = zmm2
zmm11.d = zmm11.d f* zmm12.d
zmm11.d = zmm11.d f+ zmm13.d
zmm11.d = zmm11.d f+ zmm10.d
float var_b4 = zmm3 f* zmm12.d + zmm0 * zmm4 + zmm1
int32_t var_b0 = zmm11.d
return sub_1427f1e80(arg1, &var_b8, &var_c8, arg4, arg5)
