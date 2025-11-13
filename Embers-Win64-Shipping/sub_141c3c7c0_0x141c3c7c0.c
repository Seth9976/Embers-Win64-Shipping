// 函数: sub_141c3c7c0
// 地址: 0x141c3c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xd)

if (result != 0)
    if (*(arg1 + 0xb0) != 0)
        result = sub_141c472f0(arg1 + 0x70)
    
    *(arg1 + 0xb0) = (sx.q(*(arg1 + 0x80)) << 5) + *(arg1 + 0x70)

return result
