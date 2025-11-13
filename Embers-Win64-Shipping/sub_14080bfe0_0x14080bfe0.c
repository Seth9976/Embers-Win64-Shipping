// 函数: sub_14080bfe0
// 地址: 0x14080bfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t rbp = 0

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t* rbp_1 = *(arg3[1] + 0x10)
    int64_t rax_2 = rbp_1[3]
    
    if (*(rax_2 + (rdx << 3)) == 0)
        sub_1419ccf30(rbp_1, rdx.d)
        rax_2 = rbp_1[3]
    
    rbp = *(rax_2 + (rdx << 3))

void* rsi_1 = arg3[2]
int64_t arg_20 = rbp
int64_t r12_1

if (rsi_1 != 0)
    r12_1 = *(rsi_1 + 0xd0)

void* r9

if (rsi_1 == 0 || r12_1 == 0)
    void* rax_11 = data_143f10e68
    int64_t r15_1 = *(rax_11 + 0x10)
    int64_t* r14_3 = *(rax_11 + 0x18)
    
    if (*(arg1 + 0xa) u> 0)
        uint32_t r12_3 = zx.d(*(arg1 + 8))
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_12 = &rcx_16[5]
        
        if (rax_12 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_12 = &rcx_16[5]
        
        *(arg2 + 0x30) = rax_12
        void**** rax_13 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_13 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        *rcx_16 = &data_142da77b8
        rcx_16[2] = rbp
        rcx_16[3].d = r12_3
        rcx_16[4] = r15_1
    
    if (*(arg1 + 0xe) u> 0)
        uint32_t r15_2 = zx.d(*(arg1 + 0xc))
        
        if ((*(*r14_3 + 8))(r14_3) == 0)
            void*** rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_17 = &rcx_23[5]
            
            if (rax_17 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_23 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_17 = &rcx_23[5]
            
            *(arg2 + 0x30) = rax_17
            void**** rax_18 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_18 = rcx_23
            *(arg2 + 8) = &rcx_23[1]
            rcx_23[1] = 0
            *rcx_23 = &data_142da77c8
            rcx_23[2] = rbp
            rcx_23[3].d = r15_2
            rcx_23[4] = r14_3
    
    int64_t arg_18 = 0
    r9 = &arg_18
else
    int64_t* r14_2 = *(rsi_1 + 0xc8)
    
    if (r14_2 == 0)
        r14_2 = data_14395fa10
    
    if (*(arg1 + 0xa) u> 0)
        uint32_t r13_1 = zx.d(*(arg1 + 8))
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
        rcx_3[3].d = r13_1
        *rcx_3 = &data_142da77b8
        rcx_3[2] = rbp
        rcx_3[4] = r12_1
    
    if (*(arg1 + 0xe) u> 0)
        uint32_t r12_2 = zx.d(*(arg1 + 0xc))
        
        if ((*(*r14_2 + 8))(r14_2) == 0)
            void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_8 = &rcx_10[5]
            
            if (rax_8 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x30)
                rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_8 = &rcx_10[5]
            
            *(arg2 + 0x30) = rax_8
            void**** rax_9 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_9 = rcx_10
            *(arg2 + 8) = &rcx_10[1]
            rcx_10[1] = 0
            *rcx_10 = &data_142da77c8
            rcx_10[2] = rbp
            rcx_10[3].d = r12_2
            rcx_10[4] = r14_2
    
    r9 = rsi_1 + 0xd8

return sub_14077c4b0(arg2, &arg_20, arg1 + 0x10, r9, 0)
