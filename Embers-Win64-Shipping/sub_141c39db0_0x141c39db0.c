// 函数: sub_141c39db0
// 地址: 0x141c39db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x14))
    *(arg1 + 0x14) = 0
else
    rax = *(arg1 + 0x14)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x18))
    *(arg1 + 0x18) = 0
else
    rax_1 = *(arg1 + 0x18)

if (rax_1 s< rax)
    return zx.q(*(arg1 + 0x10) - rax + rax_1)

return zx.q(rax_1 - rax)
