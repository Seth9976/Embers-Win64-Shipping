// 函数: sub_142550be0
// 地址: 0x142550be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r8
r8.b = rax != 0
*(arg2 + 0x20) = r8 + rax
int64_t rax_1 = *arg1
*(arg1 + 0x124) &= 0xf7
int64_t result = (*(rax_1 + 0x420))()
*(arg1 + 0x124) |= 8
return result
