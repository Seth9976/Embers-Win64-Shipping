// 函数: sub_1427eea10
// 地址: 0x1427eea10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int128_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &var_98)
int128_t zmm11 = *arg3
int128_t zmm8 = *(arg3 + 4)
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm10 = *(arg3 + 8)
zmm8.d = zmm8.d f+ zmm8.d
int128_t zmm6 = *(rax_1 + 0xc)
zmm10.d = zmm10.d f+ zmm10.d
float zmm3 = *(rax_1 + 4)
int128_t zmm12 = *rax_1
int128_t zmm7 = *(rax_1 + 8)
float zmm2 = zmm7.d f* zmm11.d
int128_t zmm9
zmm9.d = zmm6.d f* zmm6.d
zmm9.d = zmm9.d f- 0.5f
float zmm5 = zmm12.d f* zmm11.d + zmm3 f* zmm8.d + zmm7.d f* zmm10.d
float zmm1 = zmm12.d * zmm5
float zmm4 = (zmm3 f* zmm10.d - zmm7.d f* zmm8.d) f* zmm6.d + zmm9.d f* zmm11.d
zmm7.d = zmm7.d f* zmm5
float zmm0 = zmm12.d
zmm12.d = zmm12.d f* zmm8.d
zmm2 = zmm2 - zmm0 f* zmm10.d
zmm12.d = zmm12.d f- zmm3 f* zmm11.d
zmm0 = zmm9.d
zmm9.d = zmm9.d f* zmm10.d
zmm12.d = zmm12.d f* zmm6.d
zmm12.d = zmm12.d f+ zmm9.d
float var_a8 = zmm4 + zmm1 f+ rax_1[1].d
zmm12.d = zmm12.d f+ zmm7.d
zmm12.d = zmm12.d f+ *(rax_1 + 0x18)
int32_t var_a0 = zmm12.d
float var_a4 = zmm2 f* zmm6.d + zmm0 f* zmm8.d + zmm3 * zmm5 f+ *(rax_1 + 0x14)
return sub_1427f1e80(arg1, arg2, &var_a8, arg4, arg5)
