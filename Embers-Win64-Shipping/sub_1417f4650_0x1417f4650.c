// 函数: sub_1417f4650
// 地址: 0x1417f4650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg1[1].d)
int32_t rsi_1 = rcx.d - arg2
int64_t r9 = sx.q(arg1[2].d)

if (r9.d u>= rsi_1)
    int32_t rdi_1 = rcx.d
    int32_t rdi_2 = rdi_1 - r9.d
    
    if (rdi_1 != r9.d)
        int32_t rdx_8 = rcx.d - r9.d
        
        if (rdx_8 != rdi_2)
            memmove((r9 << 5) + *arg1, (rcx << 5) + *arg1, (rdx_8 - rdi_2) << 5)
            rcx = zx.q(arg1[1].d)
        
        arg1[1].d = rcx.d - rdi_2
        sub_1405dad20(arg1)
    
    int32_t rdi_3 = arg1[2].d
    int32_t rdi_4 = rdi_3 - rsi_1
    
    if (rdi_3 != rsi_1)
        int32_t rax_2 = arg1[1].d
        int32_t rdx_14 = rax_2 - rdi_4
        
        if (rdi_4 s<= rdx_14)
            rdx_14 = rdi_4
        
        if (rdx_14 != 0)
            int64_t rcx_13 = *arg1
            memcpy(rcx_13, (sx.q(rax_2 - rdx_14) << 5) + rcx_13, rdx_14 << 5)
            rax_2 = arg1[1].d
        
        arg1[1].d = rax_2 - rdi_4
        sub_1405dad20(arg1)
    
    arg1[2].d = 0
    *(arg1 + 0x14) = 1
else if (arg2 != 0)
    int32_t rdx_2 = rcx.d - r9.d - arg2
    
    if (arg2 s<= rdx_2)
        rdx_2 = arg2
    
    if (rdx_2 != 0)
        memcpy((r9 << 5) + *arg1, (sx.q(rcx.d - rdx_2) << 5) + *arg1, rdx_2 << 5)
        rcx = zx.q(arg1[1].d)
    
    arg1[1].d = rcx.d - arg2
    return sub_1405dad20(arg1) __tailcall
