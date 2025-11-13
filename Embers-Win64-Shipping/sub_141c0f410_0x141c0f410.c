// 函数: sub_141c0f410
// 地址: 0x141c0f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
int64_t r9_1 = r9 + rax
*(arg2 + 0x20) = r9_1
int32_t result = sub_141baeba0(arg1, arg4, arg5, r9_1)
*arg3 = result
return result
