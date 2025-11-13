// 函数: sub_142035630
// 地址: 0x142035630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount[0x3]
QueryPerformanceCounter(&performanceCount)
void* result = data_143f5b298
int64_t zmm1 = float.d(performanceCount[0]) f* data_143d796f8
float zmm0[0x2] = _mm_cvtps_pd(*(result + 0xc28))

if (not(zmm1 f+ 16777216.0 f- data_143f407e0 f<= zmm0))
    result = QueryPerformanceCounter(&performanceCount)
    data_143f407e0 = float.d(performanceCount[0]) f* data_143d796f8 f+ 16777216.0

return result
