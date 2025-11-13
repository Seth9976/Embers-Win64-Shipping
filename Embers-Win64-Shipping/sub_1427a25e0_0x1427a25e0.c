// 函数: sub_1427a25e0
// 地址: 0x1427a25e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *(arg3 + 0x28)
arg1[1] = *(arg3 + 0x30)
void* rax_1 = *(arg3 + 0x38)
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[3].b = *(arg3 + 0x40)
*(arg1 + 0x19) = *(arg3 + 0x41)
*(arg1 + 0x1a) = *(arg3 + 0x42)
return arg1
