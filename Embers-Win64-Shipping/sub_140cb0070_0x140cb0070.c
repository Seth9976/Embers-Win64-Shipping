// 函数: sub_140cb0070
// 地址: 0x140cb0070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x78) = arg2

if ((*(arg2 + 0x40) & 0x8000000000000) != 0)
    *(arg1 + 0x40) |= 0x8000000000000

return 0x8000000000000
