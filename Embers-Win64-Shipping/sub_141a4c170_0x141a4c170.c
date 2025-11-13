// 函数: sub_141a4c170
// 地址: 0x141a4c170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_3

if (*(arg1 + 0xa8) == *(arg1 + 0xd4))
label_141a4c1e5:
    rcx_3 = nullptr
else
    int64_t r10_1 = sx.q(*arg2)
    void* r9_1 = arg1 + 0xd8
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax = *(r9_1 + (((sx.q(*(arg1 + 0xe8)) - 1) & r10_1) << 2))
    
    if (rax == 0xffffffff)
    label_141a4c1e5_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax) * 0xc0 + *(arg1 + 0xa0)
            
            if (*rcx_3 == r10_1.d)
                break
            
            rax = rcx_3[0x2e]
            
            if (rax == 0xffffffff)
                goto label_141a4c1e5_2
        
        if (rax == 0xffffffff)
        label_141a4c1e5_2:
            rcx_3 = nullptr

void* rax_1 = &rcx_3[2]

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return 0

return sub_140d3c6e0(rax_1) __tailcall
