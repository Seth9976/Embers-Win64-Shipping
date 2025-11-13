// 函数: sub_141b42230
// 地址: 0x141b42230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
__builtin_memset(&arg1[4], 0, 0x28)
*arg1 = &data_143058898
arg1[9] = &data_142d9ab38
__builtin_memset(&arg1[0xa], 0, 0x12)
__builtin_memset(&arg1[0xd], 0, 0x30)
void* rcx = &arg1[0x13]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
return arg1
