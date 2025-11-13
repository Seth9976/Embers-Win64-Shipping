// 函数: sub_142b11330
// 地址: 0x142b11330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(*(arg1 + 0x50) + (sx.q(arg2) << 3)))
int16_t rdx_1 = *(arg1 + 0x18)
int32_t rax_1

if (rdx_1 s< 0)
    rax_1 = *(arg1 + 0x1c)
else
    rax_1 = sx.d(rdx_1) s>> 5

if (r8.d u>= rax_1)
    return 0xffff

if ((rdx_1.b & 2) == 0)
    return zx.q(*(*(arg1 + 0x28) + (r8 << 1)))

return zx.q(*(arg1 + 0x1a + (r8 << 1)))
