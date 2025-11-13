// 函数: sub_141e31540
// 地址: 0x141e31540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(*(arg1 + 0x19))

if (arg3 == rdx)
    *(arg1 + 0x24) = arg2
else if (rdx == 0)
    if (arg3 == 1)
        *(arg1 + 0x24) = arg2 f+ *(arg1 + 0x1c)
    else if (arg3 == 2)
        *(arg1 + 0x24) = arg2 f* *(arg1 + 0x20) f+ *(arg1 + 0x1c)
else if (rdx == 1)
    if (arg3 == 0)
        *(arg1 + 0x24) = arg2 f- *(arg1 + 0x1c)
        return 
    
    if (arg3 == 2)
        *(arg1 + 0x24) = arg2 f* *(arg1 + 0x20)
else if (rdx == 2)
    float zmm2
    
    if (arg3 == 0)
        zmm2 = *(arg1 + 0x20)
        
        if (zmm2 == 0f)
            *(arg1 + 0x24) = 0
            return 
        
        *(arg1 + 0x24) = (arg2 f- *(arg1 + 0x1c)) / zmm2
        return 
    
    if (arg3 == rdx - 1)
        zmm2 = *(arg1 + 0x20)
        
        if (not(zmm2 != 0f))
            *(arg1 + 0x24) = 0
            return 
        
        *(arg1 + 0x24) = arg2 / zmm2
