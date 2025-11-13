// 函数: sub_141928d30
// 地址: 0x141928d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ef2948
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
*(arg1 + 0x20) = *arg16
arg1[6].d = arg16[1].d
*(arg1 + 0x3c) = arg11
arg1[8].d = arg14
arg1[9] = &arg1[0xa]
*(arg1 + 0x34) = arg8
arg1[7].d = arg9
arg1[0xa] = -0x3810000020000000
arg1[0xb] = 0
arg1[0xc].d = arg6
*(arg1 + 0x64) = arg7
*arg1 = &data_142ff7308
*(arg1 + 0x6c) = arg10
arg1[0xd].d = arg9
void* rcx_1 = &arg1[0x1a]
*(arg1 + 0x9c) &= 0xfffffffe
*(arg1 + 0x8c) = arg5
arg1[0xf] = 0
arg1[0x12].d = 0
arg1[0x13].d = 0
arg1[0xe] = arg2
arg1[0x10].d = arg3
*(arg1 + 0x84) = arg4
arg1[0x11].d = arg8
*arg1 = &data_142ff73b8
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = arg15
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19].d = 0
*(rcx_1 + 8) = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x14) = 0x20
void* rax_10 = *(rcx_1 + 8)

if (rax_10 != 0)
    rcx_1 = rax_10

*rcx_1 = 0
int32_t rdi = 1
int32_t rbp = 1
int32_t rcx_4 = (arg1[0x1d].d & 0xfffffffe) | zx.d(arg12)
arg1[0x1d].d = rcx_4
int64_t r15 = sx.q(arg1[0x15].d)

if ((rcx_4.b & 1) != 0)
    rbp = 6

int32_t rbp_1 = rbp * *(arg1 + 0x34)
int32_t rax_12 = r15.d + rbp_1
arg1[0x15].d = rax_12

if (rax_12 s> *(arg1 + 0xac))
    sub_1405a4d70(&arg1[0x14])

memset(&arg1[0x14][r15], 0, sx.q(rbp_1) << 3)
sub_14194d740(arg1, arg13)
int64_t r14_1 = sx.q(arg1[0x18].d)

if ((arg1[0x1d].b & 1) != 0)
    rdi = 6

int32_t rdi_1 = rdi * *(arg1 + 0x34)
int32_t rax_14 = r14_1.d + rdi_1
arg1[0x18].d = rax_14

if (rax_14 s> *(arg1 + 0xc4))
    sub_1405a4f90(&arg1[0x17])

memset(&arg1[0x17][r14_1 * 2], 0, sx.q(rdi_1) << 4)
return arg1
