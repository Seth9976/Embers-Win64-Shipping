// 函数: sub_141b42750
// 地址: 0x141b42750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
__builtin_memset(&arg1[4], 0, 0x28)
*arg1 = &data_143058a28
arg1[9] = &data_143058528
__builtin_memset(&arg1[0xa], 0, 0x31)
__builtin_memset(&arg1[0x11], 0, 0x20)
void* rcx = &arg1[0x15]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x19].d = 0xffffffff
*(arg1 + 0xcc) = 0
arg1[0x1b] = 0
arg1[0x1c].d = 0
return arg1
