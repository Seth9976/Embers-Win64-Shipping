// 函数: sub_141013790
// 地址: 0x141013790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int64_t rax = sx.q(arg1[1].d)
int32_t r14_1

if (rax.d == 0)
    void*** rax_15 = sub_141019a00(arg1, arg2, arg3, arg4, arg5)
    int64_t* rcx_12 = *arg6
    *arg6 = rax_15
    
    if (rax_15 != 0)
        rax_15[1].d += 1
    
    if (rcx_12 != 0)
        int32_t rdi_2 = rcx_12[1].d
        rcx_12[1].d -= 1
        
        if (rdi_2 == 1)
            (**rcx_12)(rcx_12, zx.q(rdi_2))
    
    void* rdx_6 = *arg6
    
    if (*(rdx_6 + 0x88) != 0)
        int64_t r8_4 = sx.q(*(rdx_6 + 0x88))
        r14_1 = *(*(rdx_6 + 0x80) + (r8_4 << 2) - 4)
        *(rdx_6 + 0x88) = (r8_4 - 1).d
        sub_1405dac90(rdx_6 + 0x80)
    else
        r14_1 = *(rdx_6 + 0x9c)
        *(rdx_6 + 0x9c) = arg1[7].d + r14_1
else
    int32_t rbp_1 = (rax - 1).d
    int64_t* rcx_1 = *arg6
    void* rdx = *(*arg1 + (rax << 3) - 8)
    *arg6 = rdx
    
    if (rdx != 0)
        *(rdx + 8) += 1
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            (**rcx_1)(rcx_1, 1)
    
    void* rdx_1 = *arg6
    
    if (*(rdx_1 + 0x88) != 0)
        int64_t r8 = sx.q(*(rdx_1 + 0x88))
        r14_1 = *(*(rdx_1 + 0x80) + (r8 << 2) - 4)
        *(rdx_1 + 0x88) = (r8 - 1).d
        sub_1405dac90(rdx_1 + 0x80)
    else
        r14_1 = *(rdx_1 + 0x9c)
        *(rdx_1 + 0x9c) = arg1[7].d + r14_1
    
    void* rcx_5 = *arg6
    
    if (*(rcx_5 + 0x88) == 0 && *(rcx_5 + 0x9c) == *(arg1 + 0x3c))
        *(rcx_5 + 0x98) = 0xffffffff
        int64_t* rcx_6 = *(*arg1 + (rax << 3) - 8)
        
        if (rcx_6 != 0)
            int32_t rdi_1 = rcx_6[1].d
            rcx_6[1].d -= 1
            
            if (rdi_1 == 1 && rcx_6 != 0)
                (**rcx_6)(rcx_6, zx.q(rdi_1))
        
        int32_t rcx_9 = arg1[1].d
        int32_t rax_10 = rcx_9 - rbp_1
        
        if (rax_10 != 1)
            int64_t rcx_7 = *arg1
            memmove(rcx_7 + (sx.q(rbp_1) << 3), rcx_7 + (rax << 3), (rax_10 - 1) << 3)
            rcx_9 = arg1[1].d
        
        arg1[1].d = rcx_9 - 1
        sub_1405c53d0(arg1)

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return zx.q(r14_1)
