// 函数: sub_142c30d50
// 地址: 0x142c30d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_142bf50b0(arg1, 0, 1)

if (result.b != 0)
    int64_t rdx_1 = *(arg1 + 0x70)
    uint64_t r9_1 = zx.q(*(arg1 + 0x5c)) * 5
    uint64_t rcx = zx.q(*(arg1 + 0x64)) * 5
    int64_t rax_2 = *(arg1 + 0x78)
    *(rax_2 + (rcx << 2)) = *(rdx_1 + (r9_1 << 2))
    result = *(rdx_1 + (r9_1 << 2) + 0x10)
    *(rax_2 + (rcx << 2) + 0x10) = result
    *(arg1 + 0x64) += 1

return result
