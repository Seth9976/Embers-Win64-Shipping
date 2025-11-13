// 函数: sub_141c88e00
// 地址: 0x141c88e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x28)
*arg2 = *(r8 + 0x148)
void* rax_1 = *(r8 + 0x150)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

return arg2
