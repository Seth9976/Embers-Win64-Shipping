// 函数: sub_14231cde0
// 地址: 0x14231cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    *(arg3 + 0x28) = data_143dbb3b8
    
    if (0 u< *(arg1 + 0x11a))
        uint32_t r15_1 = zx.d(*(arg1 + 0x118))
        int64_t r14_1 = *(arg3 + 0x10)
        void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_2[5]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_2[5]
        
        *(arg2 + 0x30) = rax_1
        void**** rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        rcx_2[3].d = r15_1
        *rcx_2 = &data_142d5a070
        rcx_2[2] = r12
        rcx_2[4] = r14_1

if (*(arg1 + 0x11e) u> 0)
    int64_t* rsi_1 = *(arg3 + 0x18)
    uint32_t r14_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*rsi_1 + 8))(rsi_1) == 0)
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
        rcx_9[2] = r12
        rcx_9[3].d = r14_2
        rcx_9[4] = rsi_1

uint64_t rdi = zx.q(*(arg1 + 0x124))

if (rdi.d u>= 0x40)
    rdi = 0x40

int64_t arg_8

if (rdi.d != 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x122))
    int64_t rsi_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    arg_8 = *(arg2 + 0x1a0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x120))
    int64_t rax_10 = rsi_4 + rdi
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rdi + 0x10).d)
        rsi_4 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_10 = rdi + rsi_4
    
    *(arg2 + 0x30) = rax_10
    memcpy(rsi_4, arg4, rdi.d)
    void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_17[6]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_17[6]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_17
    *(arg2 + 8) = &rcx_17[1]
    rcx_17[1] = 0
    *rcx_17 = &data_142d549d8
    rcx_17[4].d = r13_1
    rcx_17[2] = arg_8
    rcx_17[3] = rsi_4
    *(rcx_17 + 0x24) = r12_1
    rcx_17[5].d = rdi.d

arg_8 = *(arg2 + 0x1a0)
void arg_28
return sub_1405eb490(arg2, &arg_8, arg1 + 0x126, &arg_28, 0)
