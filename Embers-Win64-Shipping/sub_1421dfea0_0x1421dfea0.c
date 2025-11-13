// 函数: sub_1421dfea0
// 地址: 0x1421dfea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x68, 8)
*arg2 = rax
*rax = &data_1433027d8
*(rax + 8) = *(arg1 + 8)
*(rax + 0x18) = *(arg1 + 0x18)
*(rax + 0x28) = *(arg1 + 0x28)
*(rax + 0x38) = *(arg1 + 0x38)
*(rax + 0x48) = *(arg1 + 0x48)
int128_t zmm1 = *(arg1 + 0x58)
*rax = &data_1433027f8
*(rax + 0x58) = zmm1
return &rax[1]
