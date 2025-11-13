// 函数: sub_14173e6e0
// 地址: 0x14173e6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x28)

if (rcx == 1)
    return zx.q(**(arg1 + 0x20))

uint64_t rdx = zx.q(arg2 u>> 1)

if (rdx.d s>= rcx)
    return 0

return zx.q(*(*(arg1 + 0x20) + rdx))
