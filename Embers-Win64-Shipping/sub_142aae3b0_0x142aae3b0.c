// 函数: sub_142aae3b0
// 地址: 0x142aae3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x170)

if (rsi != 0)
    void*** i = *rsi
    
    while (i != 0)
        sub_142b35920(i)
        sub_142a47920(i)
        i = rsi[1]
        rsi = &rsi[1]
    
    sub_142a7dcd0(*(arg1 + 0x170))
    *(arg1 + 0x170) = 0

int64_t* rcx_3 = *(arg1 + 0x178)

if (rcx_3 != 0)
    if (rcx_3[-1] == 0)
        j_sub_140a74f90(&rcx_3[-1])
    else
        (**rcx_3)(rcx_3, 3)
    
    *(arg1 + 0x178) = 0

int64_t* rcx_5 = *(arg1 + 0x270)

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

int64_t* rcx_6 = *(arg1 + 0x278)
*(arg1 + 0x270) = 0

if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

void* rbx_1 = *(arg1 + 0x280)
*(arg1 + 0x278) = 0

if (rbx_1 != 0)
    sub_142b324e0(rbx_1)
    sub_142a47920(rbx_1)

void* rbx_2 = *(arg1 + 0x288)
*(arg1 + 0x280) = 0

if (rbx_2 != 0)
    sub_142b324e0(rbx_2)
    sub_142a47920(rbx_2)

int64_t* rcx_11 = *(arg1 + 0x298)
*(arg1 + 0x288) = 0

if (rcx_11 != 0)
    (**rcx_11)(rcx_11, 1)

int64_t* rcx_12 = *(arg1 + 0x2f0)
*(arg1 + 0x298) = 0

if (rcx_12 != 0)
    (**rcx_12)(rcx_12, 1)

int64_t* rcx_13 = *(arg1 + 0x2a0)
*(arg1 + 0x2f0) = 0

if (rcx_13 == 0)
    return 

int32_t rax = rcx_13[1].d

if (rax != 0)
    rcx_13[1].d = rax - 1
    
    if (rax == 1)
        (**rcx_13)(rcx_13, 1)

*(arg1 + 0x2a0) = 0
