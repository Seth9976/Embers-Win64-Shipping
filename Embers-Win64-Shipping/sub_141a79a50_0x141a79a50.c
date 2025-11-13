// 函数: sub_141a79a50
// 地址: 0x141a79a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
char result = *(arg1 + 0xb0) & 1
*arg3 = result
return result
