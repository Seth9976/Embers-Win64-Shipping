// 函数: sub_140b9e5a0
// 地址: 0x140b9e5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = arg1
int128_t zmm7 = arg4
char var_a8 = 0
uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_1.b != 0)
    int32_t rax_2 = *(r13 + 0x3a8)
    data_143e1a570 += 1
    data_1439a965c = rax_2
    var_a8 = 1

int32_t rax_3 = 0x7fffffff
int32_t var_a4 = 0
int32_t** var_78 = nullptr

if (arg2 != 0)
    rax_3 = 1

int32_t var_6c = 0
int32_t r12 = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm8 = 0x4170000000000000
void* lpCriticalSection = r13 + 0x58
void* lpCriticalSection_1 = lpCriticalSection
int128_t zmm6
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8
zmm6.q = zmm6.q f+ zmm8.q
int32_t rdi_4

while (true)
    EnterCriticalSection(lpCriticalSection)
    int32_t var_70_1 = 0
    int32_t rsi_1 = 0
    
    if (r12 s< 0 && r12 != 0)
        sub_1405c5570(&var_78, 0)
        r12 = var_6c
        rsi_1 = var_70_1
    
    int32_t rdx = *(r13 + 0x50)
    int32_t rcx_3 = rax_3
    
    if (rcx_3 s<= rdx)
        rdx = rcx_3
    
    if (rdx s> r12)
        sub_1405c5570(&var_78, rdx)
        rcx_3 = rax_3
        r12 = var_6c
        rsi_1 = var_70_1
    
    int32_t r15_1 = 0
    int64_t* rdi_1 = *(r13 + 0x48)
    void* rax_5 = &rdi_1[sx.q(*(r13 + 0x50))]
    
    if (rdi_1 != rax_5)
        int32_t** r14_1 = var_78
        
        do
            int64_t r13_1 = *rdi_1
            
            if (r15_1 s>= rcx_3)
                break
            
            int64_t r14_2 = sx.q(rsi_1)
            r15_1 += 1
            rsi_1 = (r14_2 + 1).d
            
            if (rsi_1 s> r12)
                sub_1405a4d70(&var_78)
                rcx_3 = rax_3
                r12 = var_6c
            
            rdi_1 = &rdi_1[1]
            r14_1 = var_78
            r14_1[r14_2] = r13_1
        while (rdi_1 != rax_5)
        
        if (r15_1 != 0)
            r13 = arg1
            int32_t rax_7 = *(r13 + 0x50)
            
            if (rax_7 != r15_1)
                int64_t rcx_6 = *(r13 + 0x48)
                memmove(rcx_6, rcx_6 + (sx.q(r15_1) << 3), (rax_7 - r15_1) << 3)
                rax_7 = *(r13 + 0x50)
            
            *(r13 + 0x50) = rax_7 - r15_1
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
            
            if (rsi_1 s> 0)
                int32_t** r12_1 = r14_1
                void* rcx_8 = &r14_1[sx.q(rsi_1)]
                int64_t r15_2 = 0
                uint64_t r13_5 = (rcx_8 - r14_1 + 7) u>> 3
                
                if (r14_1 u> rcx_8)
                    r13_5 = 0
                
                if (r13_5 != 0)
                    do
                        int32_t* rdi_2 = *r12_1
                        zmm6, zmm7, zmm8 = sub_140bb1f10(arg1, rdi_2, 0, arg5)
                        
                        if (rdi_2 != 0)
                            int64_t* r14_3 = *(rdi_2 + 0x28)
                            
                            if (r14_3 != 0)
                                sub_140745b20(r14_3)
                                j_sub_140a74f90(r14_3)
                            
                            j_sub_140a74f90(rdi_2)
                        
                        r12_1 = &r12_1[1]
                        r15_2 += 1
                    while (r15_2 != r13_5)
                    
                    lpCriticalSection = lpCriticalSection_1
                
                r13 = arg1
            
            rdi_4 = var_a4 + rsi_1
            var_a4 = rdi_4
            
            if (arg2 != 0)
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                double zmm1 = float.d(performanceCount_1) f* data_143d796f8 f+ zmm8.q
                double zmm2 = zmm1 f- zmm6.q
                bool rax_11 = zmm2 > fconvert.d(zmm7.d)
                
                if (rax_11 != 0 && data_143e1a324 != 0 && not(data_1439a9888 f== zmm6.q)
                        && not(zmm2 <= _mm_cvtps_pd(data_1439a9644).q))
                    double zmm0
                    zmm0.d = data_1439a9640.d f* zmm7.d
                    
                    if (not(zmm2 <= _mm_cvtps_pd(zmm0).q))
                        data_1439a9888 = zmm6.q
                
                data_1439a9890 = zmm1
                
                if (rax_11 != 0)
                    break
            
            void* rcx_14 = data_143e1adf0
            bool z_1
            
            if (0 == *(rcx_14 + 8))
                *(rcx_14 + 8) = 0
                z_1 = true
            else
                *(rcx_14 + 8)
                z_1 = false
            
            rcx_14.b = not(z_1)
            
            if (rcx_14.b != 0)
                break
            
            r12 = var_6c
            continue
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    rdi_4 = var_a4
    break

int32_t** rcx_16 = var_78

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

if (var_a8 != 0)
    int32_t temp2_1 = data_143e1a570
    data_143e1a570 -= 1
    int32_t rcx_17 = data_1439a965c
    
    if (temp2_1 == 1)
        rcx_17 = -1
    
    data_1439a965c = rcx_17

return zx.q(rdi_4)
