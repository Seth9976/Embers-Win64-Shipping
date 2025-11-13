// 函数: sub_142453dc0
// 地址: 0x142453dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
uint8_t result = *(arg1 + 0x5c) u>> 2 & 1
*arg3 = result
return result
