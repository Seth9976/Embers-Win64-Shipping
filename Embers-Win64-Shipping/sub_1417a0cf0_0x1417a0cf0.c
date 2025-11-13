// 函数: sub_1417a0cf0
// 地址: 0x1417a0cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[1] = arg3
void* rdx = &arg1[4]
arg1[2] = 0
arg1[3] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xc] = 0
arg1[0xd] = 0
void* rcx = &arg1[0xe]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x12].d = 0xffffffff
*(arg1 + 0x94) = 0
arg1[0x14] = 0
arg1[0x15].d = 0
InitializeSRWLock(&arg1[0x16])
void* rcx_2 = &arg1[0x1a]
arg1[0x17] = &data_142fc9000
arg1[0x18] = 0
arg1[0x19] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

*rcx_2 = 0
*(rcx_2 + 8) = 0
void* rcx_3 = &arg1[0x24]
arg1[0x1e].d = 0xffffffff
*(arg1 + 0xf4) = 0
arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = 0
arg1[0x23] = 0
*(rcx_3 + 0x10) = 0
*(rcx_3 + 0x18) = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_3 = *(rcx_3 + 0x10)

if (rax_3 != 0)
    rcx_3 = rax_3

*rcx_3 = 0
*(rcx_3 + 8) = 0
void* rcx_4 = &arg1[0x30]
arg1[0x28].d = 0xffffffff
*(arg1 + 0x144) = 0
arg1[0x2a] = 0
arg1[0x2b].d = 0
__builtin_memset(&arg1[0x2c], 0, 0x20)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_4 = *(rcx_4 + 0x10)

if (rax_4 != 0)
    rcx_4 = rax_4

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x34].d = 0xffffffff
void* rcx_5 = &arg1[0x3a]
*(arg1 + 0x1a4) = 0
arg1[0x36] = 0
arg1[0x37].d = 0
arg1[0x38] = 0
arg1[0x39] = 0
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_5 = *(rcx_5 + 0x10)

if (rax_5 != 0)
    rcx_5 = rax_5

*rcx_5 = 0
*(rcx_5 + 8) = 0
arg1[0x3e].d = 0xffffffff
*(arg1 + 0x1f4) = 0
arg1[0x40] = 0
arg1[0x41].d = 0
arg1[0x42].w = 1
arg1[0x43] = 0
arg1[0x44] = 0
arg1[0x45].d = 0x3f800000
*(arg1 + 0x22c) = 1
return arg1
