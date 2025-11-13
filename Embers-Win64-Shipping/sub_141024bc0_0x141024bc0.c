// 函数: sub_141024bc0
// 地址: 0x141024bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = (arg1 - arg2) ^ arg2 u>> 0xd
int32_t r8_2 = (0x9e3779b9 - rcx - arg2) ^ rcx << 8
int32_t rdx_2 = (arg2 - r8_2 - rcx) ^ r8_2 u>> 0xd
int32_t rcx_3 = (rcx - r8_2 - rdx_2) ^ rdx_2 u>> 0xc
int32_t r8_5 = (r8_2 - rcx_3 - rdx_2) ^ rcx_3 << 0x10
int32_t rdx_5 = (rdx_2 - r8_5 - rcx_3) ^ r8_5 u>> 5
int32_t rcx_6 = (rcx_3 - r8_5 - rdx_5) ^ rdx_5 u>> 3
int32_t r8_8 = (r8_5 - rcx_6 - rdx_5) ^ rcx_6 << 0xa
return zx.q(rdx_5 - r8_8 - rcx_6) ^ zx.q(r8_8 u>> 0xf)
