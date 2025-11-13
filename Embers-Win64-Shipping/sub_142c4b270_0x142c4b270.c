// 函数: sub_142c4b270
// 地址: 0x142c4b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = arg2 u>> 1
int32_t r10 = 0

if (rdx - 1 u> 0x7ffffffe)
    r10 = -0x7ff8ffa9

if (r10 s>= 0)
    r10 = 0
    
    if (rdx == 0)
        *(arg1 - 2) = 0
        return 0x8007007a
    
    int64_t r9_1 = 0x7ffffffe - rdx
    int16_t* r8 = arg3 - arg1
    
    while (r9_1 + rdx != 0)
        int16_t rax_2 = *(r8 + arg1)
        
        if (rax_2 == 0)
            break
        
        *arg1 = rax_2
        arg1 = &arg1[1]
        uint64_t temp0_1 = rdx
        rdx -= 1
        
        if (temp0_1 == 1)
            *(arg1 - 2) = 0
            return 0x8007007a
    
    if (rdx == 0)
        *(arg1 - 2) = 0
        return 0x8007007a
    
    *arg1 = 0
else if (rdx != 0)
    *arg1 = 0

return zx.q(r10)
