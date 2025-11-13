// 函数: sub_141a53450
// 地址: 0x141a53450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[2].d
int32_t r8_2 = (sub_140a6b260(arg1, 0x10) - rbx) ^ rbx u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - rbx) ^ r8_2 << 8
int32_t rbx_3 = (rbx - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rbx_3) ^ rbx_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rbx_3) ^ r8_5 << 0x10
int32_t rbx_6 = (rbx_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rbx_6) ^ rbx_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rbx_6) ^ r8_8 << 0xa
return zx.q(rbx_6 - rdx_8 - r8_8) ^ zx.q(rdx_8 u>> 0xf)
