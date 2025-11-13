// 函数: sub_142c49690
// 地址: 0x142c49690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t rdx_1 = 0
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (*(arg1 + (r8_1 << 1)) != 0)
    
    if (r8_1 != 0)
        uint64_t rax_1 = 0
        
        do
            int16_t rcx = *(arg1 + (rax_1 << 1))
            
            if (rcx == 0x5c || rcx == 0x2f)
                return 1
            
            rdx_1 += 1
            rax_1 = zx.q(rdx_1)
        while (rax_1 u< r8_1)

return 0
