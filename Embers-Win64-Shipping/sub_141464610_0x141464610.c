// 函数: sub_141464610
// 地址: 0x141464610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_1

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
labelid_7:
    rcx_1 = nullptr
else
    void* r9_1 = *(arg1 + 0x48)
    void* r11_1 = arg1 + 0x40
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(arg2)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_141464670:
        rcx_1 = nullptr
    else
        int64_t r9_2 = *(arg1 + 8)
        
        while (true)
            int64_t r8 = sx.q(rax_2) * 5
            rcx_1 = r9_2 + (r8 << 3)
            
            if (*(r9_2 + (r8 << 3)) == arg2)
                break
            
            rax_2 = *(rcx_1 + 0x20)
            
            if (rax_2 == 0xffffffff)
                goto label_141464670_1
        
        if (rax_2 == 0xffffffff)
        label_141464670_1:
            rcx_1 = nullptr

void* result = rcx_1 + 8

if (rcx_1 == 0)
    result = nullptr

if (result != 0)
    *(result + 0x10) = arg3

return result
