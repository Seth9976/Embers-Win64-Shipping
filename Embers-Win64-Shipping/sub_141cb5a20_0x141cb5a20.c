// 函数: sub_141cb5a20
// 地址: 0x141cb5a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_3

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
labelid_7:
    rcx_3 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8 = arg1 + 0x40
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141cb5aa0:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg1 + 8)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_4) * 3
            rcx_3 = r8_1 + (rdx_3 << 3)
            
            if (*(r8_1 + (rdx_3 << 3)) == arg2)
                break
            
            rax_4 = *(rcx_3 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141cb5aa0_1
        
        if (rax_4 == 0xffffffff)
        label_141cb5aa0_1:
            rcx_3 = nullptr

void* result = rcx_3 + 8

if (rcx_3 == 0)
    result = nullptr

if (result == 0)
    return result

return sub_141cb5ae0(*result + 0x28, arg3)
