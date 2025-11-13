// 函数: sub_141dec140
// 地址: 0x141dec140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((sub_140b5b8a0(arg2.d, 0) == 0 | arg2:4.d != 0) != 0)
    void* const rcx_4
    
    if (*(arg1 + 0x1a8) == *(arg1 + 0x1d4))
    labelid_7:
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = arg1 + 0x1d8
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0x1e8)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_141dec1f0:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x1a0)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_5) * 5
                rcx_4 = r8_2 + (rdx_4 << 3)
                
                if (*(r8_2 + (rdx_4 << 3)) == arg2)
                    break
                
                rax_5 = *(rcx_4 + 0x20)
                
                if (rax_5 == 0xffffffff)
                    goto label_141dec1f0_1
            
            if (rax_5 == 0xffffffff)
            label_141dec1f0_1:
                rcx_4 = nullptr
    
    void* rax_6 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_6 = nullptr
    
    if (rax_6 != 0)
        return rax_6 + 8

return arg1 + 0x88
