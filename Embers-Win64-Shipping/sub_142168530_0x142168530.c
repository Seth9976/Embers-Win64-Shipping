// 函数: sub_142168530
// 地址: 0x142168530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*arg2)

if (r11.d u< 2)
    return 0

int32_t* rcx_2

if (arg1[1].d == *(arg1 + 0x34))
    rcx_2 = nullptr
else
    void* rdx = arg1[8]
    void* r9_1 = &arg1[7]
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t rax_1 = *(r9_1 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0xffffffff)
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = sx.q(rax_1) * 0x38 + *arg1
            
            if (*rcx_2 == r11.d)
                break
            
            rax_1 = rcx_2[0xc]
            
            if (rax_1 == 0xffffffff)
                return 0
        
        if (rax_1 == 0xffffffff)
            rcx_2 = nullptr

if (rcx_2 == 0)
    return nullptr

return &rcx_2[2]
