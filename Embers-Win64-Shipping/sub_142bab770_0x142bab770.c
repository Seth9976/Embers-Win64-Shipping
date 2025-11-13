// 函数: sub_142bab770
// 地址: 0x142bab770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *arg2
uint32_t r8 = zx.d(result.b)

if (r8 == 0xff)
    *(arg1 + 0x1f5) = 1
    return result

if (result.b == 0)
    *(arg1 + 0x1f5) = 0
else
    if (test_bit(result, 8))
        result = zx.d(*(arg1 + 0x1a0))
        
        if (result u<= r8)
            *(arg1 + 0x1f5) = 1
    
    if ((*arg2 & 0x200) != 0 && *(arg1 + 0x1bd) != 0)
        *(arg1 + 0x1f5) = 1
    
    if ((*arg2 & 0x400) != 0 && *(arg1 + 0x1be) != 0)
        *(arg1 + 0x1f5) = 1
    
    if ((*arg2 & 0x800) != 0)
        result = zx.d(*(arg1 + 0x1a0))
        
        if (result u> r8)
            *(arg1 + 0x1f5) = 0
    
    if ((*arg2 & 0x1000) != 0 && *(arg1 + 0x1bd) != 0)
        *(arg1 + 0x1f5) = 0
    
    if ((*arg2 & 0x2000) != 0 && *(arg1 + 0x1be) != 0)
        *(arg1 + 0x1f5) = 0

return result
