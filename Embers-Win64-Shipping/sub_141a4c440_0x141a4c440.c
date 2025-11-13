// 函数: sub_141a4c440
// 地址: 0x141a4c440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
    rcx_2 = nullptr
else
    int64_t r10_1 = sx.q(*arg2)
    void* r9_1 = &arg1[7]
    void* r8_1 = *(r9_1 + 8)
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax = *(r9_1 + (((sx.q(arg1[9].d) - 1) & r10_1) << 2))
    
    if (rax == 0xffffffff)
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax) * 0xf8 + *arg1
            
            if (*rcx_2 == r10_1.d)
                break
            
            rax = rcx_2[0x3c]
            
            if (rax == 0xffffffff)
                return 0
        
        if (rax == 0xffffffff)
            rcx_2 = nullptr

if (rcx_2 == 0)
    return nullptr

return &rcx_2[2]
