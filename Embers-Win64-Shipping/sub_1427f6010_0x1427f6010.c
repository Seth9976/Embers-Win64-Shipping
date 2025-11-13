// 函数: sub_1427f6010
// 地址: 0x1427f6010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(*(arg1 + 0x18))
uint32_t count = *(arg1 + 8) - rdx.d

if (arg3 u< count)
    count = arg3

memcpy(arg2, rdx + *(arg1 + 0x10), count)
*(arg1 + 0x18) += count
return zx.q(count)
