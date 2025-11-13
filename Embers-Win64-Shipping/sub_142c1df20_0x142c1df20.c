// 函数: sub_142c1df20
// 地址: 0x142c1df20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(*(arg1 + 5))
uint32_t r9 = zx.d(*(arg1 + 4)) << 8
int32_t i = 0

if (r9 != neg.d(rax))
    void* rax_1 = arg1 + 6
    
    do
        if (zx.d(*(rax_1 + 1)) + (zx.d(*rax_1) << 8) == arg2)
            uint64_t r9_2 = zx.q(*(rax_1 + 2))
            uint64_t r10_1 = zx.q(*(rax_1 + 5))
            uint64_t r8 = zx.q(*(rax_1 + 4))
            uint64_t rdx_2 = zx.q(*(rax_1 + 3))
            
            if ((r9_2.d << 0x18) + (r8.d << 8) + (rdx_2.d << 0x10) != neg.d(r10_1.d))
                return (((((r9_2 << 8) + rdx_2) << 8) + r8) << 8) + arg1 + r10_1
            
            return &data_14369a5d0
        
        i += 1
        rax_1 += 6
    while (i u< r9 + rax)

return 0
