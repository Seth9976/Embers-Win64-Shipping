// 函数: sub_140cc1900
// 地址: 0x140cc1900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *(arg1 + 0x32b)
int32_t rax_1 = *(arg1 + 0x330) + 1
*(arg1 + 0x330) = rax_1

if (r9 == 0 && *(arg1 + 0x32c) != r9 && mods.dp.d(sx.q(rax_1), arg3) == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    double zmm1 = float.d(performanceCount)
    double zmm0 = _mm_cvtps_pd(*(arg1 + 0x334)).q
    bool result = zmm1 f* data_143d796f8 + 16777216.0 f- *(arg1 + 0x338) > zmm0
    *(arg1 + 0x32b) = result
    return result

return zx.q(r9)
