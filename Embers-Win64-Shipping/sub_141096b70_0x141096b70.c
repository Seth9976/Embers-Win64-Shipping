// 函数: sub_141096b70
// 地址: 0x141096b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(data_143e2de20 + 4)

if (zmm1[0] >= 0f)
    return _mm_min_ss(*(arg1 + 0x1208), zmm1[0])

zmm1 ^= data_142d3f780

if (zmm1[0] < 0f)
    return (zx.o(0)).d

return __minss_xmmss_memss(zmm1[0], 0x42c80000)[0]
