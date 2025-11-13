// 函数: sub_142627710
// 地址: 0x142627710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg5

if (r14 == 0 || arg3 == 0)
    return 0x80000008

*r14 = 0

if (*arg3 != 0x44544c52)
    return 0x80000001

if (arg3[1] != 1)
    return 0x80000002

uint64_t rdi_1 = zx.q(zx.d(*(arg3 + 0x32)) * zx.d(arg3[0xc].w))
uint32_t rbp = (rdi_1 * 3).d * 2
void** rax_5 = (*(*arg1 + 0x10))(arg1, zx.q(rbp + 0x6c))

if (rax_5 == 0)
    return 0x80000004

memset(rax_5, 0, sx.q(rbp) + 0x6c)
*(rax_5 + 0x30) = *arg3
*(rax_5 + 0x40) = *(arg3 + 0x10)
*(rax_5 + 0x50) = *(arg3 + 0x20)
rax_5[0xc] = *(arg3 + 0x30)
rax_5[0xd].d = arg3[0xe]
arg5.d = 0
int32_t rax_9 = (*(*arg2 + 0x10))(arg2, &arg3[0xf], zx.q(arg4 - 0x3c), rax_5 + 0x6c, rbp, &arg5)

if ((rax_9 u>> 0x1f).b != 0)
    sub_142609160(rax_5)
    return zx.q(rax_9)

*rax_5 = &rax_5[6]
rax_5[2] = rax_5 + 0x6c
rax_5[3] = sx.q((rdi_1 * 2).d) + rax_5 + 0x6c
rax_5[4] = sx.q((rdi_1 * 3).d) + rax_5 + 0x6c
rax_5[5] = sx.q((rdi_1 << 2).d) + rax_5 + 0x6c
*r14 = rax_5
return 0x40000000
