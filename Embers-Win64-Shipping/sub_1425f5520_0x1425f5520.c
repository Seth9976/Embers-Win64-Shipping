// 函数: sub_1425f5520
// 地址: 0x1425f5520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
int64_t rax_1 = *(arg1 + 0x68) - *(arg1 + 0x60)
bool cond:0 = rax_1 + performanceCount s>= 0
zmm0[0] = float.d(rax_1 + performanceCount)

if (not(cond:0))
    zmm0[0] = zmm0[0] + 1.8446744073709552e+19

zmm0[0] = zmm0[0] f* data_143d796f8
return _mm_cvtpd_ps(zmm0)
