// 函数: sub_142a4b030
// 地址: 0x142a4b030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg2 + 8)
int32_t rax_1

if (r8 s< 0)
    rax_1 = *(arg2 + 0xc)
else
    rax_1 = sx.d(r8) s>> 5

if (arg1 u>= rax_1)
    return 0xffff

if ((r8.b & 2) == 0)
    return zx.q(*(*(arg2 + 0x18) + (sx.q(arg1) << 1)))

return zx.q(*(arg2 + 0xa + (sx.q(arg1) << 1)))
