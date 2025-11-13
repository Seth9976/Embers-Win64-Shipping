// 函数: sub_141e62850
// 地址: 0x141e62850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_3

if (*(arg1 + 0x388) == *(arg1 + 0x3b4))
labelid_7:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = arg1 + 0x3b8
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x3c8)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e628e0:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x380)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg3)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141e628e0_1
        
        if (rax_4 == 0xffffffff)
        label_141e628e0_1:
            rcx_3 = nullptr

void* rax_5 = rcx_3 + 8

if (rcx_3 == 0)
    rax_5 = nullptr

if (rax_5 == 0)
    *arg2 = 0
else
    *arg2 = *rax_5

return arg2
