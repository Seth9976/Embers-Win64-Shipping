// 函数: sub_141c47360
// 地址: 0x141c47360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = *(arg1 + 0xd)

if (result != 0 && *(arg1 + 0xb0) != 0)
    result = sub_141c472f0(arg1 + 0x70)
    *(arg1 + 0xb0) = 0

return result
