// 函数: sub_142c39510
// 地址: 0x142c39510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_5 = *(arg1 + 0x64)

if (rax_5 == 0)
    return *(arg1 + 0x78)

return *(arg1 + 0x78) + zx.q(rax_5 - 1) * 0x14
