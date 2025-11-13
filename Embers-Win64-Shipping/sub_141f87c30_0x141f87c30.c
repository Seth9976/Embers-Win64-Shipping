// 函数: sub_141f87c30
// 地址: 0x141f87c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
    rcx_2 = nullptr
else
    void* r8_1 = *(arg1 + 0x48)
    void* r10_1 = arg1 + 0x40
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(arg2)) << 2))
    
    if (rax_1 == 0xffffffff)
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = (sx.q(rax_1) << 4) + *(arg1 + 8)
            
            if (*rcx_2 == arg2)
                break
            
            rax_1 = rcx_2[2]
            
            if (rax_1 == 0xffffffff)
                return 0
        
        if (rax_1 == 0xffffffff)
            rcx_2 = nullptr

if (rcx_2 == 0)
    return nullptr

return &rcx_2[1]
