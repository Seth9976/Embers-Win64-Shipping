// 函数: sub_142afb4b0
// 地址: 0x142afb4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 4)

if (r8 != 0)
    int64_t r10_1 = *(arg1 + 0x20)
    int32_t i = 0
    
    if (r8 != 1)
        do
            uint64_t rax_3 = zx.q((i + r8) u>> 1)
            
            if (arg2 u>= *(r10_1 + (rax_3 << 3)))
                i = rax_3.d
            else
                r8 = rax_3.d
        while (i u< r8 - 1)
    
    uint64_t i_1 = zx.q(i)
    
    if (arg2 == *(r10_1 + (i_1 << 3)))
        return zx.q(*(r10_1 + (i_1 << 3) + 4))

return 0xfffe
