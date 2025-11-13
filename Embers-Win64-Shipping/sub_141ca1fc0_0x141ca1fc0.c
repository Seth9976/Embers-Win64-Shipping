// 函数: sub_141ca1fc0
// 地址: 0x141ca1fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_3

if (*(arg1 + 0x1f0) == *(arg1 + 0x21c))
labelid_6:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = arg1 + 0x220
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_4 = *(r8_1 + (((sx.q(*(arg1 + 0x230)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141ca2050:
        rcx_3 = nullptr
    else
        int64_t r8_2 = *(arg1 + 0x1e8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == arg2)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141ca2050_1
        
        if (rax_4 == 0xffffffff)
        label_141ca2050_1:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    return 0

return *rax_5
