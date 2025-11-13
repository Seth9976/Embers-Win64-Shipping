// 函数: sub_141f26210
// 地址: 0x141f26210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x20a)
uint8_t result = r8 u>> 4 & 1

if (result == arg2)
    return result

*(arg1 + 0x20a) = (r8 & 0xef) | arg2 << 4
return sub_141ee8490(arg1) __tailcall
