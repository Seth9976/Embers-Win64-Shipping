// 函数: sub_141f269a0
// 地址: 0x141f269a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x20d)
uint8_t result = r8 u>> 3 & 1

if (arg2 == result)
    return result

*(arg1 + 0x20d) = (r8 & 0xf7) | arg2 << 3
return sub_141ee8490(arg1) __tailcall
