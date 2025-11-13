// 函数: sub_141918170
// 地址: 0x141918170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x2e8)
int32_t result

if (*(arg2 + 0x408) == rcx && *(arg2 + 0x40c) == *(arg1 + 0x2ec)
        && *(arg2 + 0x410) == *(arg1 + 0x2f0))
    result = *(arg1 + 0x2f4)

if (*(arg2 + 0x408) != rcx || *(arg2 + 0x40c) != *(arg1 + 0x2ec)
        || *(arg2 + 0x410) != *(arg1 + 0x2f0) || *(arg2 + 0x414) != result)
    int32_t rdx = *(arg1 + 0x2ec)
    data_143effb70(arg3, rdx, zx.q(*(arg1 + 0x2f0) - rcx), zx.q(*(arg1 + 0x2f4) - rdx))
    *(arg2 + 0x408) = *(arg1 + 0x2e8)
    *(arg2 + 0x40c) = *(arg1 + 0x2ec)
    *(arg2 + 0x410) = *(arg1 + 0x2f0)
    result = *(arg1 + 0x2f4)
    *(arg2 + 0x414) = result

float zmm2[0x2] = *(arg1 + 0x2f8)

if (zmm2[0] f!= *(arg2 + 0x418) || not(*(arg1 + 0x2fc) f== *(arg2 + 0x41c)))
    float zmm1[0x2] = _mm_cvtps_pd(*(arg1 + 0x2fc))
    data_143eff9e0(_mm_cvtps_pd(zmm2), zmm1)
    *(arg2 + 0x418) = *(arg1 + 0x2f8)
    result = *(arg1 + 0x2fc)
    *(arg2 + 0x41c) = result

return result
