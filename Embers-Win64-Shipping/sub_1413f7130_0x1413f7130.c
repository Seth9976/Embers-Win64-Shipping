// 函数: sub_1413f7130
// 地址: 0x1413f7130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(*(arg1 + 0x124))
int64_t r13 = *(arg2 + 0x1b0)

if (rbp.d u>= 0xc)
    rbp = 0xc

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(*(arg1 + 0x122))
    uint32_t rax_2 = zx.d(*(arg1 + 0x120))
    int64_t rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_3 = rsi_3 + rbp
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_3 = rsi_3 + rbp
    
    *(arg2 + 0x30) = rax_3
    memcpy(rsi_3, arg4, rbp.d)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[6]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[6]
    
    *(arg2 + 0x30) = rax_4
    void**** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d99550
    rcx_4[4].d = rax_2
    *(rcx_4 + 0x24) = rax_1
    rcx_4[2] = r13
    rcx_4[3] = rsi_3
    rcx_4[5].d = rbp.d

uint64_t rbp_1 = zx.q(*(arg1 + 0x12a))

if (rbp_1.d u>= 4)
    rbp_1 = 4

if (rbp_1.d != 0)
    uint32_t r12_1 = zx.d(*(arg1 + 0x128))
    uint32_t r13_1 = zx.d(*(arg1 + 0x126))
    int64_t rsi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_9 = rsi_8 + rbp_1
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp_1 + 0x10).d)
        rsi_8 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_9 = rsi_8 + rbp_1
    
    *(arg2 + 0x30) = rax_9
    void arg_28
    memcpy(rsi_8, &arg_28, rbp_1.d)
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_12[6]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_12[6]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142d99550
    int64_t rax_13 = r13
    rcx_12[4].d = r13_1
    r13 = rax_13
    rcx_12[2] = rax_13
    rcx_12[3] = rsi_8
    *(rcx_12 + 0x24) = r12_1
    rcx_12[5].d = rbp_1.d

int64_t* r14 = data_14395f4d0
int64_t rbp_2 = *arg3

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_18[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_18 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_18[5]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_18
    *(arg2 + 8) = &rcx_18[1]
    rcx_18[1] = 0
    *rcx_18 = &data_142da77b8
    rcx_18[2] = r13
    rcx_18[3].d = r15_1
    rcx_18[4] = rbp_2

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_25[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_25[5]
        
        *(arg2 + 0x30) = rax_19
        void**** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_25
        *(arg2 + 8) = &rcx_25[1]
        rcx_25[1] = 0
        *rcx_25 = &data_142da77c8
        rcx_25[2] = r13
        rcx_25[3].d = rbp_3
        rcx_25[4] = r14

int64_t r14_1 = *(arg5 + 8)

if (*(arg1 + 0x132) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x130))
    void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_22 = &rcx_31[5]
    
    if (rax_22 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_22 = &rcx_31[5]
    
    *(arg2 + 0x30) = rax_22
    void**** rax_23 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_23 = rcx_31
    *(arg2 + 8) = &rcx_31[1]
    rcx_31[1] = 0
    *rcx_31 = &data_142da77d8
    rcx_31[2] = r13
    rcx_31[3].d = r15_2
    rcx_31[4] = r14_1

if (*(arg1 + 0x132) u<= 0)
    int64_t rsi_11 = *(arg5 + 0x10)
    
    if (*(arg1 + 0x12e) u> 0)
        uint32_t rbp_5 = zx.d(*(arg1 + 0x12c))
        void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_25 = &rcx_37[5]
        
        if (rax_25 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_25 = &rcx_37[5]
        
        *(arg2 + 0x30) = rax_25
        void**** rax_26 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_26 = rcx_37
        *(arg2 + 8) = &rcx_37[1]
        rcx_37[1] = 0
        *rcx_37 = &data_142d99560
        rcx_37[2] = r13
        rcx_37[3].d = rbp_5
        rcx_37[4] = rsi_11

return sub_1405d1550(arg3)
