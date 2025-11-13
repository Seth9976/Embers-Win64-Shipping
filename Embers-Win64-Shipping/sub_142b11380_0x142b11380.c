// 函数: sub_142b11380
// 地址: 0x142b11380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = arg3 + 1 + *(*(arg1 + 0x50) + (sx.q(arg2) << 3))
int16_t rdx_2 = *(arg1 + 0x18)
int32_t rax_1

if (rdx_2 s< 0)
    rax_1 = *(arg1 + 0x1c)
else
    rax_1 = sx.d(rdx_2) s>> 5

if (r9_1 u>= rax_1)
    return 0xffff

if ((rdx_2.b & 2) == 0)
    return zx.q(*(*(arg1 + 0x28) + (sx.q(r9_1) << 1)))

return zx.q(*(arg1 + 0x1a + (sx.q(r9_1) << 1)))
