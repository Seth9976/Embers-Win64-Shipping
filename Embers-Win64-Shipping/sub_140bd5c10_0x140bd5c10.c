// 函数: sub_140bd5c10
// 地址: 0x140bd5c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 0x11) = arg2 ^ 1
void* rdx = &arg1[5]
arg1[1] = 0
arg1[2].b = 0
*(arg1 + 0x12) = 0
arg1[3] = 0
arg1[4] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[9].d = 0xffffffff
*(arg1 + 0x4c) = 0
arg1[0xb] = 0
arg1[0xc].d = 0
arg1[0xd] = 0
arg1[0xe] = 0
void* rcx = &arg1[0xf]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
arg1[0x15] = 0
arg1[0x16].d = 0
return arg1
