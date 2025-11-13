// 函数: sub_140743860
// 地址: 0x140743860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
arg1[3].d = 0
*(arg1 + 0x14) = 0xffffffff
*arg1 = &data_142d9aae0
arg1[2].b = 0
arg1[4] = 0
arg1[5] = data_14396f0d8
arg1[6].w = data_14396f0e0
*(arg1 + 0x32) = 0xffffffff
arg1[7] = 0
arg1[8] = 0
*arg1 = &data_142d9ac60
arg1[9] = &data_142d4c350
arg1[0xa].w = 0x404
__builtin_memset(&arg1[0xb], 0, 0x25)
__builtin_memset(&arg1[0x10], 0, 0x20)
void* rcx = &arg1[0x14]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
arg1[0x1c].d = 0xea60
*(arg1 + 0xe4) = 1
return arg1
