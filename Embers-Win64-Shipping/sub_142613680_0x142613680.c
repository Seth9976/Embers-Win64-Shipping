// 函数: sub_142613680
// 地址: 0x142613680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg4 + 0x1c))

if ((*(arg1 + 0x210) & result.w) != 0 && (*(arg1 + 0x212) & result.w) == 0)
    result = zx.q(*(arg4 + 0x1f)) & 0x3f
    
    if (not(3.40282347e+38f f<= *(arg1 + (result << 2) + 8))
            && not(3.40282347e+38f f<= *(arg1 + (result << 2) + 0x108)))
        result.b = 1
        return result

result.b = 0
return result
