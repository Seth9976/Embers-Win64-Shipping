// 函数: sub_142899cd0
// 地址: 0x142899cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x40)
*(arg1 + 0x28) |= *(rdx + 0x28) & 0xf
int32_t result = *(rdx + 0x2c)
*(arg1 + 0x2c) = result
return result
