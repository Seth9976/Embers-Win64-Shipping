// 函数: sub_1417047d0
// 地址: 0x1417047d0
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
*(arg1 + 0x60) = 0
*(arg1 + 0x68) = 0
void* rcx = arg1 + 0x70
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = arg1 + 0xc8
*(arg1 + 0x90) = 0xffffffff
*(arg1 + 0x94) = 0
*(arg1 + 0xa0) = 0
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0
*(arg1 + 0xb8) = 0
*(arg1 + 0xc0) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
*(arg1 + 0xe8) = 0xffffffff
*(arg1 + 0xec) = 0
*(arg1 + 0xf8) = 0
*(arg1 + 0x100) = 0
return arg1
