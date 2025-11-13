// 函数: sub_140d3d5e0
// 地址: 0x140d3d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r9 = (arg1 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - r9) ^ r9 << 8
int32_t rdx_2 = neg.d(r8_1 + r9) ^ r8_1 u>> 0xd
int32_t r9_3 = (r9 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_3 - rdx_2) ^ r9_3 << 0x10
int32_t rdx_5 = (rdx_2 - r8_4 - r9_3) ^ r8_4 u>> 5
int32_t r9_6 = (r9_3 - r8_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_6 - rdx_5) ^ r9_6 << 0xa
return zx.q(rdx_5 - r8_7 - r9_6) ^ zx.q(r8_7 u>> 0xf)
