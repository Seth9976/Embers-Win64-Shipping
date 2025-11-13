// 函数: sub_140ffddd0
// 地址: 0x140ffddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = sx.q(arg3)
void* rcx = arg1 + (rax_1 << 3)

if (arg2 != 0)
    int32_t rax = *(arg1 + 0x40f0)
    
    if (rax s>= arg3)
        arg3 = rax
    
    *(arg1 + 0x40f0) = arg3
    *(rcx + 0x3fd0) = arg2
    return rax

if (*(rcx + 0x3fd0) != 0)
    *(rcx + 0x3fd0) = 0
    rax_1 = zx.q(*(arg1 + 0x40f0))
    
    if (rax_1.d == arg3)
        do
            int32_t temp0_1 = rax_1.d
            rax_1 = zx.q(rax_1.d - 1)
            *(arg1 + 0x40f0) = rax_1.d
            
            if (temp0_1 - 1 s< 0)
                break
        while (*(arg1 + (sx.q(rax_1.d) << 3) + 0x3fd0) == 0)

return rax_1
