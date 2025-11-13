// 函数: sub_141c21f80
// 地址: 0x141c21f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
int64_t result = *(arg1 + 0x468)
*arg3 = (_mm_unpacklo_ps(*(arg1 + 0x464), result)).q
return result
