// 函数: sub_140ae40c0
// 地址: 0x140ae40c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm5 = *arg2
arg4 = arg4 * arg5
int64_t zmm2
zmm2.d = (*arg3).d f- zmm5
int128_t zmm6 = arg2[1]
float zmm4 = *(arg3 + 4) f- zmm6.d
int64_t zmm0
zmm0.d = zmm2.d f* zmm2.d
float zmm1 = zmm4 * zmm4 f+ zmm0.d
float temp0 = _mm_sqrt_ss(zmm1, zmm1)

if (temp0 <= arg4)
    *arg1 = *arg3
    return arg1

if (arg4 <= 0f)
    *arg1 = *arg2
    return arg1

zmm0.d = 1f / temp0
zmm2.d = zmm2.d f* zmm0.d
zmm2.d = zmm2.d f* arg4
zmm2.d = zmm2.d f+ zmm5
*arg1 = zmm2.d
arg1[1] = zmm4 f* zmm0.d * arg4 f+ zmm6.d
return arg1
