// 函数: sub_1403782c0
// 地址: 0x1403782c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) u< 0x16)
    return 0

int32_t i = *(arg1 + 0x14)

if (i != 0)
    int16_t r10_1 = 0
    
    do
        r10_1 += 1
        i &= i - 1
    while (i != 0)
    
    if (r10_1 != *(arg1 + 2))
        return 0

return 1
