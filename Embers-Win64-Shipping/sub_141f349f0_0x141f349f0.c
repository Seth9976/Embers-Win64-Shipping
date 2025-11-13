// 函数: sub_141f349f0
// 地址: 0x141f349f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *(arg1 + 0x10c)
float zmm1 = *(arg1 + 0x110)
*arg2 = _mm_sqrt_ss(0, zmm1 * zmm1 + zmm0 * zmm0)
int32_t result = *(arg1 + 0x114)
*arg3 = result
return result
