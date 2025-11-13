// 函数: sub_140bb43d0
// 地址: 0x140bb43d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount
double zmm0[0x2]

if (not(0.0 f!= *(arg1 + 0x178)))
    QueryPerformanceCounter(&performanceCount)
    zmm0 = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    *(arg1 + 0x178) = zmm0.q

if (arg2 != 0 && *(arg1 + 0x110) u<= 1)
    if (arg3 == 0)
        return 0
    
    QueryPerformanceCounter(&performanceCount)
    double zmm1[0x2] = arg5
    zmm0 = zx.o(0)
    zmm0[0] = float.d(performanceCount)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm0[0] = zmm0[0] + 16777216.0
    zmm0[0] = zmm0[0] f- arg4.q
    zmm0 = _mm_cvtpd_ps(zmm0)
    zmm1[0].d = zmm1[0].d f- zmm0[0].d
    
    if (zmm1[0].d f< 0.00101000001f)
        return 0
    
    if (sub_140bbdae0(arg1, zmm1) == 0)
        return 0

return 1
