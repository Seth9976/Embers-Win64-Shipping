// 函数: sub_142be5050
// 地址: 0x142be5050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0 || arg5 == 0)
    return 6

uint32_t rax = zx.d(*(arg1 + 0xf4))

if (arg3 == 0)
    *arg5 = rax
    return 0

if (arg2 u>= rax)
    return 0x8e

uint64_t rdx_1 = zx.q(arg2) * 2
*arg3 = *(*(arg1 + 0xf8) + (rdx_1 << 3))
*arg4 = *(*(arg1 + 0xf8) + (rdx_1 << 3) + 8)
*arg5 = *(*(arg1 + 0xf8) + (rdx_1 << 3) + 0xc)
return 0
