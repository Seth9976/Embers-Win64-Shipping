// 函数: sub_1423db4c0
// 地址: 0x1423db4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount[0x2]
QueryPerformanceCounter(&performanceCount)
sub_14196d110(arg2, *(arg1 + 0x98), zx.q(arg3), zx.q(arg4), arg5, arg6)
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t result = performanceCount_1.d - performanceCount[0].d
data_143f138d0 += result
data_143f138e0 += 1
return result
