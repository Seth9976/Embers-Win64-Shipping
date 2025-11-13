// 函数: sub_1425fae50
// 地址: 0x1425fae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0
bool z

if (0 == *(arg1 + 0x1d8))
    *(arg1 + 0x1d8) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x1d8))
    z = false

if (not(z))
    int64_t performanceCount
    result = QueryPerformanceCounter(&performanceCount)
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    float temp0_1[0x4] = _mm_cvtpd_ps(zmm0)
    zmm0 = temp0_1
    zmm0[0].d = zmm0[0].d f- *(arg1 + 0x270)
    
    if (not(zmm0[0].d f<= 1f))
        int32_t result_1 = *(arg1 + 0x1d4)
        *(arg1 + 0x1d4) = 1
        result = zx.q(result_1)
        *(arg1 + 0x270) = temp0_1[0]

return result
