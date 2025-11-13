// 函数: sub_141840270
// 地址: 0x141840270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t performanceCount_1 = performanceCount
double zmm0 = sub_140a48b40()
int64_t zmm1 = float.d(performanceCount_1)

if (performanceCount_1 s< 0)
    zmm1 = zmm1 f+ 1.8446744073709552e+19

return zmm0 f* zmm1
