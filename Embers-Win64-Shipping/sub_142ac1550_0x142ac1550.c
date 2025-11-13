// 函数: sub_142ac1550
// 地址: 0x142ac1550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1
int64_t rcx

if (((arg2 u>> 8).b & 1) == 0)
    rax_1 = 0x48
    rcx = 0xc8
else
    rax_1 = 8
    rcx = 0x88

if (((arg2 u>> 9).b & 1) != 0)
    rax_1 = rcx

int16_t rdx_1 = *(rax_1 + arg1 + 8)
int32_t rcx_2

if (rdx_1 s< 0)
    rcx_2 = *(rax_1 + arg1 + 0xc)
else
    rcx_2 = sx.d(rdx_1) s>> 5

if (arg3 u>= rcx_2)
    return 0xffff

if ((rdx_1.b & 2) == 0)
    return zx.q(*(*(rax_1 + arg1 + 0x18) + (sx.q(arg3) << 1)))

return zx.q(*(arg1 + 0xa + rax_1 + (sx.q(arg3) << 1)))
