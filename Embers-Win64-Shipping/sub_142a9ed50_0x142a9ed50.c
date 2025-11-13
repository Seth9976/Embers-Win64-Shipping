// 函数: sub_142a9ed50
// 地址: 0x142a9ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0)
    int32_t rax_2 = *(arg1 + 0x1c) & 0xfffffffe
    
    if (rax_2 s> 0)
        int64_t r9_1 = *(arg1 + 0x10)
        int64_t i = 0
        
        do
            int32_t r8_1 = *(r9_1 + (i << 2))
            int32_t rcx_1 = *(r9_1 + (i << 2) + 4) - r8_1
            i += 2
            
            if (arg2 s< rcx_1)
                return zx.q(r8_1 + arg2)
            
            arg2 -= rcx_1
        while (i s< sx.q(rax_2))

return 0xffffffff
