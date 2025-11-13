// 函数: sub_141d7d430
// 地址: 0x141d7d430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6 = zx.o(data_143dbb3b8)
data_143dbb3b6 = 0
int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)

if (not(zmm6.q f<= float.d(performanceCount) f* data_143d796f8 f+ 16777216.0))
    result = QueryPerformanceCounter(&performanceCount)
    data_143dbb3b8 = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

return result
