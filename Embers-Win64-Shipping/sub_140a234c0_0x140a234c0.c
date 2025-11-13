// 函数: sub_140a234c0
// 地址: 0x140a234c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t performanceCount_1 = performanceCount
double zmm0 = sub_140a48b40()
int64_t zmm1 = float.d(performanceCount_1 - *arg1)

if (performanceCount_1 - *arg1 s< 0)
    zmm1 = zmm1 f+ 1.8446744073709552e+19

zmm0.d = fconvert.s(zmm0 f* zmm1 * 1000000.0)
return sub_140a4bcc0(u"Latency %6.2fus\r\n", fconvert.d(zmm0.d)) __tailcall
