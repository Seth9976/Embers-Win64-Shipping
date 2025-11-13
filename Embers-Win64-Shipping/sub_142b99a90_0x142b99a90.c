// 函数: sub_142b99a90
// 地址: 0x142b99a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg5
int32_t rsi = 0

if (arg3 s< 0 || arg4 s< 0 || arg2 s< 0)
    rsi = 6
else if (arg4 == 0 || arg2 == 0)
    if (result != 0)
        (*(arg1 + 0x10))(arg1, result)
    
    result = 0
else if (arg4 s> divs.dp.d(0:0x7fffffff, arg2))
    rsi = 0xa
else if (arg3 != 0)
    int64_t result_2 = (*(arg1 + 0x18))(arg1, zx.q(arg2 * arg3), zx.q(arg2 * arg4), result)
    
    if (result_2 == 0)
        rsi = 0x40
    else
        result = result_2
    label_142b99b25:
        
        if (arg4 s> arg3)
            memset(sx.q(arg2 * arg3) + result, 0, sx.q((arg4 - arg3) * arg2))
else
    int64_t result_1 = (*(arg1 + 8))(arg1, zx.q(arg2 * arg4))
    result = result_1
    
    if (result_1 != 0)
        goto label_142b99b25
    
    rsi = 0x40

*arg6 = rsi
return result
