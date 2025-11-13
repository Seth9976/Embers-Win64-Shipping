// 函数: sub_141f8bbb0
// 地址: 0x141f8bbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = (arg1[1] u>> 4).d
uint32_t rdx_1 = (*arg1 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r8_1) ^ r8_1 << 8
int32_t r11_2 = neg.d(r9_1 + r8_1) ^ r9_1 u>> 0xd
int32_t r8_4 = (r8_1 - r9_1 - r11_2) ^ r11_2 u>> 0xc
int32_t r9_4 = (r9_1 - r8_4 - r11_2) ^ r8_4 << 0x10
int32_t r11_5 = (r11_2 - r9_4 - r8_4) ^ r9_4 u>> 5
int32_t r8_7 = (r8_4 - r9_4 - r11_5) ^ r11_5 u>> 3
int32_t r9_7 = (r9_4 - r8_7 - r11_5) ^ r8_7 << 0xa
int32_t rcx_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t r11_8 = (r11_5 - r9_7 - r8_7) ^ r9_7 u>> 0xf
int32_t r10_2 = neg.d(rcx_1 + rdx_1) ^ rcx_1 u>> 0xd
int32_t rdx_4 = (rdx_1 - rcx_1 - r10_2) ^ r10_2 u>> 0xc
int32_t rcx_4 = (rcx_1 - rdx_4 - r10_2) ^ rdx_4 << 0x10
int32_t r10_5 = (r10_2 - rcx_4 - rdx_4) ^ rcx_4 u>> 5
int32_t rdx_7 = (rdx_4 - rcx_4 - r10_5) ^ r10_5 u>> 3
int32_t rcx_7 = (rcx_4 - rdx_7 - r10_5) ^ rdx_7 << 0xa
int32_t r10_10 = (((r10_5 - rcx_7 - rdx_7) ^ rcx_7 u>> 0xf) - r11_8) ^ r11_8 u>> 0xd
int32_t rbx_2 = (0x9e3779b9 - r10_10 - r11_8) ^ r10_10 << 8
int32_t r11_11 = (r11_8 - rbx_2 - r10_10) ^ rbx_2 u>> 0xd
int32_t r10_13 = (r10_10 - rbx_2 - r11_11) ^ r11_11 u>> 0xc
int32_t rbx_5 = (rbx_2 - r10_13 - r11_11) ^ r10_13 << 0x10
int32_t r11_14 = (r11_11 - rbx_5 - r10_13) ^ rbx_5 u>> 5
int32_t r10_16 = (r10_13 - rbx_5 - r11_14) ^ r11_14 u>> 3
int32_t rbx_8 = (rbx_5 - r10_16 - r11_14) ^ r10_16 << 0xa
return zx.q(r11_14 - rbx_8 - r10_16) ^ zx.q(rbx_8 u>> 0xf)
