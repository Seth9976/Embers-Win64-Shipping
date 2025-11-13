// 函数: sub_1421b9fd0
// 地址: 0x1421b9fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = arg2
*(arg1 + 0x18) = arg3
sub_1421c3280(arg1)
*(arg1 + 0x1d0) = *(sub_142192ca0(arg2, 0) + 0x48)
uint8_t result = *(arg2 + 0x37) u>> 3 & 1
*(arg1 + 0x1d8) = result
return result
