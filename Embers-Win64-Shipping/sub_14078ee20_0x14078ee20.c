// 函数: sub_14078ee20
// 地址: 0x14078ee20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(*arg2, 0) == 0

if ((arg2[1] != 0 | r8) != 0)
    int64_t rbx_1 = *arg2
    void* const rcx_4
    
    if (*(arg1 + 0x98) == *(arg1 + 0xc4))
    label_14078eed0:
        rcx_4 = nullptr
    else
        int32_t rax_3 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* r8_1 = arg1 + 0xc8
        void* rcx_2 = *(r8_1 + 8)
        
        if (rcx_2 != 0)
            r8_1 = rcx_2
        
        int32_t rax_5 = *(r8_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & sx.q(rax_3)) << 2))
        
        if (rax_5 == 0xffffffff)
        label_14078eed0_1:
            rcx_4 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x90)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_5) * 5
                rcx_4 = r8_2 + (rdx_3 << 2)
                
                if (*(r8_2 + (rdx_3 << 2)) == rbx_1)
                    break
                
                rax_5 = *(rcx_4 + 0xc)
                
                if (rax_5 == 0xffffffff)
                    goto label_14078eed0_2
            
            if (rax_5 == 0xffffffff)
            label_14078eed0_2:
                rcx_4 = nullptr
    
    void* rax_6 = rcx_4 + 8
    
    if (rcx_4 == 0)
        rax_6 = nullptr
    
    if (rax_6 != 0)
        return zx.q(*rax_6)

return 0xffffffff
