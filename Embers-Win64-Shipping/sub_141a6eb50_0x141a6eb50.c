// 函数: sub_141a6eb50
// 地址: 0x141a6eb50
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
__builtin_memset(&arg1[0xa], 0, 0x40)
void* rcx = &arg1[0x12]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a].b = 2
*(arg1 + 0xd4) = 0
arg1[0x1b].b = 2
*(arg1 + 0xdc) = 0
arg1[0x1c].b = 2
*(arg1 + 0xe4) = 0
arg1[0x1d].b = 2
*(arg1 + 0xec) = 0
return arg1
