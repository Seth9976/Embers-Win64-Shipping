// 函数: sub_140bb35c0
// 地址: 0x140bb35c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7
int128_t var_28 = zmm7
float zmm6[0x4] = arg3
int128_t zmm8
int128_t var_38 = zmm8
int128_t zmm9
int128_t var_48 = zmm9

if (data_14399fa10() == 0)
    return 2

bool z_1

if (0 == *(arg1 + 0x7c))
    *(arg1 + 0x7c) = 0
    z_1 = true
else
    *(arg1 + 0x7c)
    z_1 = false

if (not(z_1))
    int32_t rax_2 = 0
    
    if (0 == *(arg1 + 0x7c))
        *(arg1 + 0x7c) = 0
    else
        rax_2 = *(arg1 + 0x7c)
    
    sub_140af98a0("Unknown", 0x1b69, 
        Cannot Flush Async Loading while async loading is suspended (%d)", zx.q(rax_2))
    sub_140afbb40()

zmm7 = zx.o(0)

if (not(zmm6[0] > 0f))
    zmm6 = 0x45610000

if (data_14399fa10() != 0)
    while (not(zmm6[0] f<= zmm7.d))
        if ((*arg2)(*(arg2 + 8)) != 0)
            break
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        zmm8.q = float.d(performanceCount_1)
        zmm8.q = zmm8.q f* data_143d796f8
        sub_140b33630("AsyncLoading")
        sub_140b43e30("EDLEventQueueDepth", data_143de7030, *(arg1 + 0x330), 0)
        int32_t rax_5 = 0
        
        if (0 == *(arg1 + 0x2b0))
            *(arg1 + 0x2b0) = 0
        else
            rax_5 = *(arg1 + 0x2b0)
        
        sub_140b43e30("QueuedPackagesQueueDepth", data_143de7030, rax_5, 0)
        int32_t rax_6 = 0
        
        if (0 == *(arg1 + 0x2b4))
            *(arg1 + 0x2b4) = 0
        else
            rax_6 = *(arg1 + 0x2b4)
        
        sub_140b43e30("ExistingQueuedPackagesQueueDepth", data_143de7030, rax_6, 0)
        zmm6, zmm7, zmm8, zmm9 = sub_140bbbde0(arg1 - 8, 1, 1, zmm6, nullptr)
        char rax_7 = data_14399fa10()
        sub_140b37f60("AsyncLoading")
        
        if (rax_7 == 0)
            return 2
        
        if (data_143e1a340 != 0)
            zmm6, zmm7, zmm8 = sub_140a7ddb0(sub_140a753a0(), 0)
            sub_140b732d0(zmm9.d)
        
        int64_t performanceCount[0x2]
        QueryPerformanceCounter(&performanceCount)
        double zmm1_1[0x2] = zx.o(0)
        int64_t zmm0_1 = float.d(performanceCount[0])
        zmm1_1[0] = fconvert.d(zmm6[0])
        zmm1_1[0] = zmm1_1[0] f- (zmm0_1 f* data_143d796f8 f- zmm8.q)
        zmm6 = _mm_cvtpd_ps(zmm1_1)
        
        if (data_14399fa10() == 0)
            break

if (zmm6[0] f<= zmm7.d)
    return 0

return 2
