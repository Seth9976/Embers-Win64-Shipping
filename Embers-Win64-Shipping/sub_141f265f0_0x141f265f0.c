// 函数: sub_141f265f0
// 地址: 0x141f265f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x20a)
uint8_t result = r8 u>> 1 & 1

if (result == arg2)
    return result

*(arg1 + 0x20a) = (r8 & 0xfd) | (arg2 * 2)
return sub_141ee8490(arg1) __tailcall
