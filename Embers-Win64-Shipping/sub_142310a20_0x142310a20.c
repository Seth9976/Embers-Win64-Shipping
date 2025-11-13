// 函数: sub_142310a20
// 地址: 0x142310a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0xffffffff

if ((sub_140b5b8a0(arg2.d, 0) == 0 | arg2:4.d != 0) != 0)
    void* const rcx_4
    
    if (*(arg1 + 0x298) == *(arg1 + 0x2c4))
    labelid_7:
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8 = arg1 + 0x2c8
        void* rcx_2 = *(r8 + 8)
        
        if (rcx_2 != 0)
            r8 = rcx_2
        
        int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0x2d8)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_142310ae0:
            rcx_4 = nullptr
        else
            int64_t r8_1 = *(arg1 + 0x290)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_5) * 5
                rcx_4 = r8_1 + (rdx_4 << 2)
                
                if (*(r8_1 + (rdx_4 << 2)) == arg2)
                    break
                
                rax_5 = *(rcx_4 + 0xc)
                
                if (rax_5 == 0xffffffff)
                    goto label_142310ae0_1
            
            if (rax_5 == 0xffffffff)
            label_142310ae0_1:
                rcx_4 = nullptr
    
    void* rdx_5 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rdx_5 = nullptr
    
    if (rdx_5 != 0)
        *arg3 = *rdx_5
        return *(*(arg1 + 0x168) + (sx.q(*rdx_5) << 3))

return 0
