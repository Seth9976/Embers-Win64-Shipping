// 函数: sub_141f1dff0
// 地址: 0x141f1dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = *(arg1 + 0xc4)
float zmm2 = *(arg1 + 0xcc)
float temp0 = _mm_max_ss(arg2, 0)
int32_t zmm0 = *(arg1 + 0xc8)
int64_t result
result.b = zmm3 * zmm3 f+ zmm0 f* zmm0 + zmm2 * zmm2 > temp0 * temp0 * 1.00999999f
return result
