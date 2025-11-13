// 函数: sub_141f879c0
// 地址: 0x141f879c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((arg2 u>> 0x20).d == 0 & sub_140b5b8a0(arg2.d, 0)) == 0)
    void* const rcx_4
    
    if (*(arg1 + 0x38) == *(arg1 + 0x64))
    labelid_7:
        rcx_4 = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(arg2.d) + arg2:4.d
        void* r8_1 = arg1 + 0x68
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_6 = *(r8_1 + (((sx.q(*(arg1 + 0x78)) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_141f87a60:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x30)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_6) * 3
                rcx_4 = r8_2 + (rdx_4 << 3)
                
                if (*(r8_2 + (rdx_4 << 3)) == arg2)
                    break
                
                rax_6 = *(rcx_4 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_141f87a60_1
            
            if (rax_6 == 0xffffffff)
            label_141f87a60_1:
                rcx_4 = nullptr
    
    void* rax_7 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_7 = nullptr
    
    if (rax_7 != 0)
        return *rax_7

return 0
