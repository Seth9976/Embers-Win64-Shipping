// 函数: sub_142a72070
// 地址: 0x142a72070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0xc))

if (r8.d s>= *(arg1 + 0x14))
    return 0xffff

uint64_t result = zx.q(*(*(arg1 + 0x18) + (r8 << 1)))
*(arg1 + 0xc) = (r8 + 1).d
return result
