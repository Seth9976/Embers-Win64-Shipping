// 函数: sub_142ba8df0
// 地址: 0x142ba8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a4) == 0)
    if (*(arg1 + 0x1cc) != 0)
        int16_t rax_3 = *(arg1 + 0x1ca)
        
        if (rax_3 != 0)
            int32_t rax_7 = sub_142b92d60(sub_142bae100(*(arg1 + 0x198), sx.d(rax_3)))
            *(arg1 + 0x1a4) = rax_7
            return rax_7
        
        int32_t rax_4 = *(arg1 + 0x19c)
        *(arg1 + 0x1a4) = rax_4
        return rax_4
    
    *(arg1 + 0x1a4) = *(arg1 + 0x198)

return zx.q(*(arg1 + 0x1a4))
