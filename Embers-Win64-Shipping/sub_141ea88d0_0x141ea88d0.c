// 函数: sub_141ea88d0
// 地址: 0x141ea88d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140be3720(arg1)
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) != 0)
    result = -0x40
    *(arg1 + 0xc0) = sub_140bd83c0

return result
