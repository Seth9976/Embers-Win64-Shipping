// 函数: sub_1417f4770
// 地址: 0x1417f4770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(arg1[1].d)
int32_t rsi_1 = rcx.d - arg2
int64_t r10 = sx.q(arg1[2].d)

if (r10.d u>= rsi_1)
    int32_t rdi_1 = rcx.d
    int32_t rdi_2 = rdi_1 - r10.d
    
    if (rdi_1 != r10.d)
        int32_t rax_5 = rcx.d - r10.d
        
        if (rax_5 != rdi_2)
            int64_t r9_3 = *arg1
            memmove(r9_3 + r10 * 0xc, r9_3 + rcx * 0xc, (rax_5 - rdi_2) * 0xc)
            rcx = zx.q(arg1[1].d)
        
        arg1[1].d = rcx.d - rdi_2
        sub_140775970(arg1)
    
    int32_t rdi_3 = arg1[2].d
    int32_t rdi_4 = rdi_3 - rsi_1
    
    if (rdi_3 != rsi_1)
        int32_t r9_4 = arg1[1].d
        int32_t rdx_7 = r9_4 - rdi_4
        
        if (rdi_4 s<= rdx_7)
            rdx_7 = rdi_4
        
        if (rdx_7 != 0)
            int64_t rcx_13 = *arg1
            memcpy(rcx_13, rcx_13 + sx.q(r9_4 - rdx_7) * 0xc, rdx_7 * 0xc)
            r9_4 = arg1[1].d
        
        arg1[1].d = r9_4 - rdi_4
        sub_140775970(arg1)
    
    arg1[2].d = 0
    *(arg1 + 0x14) = 1
else if (arg2 != 0)
    int32_t rdx_2 = rcx.d - r10.d - arg2
    
    if (arg2 s<= rdx_2)
        rdx_2 = arg2
    
    if (rdx_2 != 0)
        int64_t r9_1 = *arg1
        memcpy(r9_1 + r10 * 0xc, r9_1 + sx.q(rcx.d - rdx_2) * 0xc, rdx_2 * 0xc)
        rcx = zx.q(arg1[1].d)
    
    arg1[1].d = rcx.d - arg2
    return sub_140775970(arg1) __tailcall
