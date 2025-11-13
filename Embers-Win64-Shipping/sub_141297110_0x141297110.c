// 函数: sub_141297110
// 地址: 0x141297110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1b0)
int64_t* r13 = arg3
int64_t arg_10 = r12
sub_14077c4b0(arg2, &arg_10, arg1 + 0x120, arg4, 0)
uint64_t rbp = zx.q(*(arg1 + 0x12a))

if (rbp.d u>= 0xc)
    rbp = 0xc

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(*(arg1 + 0x126))
    uint32_t r13_1 = zx.d(*(arg1 + 0x128))
    int64_t rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_2 = rsi_3 + rbp
    
    if (rax_2 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_2 = rsi_3 + rbp
    
    *(arg2 + 0x30) = rax_2
    memcpy(rsi_3, arg5, rbp.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_5[6]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142d99550
    *(rcx_5 + 0x24) = r13_1
    r13 = arg3
    rcx_5[4].d = rax_1
    rcx_5[2] = r12
    rcx_5[3] = rsi_3
    rcx_5[5].d = rbp.d

void arg_30
sub_140741e30(arg2, &arg_10, arg1 + 0x12c, &arg_30, 0)
int64_t rbp_1 = *r13
int64_t* r14 = data_14395f4d0

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_12[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_12[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    rcx_12[3].d = r15_1
    *rcx_12 = &data_142da77b8
    rcx_12[2] = r12
    rcx_12[4] = rbp_1

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_19[5]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_12
        void**** rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142da77c8
        rcx_19[2] = r12
        rcx_19[3].d = rbp_2
        rcx_19[4] = r14

int64_t r14_1 = *(arg6 + 8)

if (*(arg1 + 0x138) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x136))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_25[5]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_15
    void**** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_16 = rcx_25
    *(arg2 + 8) = &rcx_25[1]
    rcx_25[1] = 0
    *rcx_25 = &data_142da77d8
    rcx_25[2] = r12
    rcx_25[3].d = r15_2
    rcx_25[4] = r14_1

if (*(arg1 + 0x138) u<= 0)
    int64_t rsi_6 = *(arg6 + 0x10)
    
    if (*(arg1 + 0x134) u> 0)
        uint32_t rbp_4 = zx.d(*(arg1 + 0x132))
        void*** rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_31[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_31 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_31[5]
        
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_31
        *(arg2 + 8) = &rcx_31[1]
        rcx_31[1] = 0
        *rcx_31 = &data_142d99560
        rcx_31[2] = r12
        rcx_31[3].d = rbp_4
        rcx_31[4] = rsi_6

return sub_1405d1550(r13)
