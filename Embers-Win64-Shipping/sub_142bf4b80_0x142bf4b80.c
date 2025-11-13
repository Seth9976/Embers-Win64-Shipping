// 函数: sub_142bf4b80
// 地址: 0x142bf4b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg3
uint32_t r13 = *(arg1 + 0x20)
uint64_t rbx = zx.q(arg4)

if (*(arg1 + 4) == 0)
    return 

if (arg3 == 0xffffffff)
    r15 = 0
    int16_t* rax_1 = arg2
    
    if (*arg2 != 0)
        do
            rax_1 = &rax_1[1]
            r15 += 1
        while (*rax_1 != 0)

int32_t rax_3 = arg5

if (rax_3 == 0xffffffff)
    rax_3 = r15 - rbx.d

int64_t rsi_1 = sx.q(rax_3) * 2
uint32_t rax_6 = (rsi_1 u>> 2).d
int32_t rax_7 = rax_6 + *(arg1 + 0x60)

if (rax_6 != neg.d(*(arg1 + 0x60)) && rax_7 u>= *(arg1 + 0x68))
    sub_142bf4fb0(arg1, rax_7)

if (*(arg1 + 0x60) == 0 && rbx.d != 0)
    void* rcx = &arg2[rbx]
    *(arg1 + 0xb4) = 0
    
    while (arg2 u< rcx)
        uint64_t r10_1 = zx.q(*(arg1 + 0xb4))
        
        if (r10_1.d u>= 5)
            break
        
        uint32_t rdx_1 = zx.d(*(rcx - 2))
        rcx -= 2
        
        if (rdx_1 - 0xd800 u<= 0x7ff)
            uint32_t r8
            
            if (rdx_1 u>= 0xdc00 && arg2 u< rcx)
                r8 = zx.d(*(rcx - 2))
            
            if (rdx_1 u< 0xdc00 || arg2 u>= rcx || r8 - 0xd800 u> 0x3ff)
                rdx_1 = r13
            else
                rdx_1 = rdx_1 - 0x35fdc00 + (r8 << 0xa)
                rcx -= 2
        
        *(arg1 + (r10_1 << 2) + 0x8c) = rdx_1
        *(arg1 + 0xb4) += 1

void* rbx_1 = &arg2[rbx]
void* r14_1 = rsi_1 + rbx_1

while (rbx_1 u< r14_1)
    uint32_t rsi_4 = zx.d(*rbx_1)
    void* rbp_1 = rbx_1
    rbx_1 += 2
    
    if (rsi_4 - 0xd800 u<= 0x7ff)
        uint32_t rcx_1
        
        if (rsi_4 u<= 0xdbff && rbx_1 u< r14_1)
            rcx_1 = zx.d(*rbx_1)
        
        if (rsi_4 u> 0xdbff || rbx_1 u>= r14_1 || rcx_1 - 0xdc00 u> 0x3ff)
            rsi_4 = r13
        else
            rsi_4 = (rsi_4 << 0xa) - 0x35fdc00 + rcx_1
            rbx_1 += 2
    
    int32_t rdx_3 = *(arg1 + 0x60)
    char rax_12
    
    if (rdx_3 != 0xffffffff && rdx_3 + 1 u>= *(arg1 + 0x68))
        rax_12 = sub_142bf4fb0(arg1, rdx_3 + 1)
    
    if (rdx_3 == 0xffffffff || rdx_3 + 1 u< *(arg1 + 0x68) || rax_12 != 0)
        uint64_t rcx_3 = zx.q(*(arg1 + 0x60)) * 5
        int64_t rax_14 = *(arg1 + 0x70)
        *(rax_14 + (rcx_3 << 2)) = 0
        *(rax_14 + (rcx_3 << 2) + 8) = 0
        *(rax_14 + (rcx_3 << 2) + 0x10) = 0
        *(rax_14 + (rcx_3 << 2)) = rsi_4
        *(rax_14 + (rcx_3 << 2) + 4) = 0
        *(rax_14 + (rcx_3 << 2) + 8) = ((rbp_1 - arg2) s>> 1).d
        *(arg1 + 0x60) += 1

*(arg1 + 0xb8) = 0
void* r9 = &arg2[sx.q(r15)]

while (rbx_1 u< r9)
    uint64_t r8_2 = zx.q(*(arg1 + 0xb8))
    
    if (r8_2.d u>= 5)
        break
    
    uint32_t rcx_4 = zx.d(*rbx_1)
    rbx_1 += 2
    
    if (rcx_4 - 0xd800 u<= 0x7ff)
        uint32_t rdx_5
        
        if (rcx_4 u<= 0xdbff && rbx_1 u< r9)
            rdx_5 = zx.d(*rbx_1)
        
        if (rcx_4 u> 0xdbff || rbx_1 u>= r9 || rdx_5 - 0xdc00 u> 0x3ff)
            rcx_4 = r13
        else
            rcx_4 = (rcx_4 << 0xa) - 0x35fdc00 + rdx_5
            rbx_1 += 2
    
    *(arg1 + (r8_2 << 2) + 0xa0) = rcx_4
    *(arg1 + 0xb8) += 1

*(arg1 + 0x34) = 1
