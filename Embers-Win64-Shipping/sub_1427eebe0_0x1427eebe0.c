// 函数: sub_1427eebe0
// 地址: 0x1427eebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int128_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &var_98)
int128_t zmm12 = *arg2
int128_t zmm11 = *(arg2 + 4)
zmm12.d = zmm12.d f+ zmm12.d
int128_t zmm6 = *(arg2 + 8)
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm7 = *(rax_1 + 0xc)
zmm6.d = zmm6.d f+ zmm6.d
int128_t zmm10 = *(rax_1 + 4)
int128_t zmm8 = *rax_1
float zmm3 = *(rax_1 + 8)
int128_t zmm9
zmm9.d = zmm7.d f* zmm7.d
zmm9.d = zmm9.d f- 0.5f
float zmm5 = zmm8.d f* zmm12.d + zmm10.d f* zmm11.d + zmm3 f* zmm6.d
float zmm4 = (zmm8.d f* zmm11.d - zmm10.d f* zmm12.d) f* zmm7.d + zmm9.d f* zmm6.d
float zmm0 = zmm8.d f* zmm6.d
zmm8.d = zmm8.d f* zmm5
float zmm2 = zmm3 f* zmm12.d - zmm0
zmm0 = zmm9.d f* zmm11.d
float zmm1 = zmm10.d
zmm9.d = zmm9.d f* zmm12.d
zmm10.d = zmm10.d f* zmm6.d
zmm10.d = zmm10.d f- zmm3 f* zmm11.d
float var_a0 = zmm4 + zmm3 * zmm5
zmm10.d = zmm10.d f* zmm7.d
zmm10.d = zmm10.d f+ zmm9.d
float var_a4 = zmm2 f* zmm7.d + zmm0 + zmm1 * zmm5
zmm10.d = zmm10.d f+ zmm8.d
float var_a8 = zmm10.d
return sub_1427f1e80(arg1, &var_a8, arg3, arg4, arg5)
