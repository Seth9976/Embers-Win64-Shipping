// 函数: sub_1418e2530
// 地址: 0x1418e2530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg3 + 0x374))
int32_t arg_8 = rbp.d
EnterCriticalSection(&arg1[0x3b])
void* const rcx_3

if (arg1[1].d == *(arg1 + 0x34))
label_1418e25c0:
    rcx_3 = nullptr
else
    void* rcx_1 = arg1[8]
    void* r8 = &arg1[7]
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (rax_1 == 0xffffffff)
    label_1418e25c0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *arg1
        
        while (true)
            int64_t rdx_3 = sx.q(rax_1) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == rbp.d)
                break
            
            rax_1 = *(rcx_3 + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_1418e25c0_2
        
        if (rax_1 == 0xffffffff)
        label_1418e25c0_2:
            rcx_3 = nullptr

void* rdi = rcx_3 + 8

if (rcx_3 == 0)
    rdi = nullptr

if (arg1 != -0x1d8)
    LeaveCriticalSection(&arg1[0x3b])

if (rdi != 0)
    return *rdi

int64_t* rax_3 = j_sub_140a82f30(0x3a0)
int64_t* rdi_1 = rax_3

if (rax_3 == 0)
    rdi_1 = nullptr
else
    int64_t* rcx_5 = rax_3
    int64_t i_1 = 7
    int64_t* rax_4 = arg3
    int64_t i
    
    do
        rcx_5 = &rcx_5[0x10]
        int128_t zmm0_1 = *rax_4
        rax_4 = &rax_4[0x10]
        *(rcx_5 - 0x80) = zmm0_1
        *(rcx_5 - 0x70) = *(rax_4 - 0x70)
        *(rcx_5 - 0x60) = *(rax_4 - 0x60)
        *(rcx_5 - 0x50) = *(rax_4 - 0x50)
        *(rcx_5 - 0x40) = *(rax_4 - 0x40)
        *(rcx_5 - 0x30) = *(rax_4 - 0x30)
        *(rcx_5 - 0x20) = *(rax_4 - 0x20)
        *(rcx_5 - 0x10) = *(rax_4 - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)
    *rcx_5 = *rax_4
    rdi_1[0x71] = 0
    rdi_1[0x72].d = zx.d(*(arg3 + 0x367))
    rdi_1[0x73] = arg2
    rdi_1[0x71] = sub_1418de130(arg2, arg3)

int64_t* arg_18 = rdi_1
EnterCriticalSection(&arg1[0x3b])
void* const rcx_10

if (arg1[1].d == *(arg1 + 0x34))
label_1418e2700:
    rcx_10 = nullptr
else
    void* rcx_8 = arg1[8]
    void* r8_2 = &arg1[7]
    
    if (rcx_8 != 0)
        r8_2 = rcx_8
    
    int32_t rax_9 = *(r8_2 + (((sx.q(arg1[9].d) - 1) & rbp) << 2))
    
    if (rax_9 == 0xffffffff)
    label_1418e2700_1:
        rcx_10 = nullptr
    else
        int64_t r8_3 = *arg1
        
        while (true)
            int64_t rdx_8 = sx.q(rax_9) * 3
            rcx_10 = r8_3 + (rdx_8 << 3)
            
            if (*(r8_3 + (rdx_8 << 3)) == rbp.d)
                break
            
            rax_9 = *(rcx_10 + 0x10)
            
            if (rax_9 == 0xffffffff)
                goto label_1418e2700_2
        
        if (rax_9 == 0xffffffff)
        label_1418e2700_2:
            rcx_10 = nullptr

void** r14_1 = rcx_10 + 8

if (rcx_10 == 0)
    r14_1 = nullptr

if (r14_1 == 0)
    sub_140bd26e0(arg1, &arg_8, &arg_18)
    
    if (arg1 != -0x1d8)
        LeaveCriticalSection(&arg1[0x3b])
    
    return arg_18

if (rdi_1 != 0)
    sub_1418be030(rdi_1[0x73] + 0x3b0, 0, rdi_1[0x71])
    rdi_1[0x71] = 0
    j_sub_140a74f90(rdi_1)

int64_t* rdi_2 = *r14_1

if (arg1 != -0x1d8)
    LeaveCriticalSection(&arg1[0x3b])

return rdi_2
