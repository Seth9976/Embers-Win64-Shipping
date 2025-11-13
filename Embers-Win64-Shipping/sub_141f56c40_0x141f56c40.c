// 函数: sub_141f56c40
// 地址: 0x141f56c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f3b860)
uint32_t result[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_4[0x4] = _mm_max_ps(_mm_max_ps(temp0, result), _mm_shuffle_ps(temp0, temp0, 0xd2))
temp0_4[0] = temp0_4[0] f* *(arg1 + 0x420)
*arg2 = temp0_4[0]
*arg3 = temp0_4[0]
return result
