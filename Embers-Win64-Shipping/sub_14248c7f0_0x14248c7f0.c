// 函数: sub_14248c7f0
// 地址: 0x14248c7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *(arg2 + 0x20)
int64_t r9
r9.b = result != 0
*(arg2 + 0x20) = r9 + result
float zmm0[0x4] = *(arg1 + 0x1e0)
float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm0, zmm0, 0x55)[0], zmm0[0])
temp0_1[0] = temp0_1[0] f* *(arg1 + 0x424)
*arg3 = temp0_1[0]
return result
