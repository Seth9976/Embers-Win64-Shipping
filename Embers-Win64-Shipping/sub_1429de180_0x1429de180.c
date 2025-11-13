// 函数: sub_1429de180
// 地址: 0x1429de180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0
int32_t r9 = 0
int32_t rax = *(arg1 + 0x193c)

if (rax != 0)
    int32_t rdx_1 = 0
    
    if (rax == 1)
        rdx_1 = *(arg1 + 0x9d4)
    else if (rax != 2)
        r9 = -1
    else
        rdx_1 = *(arg1 + 0x9d8)
    
    void* r10_1 = arg1 + (sx.q(*(arg1 + 0x9dc)) << 2)
    int32_t rax_2 = *(r10_1 + 0x9c0)
    
    if (rax_2 s> 0)
        *(r10_1 + 0x9c0) = rax_2 - 1
    
    int64_t rax_4 = sx.q(rdx_1)
    *(arg1 + 0x9dc) = rdx_1
    *(arg1 + (rax_4 << 2) + 0x9c0) += 1

int32_t rax_5 = *(arg1 + 0x1938)

if (rax_5 != 0)
    if (rax_5 == 1)
        rcx = *(arg1 + 0x9d4)
    else if (rax_5 != 2)
        r9 = -1
    else
        rcx = *(arg1 + 0x9dc)
    
    void* rdx_2 = arg1 + (sx.q(*(arg1 + 0x9d8)) << 2)
    int32_t rax_7 = *(rdx_2 + 0x9c0)
    
    if (rax_7 s> 0)
        *(rdx_2 + 0x9c0) = rax_7 - 1
    
    int64_t rax_9 = sx.q(rcx)
    *(arg1 + 0x9d8) = rcx
    *(arg1 + (rax_9 << 2) + 0x9c0) += 1

if (*(arg1 + 0x1930) != 0)
    int64_t rcx_1 = sx.q(*(arg1 + 0x9d0))
    void* rdx_3 = arg1 + (sx.q(*(arg1 + 0x9d8)) << 2)
    int32_t rax_11 = *(rdx_3 + 0x9c0)
    
    if (rax_11 s> 0)
        *(rdx_3 + 0x9c0) = rax_11 - 1
    
    *(arg1 + 0x9d8) = rcx_1.d
    *(arg1 + (rcx_1 << 2) + 0x9c0) += 1

if (*(arg1 + 0x1934) != 0)
    int64_t rcx_2 = sx.q(*(arg1 + 0x9d0))
    void* rdx_4 = arg1 + (sx.q(*(arg1 + 0x9dc)) << 2)
    int32_t rax_14 = *(rdx_4 + 0x9c0)
    
    if (rax_14 s> 0)
        *(rdx_4 + 0x9c0) = rax_14 - 1
    
    *(arg1 + 0x9dc) = rcx_2.d
    *(arg1 + (rcx_2 << 2) + 0x9c0) += 1

if (*(arg1 + 0x192c) == 0)
    *(arg1 + 0x778) = arg1 + 0x780 + sx.q(*(arg1 + 0x9d0)) * 0x90
    int64_t rcx_10 = sx.q(*(arg1 + 0x9d0))
    *(arg1 + (rcx_10 << 2) + 0x9c0) -= 1
    return zx.q(r9)

int64_t rdx_5 = sx.q(*(arg1 + 0x9d0))
void* rcx_3 = arg1 + (sx.q(*(arg1 + 0x9d4)) << 2)
int32_t rax_17 = *(rcx_3 + 0x9c0)

if (rax_17 s> 0)
    *(rcx_3 + 0x9c0) = rax_17 - 1

*(arg1 + 0x9d4) = rdx_5.d
*(arg1 + (rdx_5 << 2) + 0x9c0) += 1
int64_t rcx_6 = sx.q(*(arg1 + 0x9d0))
*(arg1 + 0x778) = arg1 + 0x780 + sx.q(*(arg1 + 0x9d4)) * 0x90
*(arg1 + (rcx_6 << 2) + 0x9c0) -= 1
return zx.q(r9)
