// 函数: sub_14243dde0
// 地址: 0x14243dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t count_1 = arg3 * arg2
uint64_t rdx = zx.q(*(arg4 + 0x24))
uint32_t count = *(arg4 + 0x20) - rdx.d

if (count_1 u<= count)
    count = count_1

memcpy(arg1, rdx + *(arg4 + 0x18), count)
*(arg4 + 0x24) += count
return zx.q(count)
