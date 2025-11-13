// 函数: sub_1408918a0
// 地址: 0x1408918a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)

if (*(arg1 + 0x11a) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x118))
    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rdx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rdx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rdx_2
    *(arg2 + 8) = &rdx_2[1]
    rdx_2[1] = 0
    *rdx_2 = &data_142da77d8
    rdx_2[2] = rbp
    rdx_2[3].d = r14_1
    rdx_2[4] = 0

if (*(arg1 + 0x124) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x122))
    void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_3[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_3[5]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_3
    *(arg2 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    *rcx_3 = &data_142da77d8
    rcx_3[2] = rbp
    rcx_3[3].d = r14_2
    rcx_3[4] = 0

if (*(arg1 + 0x146) u> 0)
    uint32_t r14_3 = zx.d(*(arg1 + 0x144))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_9[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142da77d8
    rcx_9[2] = rbp
    rcx_9[3].d = r14_3
    rcx_9[4] = 0

if (*(arg1 + 0x14a) u<= 0)
    return 

uint32_t rsi_1 = zx.d(*(arg1 + 0x148))
void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_15[5]

if (rax_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_15[5]

*(arg2 + 0x30) = rax_7
void**** rax_8 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_8 = rcx_15
*(arg2 + 8) = &rcx_15[1]
rcx_15[1] = 0
*rcx_15 = &data_142da77d8
rcx_15[2] = rbp
rcx_15[3].d = rsi_1
rcx_15[4] = 0
