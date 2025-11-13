// 函数: sub_140efd4e0
// 地址: 0x140efd4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_3

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
labelid_4:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x90
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140efd560:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_2 + (rdx_3 << 2)
            
            if (*(r8_2 + (rdx_3 << 2)) == arg2)
                break
            
            rax_4 = *(rcx_3 + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_140efd560_1
        
        if (rax_4 == 0xffffffff)
        label_140efd560_1:
            rcx_3 = nullptr

if (rcx_3 == 0)
    return nullptr

return rcx_3 + 8
