// 函数: sub_14190ac40
// 地址: 0x14190ac40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x48, 8)
*arg2 = rax
*rax = &data_142ff5d68
*(rax + 8) = *(arg1 + 8)
*(rax + 0x18) = *(arg1 + 0x18)
*(rax + 0x28) = *(arg1 + 0x28)
int128_t zmm1 = *(arg1 + 0x38)
*rax = &data_142ff5d88
*(rax + 0x38) = zmm1
return &rax[1]
