// 函数: sub_142b1dc30
// 地址: 0x142b1dc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = sub_142b6a5a0(*(*(arg1 + 0x48) + 8), arg2) & 0x7fffffff
int32_t result

if (rsi_1 != 0)
    sub_142a9eda0(arg3)
    int32_t rdx_1 = rsi_1 & 0x1fffff
    
    if (test_bit(rsi_1, 0x15))
        sub_142a9ebe0(arg3, sub_142ae72d0(*(arg1 + 0x48) + 0x10, rdx_1))
    else if (rdx_1 != 0)
        sub_142a9e7d0(arg3, rdx_1)
    
    if (test_bit(rsi_1, 0x1e))
        int16_t rax_1 = sub_142b1e310(arg1, arg2)
        
        if (rax_1 != 2)
            sub_142b19770(arg1, sub_142b1dd10(arg1, rax_1), arg3)
        else
            sub_142a9e9d0(arg3, arg2 * 0x24c - 0x266000, arg2 * 0x24c - 0x265db5)
    
    result.b = 1
else
    result.b = 0

return result
