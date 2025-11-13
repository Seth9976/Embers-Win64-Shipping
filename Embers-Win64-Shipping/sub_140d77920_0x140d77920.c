// 函数: sub_140d77920
// 地址: 0x140d77920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x38, 8)
*arg2 = rax
*rax = &data_142ec1788
*(rax + 8) = *(arg1 + 8)
*(rax + 0x18) = *(arg1 + 0x18)
int128_t zmm0 = *(arg1 + 0x28)
*rax = &data_142ec17a8
*(rax + 0x28) = zmm0
return &rax[1]
