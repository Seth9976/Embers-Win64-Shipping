// 函数: sub_141a509b0
// 地址: 0x141a509b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
uint128_t result

if (data_143de5520 == 0)
    QueryPerformanceCounter(&performanceCount)
    result.q = float.d(performanceCount)
    result.q = result.q f* data_143d796f8
    result.q = result.q f+ 16777216.0
    return result

uint128_t zmm1 = data_143de5510
int64_t performanceCount_1 = zmm1.q
int64_t r8 = _mm_bsrli_si128(zmm1, 8).q
performanceCount = performanceCount_1
uint32_t rdx_1 = (r8 u>> 0x20).d
zmm1.d = _mm_cvtepi32_ps(zx.o(rdx_1)).d f* performanceCount:4.d
result.q = float.d(sx.q(rdx_1) * sx.q(performanceCount_1.d))
result.q = result.q f+ _mm_cvtps_pd(zmm1.q).q
result.q = result.q f/ _mm_cvtepi32_pd(zx.q(r8.d))
return result
