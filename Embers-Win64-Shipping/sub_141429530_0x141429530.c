// 函数: sub_141429530
// 地址: 0x141429530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *(arg2 + 0x1a0)
int64_t* r14 = data_14395f4d0
int64_t rbp = *arg3

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_1
    int64_t* rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    *rcx_2 = &data_142d5a070
    rcx_2[2] = r13
    rcx_2[3].d = r15_1
    rcx_2[4] = rbp

if (*(arg1 + 0x122) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x120))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r13
        rcx_9[3].d = rbp_1
        rcx_9[4] = r14

int64_t rbp_2 = *arg4
int64_t* r14_1 = data_14395f4d0

if (*(arg1 + 0x11e) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x11c))
    void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_15[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_15[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_15
    *(arg2 + 8) = &rcx_15[1]
    rcx_15[1] = 0
    rcx_15[3].d = r15_2
    *rcx_15 = &data_142d5a070
    rcx_15[2] = r13
    rcx_15[4] = rbp_2

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x124))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_22[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_22[5]
        
        *(arg2 + 0x30) = rax_14
        void**** rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_22
        *(arg2 + 8) = &rcx_22[1]
        rcx_22[1] = 0
        *rcx_22 = &data_142d5a080
        rcx_22[2] = r13
        rcx_22[3].d = rsi_1
        rcx_22[4] = r14_1

sub_1405d1550(arg3)
return sub_1405d1550(arg4) __tailcall
