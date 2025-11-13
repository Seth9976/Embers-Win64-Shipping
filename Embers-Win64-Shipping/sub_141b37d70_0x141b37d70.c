// 函数: sub_141b37d70
// 地址: 0x141b37d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
*arg1 = &data_1430521c0
arg1[2].b = 0
__builtin_memset(&arg1[4], 0, 0x28)
arg1[9] = &data_143051e50
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc].d = data_143f2c8c4
*(arg1 + 0x64) = 1
__builtin_memset(&arg1[0xd], 0, 0x50)
void* rcx = &arg1[0x17]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
arg1[0x1b].d = 0xffffffff
*(arg1 + 0xdc) = 0
arg1[0x1d] = 0
arg1[0x1e].d = 0
return arg1
