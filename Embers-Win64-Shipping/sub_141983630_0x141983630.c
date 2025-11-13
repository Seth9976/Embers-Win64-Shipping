// 函数: sub_141983630
// 地址: 0x141983630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = 0
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
uint128_t zmm9 = 0x4170000000000000
uint128_t zmm8
zmm8.q = float.d(performanceCount_1)
int64_t r12
r12.b = 1
zmm8.q = zmm8.q f* data_143d796f8
zmm8.q = zmm8.q f+ zmm9.q

if (sub_140a54ff0() != 0 && data_143f0f131 != 0)
    void* lpCriticalSection = arg1 + 8
    int128_t zmm6
    int128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    
    do
        int64_t rdi_1 = data_143f0f0c0
        int64_t rcx_1
        
        if (data_143de5480 == 0)
            rcx_1 = 0
        else
            rcx_1.b = GetCurrentThreadId() != data_143de5470
        
        int32_t rdi_2 = *(rdi_1 + (rcx_1 << 2))
        zmm7.q = _mm_cvtepi32_pd(zx.q(rdi_2)).q f* 0x3f916872b020c49c
        zmm7.q = zmm7.q f+ zmm8.q
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        uint128_t zmm0_1
        double zmm1_1
        
        if (rdi_2 != 0 && r12.b == 0)
            zmm0_1.q = float.d(performanceCount_2)
            zmm0_1.q = zmm0_1.q f* data_143d796f8
            zmm0_1.q = zmm0_1.q f+ zmm9.q
            zmm1_1 = _mm_max_sd(zmm7.q f- zmm0_1.q, 0)
        
        int64_t rdx_1
        
        if (rdi_2 == 0 || r12.b != 0 || zmm1_1 < 0.0)
            rdx_1 = 0xffffffff
        else
            rdx_1 = int.q(zmm1_1 f* 0x408f400000000000)
        
        int64_t* rcx_3 = data_1439c85a8
        (*(*rcx_3 + 0x20))(rcx_3, rdx_1, 0)
        EnterCriticalSection(&data_1439c8568)
        zmm6 = data_1439c8590.o
        uint64_t var_b0_1 = data_1439c8598:8
        LeaveCriticalSection(&data_1439c8568)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int64_t rax_3 = zmm6.q
        zmm0_1.q = float.d(performanceCount)
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        zmm0_1.q = zmm0_1.q f+ zmm9.q
        
        if (rax_3 u> r15)
            r15 = rax_3
            zmm8 = zx.o(var_b0_1)
            void* rdi_3 = data_143f0f108
            
            if (data_143de5480 == 0)
                r12.b = *rdi_3 == 0
            else
                int64_t rcx_5
                rcx_5.b = GetCurrentThreadId() != data_143de5470
                r12.b = *(rdi_3 + (rcx_5 << 2)) == 0
        else if (rdi_2 != 0 && r12.b == 0 && not(zmm0_1.q f<= zmm7.q))
            r15 = rax_3 + 1
            zmm8 = zmm0_1
        
        EnterCriticalSection(lpCriticalSection)
        int32_t rsi_1 = *(arg1 + 0x38)
        int32_t rsi_2 = rsi_1 - 1
        
        if (rsi_1 - 1 s>= 0)
            int64_t rbp_2 = sx.q(rsi_2) << 4
            int64_t r14_1 = rbp_2
            int32_t temp2_1
            
            do
                int64_t* rcx_7 = *(arg1 + 0x30)
                
                if (*(rcx_7 + rbp_2) u<= r15)
                    int64_t* rcx_8 = *(rcx_7 + rbp_2 + 8)
                    int64_t var_d0 = 0
                    int64_t var_c8_1 = 0
                    sub_140a22e70(rcx_8, &var_d0, 0xff)
                    int64_t* rcx_9 = *(r14_1 + *(arg1 + 0x30) + 8)
                    
                    if (rcx_9 != 0)
                        rcx_9[9].d -= 1
                        
                        if (rcx_9[9].d == 1)
                            sub_140a2f6e0(rcx_9)
                    
                    int32_t rdx_7 = *(arg1 + 0x38)
                    int32_t rcx_12 = rdx_7 - rsi_2 - 1
                    
                    if (rcx_12 s>= 1)
                        rcx_12 = 1
                    
                    if (rcx_12 != 0)
                        int64_t rax_7 = *(arg1 + 0x30)
                        memcpy(r14_1 + rax_7, (sx.q(rdx_7 - rcx_12) << 4) + rax_7, rcx_12 << 4)
                        rdx_7 = *(arg1 + 0x38)
                    
                    *(arg1 + 0x38) = rdx_7 - 1
                    sub_1405a5010(arg1 + 0x30)
                    int64_t rcx_15 = var_d0
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                
                r14_1 -= 0x10
                rbp_2 -= 0x10
                temp2_1 = rsi_2
                rsi_2 -= 1
            while (temp2_1 - 1 s>= 0)
            lpCriticalSection = arg1 + 8
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
    while (data_143f0f131 != 0)

return 0
