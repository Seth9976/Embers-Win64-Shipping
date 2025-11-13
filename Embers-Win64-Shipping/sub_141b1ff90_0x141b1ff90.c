// 函数: sub_141b1ff90
// 地址: 0x141b1ff90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (*(arg1 + 0x18) == *(arg1 + 0x44))
label_141b1ffed:
    rcx_2 = nullptr
else
    void* r8_1 = *(arg1 + 0x50)
    void* r10_1 = arg1 + 0x48
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(arg2)) << 2))
    
    if (rax_1 == 0xffffffff)
    label_141b1ffed_1:
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0x38 + *(arg1 + 0x10)
            
            if (*rcx_2 == arg2)
                break
            
            rax_1 = rcx_2[0xc]
            
            if (rax_1 == 0xffffffff)
                goto label_141b1ffed_2
        
        if (rax_1 == 0xffffffff)
        label_141b1ffed_2:
            rcx_2 = nullptr

void* result = &rcx_2[2]

if (rcx_2 == 0)
    result = nullptr

if (result != 0)
    char rcx_3 = *(result + 0x20)
    
    if ((rcx_3 & 1) != 0)
        if ((rcx_3 & 2) != 0)
            return result
        
        return *result

return nullptr
