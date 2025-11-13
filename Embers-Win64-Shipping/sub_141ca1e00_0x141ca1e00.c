// 函数: sub_141ca1e00
// 地址: 0x141ca1e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rcx_5

if (arg1[1].d == *(arg1 + 0x34))
label_141ca1e80:
    rcx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg2:4.d
    void* r8_1 = &arg1[7]
    void* rdx = *(r8_1 + 8)
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t rax_4 = *(r8_1 + (((sx.q(arg1[9].d) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141ca1e80_1:
        rcx_5 = nullptr
    else
        int64_t r8_2 = *arg1
        
        while (true)
            int64_t rdx_1 = sx.q(rax_4) * 3
            rcx_5 = r8_2 + (rdx_1 << 3)
            
            if (*(r8_2 + (rdx_1 << 3)) == arg2)
                break
            
            rax_4 = *(rcx_5 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141ca1e80_2
        
        if (rax_4 == 0xffffffff)
        label_141ca1e80_2:
            rcx_5 = nullptr

void* result = rcx_5 + 8

if (rcx_5 == 0)
    result = nullptr

if (result == 0)
    return result

return *result
