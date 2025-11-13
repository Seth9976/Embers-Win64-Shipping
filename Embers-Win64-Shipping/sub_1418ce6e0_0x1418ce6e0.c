// 函数: sub_1418ce6e0
// 地址: 0x1418ce6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[2]
*arg1 = 0
arg1[1] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
void* rcx = &arg1[0xc]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x16]
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14] = 0
arg1[0x15] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
arg1[0x1e].d = 0
arg1[0x20] = 0
arg1[0x21] = 0
arg1[0x23] = 0
arg1[0x24] = 0
arg1[0x26] = 0
arg1[0x27] = 0
arg1[0x29] = 0
arg1[0x2a] = 0
arg1[0x2c] = 0
arg1[0x2d] = 0
arg1[0x2f] = 0
arg1[0x30] = 0
arg1[0x32] = 0
arg1[0x33] = 0
arg1[0x35] = 0
arg1[0x36] = 0
sub_1418ec6f0(&arg1[0x1e])
arg1[0x38].b = 0
arg1[0x39] = 0
arg1[0x3a] = 0
InitializeCriticalSection(&arg1[0x3b])
SetCriticalSectionSpinCount(&arg1[0x3b], 0xfa0)
return arg1
