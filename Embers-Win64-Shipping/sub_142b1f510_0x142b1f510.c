// 函数: sub_142b1f510
// 地址: 0x142b1f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t result

if (arg2 u> *(arg1 + 0xe) && arg2 != (*(arg1 + 0x10) | 1))
    if (arg2 u< *(arg1 + 0x1a))
        int16_t* rdx = *(arg1 + 0x30) + (zx.q(arg2) u>> 1 << 1)
        result = *rdx
        
        if (result u> 0x1ff)
            result.b = 0
            return result
        
        if (result u> 0xff && result.b s< 0 && (rdx[-1] & 0xff00) != 0)
            return 0
    else
        if (arg2 u< *(arg1 + 0x1e))
            arg2.b &= 6
            result.b = arg2.b u<= 2
            return result
        
        if (arg2 u> 0xfc00 && arg2 != 0xfe00)
            return 0

result.b = 1
return result
