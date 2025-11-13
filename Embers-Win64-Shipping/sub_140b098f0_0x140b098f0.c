// 函数: sub_140b098f0
// 地址: 0x140b098f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
void* r14 = arg1
uint128_t zmm6 = zx.o(arg5)

if (not(zmm6.q f!= -1.0))
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    zmm6.q = zmm6.q f- data_143de5880

int64_t rsi = 0
int32_t var_fc = 0x10
void* lpCriticalSection = r14 + 0x330
void* var_108 = nullptr
int32_t var_100 = 0
void* var_78 = nullptr
int32_t var_70 = 0
int32_t var_6c = 0x10
EnterCriticalSection(lpCriticalSection)
*(r14 + 0x358) += 1
int64_t rdi = sx.q(*(r14 + 0x2b8))
void var_188

if (rdi.d != 0)
    int32_t rdx = var_100
    int32_t rax_2 = rdx + rdi.d
    
    if (rax_2 s> var_fc)
        sub_140b26b00(&var_188, rax_2)
        rdx = var_100
    
    void* rcx_3 = &var_188
    
    if (var_108 != 0)
        rcx_3 = var_108
    
    memcpy(rcx_3 + (sx.q(rdx) << 3), *(r14 + 0x2b0), (rdi << 3).d)
    var_100 += rdi.d

int64_t rdi_1 = sx.q(*(r14 + 0x2c8))
void var_f8

if (rdi_1.d != 0)
    int32_t rdx_3 = var_70
    int32_t rax_5 = rdx_3 + rdi_1.d
    
    if (rax_5 s> var_6c)
        sub_140b26b00(&var_f8, rax_5)
        rdx_3 = var_70
    
    void* rcx_6 = &var_f8
    
    if (var_78 != 0)
        rcx_6 = var_78
    
    memcpy(rcx_6 + (sx.q(rdx_3) << 3), *(r14 + 0x2c0), (rdi_1 << 3).d)
    var_70 += rdi_1.d

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

if (var_100 != 0 || data_143de5432 == 0)
    void* rdi_2 = &var_f8
    int64_t r15_1 = 0
    
    if (var_78 != 0)
        rdi_2 = var_78
    
    int64_t rcx_9 = sx.q(var_70) << 3
    uint64_t rcx_10 = rcx_9 u>> 3
    
    if (rdi_2 u> rcx_9 + rdi_2)
        rcx_10 = 0
    
    if (rcx_10 != 0)
        do
            int64_t* rcx_11 = *rdi_2
            (*(*rcx_11 + 8))(rcx_11, arg2, zx.q(arg3), arg4, zmm6.q)
            r15_1 += 1
            rdi_2 += 8
        while (r15_1 != rcx_10)
        
        r14 = arg1
        lpCriticalSection = r14 + 0x330
    
    void* const var_1d0
    int32_t var_1c0
    
    if (*(r14 + 0x2d4) != 0)
        EnterCriticalSection(r14 + 0x2e0)
        int32_t rcx_13 = *(r14 + 0x2a8)
        var_1c0 = rcx_13
        *(r14 + 0x2a8) = rcx_13 + 1
        
        if (rcx_13 + 1 s> *(r14 + 0x2ac))
            sub_1405c4ec0(r14 + 0x2a0)
            rcx_13 = var_1c0
        
        int64_t* rcx_16 = *(r14 + 0x2a0) + sx.q(rcx_13) * 0x28
        
        if (rcx_16 != 0)
            var_1d0 = nullptr
            uint64_t var_1d8_2 = zmm6.q
            char var_19c_1 = 0
            int64_t rdx_9 = *arg4
            uint32_t var_1a0_1 = (rdx_9 u>> 0x20).d
            uint64_t var_1a8 = zx.q(rdx_9.d)
            sub_140b0a060(rcx_16, arg2, &var_1a8, arg3, var_1d8_2, var_1d0)
        
        if (r14 != -0x2e0)
            LeaveCriticalSection(r14 + 0x2e0)
    
    if (GetCurrentThreadId() != *(r14 + 0x2d0) || var_100 == 0)
        EnterCriticalSection(r14 + 0x308)
        void* rsi_1 = r14 + 0x10
        int64_t r15_4 = sx.q(*(rsi_1 + 0x288))
        int32_t rax_22 = (r15_4 + 1).d
        *(rsi_1 + 0x288) = rax_22
        
        if (rax_22 s> *(rsi_1 + 0x28c))
            sub_140b267f0(rsi_1, r15_4.d)
        
        void* rax_23 = *(rsi_1 + 0x280)
        
        if (rax_23 != 0)
            rsi_1 = rax_23
        
        int64_t* rcx_23 = rsi_1 + r15_4 * 0x28
        
        if (rcx_23 != 0)
            char var_18c_1 = 0
            int64_t rdx_15 = *arg4
            uint64_t var_198 = zx.q(rdx_15.d)
            uint32_t var_190_1 = (rdx_15 u>> 0x20).d
            sub_140b0a060(rcx_23, arg2, &var_198, arg3, zmm6.q, *(r14 + 0x2d8))
        
        if (r14 != -0x308)
            LeaveCriticalSection(r14 + 0x308)
    else
        int64_t zmm6_1 = sub_140b1c1f0(r14, &var_188, 1)
        void* rdi_4 = &var_188
        
        if (var_108 != 0)
            rdi_4 = var_108
        
        int64_t r15_2 = sx.q(var_100) << 3
        uint64_t r15_3 = r15_2 u>> 3
        
        if (rdi_4 u> r15_2 + rdi_4)
            r15_3 = 0
        
        if (r15_3 != 0)
            do
                int64_t* rcx_19 = *rdi_4
                (*(*rcx_19 + 8))(rcx_19, arg2, zx.q(arg3), arg4, zmm6_1, var_1d0, arg4, var_1c0)
                rsi += 1
                rdi_4 += 8
            while (rsi != r15_3)
            
            lpCriticalSection = r14 + 0x330
else
    sub_1405a65a0(u"%s\n", arg2)

int64_t result = EnterCriticalSection(lpCriticalSection)
*(r14 + 0x358) -= 1

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

if (var_108 != 0)
    result = sub_140a74f90(var_108)

__security_check_cookie(rax_1 ^ &var_1f8)
return result
