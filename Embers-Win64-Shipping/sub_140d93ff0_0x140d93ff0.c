// 函数: sub_140d93ff0
// 地址: 0x140d93ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0xc) += 1

arg1[2] = *arg2
__builtin_memset(&arg1[3], 0, 0x80)
arg1[0x13].d = 0xffffffff
*(arg1 + 0x9c) = 0
*(arg1 + 0xa4) = 0
__builtin_memset(&arg1[0x15], 0, 0x31)
__builtin_memset(&arg1[0x1c], 0, 0x20)
arg1[0xe8] = 0
arg1[0xe9].d = 0
*(arg1 + 0x74c) = 0x32
arg1[0xee] = 0
arg1[0xef].d = 0
*(arg1 + 0x77c) = 4
arg1[0xf2] = 0
arg1[0xf3].d = 0
*(arg1 + 0x79c) = 4
*(arg1 + 0x7a4) = 0
void* rcx = *arg2
void arg_8

if (rcx != 0)
    arg1[0xf4] = *sub_140e173b0(rcx, &arg_8)
return arg1
