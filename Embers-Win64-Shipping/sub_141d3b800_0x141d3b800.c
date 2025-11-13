// 函数: sub_141d3b800
// 地址: 0x141d3b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x15c))
    *(arg1 + 0x15c) = 0
else
    rax = *(arg1 + 0x15c)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x158))
    *(arg1 + 0x158) = 0
else
    rax_1 = *(arg1 + 0x158)

int32_t temp0 = *(arg1 + 0x15c)
*(arg1 + 0x15c) = rax_1
*(arg1 + 0x158)
*(arg1 + 0x158) = 3 - rax_1 - rax
return zx.q(temp0)
