// 函数: sub_142bb5e30
// 地址: 0x142bb5e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
void* rax = *(arg1 + 0x2a8)

if (rax != 0)
    void* rcx = *(rax + 0x30)
    int32_t r10_2 = arg2 << 0x10 | arg3
    void* r8_1 = rcx - 0x10 + (zx.q(*(rax + 0x38)) << 4)
    
    while (rcx u<= r8_1)
        int64_t rax_6
        int64_t rdx
        rdx:rax_6 = sx.o((r8_1 - rcx) s>> 4)
        int32_t* rax_10 = ((rax_6 - rdx) s>> 1 << 4) + rcx
        int32_t rdx_3 = *rax_10 << 0x10 | rax_10[1]
        
        if (rdx_3 == r10_2)
            *arg4 = rax_10[2]
            *(arg4 + 4) = rax_10[3]
            return 0
        
        if (rdx_3 u>= r10_2)
            r8_1 = &rax_10[-4]
        else
            rcx = &rax_10[4]
    
    *arg4 = 0

return 0
