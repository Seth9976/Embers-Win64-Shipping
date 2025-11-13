// 函数: sub_141fc5e40
// 地址: 0x141fc5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd9000(arg2, 2)
*(arg2 + 0x418) = arg3
*(arg3 + 0x1d0) = *(arg1 + 0x218)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
*(arg3 + 0x1d8) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
int64_t result = QueryPerformanceCounter(&performanceCount)
int64_t zmm0 = float.d(performanceCount) f* data_143d796f8
*(arg3 + 0x134) = 3
*(arg3 + 0x30) = arg2
*(arg3 + 0x98) = arg2
*(arg3 + 0x1e0) = zmm0 f+ 16777216.0
return result
