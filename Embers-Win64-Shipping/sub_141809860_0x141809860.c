// 函数: sub_141809860
// 地址: 0x141809860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg4 + 0x114) = 0
int32_t rax = 0

if (0 == *(arg4 + 0x11c))
    *(arg4 + 0x11c) = 0
else
    rax = *(arg4 + 0x11c)

int64_t* rcx = *(arg4 + 0xb0)
int32_t result = (*(*rcx + 0x20))(rcx, arg1, arg3 * arg2, sx.q(rax))
*(arg4 + 0x11c) += result
*(arg4 + 0x120)
*(arg4 + 0x120) += result
return result
