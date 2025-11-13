// 函数: sub_142231f00
// 地址: 0x142231f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm3[0x4] = *(arg2 + 4)
uint32_t temp0[0x4] = _mm_and_ps(*arg2, 0x7fffffff)
float zmm2[0x4] = *(arg1 + 0x48)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
uint32_t zmm4[0x4] = *(arg2 + 8)
zmm3 = _mm_max_ss(temp0_1[0], temp0[0])
uint32_t temp0_3[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
zmm3[0] = zmm3[0] f* zmm2[0]

if (zmm3[0] f< 0.100000001f)
    return 0x3dcccccd

zmm2[0] = zmm2[0] + zmm2[0]
zmm2[0] = zmm2[0] f+ *(arg1 + 0x4c)
zmm2[0] = zmm2[0] f* temp0_3[0]
zmm2[0] = zmm2[0] * 0.5f
return _mm_min_ss(_mm_max_ss(zmm2[0], 0x3dcccccd)[0], zmm3[0])
