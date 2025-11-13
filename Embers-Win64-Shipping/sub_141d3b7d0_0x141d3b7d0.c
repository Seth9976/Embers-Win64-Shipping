// 函数: sub_141d3b7d0
// 地址: 0x141d3b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x54))
    *(arg1 + 0x54) = 0
else
    rax = *(arg1 + 0x54)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x50))
    *(arg1 + 0x50) = 0
else
    rax_1 = *(arg1 + 0x50)

int32_t temp0 = *(arg1 + 0x54)
*(arg1 + 0x54) = rax_1
*(arg1 + 0x50)
*(arg1 + 0x50) = 3 - rax_1 - rax
return zx.q(temp0)
