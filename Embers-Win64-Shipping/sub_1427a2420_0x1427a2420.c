// 函数: sub_1427a2420
// 地址: 0x1427a2420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(arg3 + 0x68)
arg1[1] = *(arg3 + 0x70)
void* rax_1 = *(arg3 + 0x78)
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].b = *(arg3 + 0x80)
*(arg1 + 0x19) = *(arg3 + 0x81)
*(arg1 + 0x1a) = *(arg3 + 0x82)
return arg1
