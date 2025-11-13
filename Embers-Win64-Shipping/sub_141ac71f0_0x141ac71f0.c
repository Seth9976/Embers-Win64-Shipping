// 函数: sub_141ac71f0
// 地址: 0x141ac71f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = data_143f2bad0

if (rcx == 0)
    int512_t result
    result.o = zx.o(0)
    return result

int64_t r10 = data_143f2bac8
uint128_t zmm6 = zx.o(*(r10 + sx.q(rcx - 1) * 0x10))

if (0 != 0)
    memmove((sx.q(rcx - 1) << 4) + r10, (sx.q(rcx) << 4) + r10, 0 << 4)
    rcx = data_143f2bad0

data_143f2bad0 = rcx - 1
sub_1405a5010(&data_143f2bac8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] * 1000.0
zmm0[0] = zmm0[0] + 16777216000.0
zmm0[0] = zmm0[0] f- zmm6.q
return _mm_cvtpd_ps(zmm0)
