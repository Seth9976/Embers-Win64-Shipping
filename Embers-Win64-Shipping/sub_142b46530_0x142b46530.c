// 函数: sub_142b46530
// 地址: 0x142b46530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d + arg2
void* rdx = *arg1
int16_t rcx = *(rdx + 8)
int32_t rax_1

if (rcx s< 0)
    rax_1 = *(rdx + 0xc)
else
    rax_1 = sx.d(rcx) s>> 5

if (r8 u>= rax_1)
    return 0xffff

if ((rcx.b & 2) == 0)
    return zx.q(*(*(rdx + 0x18) + (sx.q(r8) << 1)))

return zx.q(*(rdx + 0xa + (sx.q(r8) << 1)))
