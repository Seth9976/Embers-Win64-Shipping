// 函数: sub_14269b9a0
// 地址: 0x14269b9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x8a)
uint8_t result = r8 u>> 2 & 1

if (result == arg2)
    return result

r8 = (r8 & 0xfb) | arg2 << 2
*(arg1 + 0x8a) = r8
return sub_141df0440(arg3, arg4, r8) __tailcall
