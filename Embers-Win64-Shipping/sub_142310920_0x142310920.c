// 函数: sub_142310920
// 地址: 0x142310920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_2
rax_2.b = (arg2 u>> 0x20).d != 0

if ((sub_140b5b8a0(arg2.d, 0) == 0 | rax_2.b) != 0)
    void* const rcx_4
    
    if (*(arg1 + 0x298) == *(arg1 + 0x2c4))
    labelid_7:
        rcx_4 = nullptr
    else
        int32_t rax_5 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = arg1 + 0x2c8
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_7 = *(r8_1 + (((sx.q(*(arg1 + 0x2d8)) - 1) & sx.q(rax_5)) << 2))
        
        if (rax_7 == 0xffffffff)
        label_1423109d0:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x290)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_7) * 5
                rcx_4 = r8_2 + (rdx_4 << 2)
                
                if (*(r8_2 + (rdx_4 << 2)) == arg2)
                    break
                
                rax_7 = *(rcx_4 + 0xc)
                
                if (rax_7 == 0xffffffff)
                    goto label_1423109d0_1
            
            if (rax_7 == 0xffffffff)
            label_1423109d0_1:
                rcx_4 = nullptr
    
    void* rax_8 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_8 = nullptr
    
    if (rax_8 != 0)
        return *(*(arg1 + 0x168) + (sx.q(*rax_8) << 3))

return 0
