// 函数: sub_141bc9a00
// 地址: 0x141bc9a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
char result = *(arg1 + 0x28d)

if (result != 0)
    *(arg1 + 0x10d) &= 0xfe
    result &= 1
    *(arg1 + 0x10d) |= result
    *(arg1 + 0x28d) = 0

return result
