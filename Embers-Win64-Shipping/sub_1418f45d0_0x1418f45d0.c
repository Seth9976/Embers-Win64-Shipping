// 函数: sub_1418f45d0
// 地址: 0x1418f45d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1 + 0x50
*(arg1 + 0x40) = 0
*(arg1 + 0x48) = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
*(arg1 + 0x74) = 0
*(arg1 + 0x70) = 0xffffffff
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x98) = 0
void* rcx = arg1 + 0xa0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
*(arg1 + 0xc4) = 0
*(arg1 + 0xc0) = 0xffffffff
*(arg1 + 0xd0) = 0
*(arg1 + 0xd8) = 0
*(arg1 + 0x1a0) = 0
__builtin_memset(arg1, 0, 0x3c)
memset(arg1 + 0x1a4, 0, 0x100)
memset(arg1 + 0xe0, 0, 0xc0)
return arg1
