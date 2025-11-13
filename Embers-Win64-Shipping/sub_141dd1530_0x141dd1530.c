// 函数: sub_141dd1530
// 地址: 0x141dd1530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
*(arg1 + 0x5f) = *(arg1 + 0x5b) & 1
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) != 0)
    return result

return sub_141dd5990(arg1) __tailcall
