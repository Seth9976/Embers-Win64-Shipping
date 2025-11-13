// 函数: sub_140ae0e60
// 地址: 0x140ae0e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = *arg2
zmm0[0] = zmm0[0] f* *arg3
float zmm1[0x4] = *(arg2 + 8)
zmm1[0] = zmm1[0] f* arg3[2]
uint32_t zmm8[0x4] = arg4
uint32_t zmm9[0x4] = *(arg2 + 4)
zmm9[0] = zmm9[0] f* arg3[1]
float zmm10[0x4] = 0x3f800000
zmm9[0] = zmm9[0] f+ zmm0[0]
zmm0 = *(arg2 + 0xc)
zmm0[0] = zmm0[0] f* arg3[3]
zmm9[0] = zmm9[0] f+ zmm1[0]
zmm9[0] = zmm9[0] f+ zmm0[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm9, data_142d3f770)

if (temp0[0] f>= 0.999899983f)
    zmm10[0] = 1f f- zmm8[0]
else
    zmm1 = 0xbf800000
    
    if (not(temp0[0] f< -1f))
        zmm1 = _mm_min_ss(temp0[0], 0x3f800000)
    
    float zmm0_1[0x4] = acosf(zmm1[0])
    float zmm0_2 = sinf(zmm0_1[0])
    zmm10[0] = 1f f- zmm8[0]
    int128_t zmm6
    zmm6.d = 1f / zmm0_2
    zmm10[0] = zmm10[0] * zmm0_1[0]
    zmm10 = sinf(zmm10[0])
    zmm0_1[0] = zmm0_1[0] f* zmm8[0]
    zmm10[0] = zmm10[0] f* zmm6.d
    zmm8 = sinf(zmm0_1[0])
    zmm8[0] = zmm8[0] f* zmm6.d

bool cond:1 = zmm9[0] f>= zx.o(0)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0)

if (not(cond:1))
    zmm8 ^= data_142d3f780

zmm1 = zmm8
*arg1 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm1, zmm1, 0), *arg3), _mm_mul_ps(temp0_2, *arg2))
return arg1
