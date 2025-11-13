// 函数: sub_14248ca60
// 地址: 0x14248ca60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f61bc0)
uint32_t result[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc9)
*arg3 = _mm_min_ps(_mm_min_ps(temp0, result), _mm_shuffle_ps(temp0, temp0, 0xd2))[0]
return result
