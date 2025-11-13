// 函数: sub_142227e30
// 地址: 0x142227e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if ((_fpclass(_mm_cvtps_pd((*arg1)[0].q)[0].q) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd((*(arg1 + 4))[0].q)[0].q) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd((*(arg1 + 8))[0].q)[0].q) & 0x207) == 0
        && (_fpclass(_mm_cvtps_pd((*(arg1 + 0xc))[0].q)[0].q) & 0x207) == 0)
    uint32_t zmm0[0x4] = *(arg1 + 4)
    float zmm3 = *arg1
    float zmm1 = *(arg1 + 8)
    float zmm2 = *(arg1 + 0xc)
    zmm0[0] = zmm0[0] f* zmm0[0]
    zmm0 = _mm_sqrt_ss(0, zmm3 * zmm3 f+ zmm0[0] + zmm1 * zmm1 + zmm2 * zmm2)
    zmm0[0] = zmm0[0] f- 1f
    
    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f>= 9.99999975e-05f))
        result.b = 1
        return result

result.b = 0
return result
