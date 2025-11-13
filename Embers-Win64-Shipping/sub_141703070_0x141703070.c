// 函数: sub_141703070
// 地址: 0x141703070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x104
*arg1 = &data_142fc4a88
__builtin_memset(&arg1[2], 0, 0x28)
void* rcx = &arg1[7]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xd] = 0
arg1[0xe].d = 0
arg1[0xf] = 0
arg1[0x10] = 0
__builtin_memset(&arg1[0x12], 0, 0x20)
InitializeCriticalSection(&arg1[0x16])
SetCriticalSectionSpinCount(&arg1[0x16], 0xfa0)
return arg1
