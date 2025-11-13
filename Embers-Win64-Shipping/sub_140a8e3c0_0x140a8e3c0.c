// 函数: sub_140a8e3c0
// 地址: 0x140a8e3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t result = performanceCount
int64_t rdx = arg1[2]
int64_t r8_1 = result - arg1[1]
arg1[1] = result

if (r8_1 u<= rdx)
    rdx = r8_1

*arg1 += rdx
return result
