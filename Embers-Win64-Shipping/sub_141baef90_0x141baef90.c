// 函数: sub_141baef90
// 地址: 0x141baef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = *(arg1 + 0x4e8)

if (rax_1 != 0)
    return sub_140f47c40(rax_1) __tailcall

float zmm2 = *(arg1 + 0x11c)
float zmm1 = *(arg1 + 0x120)

if (zmm2 != zmm1)
    return (*(arg1 + 0x108) - zmm2) / (zmm1 - zmm2)

return 1f
