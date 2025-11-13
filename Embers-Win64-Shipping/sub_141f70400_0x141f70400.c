// 函数: sub_141f70400
// 地址: 0x141f70400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x5a7)
uint8_t result = r8 u>> 7

if (arg2 == result)
    return result

*(arg1 + 0x5a7) = (r8 & 0x7f) | arg2 << 7
return sub_141ee8490(arg1) __tailcall
