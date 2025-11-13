// 函数: sub_1409a9e60
// 地址: 0x1409a9e60
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
__builtin_memset(arg1 + 0x34, 0, 0x14)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x10]
arg1[0xd].d = 0xffffffff
__builtin_memset(arg1 + 0x6c, 0, 0x14)
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x17]
arg1[0x14].d = 0xffffffff
__builtin_memset(arg1 + 0xa4, 0, 0x14)
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x1e]
arg1[0x1b].d = 0xffffffff
__builtin_memset(arg1 + 0xdc, 0, 0x14)
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

__builtin_memset(rcx_3, 0, 0x1c)
void* rcx_4 = &arg1[0x25]
arg1[0x22].d = 0xffffffff
__builtin_memset(arg1 + 0x114, 0, 0x14)
*(rcx_4 + 0x1c) = 0x80
void* rax_5 = *(rcx_4 + 0x10)

if (rax_5 != 0)
    rcx_4 = rax_5

__builtin_memset(rcx_4, 0, 0x1c)
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
return arg1
