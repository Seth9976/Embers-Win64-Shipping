// 函数: sub_1425b1800
// 地址: 0x1425b1800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t result = *(arg1 + 0x210)
*arg3 = (_mm_unpacklo_ps(*(arg1 + 0x20c), result)).q
return result
