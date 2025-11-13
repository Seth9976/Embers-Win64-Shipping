// 函数: sub_142ba9a00
// 地址: 0x142ba9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = *arg1

if (*(*(rax + 0x90) + 0x78) != 0x28 || *(arg1 + 0x373) == 0 || *(arg1 + 0x374) == 0
        || *(arg1 + 0x375) == 0)
    int16_t r8_1 = arg2[2]
    rax = zx.q(*(arg1 + 0x104))
    int16_t rdx = *arg2
    
    if (r8_1 u>= rax.w || rdx u>= rax.w)
        if (*(arg1 + 0x315) != 0)
            arg1[3].d = 0x86
    else if (rdx u<= r8_1)
        int64_t rax_1
        
        do
            rax_1 = arg1[0x24]
            uint64_t rcx = zx.q(rdx)
            rdx += 1
            *(rcx + rax_1) &= 0xfe
        while (rdx u<= r8_1)
        
        return rax_1

return rax
