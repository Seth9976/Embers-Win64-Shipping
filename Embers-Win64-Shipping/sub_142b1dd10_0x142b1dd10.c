// 函数: sub_142b1dd10
// 地址: 0x142b1dd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u>= *(arg1 + 0xe) && *(arg1 + 0x1e) u> arg2)
    int64_t rax = *(arg1 + 0x30)
    uint64_t rdx_1 = zx.q(arg2) u>> 1
    return rax + (rdx_1 << 1) + (((zx.q(*(rax + (rdx_1 << 1))) & 0x1f) + 1) << 1)

if (arg2 - 2 u> 0xfbfd)
    return 0

int16_t rax_6 = *(arg1 + 0x1e)
uint64_t rcx_1 = zx.q(arg2)

if (arg2 u>= rax_6)
    return *(arg1 + 0x28) + ((rcx_1 - zx.q(rax_6)) << 1)

return *(arg1 + 0x30) + (rcx_1 u>> 1 << 1)
