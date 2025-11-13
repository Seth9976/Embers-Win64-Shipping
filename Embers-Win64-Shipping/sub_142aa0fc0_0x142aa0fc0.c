// 函数: sub_142aa0fc0
// 地址: 0x142aa0fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result

if ((*(arg1 + 8) & 1) == 0 || arg2 != 0)
    result = *(arg1 + 8)
    int32_t r8_2
    
    if (result s< 0)
        r8_2 = *(arg1 + 0xc)
    else
        r8_2 = sx.d(result) s>> 5
    
    if (arg2 u< r8_2)
        if (arg2 s> 0x3ff)
            *(arg1 + 0xc) = arg2
            *(arg1 + 8) = result | 0xffe0
            result.b = 1
            return result
        
        arg2.w <<= 5
        *(arg1 + 8) = (result & 0x1f) | arg2.w
        result.b = 1
        return result
else
    sub_142a4afe0(arg1)

result.b = 0
return result
