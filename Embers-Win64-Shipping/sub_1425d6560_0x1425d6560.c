// 函数: sub_1425d6560
// 地址: 0x1425d6560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)
int32_t* rcx_2

if (*(arg1 + 0x38) == *(arg1 + 0x64))
    rcx_2 = nullptr
else
    void* rdx = *(arg1 + 0x70)
    void* r9_1 = arg1 + 0x68
    
    if (rdx != 0)
        r9_1 = rdx
    
    int32_t rax = *(r9_1 + (((sx.q(*(arg1 + 0x78)) - 1) & r10) << 2))
    
    if (rax == 0xffffffff)
        rcx_2 = nullptr
    else
        while (true)
            rcx_2 = (sx.q(rax) << 5) + *(arg1 + 0x30)
            
            if (*rcx_2 == r10.d)
                break
            
            rax = rcx_2[6]
            
            if (rax == 0xffffffff)
                return 0
        
        if (rax == 0xffffffff)
            rcx_2 = nullptr

if (rcx_2 == 0)
    return nullptr

return &rcx_2[2]
