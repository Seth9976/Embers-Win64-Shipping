// 函数: sub_141f60ba0
// 地址: 0x141f60ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f3b860)
*arg2 = 2
float temp0_4[0x4] = _mm_min_ps(_mm_min_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0xc9)), 
    _mm_shuffle_ps(temp0, temp0, 0xd2))
temp0_4[0] = temp0_4[0] f* *(arg1 + 0x420)
temp0_4[0] = temp0_4[0] f+ arg3
arg2[1] = _mm_max_ss(temp0_4[0], 0)[0]
return arg2
