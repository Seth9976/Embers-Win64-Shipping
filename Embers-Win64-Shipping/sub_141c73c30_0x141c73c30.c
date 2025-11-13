// 函数: sub_141c73c30
// 地址: 0x141c73c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
double zmm1[0x2] = zx.o(0)
zmm1[0] = float.d(performanceCount)
zmm1[0] = zmm1[0] f* data_143d796f8
zmm1[0] = zmm1[0] + 16777216.0
zmm1[0] = zmm1[0] f- *(arg1 + 0x120)
*(arg1 + 0x120) = zmm1.q
*(arg1 + 0x36c) = _mm_cvtpd_ps(zmm1)[0].d
return result
