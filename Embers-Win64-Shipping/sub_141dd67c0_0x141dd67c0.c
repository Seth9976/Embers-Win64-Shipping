// 函数: sub_141dd67c0
// 地址: 0x141dd67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r8 = *(arg1 + 0x58)
uint8_t result = r8 u>> 5 & 1

if (result == arg2)
    return result

*(arg1 + 0x58) = (r8 & 0xdf) | arg2 << 5
return sub_141dcf810(arg1) __tailcall
