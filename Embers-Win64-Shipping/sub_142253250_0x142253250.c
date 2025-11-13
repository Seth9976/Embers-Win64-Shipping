// 函数: sub_142253250
// 地址: 0x142253250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = *arg1

if (not(_mm_and_ps(zmm6, 0x7fffffff)[0] f> 9.99999975e-05f)
        && not(_mm_and_ps(*(arg1 + 4), 0x7fffffff)[0] f> 9.99999975e-05f)
        && not(_mm_and_ps(*(arg1 + 8), 0x7fffffff)[0] f> 9.99999975e-05f))
    int32_t var_20_1 = 0x3dcccccd
    *arg1 = (_mm_unpacklo_ps(0x3dcccccd, 0x3dcccccd)).q
    *(arg1 + 8) = 0x3dcccccd
    zmm6 = *arg1

float zmm4[0x4] = *(arg1 + 4)
uint32_t zmm3[0x4] = *(arg1 + 8)
float zmm1[0x4] = _mm_and_ps(zmm6, 0x7fffffff)
uint32_t temp0_5[0x4] = _mm_and_ps(zmm3, 0x7fffffff)
float temp0_6[0x4] = _mm_max_ss(zmm4[0], zmm6[0])
uint32_t result = temp0_5[0]
*arg4 = (_mm_unpacklo_ps(zmm1, _mm_and_ps(zmm4, 0x7fffffff)[0].q)).q
arg4[1].d = result
float temp0_9[0x4] = _mm_max_ss(temp0_6[0], zmm3[0])
float temp0_10[0x4] = __minss_xmmss_memss((*(arg4 + 4))[0], *arg4)
bool cond:0 = temp0_9[0] >= 0f
zmm1 = __minss_xmmss_memss(temp0_10[0], arg4[1].d)
*arg3 = zmm1[0]

if (not(cond:0))
    zmm1 ^= data_142d3f780

*arg2 = zmm1[0]

if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] > 9.99999994e-09f))
    *arg2 = 0.100000001f
    *arg3 = 0.100000001f

return result
