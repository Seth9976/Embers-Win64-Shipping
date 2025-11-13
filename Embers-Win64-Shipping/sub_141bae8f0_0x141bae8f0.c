// 函数: sub_141bae8f0
// 地址: 0x141bae8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x410))
    int64_t result = *(*(arg1 + 0x408) + (sx.q(arg2) << 3))
    
    if (result != 0)
        return result

uint32_t rdx_1 = zx.d(*(arg1 + 0x49c))

if (rdx_1 == 0)
    if (*(arg1 + 0x49d) == 0)
        return *(arg1 + 0x4e8)
    
    return *(arg1 + 0x4e0)

if (rdx_1 == 1)
    if (*(arg1 + 0x49d) == 0)
        return *(arg1 + 0x4f8)
    
    return *(arg1 + 0x4f0)

if (rdx_1 != 2)
    return 0

if (*(arg1 + 0x49d) == 0)
    return *(arg1 + 0x4d8)

return *(arg1 + 0x4d0)
