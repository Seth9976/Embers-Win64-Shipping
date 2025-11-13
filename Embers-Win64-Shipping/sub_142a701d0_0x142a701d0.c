// 函数: sub_142a701d0
// 地址: 0x142a701d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return *(arg1 + 0x10)

if (arg2 == 1)
    return float.d(*(arg1 + 0x30))

if (arg2 == 2)
    return float.d(*(arg1 + 0x20))

if (arg2 == 3)
    return float.d(*(arg1 + 0x28))

if (arg2 == 4)
    return _mm_cvtepi32_pd(zx.q(*(arg1 + 0x18))).q

abort()
noreturn
