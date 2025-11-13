// 函数: sub_142350a40
// 地址: 0x142350a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x31) = 2
void* rdx = &arg1[9]
void* rcx = &arg1[0x13]
*arg1 = &data_14332c060
arg1[7] = 0
arg1[8] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x11] = 0
arg1[0x12] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
*(arg1 + 0xdc) &= 0xfffffffe
arg1[0x1b].d = 0x10
arg1[0x1c].b = 3
*(arg1 + 0xec) &= 0xfffffffe
*(arg1 + 0xe4) = 0x3f800000
arg1[0x1d].d = 0x3c23d70a
arg1[0x1e] = 0x3f000000
*(arg1 + 0x104) = 0x3f800000
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x25] = 0
arg1[0x26] = 0
__builtin_memset(&arg1[0x28], 0, 0x20)
return arg1
