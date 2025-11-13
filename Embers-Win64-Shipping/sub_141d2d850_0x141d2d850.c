// 函数: sub_141d2d850
// 地址: 0x141d2d850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].d = 3
*arg1 = &data_143222548
arg1[3] = arg2
arg1[1] = 0
InitializeCriticalSection(&arg1[4])
SetCriticalSectionSpinCount(&arg1[4], 0xfa0)
void* rcx_2 = &arg1[0xb]
arg1[9] = 0
arg1[0xa] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
*(arg1 + 0x7c) = 0
arg1[0xf].d = 0xffffffff
arg1[0x11] = 0
arg1[0x12].d = 0
return arg1
