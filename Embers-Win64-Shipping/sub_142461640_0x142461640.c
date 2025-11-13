// 函数: sub_142461640
// 地址: 0x142461640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
uint8_t result = *(arg1 + 0x31) u>> 5 & 1
*arg3 = result
return result
