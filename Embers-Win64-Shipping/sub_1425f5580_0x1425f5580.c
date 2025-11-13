// 函数: sub_1425f5580
// 地址: 0x1425f5580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t r8 = int.q(zmm0[0])

if (r8 != -0x8000000000000000 && not(float.d(r8) f== zmm0[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(r8 - (zx.q(temp0_2) & 1))

*arg2 = int.q(zmm0[0]) - *(arg1 + 0x78) - *(arg1 + 0x68)
return arg2
