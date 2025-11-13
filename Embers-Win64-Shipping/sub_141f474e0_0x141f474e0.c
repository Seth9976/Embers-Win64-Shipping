// 函数: sub_141f474e0
// 地址: 0x141f474e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t r9 = *(arg1 + 0x71a)
uint8_t result = r9 u>> 2 & 1

if (result == arg2)
    *(arg1 + 0x71a) = (arg2 ^ 1) << 2 | (r9 & 0xfb)
    
    if (arg3 != 0 && (arg1[0x11].b & 1) != 0 && arg1[0x86] != 0)
        return sub_141f3fb10(arg1, 1, 0) __tailcall

return result
