// 函数: sub_1419161d0
// 地址: 0x1419161d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg2)
void* rdx = arg1 + r10 * 0x18
*(rdx + 0x3c8) = arg3
int64_t rax_1 = *(arg1 + 0x558)

if (rax_1 == 0)
    *(rdx + 0x3d0) = 0
    *(rdx + 0x3d4) = arg4
    return rax_1

uint32_t rax_2 = zx.d(*(rax_1 + (r10 << 1) + 0x58))
*(rdx + 0x3d0) = rax_2
*(rdx + 0x3d4) = arg4
return rax_2
