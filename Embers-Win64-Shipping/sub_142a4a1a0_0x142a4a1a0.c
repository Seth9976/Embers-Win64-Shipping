// 函数: sub_142a4a1a0
// 地址: 0x142a4a1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg1 + 8)
int32_t rax_1

if (r8 s< 0)
    rax_1 = *(arg1 + 0xc)
else
    rax_1 = sx.d(r8) s>> 5

if (arg2 u>= rax_1)
    return 0xffff

if ((r8.b & 2) == 0)
    return zx.q(*(*(arg1 + 0x18) + (sx.q(arg2) << 1)))

return zx.q(*(arg1 + 0xa + (sx.q(arg2) << 1)))
