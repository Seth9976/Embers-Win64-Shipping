// 函数: sub_1423cf3a0
// 地址: 0x1423cf3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[3]
*arg1 = &data_14333f920
arg1[1] = 0
arg1[2] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[7].d = 0xffffffff
__builtin_memset(arg1 + 0x3c, 0, 0x24)
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
void* rcx_2 = &arg1[0x20]
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
arg1[0x1e] = 0
arg1[0x1f] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

int64_t rax_4 = 0

if (arg2 != 0)
    rax_4 = arg2

__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
arg1[0x28] = 0
arg1[0x29] = 0
arg1[0x2b] = rax_4
arg1[0x2a] = -1
return arg1
