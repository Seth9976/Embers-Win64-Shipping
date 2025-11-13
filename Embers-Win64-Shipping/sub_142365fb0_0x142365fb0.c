// 函数: sub_142365fb0
// 地址: 0x142365fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx_2 = ((arg2 u>> 4).d - arg3) ^ arg3 u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rdx_2 - arg3) ^ rdx_2 << 8
int32_t r8_2 = (arg3 - r9_2 - rdx_2) ^ r9_2 u>> 0xd
int32_t rdx_5 = (rdx_2 - r9_2 - r8_2) ^ r8_2 u>> 0xc
int32_t r9_5 = (r9_2 - rdx_5 - r8_2) ^ rdx_5 << 0x10
int32_t r8_5 = (r8_2 - r9_5 - rdx_5) ^ r9_5 u>> 5
int32_t rdx_8 = (rdx_5 - r9_5 - r8_5) ^ r8_5 u>> 3
int32_t r9_8 = (r9_5 - rdx_8 - r8_5) ^ rdx_8 << 0xa
int32_t r8_8 = (r8_5 - r9_8 - rdx_8) ^ r9_8 u>> 0xf
int32_t rcx_2 = ((arg1 u>> 4).d - r8_8) ^ r8_8 u>> 0xd
int32_t r10_2 = (0x9e3779b9 - rcx_2 - r8_8) ^ rcx_2 << 8
int32_t r8_11 = (r8_8 - r10_2 - rcx_2) ^ r10_2 u>> 0xd
int32_t rcx_5 = (rcx_2 - r10_2 - r8_11) ^ r8_11 u>> 0xc
int32_t r10_5 = (r10_2 - rcx_5 - r8_11) ^ rcx_5 << 0x10
int32_t r8_14 = (r8_11 - r10_5 - rcx_5) ^ r10_5 u>> 5
int32_t rcx_8 = (rcx_5 - r10_5 - r8_14) ^ r8_14 u>> 3
int32_t r10_8 = (r10_5 - rcx_8 - r8_14) ^ rcx_8 << 0xa
return zx.q(r8_14 - r10_8 - rcx_8) ^ zx.q(r10_8) u>> 0xf
