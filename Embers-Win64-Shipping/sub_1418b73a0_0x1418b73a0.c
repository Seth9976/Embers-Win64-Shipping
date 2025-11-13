// 函数: sub_1418b73a0
// 地址: 0x1418b73a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_48 = zmm6
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
uint128_t zmm9 = 0x4170000000000000
uint128_t zmm8
zmm8.q = float.d(performanceCount_1)
zmm8.q = zmm8.q f* data_143d796f8
zmm8.q = zmm8.q f+ zmm9.q
bool z

if (0 == *(arg1 + 4))
    *(arg1 + 4) = 0
    z = true
else
    *(arg1 + 4)
    z = false

if (not(z))
    double zmm7[0x2]
    double var_58_1[0x2] = zmm7
    uint128_t zmm10 = 0x3f91111111111111
    int128_t zmm11 = zx.o(0)
    bool z_3
    
    do
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        zmm6.q = float.d(performanceCount_2)
        zmm6.q = zmm6.q f* data_143d796f8
        zmm6.q = zmm6.q f+ zmm9.q
        zmm7 = zmm6
        zmm7[0] = zmm7[0] f- zmm8.q
        uint128_t zmm0
        zmm0.q = zmm10.q f- zmm7[0]
        int512_t zmm1
        
        if (not(zmm0.q f<= zmm11.q))
            zmm0.d = fconvert.s(zmm0.q)
            zmm0, zmm1 = sub_140b73230(zmm0)
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            zmm6.q = float.d(performanceCount)
            zmm6.q = zmm6.q f* data_143d796f8
            zmm6.q = zmm6.q f+ zmm9.q
            zmm7 = zmm6
            zmm7[0] = zmm7[0] f- zmm8.q
        
        if (data_143e29f28 != 0)
            bool z_1
            
            if (0 == *(arg1 + 8))
                *(arg1 + 8) = 0
                z_1 = true
            else
                *(arg1 + 8)
                z_1 = false
            
            if (z_1)
                EnterCriticalSection(&data_143efaee8)
                char rbx_1 = data_1439c7168
                LeaveCriticalSection(&data_143efaee8)
                
                if (rbx_1 != 0)
                    int64_t* rcx_3 = *(data_143e29f28 + 0x20)
                    CRITICAL_SECTION* lpCriticalSection = (*(*rcx_3 + 0x138))(rcx_3)
                    EnterCriticalSection(lpCriticalSection)
                    bool z_2
                    
                    if (0 == *(arg1 + 4))
                        *(arg1 + 4) = 0
                        z_2 = true
                    else
                        *(arg1 + 4)
                        z_2 = false
                    
                    if (not(z_2))
                        int64_t* rcx_5 = *(arg1 + 0x20)
                        zmm1.o = _mm_cvtpd_ps(zmm7)
                        zmm1, zmm6, zmm9, zmm10, zmm11 = sub_1418b2240(rcx_5, zmm0)
                        *(arg1 + 8)
                        *(arg1 + 8) = 1
                    
                    if (sub_140a80f40() != 0)
                    label_1418b756f:
                        
                        if (data_143efaed8 != 0)
                            EnterCriticalSection(&data_143efaee8)
                            char rbx_2 = data_1439c7168
                            LeaveCriticalSection(&data_143efaee8)
                            
                            if (rbx_2 != 0)
                                int64_t* rcx_6 = data_143efaed8
                                (*(*rcx_6 + 8))(rcx_6)
                        
                        *(arg1 + 8)
                        *(arg1 + 8) = 0
                    else
                        if (data_143f138f4 == 0)
                            if (data_143de5480 == 0)
                                goto label_1418b756f
                            
                            uint32_t rax_8
                            rax_8.b = GetCurrentThreadId() == data_143de5470
                            
                            if (rax_8.b != 0)
                                goto label_1418b756f
                        
                        void var_b0
                        void** rax_11 = sub_1418b1f50(&var_b0, nullptr, 0xff)
                        *(*rax_11 + 0x10) = arg1
                        void* rcx_9 = *rax_11
                        int32_t r8_1 = rax_11[2].d
                        int64_t* rdx_1 = rax_11[1]
                        int64_t* rbx_3 = *(rcx_9 + 0x20)
                        int64_t* arg_10 = rbx_3
                        void* rbp_1 = &rbx_3[9]
                        
                        if (rbx_3 != 0)
                            *rbp_1 += 1
                            rbx_3 = arg_10
                        
                        zmm1, zmm6 = sub_1405a5630(rcx_9, rdx_1, r8_1, 1)
                        
                        if (rbx_3 != 0)
                            int32_t rax_12 = *rbp_1
                            *rbp_1 -= 1
                            
                            if (rax_12 == 1)
                                zmm1, zmm6 = sub_140a2f6e0(arg_10)
                    
                    if (lpCriticalSection != 0)
                        LeaveCriticalSection(lpCriticalSection)
        
        zmm8 = zmm6
        
        if (0 == *(arg1 + 4))
            *(arg1 + 4) = 0
            z_3 = true
        else
            *(arg1 + 4)
            z_3 = false
    while (not(z_3))

uint64_t result = 0
bool z_4

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
    z_4 = true
else
    result = zx.q(*(arg1 + 8))
    z_4 = false

if (not(z_4))
    zmm6 = 0x3dcccccd
    bool z_5
    
    do
        zmm6 = sub_140b73230(zmm6)
        result = 0
        
        if (0 == *(arg1 + 8))
            *(arg1 + 8) = 0
            z_5 = true
        else
            result = zx.q(*(arg1 + 8))
            z_5 = false
    while (not(z_5))

*arg1 -= 1
return result
