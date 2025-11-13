// 函数: sub_141a530a0
// 地址: 0x141a530a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = arg2[2].b & 0xfe
char rax_1 = (*(arg1 + 0x50)).b & 3

if (rax_1 != 3)
    arg2[2].b = r8 | 2
    return arg2

arg2[2].b = r8 | rax_1
*arg2 = &data_142d999e8
arg2[1].w = 0x100
return arg2
