// 函数: sub_141a4fae0
// 地址: 0x141a4fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8_1 = arg2 u>> 0xd
int32_t r10_3 = ((arg1 u>> 0x20).d - arg2) ^ r8_1
int32_t rbx_2 = (arg1.d - arg2) ^ r8_1
int32_t r9_2 = (0x9e3779b9 - r10_3 - arg2) ^ r10_3 << 8
int32_t rcx_3 = (arg2 - r9_2 - r10_3) ^ r9_2 u>> 0xd
int32_t r10_6 = (r10_3 - r9_2 - rcx_3) ^ rcx_3 u>> 0xc
int32_t r9_5 = (r9_2 - r10_6 - rcx_3) ^ r10_6 << 0x10
int32_t rcx_6 = (rcx_3 - r9_5 - r10_6) ^ r9_5 u>> 5
int32_t r10_9 = (r10_6 - r9_5 - rcx_6) ^ rcx_6 u>> 3
int32_t r9_8 = (r9_5 - r10_9 - rcx_6) ^ r10_9 << 0xa
int32_t r11_2 = (0x9e3779b9 - rbx_2 - arg2) ^ rbx_2 << 8
int32_t rdx_2 = (arg2 - r11_2 - rbx_2) ^ r11_2 u>> 0xd
int32_t rbx_5 = (rbx_2 - r11_2 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r11_5 = (r11_2 - rbx_5 - rdx_2) ^ rbx_5 << 0x10
int32_t rdx_5 = (rdx_2 - r11_5 - rbx_5) ^ r11_5 u>> 5
int32_t rbx_8 = (rbx_5 - r11_5 - rdx_5) ^ rdx_5 u>> 3
int32_t r11_8 = (r11_5 - rbx_8 - rdx_5) ^ rbx_8 << 0xa
return (zx.q(rcx_6 - r9_8 - r10_9) << 0xf ^ (zx.q(r9_8) & 0xffffffffffff8000)) << 0x11
    | (zx.q(rdx_5 - r11_8 - rbx_8) ^ zx.q(r11_8) u>> 0xf)
