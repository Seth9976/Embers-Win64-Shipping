// 函数: sub_140addbc0
// 地址: 0x140addbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float var_18
sub_140acf9d0(&var_18, arg1, arg2, arg3)
float var_10
float zmm0 = arg1[2] f- var_10
float var_14
float zmm2 = arg1[1] f- var_14
float zmm1 = *arg1 - var_18
return _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0)
