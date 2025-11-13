// 函数: sub_142baa8a0
// 地址: 0x142baa8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg2)

if (result.d == 0 && *(arg1 + 0x30) == result.d)
    *(arg1 + 0x18) = 0x84
    return result

int32_t temp0 = *(arg1 + 0x210)
*(arg1 + 0x210) += result.d

if (temp0 + result.d s< 0)
    *(arg1 + 0x18) = 0x84
else
    result = zx.q(*(arg1 + 0x268))
    
    if (result.d s<= 0)
    label_142baa8ea:
        *(arg1 + 0x220) = 0
        
        if (*arg2 s< 0)
            *(arg1 + 0x380) += 1
            result = zx.q(*(arg1 + 0x380))
            
            if (result.d u> *(arg1 + 0x384))
                *(arg1 + 0x18) = 0x8b
    else
        int64_t rcx = sx.q(result.d - 1)
        result = *(arg1 + 0x270)
        
        if (*(arg1 + 0x210) s<= *(*(result + rcx * 0x18 + 0x10) + 8))
            goto label_142baa8ea
        
        *(arg1 + 0x18) = 0x84

return result
