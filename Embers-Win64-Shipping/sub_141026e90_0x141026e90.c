// 函数: sub_141026e90
// 地址: 0x141026e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0x20)
void* rdi = *(arg1 + 0x18)

if (rdi != 0)
    int64_t* rcx_1 = *(rdi + 0x38)
    
    if (rcx_1 == 0)
        bool z_1
        
        if (0 == *(rdi + 0x28))
            *(rdi + 0x28) = 0
            z_1 = true
        else
            *(rdi + 0x28)
            z_1 = false
        
        if (not(z_1))
            sub_141060480(rdi + 8)
            *(rdi + 0x28) -= 1
        
        goto label_141026f08
    
    if ((*(*rcx_1 + 0x18))(rcx_1, rdi) == 0)
    label_141026f08:
        
        if (*(rdi + 0x38) != 0)
            int64_t* rcx_5 = *(rdi + 0x30)
            (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
            *(rdi + 0x38) = 0
    else
        sub_141060480(rdi + 8)
        *(rdi + 0x28) -= 1
        int64_t* rcx_3 = *(rdi + 0x30)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        *(rdi + 0x38) = 0
    
    int64_t* rdi_1 = *(arg1 + 0x10)
    int64_t* rcx_6 = *(*(arg1 + 0x18) + 0x20)
    *(arg1 + 0x10) = rcx_6
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 8))()
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x10))(rdi_1)
    
    int64_t* rcx_8 = *(arg1 + 0x18)
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8, 1)
    
    *(arg1 + 0x18) = 0
    *(arg1 + 0x28) = 1
else if (*(arg1 + 0x28) == 0)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm7
    zmm7.q = float.d(performanceCount)
    zmm7.q = zmm7.q f* data_143d796f8
    TEB* gsbase
    
    if (data_143e2c380
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c380)
        
        if (data_143e2c380 == 0xffffffff)
            int64_t rdi_2 = data_143e2c2b8
            int64_t rsi_1
            
            if (data_143de5480 == 0)
                rsi_1 = 0
            else
                rsi_1.b = GetCurrentThreadId() != data_143de5470
            
            data_143e2c37c = (*(rdi_2 + (rsi_1 << 2))).d
            _Init_thread_footer(&data_143e2c380)
    
    while (*(arg1 + 0x28) == 0)
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        double zmm0 = float.d(performanceCount_1)
        float zmm3[0x2] = _mm_cvtps_pd(data_143e2c37c)
        
        if ((zmm0 f* data_143d796f8 f- zmm7.q) f* 0x408f400000000000 f> zmm3)
            sub_140af98a0("Unknown", 0x138, 
                Waiting for PSO creation failed to complete within the timeout interval (%.3f ms).", 
                zmm3)
            sub_140afbb40()
            break

int64_t result = *(arg1 + 0x10)
ReleaseSRWLockExclusive(arg1 + 0x20)
return result
