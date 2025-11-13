// 函数: sub_142231db0
// 地址: 0x142231db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0[0x4] = _mm_and_ps(*arg2, 0x7fffffff)
float zmm4 = *(arg1 + 0x4c)
uint32_t temp0_1[0x4] = _mm_and_ps(*(arg2 + 4), 0x7fffffff)
uint32_t zmm2[0x4] = *(arg2 + 8)
uint32_t zmm5[0x4] = _mm_max_ss(temp0_1[0], temp0[0])
uint32_t temp0_3[0x4] = _mm_and_ps(zmm2, 0x7fffffff)
uint32_t zmm6[0x4] = *(arg1 + 0x48)
zmm6[0] = zmm6[0] f+ *(arg1 + 0x50)
zmm6[0] = zmm6[0] f* zmm5[0]
bool cond:0 = zmm6[0] f>= 0.100000001f
zmm6[0] = zmm6[0] f+ zmm4
temp0_3[0] = temp0_3[0] f* zmm6[0]
temp0_3[0] = temp0_3[0] f* 0.5f
zmm2 = _mm_max_ss(temp0_3[0], 0x3dcccccd)
uint32_t zmm0[0x4]

if (cond:0)
    zmm0 = _mm_min_ss(zmm2[0], zmm6[0])
else
    zmm0 = 0x3dcccccd

zmm4 = zmm4 f* zmm5[0]
uint32_t zmm1

if (zmm4 >= 0.100000001f)
    zmm1 = _mm_min_ss(zmm2[0], zmm4)
else
    zmm1 = 0x3dcccccd

zmm2[0] = zmm2[0] f+ zmm2[0]
zmm0[0] = zmm0[0] f+ zmm1
zmm2[0] = zmm2[0] f- zmm0[0]
return _mm_max_ss(zmm2[0], 0x3dcccccd)
