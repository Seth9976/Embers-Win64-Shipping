// 函数: sub_1424369b0
// 地址: 0x1424369b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    char rax_1 = *(arg1 + 0x28)
    
    if (rax_1 == 0)
    label_142436ab0:
        
        if (*(arg1 + 0x29) != 0)
            int64_t rcx_3 = sx.q(data_143f0f1a0)
            
            if ((rcx_3.d u<= 0x1e && test_bit(0x6562c800, rcx_3.d))
                    || (*(rcx_3 * 0x14 + &data_143f025fc) & 1) != 0)
                return 2
            
            return 5
    else if (rax_1 u> 1)
        if (rax_1 u<= 4)
            goto label_1424369d8
        
        if (rax_1 == 5)
            return zx.q(arg2 + 4)
else if (arg2 == 1)
    char rax_5 = *(arg1 + 0x28)
    
    if (rax_5 == 2)
    label_1424369d8:
        
        if (*(arg1 + 0x29) != 0)
            int64_t rcx = sx.q(data_143f0f1a0)
            
            if ((rcx.d u<= 0x1e && test_bit(0x6562c800, rcx.d))
                    || (*(rcx * 0x14 + &data_143f025fc) & 1) != 0)
                return 2
            
            return 7
    else if (rax_5 - 3 u<= arg2.b && *(arg1 + 0x29) != 0)
        int64_t rcx_2 = sx.q(data_143f0f1a0)
        
        if ((rcx_2.d u<= 0x1e && test_bit(0x6562c800, rcx_2.d))
                || (*(rcx_2 * 0x14 + &data_143f025fc) & 1) != 0)
            return 2
        
        return 0x17
else if (arg2 == 2)
    uint32_t rdx = zx.d(*(arg1 + 0x28))
    
    if (rdx == 3)
        goto label_142436ab0
    
    if (rdx == 4)
        goto label_1424369d8

return 2
