// 函数: sub_141b3c500
// 地址: 0x141b3c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
arg1[4] = 0
arg1[5] = 0
arg1[6].d &= 0xfffffffc
*arg1 = &data_143054b88
arg1[7] = &data_1430541c8
__builtin_memset(&arg1[8], 0, 0x40)
void* rcx = arg1 + 0x80
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

__builtin_memset(rcx, 0, 0x1c)
arg1[0x14].d = 0xffffffff
*(arg1 + 0xa4) = 0
arg1[0x16] = 0
arg1[0x17].d = 0
return arg1
