// 函数: sub_140d04de0
// 地址: 0x140d04de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = (*arg2 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r8) ^ r8 << 8
int32_t rdx_2 = neg.d(r9_1 + r8) ^ r9_1 u>> 0xd
int32_t r8_3 = (r8 - r9_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r8_3 - rdx_2) ^ r8_3 << 0x10
int32_t rdx_5 = (rdx_2 - r9_4 - r8_3) ^ r9_4 u>> 5
int32_t r8_6 = (r8_3 - r9_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r9_7 = (r9_4 - r8_6 - rdx_5) ^ r8_6 << 0xa
return zx.q(rdx_5 - r9_7 - r8_6) ^ zx.q(r9_7 u>> 0xf)
