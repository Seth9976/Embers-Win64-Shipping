// 函数: sub_141f71640
// 地址: 0x141f71640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141ee76e0(arg1)

if (result.b != 0 || (*(arg1 + 0x88) & 1) == 0 || *(arg1 + 0x14f) != result.b)
    result = *arg2
    
    if (*(arg1 + 0x260) != result)
        *(arg1 + 0x260) = result
        return sub_141f765f0(arg1)

return result
