// 函数: sub_142a45200
// 地址: 0x142a45200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
int128_t zmm7
rax, zmm7 = sub_142a45580()
int64_t rcx_1 = *rax + 0x88

if (rcx_1 != &data_14400f130)
    memset(rcx_1, 0, 0x240)

memset(&data_14400f130, 0, 0x240)
double zmm0 = data_1440153e0
zmm0 - 0.0
double zmm1_1

if (not(is_unordered.q(zmm0, 0.0)) && not(zmm0 != 0.0))
    int128_t var_28_1 = zmm7
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    zmm0 = data_1440153e8
    int64_t performanceCount_3 = performanceCount_1
    
    if (not(0.0 < zmm0))
        int64_t frequency_1
        QueryPerformanceFrequency(&frequency_1)
        zmm0 = float.d(frequency_1)
        data_1440153e8 = zmm0
    
    zmm7.q = float.d(performanceCount_3)
    zmm7.q = zmm7.q f/ zmm0
    int64_t performanceCount_2
    QueryPerformanceCounter(&performanceCount_2)
    zmm1_1 = data_1440153e8
    int64_t performanceCount_4 = performanceCount_2
    
    if (not(0.0 < zmm1_1))
        int64_t frequency_2
        QueryPerformanceFrequency(&frequency_2)
        zmm1_1 = float.d(frequency_2)
        data_1440153e8 = zmm1_1
    
    data_1440153e0 = float.d(performanceCount_4) / zmm1_1 f- zmm7.q

int64_t performanceCount
int64_t result = QueryPerformanceCounter(&performanceCount)
zmm1_1 = data_1440153e8
int64_t performanceCount_5 = performanceCount

if (not(0.0 < zmm1_1))
    int64_t frequency
    result = QueryPerformanceFrequency(&frequency)
    zmm1_1 = float.d(frequency)
    data_1440153e8 = zmm1_1

data_1440153d8 = float.d(performanceCount_5) / zmm1_1
return result
