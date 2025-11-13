// 函数: sub_141740a30
// 地址: 0x141740a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_141741580(arg1 + 0x48)
int32_t rax_1 = sub_141741580(arg1 + 0x20)
int32_t zmm0 = *(arg1 + 0x64)
int32_t r9_2 = (rax_1 - rax) ^ rax u>> 0xd
int32_t r8_2 = (0x9e3779b9 - r9_2 - rax) ^ r9_2 << 8
int32_t rdi_3 = (rax - r8_2 - r9_2) ^ r8_2 u>> 0xd
int32_t r9_5 = (r9_2 - r8_2 - rdi_3) ^ rdi_3 u>> 0xc
int32_t r8_5 = (r8_2 - r9_5 - rdi_3) ^ r9_5 << 0x10
int32_t rdi_6 = (rdi_3 - r8_5 - r9_5) ^ r8_5 u>> 5
int32_t r9_8 = (r9_5 - r8_5 - rdi_6) ^ rdi_6 u>> 3
int32_t r8_8 = (r8_5 - r9_8 - rdi_6) ^ r9_8 << 0xa
int32_t rdx_4 = (*(arg1 + 0x60) - zmm0) ^ zmm0 u>> 0xd
int32_t rcx_6 = (0x9e3779b9 - rdx_4 - zmm0) ^ rdx_4 << 8
int32_t r10_3 = (zmm0 - rcx_6 - rdx_4) ^ rcx_6 u>> 0xd
int32_t rdx_7 = (rdx_4 - rcx_6 - r10_3) ^ r10_3 u>> 0xc
int32_t rcx_9 = (rcx_6 - rdx_7 - r10_3) ^ rdx_7 << 0x10
int32_t r10_6 = (r10_3 - rcx_9 - rdx_7) ^ rcx_9 u>> 5
int32_t rdx_10 = (rdx_7 - rcx_9 - r10_6) ^ r10_6 u>> 3
int32_t rcx_12 = (rcx_9 - rdx_10 - r10_6) ^ rdx_10 << 0xa
int32_t r10_9 = (r10_6 - rcx_12 - rdx_10) ^ rcx_12 u>> 0xf
int32_t rdi_11 = (((rdi_6 - r8_8 - r9_8) ^ r8_8 u>> 0xf) - r10_9) ^ r10_9 u>> 0xd
int32_t r11_2 = (0x9e3779b9 - rdi_11 - r10_9) ^ rdi_11 << 8
int32_t r10_12 = (r10_9 - r11_2 - rdi_11) ^ r11_2 u>> 0xd
int32_t rdi_14 = (rdi_11 - r11_2 - r10_12) ^ r10_12 u>> 0xc
int32_t r11_5 = (r11_2 - rdi_14 - r10_12) ^ rdi_14 << 0x10
int32_t r10_15 = (r10_12 - r11_5 - rdi_14) ^ r11_5 u>> 5
int32_t rdi_17 = (rdi_14 - r11_5 - r10_15) ^ r10_15 u>> 3
int32_t r11_8 = (r11_5 - rdi_17 - r10_15) ^ rdi_17 << 0xa
return zx.q(r10_15 - r11_8 - rdi_17) ^ zx.q(r11_8 u>> 0xf)
