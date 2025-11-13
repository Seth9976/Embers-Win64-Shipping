// 函数: sub_142231d30
// 地址: 0x142231d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm2[0x4] = *(arg1 + 0x48)
zmm2[0] = zmm2[0] f+ zmm2[0]
uint32_t zmm4[0x4] = *(arg2 + 4)
uint32_t temp0[0x4] = _mm_and_ps(*(arg2 + 8), 0x7fffffff)
uint32_t temp0_1[0x4] = _mm_and_ps(zmm4, 0x7fffffff)
zmm2[0] = zmm2[0] f+ *(arg1 + 0x4c)
temp0[0] = temp0[0] f* zmm2[0]
uint32_t temp0_2[0x4] = _mm_and_ps(*arg2, 0x7fffffff)
temp0[0] = temp0[0] f* 0.5f
zmm4 = _mm_max_ss(temp0_1[0], temp0_2[0])
uint32_t zmm3[0x4] = _mm_max_ss(temp0[0], 0x3dcccccd)
zmm4[0] = zmm4[0] f* zmm2[0]

if (not(zmm4[0] f>= 0.100000001f))
    zmm3[0] = zmm3[0] f- 0.100000001f
    zmm3[0] = zmm3[0] f+ zmm3[0]
    return _mm_max_ss(zmm3[0], 0x3dcccccd)

uint32_t zmm0[0x4] = _mm_min_ss(zmm3[0], zmm4[0])
zmm3[0] = zmm3[0] f- zmm0[0]
zmm3[0] = zmm3[0] f+ zmm3[0]
return _mm_max_ss(zmm3[0], 0x3dcccccd)
