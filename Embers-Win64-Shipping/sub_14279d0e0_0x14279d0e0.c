// 函数: sub_14279d0e0
// 地址: 0x14279d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
arg1[5].d = 0x64
void* rcx = &arg1[0xa]
*arg1 = &data_1434b44e8
__builtin_memset(&arg1[6], 0, 0x20)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
arg1[0x12] = 0
return arg1
