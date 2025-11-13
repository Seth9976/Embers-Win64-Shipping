// 函数: sub_141260e50
// 地址: 0x141260e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r11 = (arg1 u>> 4).d
uint32_t r9_1 = (arg2 u>> 4).d
int32_t r10_1 = (0x9e3779b9 - r11) ^ r11 << 8
int32_t rdx_2 = neg.d(r10_1 + r11) ^ r10_1 u>> 0xd
int32_t r11_3 = (r11 - r10_1 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r10_4 = (r10_1 - r11_3 - rdx_2) ^ r11_3 << 0x10
int32_t rdx_5 = (rdx_2 - r10_4 - r11_3) ^ r10_4 u>> 5
int32_t r11_6 = (r11_3 - r10_4 - rdx_5) ^ rdx_5 u>> 3
int32_t r10_7 = (r10_4 - r11_6 - rdx_5) ^ r11_6 << 0xa
int32_t r8_1 = (0x9e3779b9 - r9_1) ^ r9_1 << 8
int32_t rcx_2 = neg.d(r8_1 + r9_1) ^ r8_1 u>> 0xd
int32_t r9_4 = (r9_1 - r8_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r8_4 = (r8_1 - r9_4 - rcx_2) ^ r9_4 << 0x10
int32_t rcx_5 = (rcx_2 - r8_4 - r9_4) ^ r8_4 u>> 5
int32_t r9_7 = (r9_4 - r8_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r8_7 = (r8_4 - r9_7 - rcx_5) ^ r9_7 << 0xa
return (zx.q(rcx_5 - r8_7 - r9_7) << 0xf ^ (zx.q(r8_7) & 0xffffffffffff8000)) << 0x11
    | (zx.q(rdx_5 - r10_7 - r11_6) ^ zx.q(r10_7) u>> 0xf)
