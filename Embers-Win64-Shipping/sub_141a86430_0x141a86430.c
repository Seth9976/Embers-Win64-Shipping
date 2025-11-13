// 函数: sub_141a86430
// 地址: 0x141a86430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    (**rcx)(rcx, 1)
    *(arg1 + 8) = 0

void*** rax_2 = j_sub_140a82f30(0x40)

if (rax_2 == 0)
    *(arg1 + 8) = 0
    return rax_2

*rax_2 = &data_14303cc60
rax_2[1].w = *(arg2 + 8)
*(rax_2 + 0xa) = *(arg2 + 0xa)
*rax_2 = &data_14303cda0
*(rax_2 + 0x10) = *(arg2 + 0x10)
*(rax_2 + 0x20) = *(arg2 + 0x20)
rax_2[6].b = *(arg2 + 0x30)
*(rax_2 + 0x34) = *(arg2 + 0x34)
int32_t rax_4 = *(arg2 + 0x3c)
*(rax_2 + 0x3c) = rax_4
*(arg1 + 8) = rax_2
return rax_4
