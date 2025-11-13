// 函数: sub_142bdf7e0
// 地址: 0x142bdf7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x18) = arg2
int32_t r8_3 = (zx.d(*(arg2 + 6)) & 0xffffff) << 7 | zx.d(*(arg2 + 7)) u>> 1
*(arg1 + 0x28) = 0xffffffff
*(arg1 + 0x30) = r8_3
*(arg1 + 0x2c) = 0
return 0
