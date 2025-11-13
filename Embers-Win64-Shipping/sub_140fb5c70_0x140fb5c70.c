// 函数: sub_140fb5c70
// 地址: 0x140fb5c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x488) != 0)
    int64_t* rcx = *(arg1 + 0x480)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x488) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x480)
        
        *(arg1 + 0x478) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 + 0x478) == 0)
    *(arg2 + 0xc) = 0x3f800000

uint32_t zmm1[0x4] = *(arg1 + 0x3b8)
*(arg1 + 0x40c) = 0
int128_t zmm4 = *arg2
zmm1[0] = zmm1[0] f+ 360f
zmm1[0] = zmm1[0] f- zmm4.d
*(arg1 + 0x3f8) = zmm1
*(arg1 + 0x3e8) = zmm4
uint32_t temp0[0x4] = _mm_and_ps(zmm1, 0x7fffffff)
zmm1[0] = zmm1[0] f- zmm4.d

if (_mm_and_ps(zmm1, 0x7fffffff)[0] f>= temp0[0])
    zmm1[0] = zmm1[0] f- 360f
    zmm1[0] = zmm1[0] f- zmm4.d
    
    if (not(_mm_and_ps(zmm1, 0x7fffffff)[0] f>= temp0[0]))
        *(arg1 + 0x3f8) = zmm1[0]
else
    *(arg1 + 0x3f8) = zmm1[0]

*(arg1 + 0x3b8) = zmm4
void var_28
int32_t* result = sub_140ad9100(arg2, &var_28)
bool cond:1 = *(arg1 + 0x491) == 0
*(arg1 + 0x3c8) = *result

if (cond:1 || *(arg1 + 0x502) != 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    
    if (*(arg1 + 0x491) == 0 || *(arg1 + 0x502) != 0)
        zmm6 = sub_140fc3530(arg1)
    
    int64_t performanceCount_1
    result = QueryPerformanceCounter(&performanceCount_1)
    int128_t zmm0_1
    zmm0_1.q = float.d(performanceCount_1)
    zmm0_1.q = zmm0_1.q f* data_143d796f8
    zmm0_1.q = zmm0_1.q f- zmm6.q
    
    if (not(zmm0_1.q f<= 0.10000000000000001))
        *(arg1 + 0x410) = 1

return result
