// 函数: sub_142c4b4a0
// 地址: 0x142c4b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0

if (arg2 - 1 u> 0x7ffffffe)
    r10 = -0x7ff8ffa9

if (r10 s>= 0)
    r10 = 0
    
    if (arg2 == 0)
        *(arg1 - 2) = 0
        return 0x8007007a
    
    int64_t r9_1 = 0x7ffffffe - arg2
    int16_t* r8 = arg3 - arg1
    
    while (r9_1 + arg2 != 0)
        int16_t rax_2 = *(r8 + arg1)
        
        if (rax_2 == 0)
            break
        
        *arg1 = rax_2
        arg1 = &arg1[1]
        int64_t temp0_1 = arg2
        arg2 -= 1
        
        if (temp0_1 == 1)
            *(arg1 - 2) = 0
            return 0x8007007a
    
    if (arg2 == 0)
        *(arg1 - 2) = 0
        return 0x8007007a
    
    *arg1 = 0
else if (arg2 != 0)
    *arg1 = 0

return zx.q(r10)
