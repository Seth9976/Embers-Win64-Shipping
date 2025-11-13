// 函数: sub_140a60990
// 地址: 0x140a60990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
__builtin_memset(&arg1[1], 0, 0x40)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x13]
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x11] = 0
arg1[0x12] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x1e]
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x29]
arg1[0x22].d = 0xffffffff
*(arg1 + 0x114) = 0
arg1[0x24] = 0
arg1[0x25].d = 0
arg1[0x27] = 0
arg1[0x28] = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

__builtin_memset(rcx_3, 0, 0x1c)
void* rcx_4 = &arg1[0x33]
arg1[0x2d].d = 0xffffffff
*(arg1 + 0x16c) = 0
arg1[0x2f] = 0
arg1[0x30].d = 0
arg1[0x31] = 0
arg1[0x32] = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_4 = *(rcx_4 + 0x10)

if (rax_4 != 0)
    rcx_4 = rax_4

__builtin_memset(rcx_4, 0, 0x1c)
arg1[0x37].d = 0xffffffff
*(arg1 + 0x1bc) = 0
void* rcx_5 = &arg1[0x3d]
arg1[0x39] = 0
arg1[0x3a].d = 0
arg1[0x3b] = 0
arg1[0x3c] = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_5 = *(rcx_5 + 0x10)

if (rax_5 != 0)
    rcx_5 = rax_5

__builtin_memset(rcx_5, 0, 0x1c)
arg1[0x41].d = 0xffffffff
*(arg1 + 0x20c) = 0
arg1[0x43] = 0
arg1[0x44].d = 0
InitializeCriticalSection(&arg1[0x45])
SetCriticalSectionSpinCount(&arg1[0x45], 0xfa0)
arg1[0x4a] = 0
InitializeCriticalSection(&arg1[0x4b])
SetCriticalSectionSpinCount(&arg1[0x4b], 0xfa0)
void* rcx_10 = &arg1[0x54]
__builtin_memset(&arg1[0x50], 0, 0x20)
*(rcx_10 + 0x10) = 0
*(rcx_10 + 0x18) = 0
*(rcx_10 + 0x1c) = 0x80
void* rax_6 = *(rcx_10 + 0x10)

if (rax_6 != 0)
    rcx_10 = rax_6

*rcx_10 = 0
*(rcx_10 + 8) = 0
*(arg1 + 0x2c4) = 0
arg1[0x58].d = 0xffffffff
arg1[0x5a] = 0
arg1[0x5b].d = 0
return arg1
