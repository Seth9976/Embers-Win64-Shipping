// 函数: sub_140fed7c0
// 地址: 0x140fed7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
var_194
memset(&var_194, 0, 0x120)
struct DWM_TIMING_INFO timingInfo
timingInfo.cbSize = 0x124
DwmGetCompositionTimingInfo(nullptr, &timingInfo)
double zmm0[0x2] = zx.o(0)
uint128_t zmm10 = 0x408f400000000000
uint128_t zmm1
zmm1.q = data_143d796f8 f* zmm10.q
zmm0[0] = float.d(zx.q(performanceCount.d - *(arg1 + 0x20)))
uint64_t rax_5 = zx.q(timingInfo.qpcFrameComplete.d - *(arg1 + 0x30))
zmm0[0] = zmm0[0] f* zmm1.q
int32_t temp0 = _mm_cvtpd_ps(zmm0)
zmm0 = zx.o(0)
zmm0[0] = float.d(rax_5)
uint64_t rax_6 = zx.q(timingInfo.qpcRefreshPeriod.d)
zmm0[0] = zmm0[0] f* zmm1.q
float zmm3 = _mm_cvtpd_ps(zmm0)
zmm0 = zx.o(0)
zmm0[0] = float.d(rax_6)
int32_t rax_7 = data_143e2b8f4
zmm0[0] = zmm0[0] f* zmm1.q
float temp0_2[0x4] = _mm_cvtpd_ps(zmm0)

if (rax_7 s> 0 && not(temp0_2[0] <= 1f))
    float zmm2 = 1000f f/ _mm_cvtepi32_ps(zx.o(rax_7))[0].d
    zmm1.d = temp0_2.d f- zmm2
    
    if (not(zmm1.d f>= -1f))
        do
            temp0_2[0] = temp0_2[0] + temp0_2[0]
            zmm0 = temp0_2
            zmm0[0].d = zmm0[0].d f- zmm2
        while (zmm0[0].d f< -1f)

int64_t rcx_2 = *(arg1 + 0x28)
uint64_t cFrameComplete = timingInfo.cFrameComplete

if (cFrameComplete u> rcx_2)
    zmm0 = zx.o(0)
    zmm0[0].d = float.s(cFrameComplete - rcx_2)
    
    if (cFrameComplete - rcx_2 s< 0)
        zmm0[0].d = zmm0[0].d f+ 1.84467441e+19f
    
    zmm3 = zmm3 f/ zmm0[0].d

zmm0 = data_1439b49c8
float temp0_5 = _mm_max_ss(zmm3, temp0)
zmm0[0].d = zmm0[0].d f* temp0_2[0]

if (not(temp0_5 f< zmm0[0].d))
    *(arg1 + 0x38) -= 1
else if (cFrameComplete u> rcx_2)
    *(arg1 + 0x38) += 1

int32_t rax_9 = *(arg1 + 0x38)
int32_t rcx_3

if (rax_9 s>= 0)
    rcx_3 = data_1439b49cc
    
    if (rax_9 s< rcx_3)
        rcx_3 = rax_9
else
    rcx_3 = 0

*(arg1 + 0x38) = rcx_3
int32_t temp1 = data_1439b49d0
int64_t rsi
rsi.b = rcx_3 s>= temp1

if (rcx_3 s>= temp1)
    int64_t* rcx_4 = *(*(arg1 + 0x18) + 0x150)
    (*(*rcx_4 + 0x378))(rcx_4)
    DwmFlush()
    double zmm9[0x2] = data_1439b49c4
    zmm9[0].d = zmm9[0].d f* temp0_2[0]
    
    while (true)
        QueryPerformanceCounter(&performanceCount)
        uint64_t rax_13 = zx.q(performanceCount.d - *(arg1 + 0x20))
        zmm0 = zx.o(data_143d796f8)
        zmm0[0] = zmm0[0] f* zmm10.q
        zmm1.q = float.d(rax_13)
        zmm1.q = zmm1.q f* zmm0[0]
        zmm1 = _mm_cvtpd_ps(zmm1)
        zmm9[0].d = zmm9[0].d f- zmm1.d
        
        if (zmm9[0].d f<= 0f)
            break
        
        zmm9[0].d = zmm9[0].d f* 0.00100000005f
        sub_140b73230(zmm9)

uint128_t zmm6_1
int32_t zmm7
int32_t zmm8
zmm6_1, zmm7, zmm8 = sub_140fed670(arg1, 0)
int64_t performanceCount_2

if (rsi.b == 0)
    if (*(arg1 + 0x3c) != 0)
        *(arg1 + 0x38) = 0
    
    performanceCount_2 = performanceCount
else
    int64_t rdi
    rdi.b = 0
    
    while (true)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        double zmm1_1[0x2] = zx.o(0)
        performanceCount_2 = performanceCount_1
        uint128_t zmm0_1
        zmm0_1.q = data_143d796f8 f* zmm10.q
        zmm1_1[0] = float.d(zx.q(performanceCount_2.d - *(arg1 + 0x20)))
        zmm1_1[0] = zmm1_1[0] f* zmm0_1.q
        zmm0_1.d = zmm6_1.d f- _mm_cvtpd_ps(zmm1_1)[0].d
        
        if (zmm0_1.d f<= zmm8)
            break
        
        zmm0_1.d = zmm0_1.d f* zmm7
        rdi.b = 1
        zmm6_1 = sub_140b73230(zmm0_1)
    
    if (rdi.b == 0)
        performanceCount_2 = performanceCount

*(arg1 + 0x20) = performanceCount_2
*(arg1 + 0x28) = timingInfo.cFrameComplete
uint64_t qpcFrameComplete = timingInfo.qpcFrameComplete
*(arg1 + 0x30) = qpcFrameComplete
*(arg1 + 0x3c) = rsi.b
__security_check_cookie(rax_1 ^ &var_1c8)
return qpcFrameComplete
