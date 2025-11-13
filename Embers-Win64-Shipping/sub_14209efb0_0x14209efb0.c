// 函数: sub_14209efb0
// 地址: 0x14209efb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
(*(*arg1 + 0x968))(arg1, zx.q(rbx.d))

if (arg3 == 0 && rbx.d s>= 0 && rbx.d s< arg1[0x94].d)
    int32_t rcx = arg1[0x94].d
    int32_t rax_2 = rcx - rbx.d
    
    if (rax_2 != 1)
        memmove((rbx << 6) + arg1[0x93], (sx.q((rbx + 1).d) << 6) + arg1[0x93], (rax_2 - 1) << 6)
        rcx = arg1[0x94].d
    
    arg1[0x94].d = rcx - 1
    sub_1407c3fe0(&arg1[0x93])
    int32_t rbp_1 = arg1[0x95].d
    int32_t r10_2 = rbp_1 * rbx.d
    
    if (rbp_1 != 0)
        int32_t rax_6 = arg1[0x97].d
        int32_t rcx_6 = rax_6 - r10_2
        
        if (rcx_6 != rbp_1)
            int64_t r9_1 = arg1[0x96]
            memmove(r9_1 + (sx.q(r10_2) << 2), r9_1 + (sx.q(r10_2 + rbp_1) << 2), 
                (rcx_6 - rbp_1) << 2)
            rax_6 = arg1[0x97].d
        
        arg1[0x97].d = rax_6 - rbp_1
        sub_1405dac90(&arg1[0x96])

if ((arg1[0x11].b & 4) != 0 && rbx.d s>= 0 && rbx.d s< arg1[0xa4].d)
    int64_t rdi_2 = rbx << 3
    int64_t* r15_1 = arg1[0xa3]
    void* rcx_10 = *(r15_1 + rdi_2)
    
    if (rcx_10 != 0)
        sub_142225820(rcx_10, 0)
        void* rcx_11 = *(r15_1 + rdi_2)
        
        if (rcx_11 != 0)
            sub_14204b6c0(rcx_11, 1)
        
        *(r15_1 + rdi_2) = 0
        int32_t rcx_12 = arg1[0xa4].d
        int32_t rax_11 = rcx_12 - rbx.d
        
        if (rax_11 != 1)
            int64_t* r9_2 = arg1[0xa3]
            memmove(rdi_2 + r9_2, &r9_2[sx.q((rbx + 1).d)], (rax_11 - 1) << 3)
            rcx_12 = arg1[0xa4].d
        
        arg1[0xa4].d = rcx_12 - 1
        sub_1405c53d0(&arg1[0xa3])
        
        while (rbx.d s< arg1[0xa4].d)
            rdi_2 += 8
            **(rdi_2 + arg1[0xa3] - 8) = rbx.d
            rbx = zx.q(rbx.d + 1)

*(arg1 + 0x50c) += 1
sub_141ee8490(arg1)
uint64_t result
result.b = 1
return result
