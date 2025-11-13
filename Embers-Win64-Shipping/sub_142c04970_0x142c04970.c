// 函数: sub_142c04970
// 地址: 0x142c04970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142bf7510(arg2, arg1, 4) == 0
        || (zx.d(arg1[1]) << 0x10) + (zx.d(arg1[2]) << 8) + (zx.d(*arg1) << 0x18)
        != neg.d(zx.d(arg1[3])))
    if (sub_142bf7510(arg2, arg1, 5).b == 0)
        result.b = 0
        return result
    
    uint32_t rdx_2 = zx.d(arg1[4])
    
    if ((rdx_2 - 1).b u> 3)
        result.b = 0
        return result
    
    uint32_t r8_6 = zx.d(rdx_2.b)
    uint32_t rcx_5 = (zx.d(arg1[1]) << 0x10) + (zx.d(*arg1) << 0x18) + (zx.d(arg1[2]) << 8)
    int32_t r9_1 = zx.d(arg1[3]) + 1
    int32_t r9_2 = r9_1 + rcx_5
    
    if (r9_1 != neg.d(rcx_5) && r8_6 u>= divu.dp.d(0:0xffffffff, r9_2))
        result.b = 0
        return result
    
    int32_t r8_7 = r8_6 * r9_2
    
    if (r8_7 u>= 0xffffffff)
        result.b = 0
        return result
    
    if (sub_142bf7510(arg2, &arg1[5], r8_7).b == 0)
        result.b = 0
        return result
    
    uint64_t rsi_5 = zx.q((zx.d(arg1[3]) + 1
        + (((((zx.q(*arg1) << 8) + zx.q(arg1[1])) << 8) + zx.q(arg1[2])) << 8).d) * zx.d(arg1[4]))
    result = sub_142c02f80(arg1)
    int32_t r8_9 = result - 1
    
    if (result == 1)
        if (r8_9 u>= 0xffffffff)
            result.b = 0
            return result
    else if (divu.dp.d(0:0xffffffff, r8_9) u<= 1 || r8_9 u>= 0xffffffff)
        result.b = 0
        return result
    
    if (sub_142bf7510(arg2, &arg1[5 + rsi_5], r8_9).b == 0)
        result.b = 0
        return result

result.b = 1
return result
