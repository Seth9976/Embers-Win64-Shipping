// 函数: sub_1429ddf20
// 地址: 0x1429ddf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x382c) != 0 || *(arg1 + 0x36ec) u> 1 || *(arg1 + 0x3738) != 0)
    return 1

int64_t r10 = sx.q(*(arg1 + 0x1c94))
int32_t rax = *(arg1 + 0x12c0 + (r10 << 2) + 0x9c0)

if (rax s> 1)
    *(arg1 + 0x12c0 + (r10 << 2) + 0x9c0) = rax - 1
    int32_t rax_2 = sub_1429de140(arg1 + 0x12c0)
    *(arg1 + 0x1c94) = rax_2
    sub_142a216f0(arg1 + 0x1a40 + r10 * 0x90, arg1 + 0x1a40 + sx.q(rax_2) * 0x90)

*(arg1 + 0x12c0 + sx.q(*(arg1 + 0x1c94)) * 0x90 + 0x808) = 1
*(arg1 + 0x1e68) = 0
return 0
