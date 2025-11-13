// 函数: sub_14195b570
// 地址: 0x14195b570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f0f141 != 0)
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    int128_t zmm7
    int128_t var_28_1 = zmm7
    uint128_t zmm8
    uint128_t var_38_1 = zmm8
    
    do
        int64_t* rcx = data_143f0f180
        int512_t zmm2
        zmm2.o = -0x4010000000000000
        uint128_t var_a8
        (*(*rcx + 0x6b8))(rcx, &var_a8, zmm2)
        char rax_2 = data_143de5480
        int64_t rsi_1 = data_143f0f0c0
        int64_t rcx_1
        
        if (rax_2 == 0)
            rcx_1 = 0
        else
            bool cond:1_1 = GetCurrentThreadId() != data_143de5470
            rax_2 = data_143de5480
            rcx_1.b = cond:1_1
        
        int64_t rsi_2 = data_143f0f120
        zmm8.q = _mm_cvtepi32_pd(zx.q(*(rsi_1 + (rcx_1 << 2)))).q f* 0x3f91111111111111
        int64_t rcx_2
        
        if (rax_2 == 0)
            rcx_2 = 0
        else
            rcx_2.b = GetCurrentThreadId() != data_143de5470
        
        int64_t var_98
        zmm6.q = var_98 f+ zmm8.q
        zmm7.q = _mm_cvtps_pd((*(rsi_2 + (rcx_2 << 2))).q).q f* 0x3f50624dd2f1a9fc
        zmm6.q = zmm6.q f- zmm7.q
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        uint128_t zmm0
        zmm0.q = float.d(performanceCount)
        zmm0.q = zmm0.q f* data_143d796f8
        zmm0.q = zmm0.q f+ 0x4170000000000000
        zmm6.q = zmm6.q f- zmm0.q
        sub_140b73230(_mm_cvtpd_ps(_mm_max_sd(zmm6.q, 0)))
        EnterCriticalSection(arg1 + 8)
        *(arg1 + 0x30) = var_a8
        *(arg1 + 0x40) = var_98
        zmm0.q = zmm8.q f+ *(arg1 + 0x38)
        zmm8.q = zmm8.q f+ *(arg1 + 0x40)
        *(arg1 + 0x30) += 1
        zmm0.q = zmm0.q f- zmm7.q
        zmm8.q = zmm8.q f- zmm7.q
        *(arg1 + 0x38) = zmm0.q
        *(arg1 + 0x40) = zmm8.q
        
        if (arg1 != -8)
            LeaveCriticalSection(arg1 + 8)
        
        int64_t* rcx_6 = *(arg1 + 0x48)
        (*(*rcx_6 + 0x10))(rcx_6)
    while (data_143f0f141 != 0)

return 0
