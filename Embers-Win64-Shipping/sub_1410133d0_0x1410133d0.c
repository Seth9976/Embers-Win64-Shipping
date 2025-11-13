// 函数: sub_1410133d0
// 地址: 0x1410133d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_2 = (arg3 - 1 + arg2) & neg.d(arg3)
int32_t arg_10 = rdi_2

if (rdi_2 * 2 u> arg1[0x18].d)
    int64_t* rcx_17 = *arg4
    *arg4 = 0
    
    if (rcx_17 != 0)
        rcx_17[1].d -= 1
        
        if (rcx_17[1].d == 1)
            (**rcx_17)(rcx_17, 1)
    
    return 0xffffffff

AcquireSRWLockShared(arg1 + 0x80)
void* const rcx_3

if (arg1[3].d == *(arg1 + 0x44))
label_141013471:
    rcx_3 = nullptr
else
    void* rcx_1 = arg1[0xa]
    void* r8_1 = &arg1[9]
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_3 = *(r8_1 + (((sx.q(arg1[0xb].d) - 1) & sx.q(rdi_2)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_141013471_1:
        rcx_3 = nullptr
    else
        int64_t r8_2 = arg1[2]
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rdi_2)
                break
            
            rax_3 = *(rcx_3 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_141013471_2
        
        if (rax_3 == 0xffffffff)
        label_141013471_2:
            rcx_3 = nullptr

void* rsi = rcx_3 + 8

if (rcx_3 == 0)
    rsi = nullptr

int64_t* rsi_1

if (rsi == 0)
    rsi_1 = nullptr
else
    rsi_1 = *rsi

ReleaseSRWLockShared(&arg1[0x10])

if (rsi_1 == 0)
    uint32_t rcx_5 = *(arg1 + 0xbc)
    uint32_t temp0_1 = divu.dp.d(0:(arg1[0x17].d - 1 + rdi_2), rdi_2)
    
    if (temp0_1 u>= rcx_5)
        rcx_5 = temp0_1
    
    uint32_t temp0_2 = divu.dp.d(0:(arg1[0x18].d), rdi_2)
    uint32_t r13_1 = temp0_2
    
    if (rcx_5 u<= temp0_2)
        r13_1 = rcx_5
    
    AcquireSRWLockExclusive(&arg1[0x10])
    void* const rcx_10
    
    if (arg1[3].d == *(arg1 + 0x44))
    label_141013540:
        rcx_10 = nullptr
    else
        void* rcx_8 = arg1[0xa]
        void* r8_3 = &arg1[9]
        
        if (rcx_8 != 0)
            r8_3 = rcx_8
        
        int32_t rax_11 = *(r8_3 + (((sx.q(arg1[0xb].d) - 1) & sx.q(rdi_2)) << 2))
        
        if (rax_11 == 0xffffffff)
        label_141013540_1:
            rcx_10 = nullptr
        else
            int64_t r8_4 = arg1[2]
            
            while (true)
                int64_t rdx_8 = sx.q(rax_11) * 3
                rcx_10 = r8_4 + (rdx_8 << 3)
                
                if (*(r8_4 + (rdx_8 << 3)) == rdi_2)
                    break
                
                rax_11 = *(rcx_10 + 0x10)
                
                if (rax_11 == 0xffffffff)
                    goto label_141013540_2
            
            if (rax_11 == 0xffffffff)
            label_141013540_2:
                rcx_10 = nullptr
    
    void* rax_12 = rcx_10 + 8
    
    if (rcx_10 == 0)
        rax_12 = nullptr
    
    if (rax_12 == 0)
        int64_t* rax_13 = j_sub_140a82f30(zx.q((rax_12 + 0x40).d))
        int64_t* rsi_2 = rax_13
        
        if (rax_13 == 0)
            rsi_2 = nullptr
        else
            *rax_13 = 0
            rax_13[1] = 0
            InitializeCriticalSection(&rax_13[2])
            SetCriticalSectionSpinCount(&rsi_2[2], 0xfa0)
            rsi_2[7].d = rdi_2
            *(rsi_2 + 0x3c) = r13_1 * rdi_2
        
        int64_t* arg_8 = rsi_2
        rax_12 = sub_141000b00(&arg1[2], &arg_10, &arg_8)
    
    rsi_1 = *rax_12
    ReleaseSRWLockExclusive(&arg1[0x10])

return sub_141013790(rsi_1, *arg1, *(arg1 + 0xc), arg1[0x16].d, *(arg1 + 0xb4), arg4)
