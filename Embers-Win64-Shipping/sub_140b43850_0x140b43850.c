// 函数: sub_140b43850
// 地址: 0x140b43850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
bool z

if (0 == *(arg1 + 0x50))
    *(arg1 + 0x50) = 0
    z = true
else
    *(arg1 + 0x50)
    z = false

if (not(z))
    return zx.o(0)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rcx_1 = *(arg1 + 0xe8)
float zmm6[0x4] = zx.o(0)
int64_t var_38 = 0
int32_t rsi = 0
int32_t var_30 = 0
int32_t rbp = 0
zmm6[0].q = float.d(performanceCount)
zmm6[0].q = zmm6[0].q f* data_143d796f8

if (rcx_1 != 0)
    zmm6 = sub_140b432c0(rcx_1, &var_38)
    rbp = var_30
    rsi = var_38:4.d
    rbx = var_38.d

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t rdx_2 = data_143de7048
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount_1)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] f- zmm6[0].q
float temp0[0x4] = _mm_cvtpd_ps(zmm0)
temp0[0] = temp0[0] * 1000f
sub_140b43e30("NumTimestampsProcessed", rdx_2, rbx, 3)
sub_140b43e30("NumCustomStatsProcessed", data_143de7048, rsi, 3)
sub_140b43e30("NumEventsProcessed", data_143de7048, rbp, 3)
int512_t result
int128_t zmm6_1
result, zmm6_1 = sub_140b43f30("ProcessCSVStats", data_143de7048, temp0, 3)
result.o = zmm6_1
return result
