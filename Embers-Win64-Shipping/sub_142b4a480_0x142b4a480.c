// 函数: sub_142b4a480
// 地址: 0x142b4a480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8_1 = *(arg2 + 0x4c)
uint8_t result = (r8_1 u>> 5).b & 1

if (result != *(arg1 + 8))
    *(arg2 + 0x4c) = r8_1 | 0x100

return result
