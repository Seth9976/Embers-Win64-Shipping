// 函数: sub_141d74f90
// 地址: 0x141d74f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
arg1[8].b = 0
void* rcx = &arg1[0x12]
arg1[0xa].w = 0
arg1[9] = 0
*(arg1 + 0x52) = 0
*arg1 = &data_143233598
__builtin_memset(&arg1[0xb], 0, 0x24)
arg1[0x10] = 0
arg1[0x11] = 0
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a] = 0
return arg1
