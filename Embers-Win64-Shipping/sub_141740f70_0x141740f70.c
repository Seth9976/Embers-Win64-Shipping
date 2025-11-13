// 函数: sub_141740f70
// 地址: 0x141740f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b212b0(arg1 + 0x28, 0xc, 0)
int32_t r8_2 = (sub_141741af0(*(arg1 + 0x10)) - rax) ^ rax u>> 0xd
int32_t rdx_2 = (0x9e3779b9 - r8_2 - rax) ^ r8_2 << 8
int32_t rdi_3 = (rax - rdx_2 - r8_2) ^ rdx_2 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_2 - rdi_3) ^ rdi_3 u>> 0xc
int32_t rdx_5 = (rdx_2 - r8_5 - rdi_3) ^ r8_5 << 0x10
int32_t rdi_6 = (rdi_3 - rdx_5 - r8_5) ^ rdx_5 u>> 5
int32_t r8_8 = (r8_5 - rdx_5 - rdi_6) ^ rdi_6 u>> 3
int32_t rdx_8 = (rdx_5 - r8_8 - rdi_6) ^ r8_8 << 0xa
return zx.q(rdi_6 - rdx_8 - r8_8) ^ zx.q(rdx_8 u>> 0xf)
