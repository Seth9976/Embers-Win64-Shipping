// 函数: sub_140f03fd0
// 地址: 0x140f03fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x30)
*(arg2 + 8) = *(arg1 + 0x38)
void* rax_1 = *(arg1 + 0x40)
*(arg2 + 0x10) = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[0xc].b = *(arg1 + 0x48)
return arg2
