// 函数: sub_140b1c1f0
// 地址: 0x140b1c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ad8
void* result = __security_cookie ^ &var_ad8
void* result_2 = result
void* r12 = arg1

if (*(arg1 + 0x298) != 0)
    CRITICAL_SECTION* lpCriticalSection = arg1 + 0x308
    int32_t rdi_1 = -1
    void* var_60_1 = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0x40
    int32_t var_aa4_1 = 0xffffffff
    EnterCriticalSection(lpCriticalSection)
    int32_t rcx_1 = *(r12 + 0x298)
    int32_t i_5 = rcx_1 + var_58_1
    void var_a60
    
    if (i_5 s> var_54_1)
        sub_140b26890(&var_a60, var_58_1)
        rcx_1 = *(r12 + 0x298)
    
    int32_t i = 0
    
    if (rcx_1 s> 0)
        int64_t r8 = 0
        
        do
            void* rdx_1 = &var_a60
            void* rcx_3 = r12 + 0x10
            
            if (var_60_1 != 0)
                rdx_1 = var_60_1
            
            void* rax_2 = *(r12 + 0x290)
            void* rdx_2 = rdx_1 + r8
            
            if (rax_2 != 0)
                rcx_3 = rax_2
            
            i += 1
            void* rcx_4 = rcx_3 + r8
            r8 += 0x28
            *rdx_2 = *rcx_4
            *(rdx_2 + 8) = *(rcx_4 + 8)
            *(rdx_2 + 0x18) = *(rcx_4 + 0x18)
            *(rdx_2 + 0x20) = *(rcx_4 + 0x20)
            *(rdx_2 + 0x21) = *(rcx_4 + 0x21)
            *rcx_4 = 0
            *(rcx_4 + 0x21) = 0
        while (i s< *(r12 + 0x298))
    
    void* r9_1 = *(r12 + 0x2d8)
    
    if (r9_1 != 0)
        int32_t rcx_5 = *(r9_1 + 0x4038)
        void* r8_1 = r9_1 + 0x4020
        void* rax_7 = *(r8_1 + 8)
        
        if (rax_7 != 0)
            r8_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_5)
        int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(r8_1 + (rdx_5 << 2)) |= 1 << (rcx_5.b & 0x1f)
        rdi_1 = *(r9_1 + 0x4038)
        var_aa4_1 = rdi_1
    
    void* rax_13 = *(r12 + 0x290)
    void* rsi_1 = r12 + 0x10
    int32_t i_3 = *(r12 + 0x298)
    
    if (rax_13 != 0)
        rsi_1 = rax_13
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            if (*(rsi_1 + 0x21) == 0)
                sub_140a74f90(*rsi_1)
            
            rsi_1 += 0x28
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(r12 + 0x298) = 0
    
    if (*(r12 + 0x29c) != 0)
        sub_140b26c00(r12 + 0x10, 0)
    
    void* rdx_6 = *(r12 + 0x2d8)
    
    if (rdx_6 != 0)
        int32_t rax_16 = (*(rdx_6 + 0x4038) + 1) & 0x80000001
        
        if (rax_16 s< 0)
            rax_16 = ((rax_16 - 1) | 0xfffffffe) + 1
        
        *(rdx_6 + 0x4038) = rax_16
        void* rcx_10 = sx.q(rax_16) * 0x2010 + rdx_6
        *(rcx_10 + 0x2008) = 0
        
        if (*(rcx_10 + 0x200c) != 0)
            sub_140b26c80(rcx_10, 0)
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    void* rdx_9 = var_60_1
    void* r15_1 = &var_a60
    
    if (rdx_9 != 0)
        r15_1 = rdx_9
    
    result = r15_1 + sx.q(i_5) * 0x28
    void* result_1 = result
    
    if (r15_1 != result)
        void* rcx_13 = arg2
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        
        do
            int64_t rax_21 = *r15_1
            void* r14_1 = rcx_13
            int64_t rbp_1 = 0
            *(r15_1 + 0x18)
            char rax_22 = *(r15_1 + 0x20)
            void* rax_23 = *(rcx_13 + 0x80)
            int128_t var_a70 = *(r15_1 + 8)
            
            if (rax_23 != 0)
                r14_1 = rax_23
            
            int64_t r12_1 = sx.q(*(rcx_13 + 0x88)) << 3
            result = r12_1 + r14_1
            uint64_t r12_2 = r12_1 u>> 3
            
            if (r14_1 u> result)
                r12_2 = 0
            
            if (r12_2 != 0)
                do
                    int64_t* rsi_2 = *r14_1
                    result = (*(*rsi_2 + 0x38))(rsi_2)
                    int32_t var_a90
                    
                    if (result.b != 0 || arg3 != 0)
                        result = (*(*rsi_2 + 8))(rsi_2, rax_21, zx.q(rax_22), &var_a90, 
                            (sub_140b63580(&var_a70, &var_a90)).q)
                    r14_1 += 8
                    rbp_1 += 1
                while (rbp_1 != r12_2)
                
                rcx_13 = arg2
            
            r15_1 += 0x28
        while (r15_1 != result_1)
        
        rdx_9 = var_60_1
        rdi_1 = var_aa4_1
        r12 = arg1
    
    if (*(r12 + 0x2d8) != 0)
        EnterCriticalSection(lpCriticalSection)
        void* r8_4 = *(r12 + 0x2d8) + 0x4020
        void* rax_27 = *(r8_4 + 8)
        
        if (rax_27 != 0)
            r8_4 = rax_27
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rdi_1)
        int64_t rdx_12 = sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5)
        result = zx.q(not.d(1 << (rdi_1.b & 0x1f)))
        *(r8_4 + (rdx_12 << 2)) &= result.d
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)
        
        rdx_9 = var_60_1
    
    int32_t i_4 = i_5
    void* rbx_2 = &var_a60
    
    if (rdx_9 != 0)
        rbx_2 = rdx_9
    
    if (i_4 != 0)
        int32_t i_2
        
        do
            if (*(rbx_2 + 0x21) == 0)
                result = sub_140a74f90(*rbx_2)
            
            rbx_2 += 0x28
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)
        rdx_9 = var_60_1
    
    if (rdx_9 != 0)
        result = sub_140a74f90(rdx_9)

__security_check_cookie(result_2 ^ &var_ad8)
return result
