// 函数: sub_142231e50
// 地址: 0x142231e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm4[0x4] = *(arg2 + 4)
uint32_t temp0[0x4] = _mm_and_ps(*arg2, 0x7fffffff)
uint32_t zmm5[0x4] = *(arg2 + 8)
zmm4 = _mm_max_ss(_mm_and_ps(zmm4, 0x7fffffff)[0], temp0[0])
uint32_t temp0_3[0x4] = _mm_and_ps(zmm5, 0x7fffffff)
uint32_t result[0x4] = *(arg1 + 0x48)
float zmm2 = result[0] f* zmm4[0]

if (zmm2 >= 0.100000001f)
    result[0] = result[0] f+ *(arg1 + 0x50)
    result[0] = result[0] f+ *(arg1 + 0x4c)
    result[0] = result[0] f* temp0_3[0]
    result[0] = result[0] f* 0.5f
    result = _mm_min_ss(_mm_max_ss(result[0], 0x3dcccccd)[0], zmm2)
else
    result = 0x3dcccccd

*arg3 = result[0]
float zmm3 = *(arg1 + 0x4c)
zmm2 = zmm3 f* zmm4[0]

if (not(zmm2 >= 0.100000001f))
    *arg4 = 0x3dcccccd
    return result

result = *(arg1 + 0x50)
result[0] = result[0] f+ *(arg1 + 0x48)
result[0] = result[0] f+ zmm3
result[0] = result[0] f* temp0_3[0]
result[0] = result[0] f* 0.5f
result = _mm_min_ss(_mm_max_ss(result[0], 0x3dcccccd)[0], zmm2)
*arg4 = result[0]
return result
