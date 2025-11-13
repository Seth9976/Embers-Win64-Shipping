// 函数: sub_14279cfc0
// 地址: 0x14279cfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
arg1[5].d = 0x64
void* rcx = &arg1[0x16]
*arg1 = &data_1434b4220
arg1[6] = 0
arg1[8] = 0
__builtin_memset(&arg1[0xf], 0, 0x38)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x1a].d = 0xffffffff
*(arg1 + 0xd4) = 0
arg1[0x1c] = 0
arg1[0x1d].d = 0
__builtin_memset(&arg1[0x1e], 0, 0x18)
return arg1
