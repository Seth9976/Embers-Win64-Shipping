// 函数: sub_14093f610
// 地址: 0x14093f610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg2
void* const rcx_3

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
labelid_4:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(rbx.d) + rbx:4.d
    void* r8_1 = arg1 + 0x40
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_14093f690:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 5
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rbx)
                break
            
            rax_4 = *(rcx_3 + 0x20)
            
            if (rax_4 == 0xffffffff)
                goto label_14093f690_1
        
        if (rax_4 == 0xffffffff)
        label_14093f690_1:
            rcx_3 = nullptr

if (rcx_3 == 0)
    return nullptr

return rcx_3 + 8
