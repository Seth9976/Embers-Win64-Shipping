// 函数: sub_141a3d100
// 地址: 0x141a3d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10_1 = (arg3 u>> 0x20).d
uint32_t r9_3 = ((arg2 u>> 0x20).d - r10_1) ^ r10_1 u>> 0xd
int32_t rcx_2 = (0x9e3779b9 - r9_3 - r10_1) ^ r9_3 << 8
int32_t r10_4 = (r10_1 - rcx_2 - r9_3) ^ rcx_2 u>> 0xd
int32_t r9_6 = (r9_3 - rcx_2 - r10_4) ^ r10_4 u>> 0xc
int32_t rcx_5 = (rcx_2 - r9_6 - r10_4) ^ r9_6 << 0x10
int32_t r10_7 = (r10_4 - rcx_5 - r9_6) ^ rcx_5 u>> 5
int32_t r9_9 = (r9_6 - rcx_5 - r10_7) ^ r10_7 u>> 3
int32_t rcx_8 = (rcx_5 - r9_9 - r10_7) ^ r9_9 << 0xa
int32_t rdx_1 = (arg2.d - arg3.d) ^ arg3.d u>> 0xd
int32_t r11_2 = (0x9e3779b9 - rdx_1 - arg3.d) ^ rdx_1 << 8
int32_t r8_2 = (arg3.d - r11_2 - rdx_1) ^ r11_2 u>> 0xd
int32_t rdx_4 = (rdx_1 - r11_2 - r8_2) ^ r8_2 u>> 0xc
int32_t r11_5 = (r11_2 - rdx_4 - r8_2) ^ rdx_4 << 0x10
int32_t r8_5 = (r8_2 - r11_5 - rdx_4) ^ r11_5 u>> 5
int32_t rdx_7 = (rdx_4 - r11_5 - r8_5) ^ r8_5 u>> 3
int32_t r11_8 = (r11_5 - rdx_7 - r8_5) ^ rdx_7 << 0xa
*arg1 = (zx.q(r10_7 - rcx_8 - r9_9) << 0xf ^ (zx.q(rcx_8) & 0xffffffffffff8000)) << 0x11
    | (zx.q(r8_5 - r11_8 - rdx_7) ^ zx.q(r11_8) u>> 0xf)
return arg1
