// 函数: sub_142027930
// 地址: 0x142027930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm1[0x2] = zx.o(0)
zmm1[0] = float.d(performanceCount)
zmm1[0] = zmm1[0] f* data_143d796f8
zmm1[0] = zmm1[0] + 16777216.0
zmm1[0] = zmm1[0] f- data_143de5880
int64_t rcx_1 = int.q(zmm1[0])
double zmm0[0x2] = zmm1

if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm1[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx_1 - (zx.q(temp0_2) & 1))

int32_t result = int.d(zmm0[0])
*arg2 = result
zmm0 = _mm_cvtepi32_pd(zx.o(result)[0])
zmm1[0] = zmm1[0] - zmm0[0]
*arg3 = _mm_cvtpd_ps(zmm1)[0].d
return result
