// 函数: sub_140e42b10
// 地址: 0x140e42b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg4 = 0
uint32_t count = arg3
int64_t rax = *(arg1 + 8)

if (rax == 0)
    return 0xffffffff

uint64_t rdx = zx.q(*(arg1 + 0x10))
uint32_t count_1 = *(arg1 + 0x14) - rdx.d

if (arg3 u> count_1)
    *arg4 = 1
    count = count_1
    rdx = zx.q(*(arg1 + 0x10))
    rax = *(arg1 + 8)

memcpy(arg2, rdx + rax, count)
*(arg1 + 0x10) += count
return zx.q(count)
