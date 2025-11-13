// 函数: sub_141aeb420
// 地址: 0x141aeb420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x10].b &= 0xfc
void** rax = sub_140a82f30(0xf8, 8)
char rdx = arg1[0x10].b
void** r8 = rax
*arg1 = rax
rdx |= 1
arg1[0x10].b = rdx

if ((rdx & 2) != 0)
    r8 = arg1

*r8 = &data_142d4b9d8
void* rcx = &r8[0x17]
r8[1].b = *(arg2 + 8)
*r8 = &data_142d4ba68
r8[2].b = *(arg2 + 0x10)
*(r8 + 0x14) = *(arg2 + 0x14)
*r8 = &data_1430521c0
r8[4] = *(arg2 + 0x20)
r8[5] = 0
r8[5] = *(arg2 + 0x28)
*(arg2 + 0x28) = 0
r8[6].d = *(arg2 + 0x30)
*(r8 + 0x34) = *(arg2 + 0x34)
*(arg2 + 0x30) = 0
r8[7] = *(arg2 + 0x38)
r8[8] = *(arg2 + 0x40)
r8[9] = &data_143051e50
r8[0xa] = 0
r8[0xa] = *(arg2 + 0x50)
*(arg2 + 0x50) = 0
r8[0xb].d = *(arg2 + 0x58)
*(r8 + 0x5c) = *(arg2 + 0x5c)
*(arg2 + 0x58) = 0
*(r8 + 0x60) = *(arg2 + 0x60)
*(r8 + 0x70) = *(arg2 + 0x70)
r8[0x10] = *(arg2 + 0x80)
r8[0x11] = 0
r8[0x11] = *(arg2 + 0x88)
*(arg2 + 0x88) = 0
r8[0x12].d = *(arg2 + 0x90)
*(r8 + 0x94) = *(arg2 + 0x94)
*(arg2 + 0x90) = 0
__builtin_memset(&r8[0x13], 0, 0x20)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_16 = *(rcx + 0x10)

if (rax_16 != 0)
    rcx = rax_16

*rcx = 0
*(rcx + 8) = 0
r8[0x1b].d = 0xffffffff
*(r8 + 0xdc) = 0
r8[0x1d] = 0
r8[0x1e].d = 0
return arg1
