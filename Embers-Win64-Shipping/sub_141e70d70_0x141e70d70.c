// 函数: sub_141e70d70
// 地址: 0x141e70d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1 + 0x20
__builtin_memset(arg1, 0, 0x20)
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x40) = 0xffffffff
*(arg1 + 0x44) = 0
*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
__builtin_memset(arg1 + 0x60, 0, 0x38)
*(arg1 + 0x98) = 0xffffffff
*(arg1 + 0xa0) = 0
*(arg1 + 0xa8) = 0
void* rcx = arg1 + 0xb0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0xd0) = 0xffffffff
*(arg1 + 0xd4) = 0
*(arg1 + 0xe0) = 0
*(arg1 + 0xe8) = 0
InitializeCriticalSection(arg1 + 0xf0)
SetCriticalSectionSpinCount(arg1 + 0xf0, 0xfa0)
void* rcx_3 = arg1 + 0x138
*(arg1 + 0x118) = 0
*(arg1 + 0x11c) = 1
*(arg1 + 0x120) = -1
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_2 = *(rcx_3 + 0x10)

if (rax_2 != 0)
    rcx_3 = rax_2

*rcx_3 = 0
*(rcx_3 + 8) = 0
*(arg1 + 0x15c) = 0
*(arg1 + 0x158) = 0xffffffff
*(arg1 + 0x168) = 0
*(arg1 + 0x170) = 0
*(arg1 + 0x178) = 0
*(arg1 + 0x180) = 0
*(arg1 + 0x188) = 0
return arg1
