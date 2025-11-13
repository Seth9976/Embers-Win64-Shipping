// 函数: sub_141c4aa70
// 地址: 0x141c4aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
else
    rax = *(arg1 + 0x20)

int32_t rax_1 = 0

if (0 == *(arg1 + 0x24))
    *(arg1 + 0x24) = 0
else
    rax_1 = *(arg1 + 0x24)

int32_t r8 = *(arg1 + 0x18)
return zx.q(modu.dp.d(0:(rax - 1 + r8 - rax_1), r8))
