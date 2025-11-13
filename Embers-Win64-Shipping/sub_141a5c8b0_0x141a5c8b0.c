// 函数: sub_141a5c8b0
// 地址: 0x141a5c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
int32_t r8 = *(arg1 + 8) | 8
*(arg1 + 8) = r8
int32_t rdx = *(rax + 8)

if ((rdx.b & 0x30) != 0)
    *(arg1 + 8) = (rdx & 0x69) | r8

return sub_141a5c830(arg1) __tailcall
