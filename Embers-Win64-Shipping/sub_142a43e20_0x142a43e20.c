// 函数: sub_142a43e20
// 地址: 0x142a43e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm0 = data_1440153e0
zmm0 - 0.0
int64_t performanceCount
int64_t frequency
double zmm1

if (not(is_unordered.q(zmm0, 0.0)) && not(zmm0 != 0.0))
    QueryPerformanceCounter(&performanceCount)
    zmm0 = data_1440153e8
    int64_t performanceCount_1 = performanceCount
    
    if (not(0.0 < zmm0))
        QueryPerformanceFrequency(&frequency)
        zmm0 = float.d(frequency)
        data_1440153e8 = zmm0
    
    int128_t zmm7
    zmm7.q = float.d(performanceCount_1)
    zmm7.q = zmm7.q f/ zmm0
    QueryPerformanceCounter(&performanceCount)
    zmm1 = data_1440153e8
    int64_t performanceCount_2 = performanceCount
    
    if (not(0.0 < zmm1))
        QueryPerformanceFrequency(&frequency)
        zmm1 = float.d(frequency)
        data_1440153e8 = zmm1
    
    data_1440153e0 = float.d(performanceCount_2) / zmm1 f- zmm7.q

QueryPerformanceCounter(&performanceCount)
zmm1 = data_1440153e8
int64_t performanceCount_3 = performanceCount

if (not(0.0 < zmm1))
    QueryPerformanceFrequency(&frequency)
    zmm1 = float.d(frequency)
    data_1440153e8 = zmm1

return float.d(performanceCount_3) / zmm1
