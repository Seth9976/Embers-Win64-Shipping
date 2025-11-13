// 函数: sub_142319650
// 地址: 0x142319650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_4 = *(arg1 + 0x60)

if (rax_4 == 0)
    return zx.q(*(arg1 + 0x358))

return zx.q(*(arg1 + 0x358) + *(rax_4 + 0x198))
