// 函数: sub_141d1f690
// 地址: 0x141d1f690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x60) != *(arg1 + 0x8c))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x90
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_1 = *(arg1 + 0x58)
        
        do
            int64_t r8_2 = sx.q(i) * 5
            
            if (*(r9_1 + (r8_2 << 2)) == arg2)
                if (i == 0xffffffff)
                    break
                
                void* const rcx_5
                
                if (*(arg1 + 0x60) == *(arg1 + 0x8c))
                    rcx_5 = nullptr
                else
                    int32_t rax_7 = sub_140b5ead0(arg2.d) + arg2:4.d
                    void* r8_3 = arg1 + 0x90
                    void* rcx_3 = *(r8_3 + 8)
                    
                    if (rcx_3 != 0)
                        r8_3 = rcx_3
                    
                    int32_t rax_9 = *(r8_3 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_7)) << 2))
                    
                    if (rax_9 == 0xffffffff)
                        rcx_5 = nullptr
                    else
                        int64_t r8_4 = *(arg1 + 0x58)
                        
                        while (true)
                            int64_t rdx_7 = sx.q(rax_9) * 5
                            rcx_5 = r8_4 + (rdx_7 << 2)
                            
                            if (*(r8_4 + (rdx_7 << 2)) == arg2)
                                break
                            
                            rax_9 = *(rcx_5 + 0xc)
                            
                            if (rax_9 == 0xffffffff)
                                return zx.q(*8)
                        
                        if (rax_9 == 0xffffffff)
                            rcx_5 = nullptr
                
                return zx.q(*(rcx_5 + 8))
            
            i = *(r9_1 + (r8_2 << 2) + 0xc)
        while (i != 0xffffffff)

return 0
