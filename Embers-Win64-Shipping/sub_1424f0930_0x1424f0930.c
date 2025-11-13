// 函数: sub_1424f0930
// 地址: 0x1424f0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
int64_t result = rax + rcx
*(arg2 + 0x20) = result
*arg3 = 0xffffffff
arg3[1] = 0
return result
