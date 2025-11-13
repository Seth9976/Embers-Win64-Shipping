// 函数: sub_141a83830
// 地址: 0x141a83830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5 = *arg2
float zmm1 = *arg3 - zmm5
float zmm4 = arg2[2]
zmm5 = zmm5 f- *arg1
float zmm0 = arg3[2] f- zmm4
zmm4 = zmm4 f- *(arg1 + 8)
int128_t zmm6 = arg2[1]
float zmm2 = arg3[1] f- zmm6.d
zmm6.d = zmm6.d f- *(arg1 + 4)
zmm6.d = zmm6.d f* zmm6.d
zmm6.d = zmm6.d f+ zmm5 * zmm5
int32_t temp0 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm1 * zmm1 + zmm0 * zmm0)
zmm6.d = zmm6.d f+ zmm4 * zmm4
return sub_141a831f0(arg1, arg2, arg3, arg4, arg5, arg6, arg7, _mm_sqrt_ss(0, zmm6.d), temp0, arg8, 
    arg9, arg10)
