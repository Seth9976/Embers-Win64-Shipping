// 函数: sub_142a43db0
// 地址: 0x142a43db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg1
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm2 = data_1440153e8
int64_t performanceCount_1 = performanceCount

if (not(0.0 < zmm2))
    int64_t frequency
    QueryPerformanceFrequency(&frequency)
    zmm2 = float.d(frequency)
    data_1440153e8 = zmm2

arg1.q = float.d(performanceCount_1)
arg1.q = arg1.q f/ zmm2
arg1.q = arg1.q f- zmm6.q
arg1.q = arg1.q f- data_1440153e0
return arg1
