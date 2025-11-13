// 函数: sub_141fed340
// 地址: 0x141fed340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0

if (arg2 == 0)
    zmm0 = *(arg1 + 0x10)
    *(arg1 + 8) |= 2
    *(arg1 + 0x1c) = _mm_min_ss(zmm0, arg4)
    return 

if (arg2 == 1)
    zmm0 = *(arg1 + 0x1c)
    *(arg1 + 8) |= 2
    *(arg1 + 0x10) = _mm_max_ss(zmm0, arg4)
    return 

if (arg2 == 2)
    zmm0 = *(arg1 + 0x14)
    *(arg1 + 8) |= arg2.b
    *(arg1 + 0x20) = _mm_min_ss(zmm0, arg4)
    return 

if (arg2 == 3)
    zmm0 = *(arg1 + 0x20)
    *(arg1 + 8) |= 2
    *(arg1 + 0x14) = _mm_max_ss(zmm0, arg4)
    return 

if (arg2 != 4)
    int32_t temp0_5 = __maxss_xmmss_memss(arg4, *(arg1 + 0x24))
    *(arg1 + 8) |= 2
    *(arg1 + 0x18) = temp0_5
    return 

zmm0 = *(arg1 + 0x18)
*(arg1 + 8) |= 2
*(arg1 + 0x24) = _mm_min_ss(zmm0, arg4)
