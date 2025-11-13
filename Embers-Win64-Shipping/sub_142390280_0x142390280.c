// 函数: sub_142390280
// 地址: 0x142390280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = (arg2 * 3).d
int64_t rdx = *(arg1 + 0xe8)
int64_t rax = sx.q(r10)
uint32_t rax_1

if (*(arg1 + 0xf4) == 0)
    rax_1 = zx.d(*(rdx + (rax << 1)))
else
    rax_1 = *(rdx + (rax << 2))

*arg3 = rax_1
int64_t rdx_1 = *(arg1 + 0xe8)
int64_t rax_5 = sx.q((*(arg1 + 0x184) & 1) + r10)
uint32_t rax_6

if (*(arg1 + 0xf4) == 0)
    rax_6 = zx.d(*(rdx_1 + (rax_5 << 1) + 2))
else
    rax_6 = *(rdx_1 + (rax_5 << 2) + 4)

*arg4 = rax_6
int64_t rdx_2 = *(arg1 + 0xe8)
int64_t rax_11 = sx.q((not.d(*(arg1 + 0x184)) & 1) + r10)

if (*(arg1 + 0xf4) != 0)
    *arg5 = *(rdx_2 + (rax_11 << 2) + 4)
    return arg5

uint32_t* rax_13 = arg5
*rax_13 = zx.d(*(rdx_2 + (rax_11 << 1) + 2))
return rax_13
