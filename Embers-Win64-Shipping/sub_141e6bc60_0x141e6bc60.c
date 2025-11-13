// 函数: sub_141e6bc60
// 地址: 0x141e6bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = (*(arg1 + 0x74) & 0xfb) | arg2 << 2
char result_1 = result
*(arg1 + 0x74) = result
result &= 6
result_1 &= 8

if (result_1 != 0 && result == 0)
    jump(*(*arg1 + 0x30))

if (result_1 == 0 && result != 0)
    jump(*(*arg1 + 0x80))

return result
