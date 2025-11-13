// 函数: sub_141c29f30
// 地址: 0x141c29f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x20)

if (rcx == 0)
    return arg1

int64_t rax = sx.q(*(arg1 + 0x14))
*(rcx + 4) = rax.d
*(rcx + 8) = 1
return memset(rcx + 0x1c, 0, rax << 2) __tailcall
