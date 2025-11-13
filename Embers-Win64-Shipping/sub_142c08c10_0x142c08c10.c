// 函数: sub_142c08c10
// 地址: 0x142c08c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x59) == 0)
    *(arg1 + 0x5c) += 1
else if (*(arg1 + 0x78) != *(arg1 + 0x70) || *(arg1 + 0x64) != *(arg1 + 0x5c))
    if (sub_142bf50b0(arg1, 1, 1).b != 0)
        int64_t rdx_1 = *(arg1 + 0x70)
        uint64_t r9_1 = zx.q(*(arg1 + 0x5c)) * 5
        uint64_t rcx = zx.q(*(arg1 + 0x64)) * 5
        int64_t rax_4 = *(arg1 + 0x78)
        *(rax_4 + (rcx << 2)) = *(rdx_1 + (r9_1 << 2))
        *(rax_4 + (rcx << 2) + 0x10) = *(rdx_1 + (r9_1 << 2) + 0x10)
        *(arg1 + 0x64) += 1
        *(arg1 + 0x5c) += 1
else
    *(arg1 + 0x64) += 1
    *(arg1 + 0x5c) += 1
