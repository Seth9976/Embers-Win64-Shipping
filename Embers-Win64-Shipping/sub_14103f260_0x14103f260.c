// 函数: sub_14103f260
// 地址: 0x14103f260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d5a028
arg1[1].d = 0
arg1[2] = arg2
arg1[3].d = *(arg2 + 0x10)
*(arg1 + 0x1c) = arg3
*arg1 = &data_142f00970
arg1[4] = arg4

if (arg4 != 0)
    (*(*arg4 + 8))(arg4)

arg1[5] = arg7

if (arg7 != 0)
    *(arg7 + 8) += 1

arg1[6].d = 0
__builtin_memset(&arg1[7], 0, 0x40)
*(arg1 + 0x88) = *arg6
*(arg1 + 0x98) = arg6[1]
*(arg1 + 0xa8) = arg6[2]
arg1[0x17] = arg6[3].q
int32_t rax_4 = sub_141021240(arg1[0x15].d)

if (rax_4 == 0x13)
    rax_4.b = 2
else
    bool cond:0_1 = rax_4 != 0x2c
    rax_4.b = 1
    
    if (not(cond:0_1))
        rax_4.b = 2

arg1[0x18].b = rax_4.b
*(arg1 + 0xc2) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
*(arg1 + 0xec) = 4
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xfc) = 1
*(arg1 + 0xfe) = 1
arg1[0x20].d = arg8
__builtin_memset(&arg1[0x21], 0, 0x18)
int64_t* rcx_2 = arg1[4]

if (rcx_2 != 0 && arg1[0x11].d == 1)
    arg1[0x21] = (*(*rcx_2 + 0x58))(rcx_2)

int16_t rcx_3

if (arg1[0x11].d != 4)
    rcx_3 = *(arg1 + 0xa4)
else
    rcx_3 = 1

int32_t rdx_1 = zx.d(arg1[0x18].b) * zx.d(rcx_3)
*(arg1 + 0xc2) = rdx_1.w * *(arg1 + 0xa6)

if (arg5 == 0x400000)
    *(arg1 + 0xfc) = 0
    arg1[0x1f].d = 0x400000
    *(arg1 + 0xf4) = 0x400000
    return arg1

sub_141049a70(arg1, rdx_1)

if (*(arg1 + 0xfc) != 0)
    sub_141064100(&arg1[0x19], zx.d(*(arg1 + 0xc2)))
    sub_141069350(&arg1[0x19], arg5)

return arg1
