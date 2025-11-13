// 函数: sub_141741640
// 地址: 0x141741640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b212b0(arg1 + 0x10, 0xc, 0)
int32_t zmm0 = *(arg1 + 0x1c)
int32_t r8_2 = (rax - zmm0) ^ zmm0 u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - zmm0) ^ r8_2 << 8
int32_t r9_3 = (zmm0 - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - r9_3 - rdx_2) ^ r9_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r9_3 - r8_5) ^ r8_5 << 0x10
int32_t r9_6 = (r9_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - r9_6 - rdx_5) ^ r9_6 u>> 3
int32_t rdx_8 = (rdx_5 - r9_6 - r8_8) ^ r8_8 << 0xa
return zx.q(r9_6 - rdx_8 - r8_8) ^ zx.q(rdx_8 u>> 0xf)
