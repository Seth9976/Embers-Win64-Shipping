// 函数: sub_142bf5e40
// 地址: 0x142bf5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5a) == 0 && *(arg1 + 4) != 0)
    *(arg1 + 0x78) = *(arg1 + 0x70)
    uint64_t rax_2 = zx.q(*(arg1 + 0x60))
    *(arg1 + 0x59) = 0x100
    *(arg1 + 0x64) = 0
    memset(*(arg1 + 0x80), 0, rax_2 * 0x14)

if (arg2 != 0)
    *arg2 = *(arg1 + 0x60)

return *(arg1 + 0x80)
