// 函数: sub_141b379a0
// 地址: 0x141b379a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
*arg1 = &data_1430512b8
arg1[2].b = 0
arg1[4].d = data_143f2c8c4
*(arg1 + 0x24) = 1
arg1[5] = 0
arg1[6] = 0
arg1[7] = &data_142d4c350
arg1[8].w = 0x404
__builtin_memset(&arg1[9], 0, 0x25)
__builtin_memset(&arg1[0xe], 0, 0x20)
void* rcx = &arg1[0x12]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x16].d = 0xffffffff
*(arg1 + 0xb4) = 0
arg1[0x18] = 0
arg1[0x19].d = 0
arg1[0x1a].d = 0xea60
*(arg1 + 0xd4) = 1
*(arg1 + 0xdc) &= 0xfffffff8
arg1[0x1b].w = 0
return arg1
