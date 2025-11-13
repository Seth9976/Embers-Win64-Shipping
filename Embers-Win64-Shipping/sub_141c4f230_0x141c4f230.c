// 函数: sub_141c4f230
// 地址: 0x141c4f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_14320aae0
InitializeCriticalSection(&arg1[5])
SetCriticalSectionSpinCount(&arg1[5], 0xfa0)
void* rcx_2 = &arg1[0xd]
arg1[0xb] = 0
arg1[0xc] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
arg1[0x11].d = 0xffffffff
*(arg1 + 0x8c) = 0
arg1[0x13] = 0
arg1[0x14].d = 0
return arg1
