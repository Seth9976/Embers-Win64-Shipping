// 函数: sub_140e51390
// 地址: 0x140e51390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d7f690
arg1[1].w = *(arg2 + 8)
*(arg1 + 0xa) = *(arg2 + 0xa)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = *(arg2 + 0x10)
*arg1 = &data_142ecfd88
arg1[3] = *(arg2 + 0x18)
arg1[4] = *(arg2 + 0x20)
arg1[5] = *(arg2 + 0x28)
arg1[6] = *(arg2 + 0x30)
arg1[7] = *(arg2 + 0x38)
arg1[8] = *(arg2 + 0x40)
void* rax_7 = *(arg2 + 0x48)
arg1[9] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

arg1[0xa].d = *(arg2 + 0x50)
*(arg1 + 0x54) = *(arg2 + 0x54)
arg1[0xb].d = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
*(arg1 + 0x5d) = *(arg2 + 0x5d)
arg1[0xc] = *(arg2 + 0x60)
arg1[0xd].b = *(arg2 + 0x68)
*(arg1 + 0x69) = *(arg2 + 0x69)
*(arg1 + 0x6a) = *(arg2 + 0x6a)
return arg1
