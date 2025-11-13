// 函数: sub_140840b70
// 地址: 0x140840b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg3[1].d)

if (result.d != 0)
    int64_t* rsi_1 = *arg3
    int32_t i_2 = 0
    int32_t rdx = 0
    uint64_t rbp_1 = 0
    uint64_t rcx_1 = result << 3 u>> 3
    int64_t r13_1 = 0
    int64_t var_60 = 0
    int64_t r12_1 = 0
    
    if (rsi_1 u> &rsi_1[result])
        rcx_1 = 0
    
    int64_t var_70 = 0
    int32_t var_54_1 = 0
    uint64_t r15_1 = 0
    int32_t var_64_1 = 0
    int64_t r14_1 = 0
    
    if (rcx_1 != 0)
        do
            void* rax_1 = *rsi_1
            int64_t rbx_1 = sx.q(rbp_1.d)
            void* rcx_2 = rax_1 + 0xe0
            void* rax_2 = *(rcx_2 + 0x20)
            rbp_1 = zx.q((rbx_1 + 1).d)
            int32_t var_58_1 = rbp_1.d
            
            if (rax_2 != 0)
                rcx_2 = rax_2
            
            int64_t rax_4 = *(*(rcx_2 + 8) + 0x98)
            
            if (rbp_1.d s> rdx)
                sub_14083a440(&var_60, rbx_1.d)
                rbp_1 = zx.q(var_58_1)
                r13_1 = var_60
            
            *(r13_1 + (rbx_1 << 3)) = rax_4
            int64_t rbx_2 = sx.q(r15_1.d)
            r15_1 = zx.q((rbx_2 + 1).d)
            int32_t var_68_1 = r15_1.d
            int64_t rax_7 = *(*(*(rax_1 + 0xc0) + 8) + 0x78)
            
            if (r15_1.d s> var_64_1)
                sub_14083a440(&var_70, rbx_2.d)
                r15_1 = zx.q(var_68_1)
                r12_1 = var_70
            
            rsi_1 = &rsi_1[1]
            rdx = var_54_1
            r14_1 += 1
            *(r12_1 + (rbx_2 << 3)) = rax_7
        while (r14_1 != rcx_1)
        
        i_2 = 0
    
    int64_t rax_9 = *(arg1 + 0x2d8)
    int64_t* rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_8 = &rsi_4[1]
    
    if (rcx_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rsi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_8 = &rsi_4[1]
    
    *(arg2 + 0x30) = rcx_8
    *rsi_4 = rax_9
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_12[6]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_12[6]
    
    *(arg2 + 0x30) = rax_10
    uint32_t rdx_3 = (rbp_1 << 3).d
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142da7798
    rcx_12[3] = rsi_4
    rcx_12[2].d = 1
    rcx_12[4].d = 3
    *(rcx_12 + 0x24) = 3
    rcx_12[5] = 0
    int64_t rax_13 = sx.q(rdx_3)
    int64_t* rsi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = rax_13 + rsi_9
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_3 + 8)
        rsi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = rax_13 + rsi_9
    
    *(arg2 + 0x30) = rax_14
    int64_t i_3 = sx.q(rbp_1.d)
    
    if (rbp_1.d s> 0)
        int64_t* rcx_17 = rsi_9
        int64_t i
        
        do
            *rcx_17 = *(rcx_17 + r13_1 - rsi_9)
            rcx_17 = &rcx_17[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_17 = &rcx_20[6]
    
    if (rax_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_17 = &rcx_20[6]
    
    *(arg2 + 0x30) = rax_17
    void** rax_18 = *(arg2 + 8)
    uint32_t rdx_5 = (r15_1 << 3).d
    *(arg2 + 0x14) += 1
    *rax_18 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[3] = rsi_9
    rcx_20[1] = 0
    rcx_20[2].d = rbp_1.d
    *rcx_20 = &data_142da7798
    rcx_20[4].d = 0
    *(rcx_20 + 0x24) = 3
    rcx_20[5] = 0
    int64_t rbp_2 = sx.q(rdx_5)
    int64_t* rsi_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_20 = rsi_14 + rbp_2
    
    if (rax_20 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, rdx_5 + 8)
        rsi_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_20 = rsi_14 + rbp_2
    
    *(arg2 + 0x30) = rax_20
    int64_t i_4 = sx.q(r15_1.d)
    
    if (r15_1.d s> 0)
        int64_t* rcx_25 = rsi_14
        int64_t i_1
        
        do
            *rcx_25 = *(r12_1 - rsi_14 + rcx_25)
            rcx_25 = &rcx_25[1]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_22 = &rcx_28[6]
    
    if (rax_22 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_22 = &rcx_28[6]
    
    *(arg2 + 0x30) = rax_22
    void**** rax_23 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_23 = rcx_28
    *(arg2 + 8) = &rcx_28[1]
    rcx_28[3] = rsi_14
    *rcx_28 = &data_142da7798
    rcx_28[2].d = r15_1.d
    rcx_28[1] = 0
    rcx_28[4].d = 1
    *(rcx_28 + 0x24) = 3
    rcx_28[5] = 0
    
    if (arg3[1].d u> 0)
        int64_t r10_1 = arg1
        void* rbx_3 = r10_1 + 0x2d0
        
        do
            void* rdx_7 = *(*arg3 + (sx.q(i_2) << 3))
            void* r9_1 = rdx_7 + 0xe0
            void* r8 = *(*(rdx_7 + 0xc0) + 8)
            void* rax_27 = *(r9_1 + 0x20)
            
            if (rax_27 != 0)
                r9_1 = rax_27
            
            sub_140887f20(arg2, *(r10_1 + 0x10), *(r8 + 0x90), *(*(r9_1 + 8) + 0xa0), r8 + 0x70, 
                rbx_3, i_2)
            r10_1 = arg1
            i_2 += 1
        while (i_2 u< arg3[1].d)
    
    result = arg1
    *(result + 0x2f4) = 0

return result
