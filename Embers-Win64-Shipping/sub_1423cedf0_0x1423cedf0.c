// 函数: sub_1423cedf0
// 地址: 0x1423cedf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0x100
*arg1 = &data_142e60598
arg1[2] = 0
arg1[3] = 0
arg1[4].b = 7
InitializeCriticalSection(&arg1[5])
SetCriticalSectionSpinCount(&arg1[5], 0xfa0)
void* rcx_2 = &arg1[0xc]
*arg1 = &data_14333f888
arg1[0xa] = 0
arg1[0xb] = 0
*(rcx_2 + 0x10) = 0
*(rcx_2 + 0x18) = 0
*(rcx_2 + 0x1c) = 0x80
void* rax = *(rcx_2 + 0x10)

if (rax != 0)
    rcx_2 = rax

*rcx_2 = 0
*(rcx_2 + 8) = 0
*(arg1 + 0x84) = 0
arg1[0x10].d = 0xffffffff
arg1[0x12] = 0
arg1[0x13].d = 0
arg1[0x14] = 0
return arg1
