// 函数: sub_142be4500
// 地址: 0x142be4500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg3
uint32_t r9

if (arg2 == 0)
    r9 = *(*(arg1 + 0xa0) + 8)
else
    int32_t* rax = *(arg1 + 0xf8)
    void* r10_3 = &rax[zx.q(*(arg1 + 0xf4)) * 4]
    
    if (rax u>= r10_3)
        return 0x8e
    
    while (*rax != arg2 || rax[3] == 0)
        rax = &rax[4]
        
        if (rax u>= r10_3)
            return 0x8e
    
    rbx += rax[2]
    r9 = rax[3]

if (arg6 != 0)
    uint32_t rcx = *arg6
    
    if (rcx == 0)
        *arg6 = r9
        return 0
    
    r9 = rcx

return sub_142b969a0(*(arg1 + 0xa0), rbx, arg4, r9, arg5) __tailcall
