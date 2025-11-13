// 函数: sub_1427ef070
// 地址: 0x1427ef070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_98
(*(*arg2 + 0xa0))(arg2, &var_98)
void var_b8
void* rax_2 = (*(*arg2 + 0xf0))(arg2, &var_b8)
int32_t var_8c
int128_t zmm7 = var_8c
int32_t var_94
int128_t zmm4 = var_94
int128_t zmm12 = var_98
int128_t zmm11 = *(rax_2 + 0x10)
int128_t zmm8 = *(rax_2 + 0x14)
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm10 = *(rax_2 + 0x18)
zmm8.d = zmm8.d f+ zmm8.d
zmm10.d = zmm10.d f+ zmm10.d
int128_t zmm9
zmm9.d = zmm7.d f* zmm7.d
zmm9.d = zmm9.d f- 0.5f
int128_t zmm6
zmm6.d = zmm4.d f* zmm8.d
zmm6.d = zmm6.d f+ zmm12.d f* zmm11.d
float var_90
zmm6.d = zmm6.d f+ var_90 f* zmm10.d
float zmm1 = zmm12.d f* zmm6.d
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm8.d
float zmm2 = (zmm4.d f* zmm10.d - var_90 f* zmm8.d) f* zmm7.d + zmm9.d f* zmm11.d + zmm1
zmm1 = zmm4.d f* zmm6.d
float zmm3 = var_90 f* zmm11.d - zmm0 f* zmm10.d
zmm4.d = zmm4.d f* zmm11.d
zmm0 = zmm9.d
zmm9.d = zmm9.d f* zmm10.d
zmm12.d = zmm12.d f- zmm4.d
zmm12.d = zmm12.d f* zmm7.d
zmm12.d = zmm12.d f+ zmm9.d
zmm3 = zmm3 f* zmm7.d + zmm0 f* zmm8.d + zmm1
zmm12.d = zmm12.d f+ var_90 f* zmm6.d
zmm1 = arg3[1]
float var_88
float var_c8 = *arg3 - (var_88 + zmm2)
float var_84
float var_c4 = zmm1 - (var_84 + zmm3)
float var_80
float var_c0 = arg3[2] - (var_80 f+ zmm12.d)
sub_1427f3880(arg1, arg2, &var_c8)
return arg1
