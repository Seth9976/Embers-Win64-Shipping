// 函数: sub_141063ec0
// 地址: 0x141063ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x160)

if (rax != 0)
    rax = sub_14100a380(rax, arg1, 0, 0)

*(arg1 + 0x38) = rax
void*** rax_1 = j_sub_140a82f30(0x160)

if (rax_1 != 0)
    rax_1 = sub_14100a380(rax_1, arg1, 3, 1)

*(arg1 + 0x40) = rax_1
void*** rax_2 = j_sub_140a82f30(0x160)

if (rax_2 == 0)
    *(arg1 + 0x48) = 0
    return rax_2

void*** rax_3 = sub_14100a380(rax_2, arg1, 2, 2)
*(arg1 + 0x48) = rax_3
return rax_3
