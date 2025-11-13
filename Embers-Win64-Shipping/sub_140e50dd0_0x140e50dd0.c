// 函数: sub_140e50dd0
// 地址: 0x140e50dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d7f690
arg1[1].w = *(arg2 + 8)
*(arg1 + 0xa) = *(arg2 + 0xa)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2] = *(arg2 + 0x10)
*arg1 = &data_142d7f6a8
arg1[3] = *(arg2 + 0x18)
arg1[4] = *(arg2 + 0x20)
void* rax_6 = *(arg2 + 0x28)
arg1[5] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

arg1[6].d = *(arg2 + 0x30)
*(arg1 + 0x34) = *(arg2 + 0x34)
return arg1
