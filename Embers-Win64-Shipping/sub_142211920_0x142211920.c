// 函数: sub_142211920
// 地址: 0x142211920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x118) s> 0)
    void* r10_1 = nullptr
    
    do
        int32_t* r8_3 = sx.q(zx.d(*(r10_1 + *(arg1 + 0xf8))) * *(arg1 + 0x114))
            + sx.q(*(arg1 + 0x30)) + *(arg1 + 0xf0)
        
        if (r8_3[1] == 0)
            int32_t rdx_3 = *r8_3
            
            if ((rdx_3 & 0xf0000000) == 0x40000000)
                *r8_3 = (rdx_3 & 0xfffffff) | 0x10000000
        
        i += 1
        r10_1 += 2
    while (i s< *(arg1 + 0x118))

*(arg1 + 0x268) = 0x100
