// 函数: sub_142670e80
// 地址: 0x142670e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xf] & 0xffffffc2
*arg1 = 0x400
arg1[1] = 0x447a0000
arg1[0xf] = rax | 2
arg1[2] = 0x41980000
arg1[3] = 0x41200000
arg1[4] = 0x42080000
arg1[5] = 0x43100000
arg1[6] = 0x42300000
*(arg1 + 0x1c) = 0x420c0000
arg1[9] = 0x43c80000
arg1[0xa] = 0x3fa66666
arg1[0xb] = 0x100000
arg1[0xc].w = 0x101
arg1[0xd] = 2
arg1[0xe] = 2
return arg1
