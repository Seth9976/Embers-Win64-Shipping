// 函数: sub_141f71ed0
// 地址: 0x141f71ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x44d)
uint8_t result = r8 u>> 4 & 1

if (arg2 == result)
    return result

*(arg1 + 0x44d) = (r8 & 0xef) | arg2 << 4
return sub_141ee8490(arg1) __tailcall
