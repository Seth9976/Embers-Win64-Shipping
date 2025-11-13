// 函数: sub_141812210
// 地址: 0x141812210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm6_1 = sub_141809d80(*(arg1 + 0x130), nullptr, nullptr, nullptr, nullptr)
EnterCriticalSection(arg1 + 0xf8)
uint64_t result = zx.q(*(arg1 + 0xf0))

if (result.d s> 1)
    int64_t zmm1_1
    zmm1_1.d = (*(arg1 + 0xdc)).d f- zmm6_1
    *(arg1 + 0xdc) = zmm1_1.d
    
    if ((zmm1_1.d f<= 0f || result.d s>= *(arg1 + 0xc0)) && data_143de5458 != zx.q(data_143efa088))
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm1_1 = float.d(performanceCount)
        int64_t temp0_1 = _mm_cvtps_pd(*(arg1 + 0xc8))
        zmm1_1 = zmm1_1 f* data_143d796f8 f+ 16777216.0 f- *(arg1 + 0xd0)
        
        if (not(zmm1_1 f< temp0_1))
            (*(*(arg1 - 8) + 0x20))(arg1 - 8, zmm1_1)
            data_143efa088 = data_143de5458.d

if (arg1 != -0xf8)
    LeaveCriticalSection(arg1 + 0xf8)

result.b = 1
return result
