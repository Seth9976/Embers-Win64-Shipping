// 函数: sub_142076e50
// 地址: 0x142076e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 4) = *(arg2 + 4)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
void* rax_3 = *(arg2 + 0x20)
*(arg1 + 0x20) = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

*(arg1 + 0x28) = *(arg2 + 0x28)
void* rax_5 = *(arg2 + 0x30)
*(arg1 + 0x30) = rax_5

if (rax_5 != 0)
    *(rax_5 + 8) += 1

*(arg1 + 0x38) = *(arg2 + 0x38)
void* rax_7 = *(arg2 + 0x40)
*(arg1 + 0x40) = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

return arg1
