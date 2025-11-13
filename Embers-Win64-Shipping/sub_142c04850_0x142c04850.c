// 函数: sub_142c04850
// 地址: 0x142c04850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 2) == 0 || zx.w(*arg1) * 0x100 != neg.w(zx.w(arg1[1])))
    if (sub_142bf7510(arg2, arg1, 3).b == 0)
        result.b = 0
        return result
    
    uint32_t rdx_2 = zx.d(arg1[2])
    
    if ((rdx_2 - 1).b u> 3)
        result.b = 0
        return result
    
    uint32_t r8_1 = zx.d(rdx_2.b)
    int32_t r9_5 = zx.d(arg1[1]) + 1 + (zx.d(*arg1) << 8)
    
    if (r8_1 u>= divu.dp.d(0:0xffffffff, r9_5))
        result.b = 0
        return result
    
    if (sub_142bf7510(arg2, &arg1[3], r8_1 * r9_5).b == 0)
        result.b = 0
        return result
    
    int64_t rsi_4 = (zx.q(arg1[1]) + 1 + (zx.q(*arg1) << 8)) * zx.q(arg1[2])
    result = sub_142c02f00(arg1)
    int32_t r8_4 = result - 1
    
    if (result == 1)
        if (r8_4 u>= 0xffffffff)
            result.b = 0
            return result
    else if (divu.dp.d(0:0xffffffff, r8_4) u<= 1 || r8_4 u>= 0xffffffff)
        result.b = 0
        return result
    
    if (sub_142bf7510(arg2, &arg1[3 + rsi_4], r8_4).b == 0)
        result.b = 0
        return result

result.b = 1
return result
