// 函数: sub_1425a8060
// 地址: 0x1425a8060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f6e8d0)
uint32_t result[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
float temp0_4[0x4] = _mm_min_ps(_mm_min_ps(temp0, result), _mm_shuffle_ps(temp0, temp0, 0xd2))
temp0_4[0] = temp0_4[0] f* *(arg1 + 0x420)
*arg3 = temp0_4[0]
return result
