// 函数: sub_1418e1fb0
// 地址: 0x1418e1fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x50)
int64_t arg_8 = rbx
AcquireSRWLockShared(&arg1[8])
void* const rcx_4

if (arg1[0xa].d == *(arg1 + 0x7c))
label_1418e2040:
    rcx_4 = nullptr
else
    void* r8_1 = arg1[0x11]
    void* r9_1 = &arg1[0x10]
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_5 =
        *(r9_1 + ((sx.q((rbx u>> 0x20).d * 0x17 + rbx.d) & (sx.q(arg1[0x12].d) - 1)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1418e2040_1:
        rcx_4 = nullptr
    else
        int64_t r8_2 = arg1[9]
        
        while (true)
            int64_t rdx_2 = sx.q(rax_5) * 3
            rcx_4 = r8_2 + (rdx_2 << 3)
            
            if (*(r8_2 + (rdx_2 << 3)) == rbx)
                break
            
            rax_5 = *(rcx_4 + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_1418e2040_2
        
        if (rax_5 == 0xffffffff)
        label_1418e2040_2:
            rcx_4 = nullptr

void* rax_6 = rcx_4 + 8

if (rcx_4 == 0)
    rax_6 = nullptr

if (rax_6 != 0)
    int64_t rbx_1 = *rax_6
    ReleaseSRWLockShared(&arg1[8])
    return rbx_1

ReleaseSRWLockShared(&arg1[8])
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
void*** rax_8 = sub_1418daeb0(arg1, arg2)
QueryPerformanceCounter(&performanceCount)
AcquireSRWLockExclusive(&arg1[8])
int32_t r10 = arg1[0xa].d
void* const rcx_13

if (r10 == *(arg1 + 0x7c))
label_1418e2110:
    rcx_13 = nullptr
else
    void* r8_3 = arg1[0x11]
    void* r9_2 = &arg1[0x10]
    
    if (r8_3 != 0)
        r9_2 = r8_3
    
    int32_t rax_13 =
        *(r9_2 + ((sx.q((rbx u>> 0x20).d * 0x17 + rbx.d) & (sx.q(arg1[0x12].d) - 1)) << 2))
    
    if (rax_13 == 0xffffffff)
    label_1418e2110_1:
        rcx_13 = nullptr
    else
        int64_t r8_4 = arg1[9]
        
        while (true)
            int64_t rdx_6 = sx.q(rax_13) * 3
            rcx_13 = r8_4 + (rdx_6 << 3)
            
            if (*(r8_4 + (rdx_6 << 3)) == rbx)
                break
            
            rax_13 = *(rcx_13 + 0x10)
            
            if (rax_13 == 0xffffffff)
                goto label_1418e2110_2
        
        if (rax_13 == 0xffffffff)
        label_1418e2110_2:
            rcx_13 = nullptr

void* rax_14 = rcx_13 + 8

if (rcx_13 == 0)
    rax_14 = nullptr

if (rax_14 == 0)
    int32_t r9_4 = (rbx u>> 0x20).d * 0x17 + rbx.d
    void**** rax_19
    
    if (r10 - *(arg1 + 0x7c) == 0)
    label_1418e2184:
        rax_19 = sub_1418cae80(&arg1[9], r9_4, &arg_8)
    else
        void* rcx_14 = arg1[0x11]
        void* r8_5 = &arg1[0x10]
        
        if (rcx_14 != 0)
            r8_5 = rcx_14
        
        int32_t rax_18 = *(r8_5 + (((sx.q(arg1[0x12].d) - 1) & sx.q(r9_4)) << 2))
        
        if (rax_18 == 0xffffffff)
        label_1418e2184_1:
            rax_19 = sub_1418cae80(&arg1[9], r9_4, &arg_8)
        else
            int64_t r8_6 = arg1[9]
            void* rcx_16
            
            while (true)
                int64_t rdx_10 = sx.q(rax_18) * 3
                rcx_16 = r8_6 + (rdx_10 << 3)
                
                if (*(r8_6 + (rdx_10 << 3)) == rbx)
                    break
                
                rax_18 = *(rcx_16 + 0x10)
                
                if (rax_18 == 0xffffffff)
                    goto label_1418e2184_2
            
            if (rax_18 == 0xffffffff || rcx_16 == 0)
            label_1418e2184_2:
                rax_19 = sub_1418cae80(&arg1[9], r9_4, &arg_8)
            else
                rax_19 = rcx_16 + 8
    
    *rax_19 = rax_8

ReleaseSRWLockExclusive(&arg1[8])
return rax_8
