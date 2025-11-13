// 函数: sub_141efbb00
// 地址: 0x141efbb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2.d f< 9.99999997e-07f || arg3 s>= arg1[0x54].d || (*(*arg1 + 0x5c0))().b == 0)
    return 

int64_t* rcx = arg1[0x16]

if ((*(*rcx + 0x3e8))(rcx, 0).b != 0)
    return 

char rsi_1 = arg1[0x3e].b
arg1[0x3e].b = rsi_1 | 0x40
uint64_t rax = zx.q(arg1[0x2d].b)

if (rax.d u> 6)
    (*(*arg1 + 0x590))(arg1, 0, 0)
else
    switch (rax)
        case 1
            (*(*arg1 + 0x830))(arg1, arg2, zx.q(arg3))
        case 2
            (*(*arg1 + 0x838))(arg1, arg2, zx.q(arg3))
        case 3
            (*(*arg1 + 0x728))(arg1, arg2, zx.q(arg3))
        case 4
            (*(*arg1 + 0x848))(arg1, arg2, zx.q(arg3))
        case 5
            (*(*arg1 + 0x840))(arg1, arg2, zx.q(arg3))
        case 6
            (*(*arg1 + 0x850))(arg1, arg2, zx.q(arg3))

arg1[0x3e].b &= 0xbf
arg1[0x3e].b |= rsi_1 & 0x40

if ((*(arg1 + 0x1f2) & 8) != 0)
    (*(*arg1 + 0x440))(arg1, arg1[0x3f])
