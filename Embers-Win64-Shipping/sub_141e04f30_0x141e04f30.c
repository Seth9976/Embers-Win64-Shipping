// 函数: sub_141e04f30
// 地址: 0x141e04f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg1 + 8) u>> 4).b & 1) != 0)
    return 0

void* rcx = *(arg1 + 0x20)
int64_t result = *(rcx + 0xa8)

if (result == 0)
    return sub_141ee69e0(rcx) __tailcall

return result
