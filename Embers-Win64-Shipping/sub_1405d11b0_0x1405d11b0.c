// 函数: sub_1405d11b0
// 地址: 0x1405d11b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
*arg1 = &data_142d549a8
*(arg1 + 0x10) = *arg2
*(arg1 + 0x20) = arg2[1]
*(arg1 + 0x30) = arg2[2]
*(arg1 + 0x40) = arg2[3]
*(arg1 + 0x50) = arg2[4]
*(arg1 + 0x60) = arg2[5]
*(arg1 + 0x70) = arg2[6]
*(arg1 + 0x80) = arg2[7]
*(arg1 + 0x90) = arg2[8]
*(arg1 + 0xa0) = arg2[9]
*(arg1 + 0xb0) = arg2[0xa]
*(arg1 + 0xc0) = arg2[0xb]
*(arg1 + 0xd0) = arg2[0xc]
arg1[0x1c] = arg2[0xd].q
arg1[0x1d].d = *(arg2 + 0xd8)
*(arg1 + 0xec) = *(arg2 + 0xdc)
arg1[0x1e].d = arg2[0xe].d
*(arg1 + 0xf4) = *(arg2 + 0xe4)
arg1[0x1f].d = *(arg2 + 0xe8)
*(arg1 + 0xfc) = *(arg2 + 0xec)
arg1[0x20].d = arg2[0xf].d
*(arg1 + 0x104) = *(arg2 + 0xf4)
arg1[0x21].d = *(arg2 + 0xf8)
*(arg1 + 0x10c) = *(arg2 + 0xfc)
arg1[0x22].d = arg2[0x10].d
*(arg1 + 0x114) = *(arg2 + 0x104)
void* rax_12 = *(arg2 + 0x108)
arg1[0x23] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

arg1[0x24].d = arg2[0x11].d
*(arg1 + 0x124) = *(arg2 + 0x114)
*(arg1 + 0x125) = *(arg2 + 0x115)
*(arg1 + 0x126) = *(arg2 + 0x116)
*(arg1 + 0x127) = *(arg2 + 0x117)
arg1[0x25].b = *(arg2 + 0x118)
*(arg1 + 0x129) = *(arg2 + 0x119)
arg1[0x26] = arg3
return arg1
