// 函数: sub_142bfd920
// 地址: 0x142bfd920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c) == 0)
    uint64_t r8_1 = zx.q(*(arg1 + 0x18))
    int32_t r9_1 = *(arg1 + 0x10)
    
    if ((r8_1 + 1).d u<= r9_1)
        int128_t* const rcx = &data_14369a5d0
        int128_t* const rax_2
        
        if (r8_1.d u< r9_1)
            rax_2 = r8_1 + *(arg1 + 8)
        else
            *(arg1 + 0x1c) = 1
            rax_2 = &data_14369a5d0
        
        uint32_t r8_2 = zx.d(*rax_2)
        
        if (r8_2 != 0xc)
        label_142bfd9b7:
            
            if (*(arg1 + 0x1c) == 0)
                int32_t rax_8 = *(arg1 + 0x18)
                
                if (rax_8 u<= r9_1 && rax_8 + 1 u<= r9_1)
                    *(arg1 + 0x18) = rax_8 + 1
                    return zx.q(r8_2)
            
            *(arg1 + 0x18) = r9_1
            *(arg1 + 0x1c) = 1
            return zx.q(r8_2)
        
        if (*(arg1 + 0x1c) == 0)
            int32_t rax_5 = *(arg1 + 0x18) + 1
            
            if (rax_5 u<= r9_1)
                if (rax_5 u< r9_1)
                    rcx = zx.q(rax_5) + *(arg1 + 8)
                else
                    *(arg1 + 0x1c) = 1
                
                r8_2 = zx.d(*rcx) + 0x100
                int32_t rax_6
                
                if (*(arg1 + 0x1c) == 0)
                    rax_6 = *(arg1 + 0x18)
                
                if (*(arg1 + 0x1c) != 0 || rax_6 u> r9_1 || rax_6 + 1 u> r9_1)
                    *(arg1 + 0x18) = r9_1
                    *(arg1 + 0x1c) = 1
                else
                    *(arg1 + 0x18) = rax_6 + 1
                
                goto label_142bfd9b7

return 0xffff
