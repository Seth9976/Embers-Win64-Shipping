// 函数: sub_141d3b840
// 地址: 0x141d3b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x12c))
    *(arg1 + 0x12c) = 0
else
    rax = *(arg1 + 0x12c)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x128))
    *(arg1 + 0x128) = 0
else
    rax_1 = *(arg1 + 0x128)

int32_t temp0 = *(arg1 + 0x12c)
*(arg1 + 0x12c) = rax_1
*(arg1 + 0x128)
*(arg1 + 0x128) = 3 - rax_1 - rax
return zx.q(temp0)
