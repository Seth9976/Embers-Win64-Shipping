// 函数: sub_141a0f5f0
// 地址: 0x141a0f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a6b260(&arg1[1], 0x10)
uint32_t rdx_1 = (*arg1 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rcx_5 = neg.d(r8_1 + rdx_1) ^ r8_1 u>> 0xd
int32_t rdx_4 = (rdx_1 - r8_1 - rcx_5) ^ rcx_5 u>> 0xc
int32_t r8_4 = (r8_1 - rdx_4 - rcx_5) ^ rdx_4 << 0x10
int32_t rcx_8 = (rcx_5 - r8_4 - rdx_4) ^ r8_4 u>> 5
int32_t rdx_7 = (rdx_4 - r8_4 - rcx_8) ^ rcx_8 u>> 3
int32_t r8_7 = (r8_4 - rdx_7 - rcx_8) ^ rdx_7 << 0xa
int32_t rcx_13 = (((rcx_8 - r8_7 - rdx_7) ^ r8_7 u>> 0xf) - rax) ^ rax u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rcx_13 - rax) ^ rcx_13 << 8
int32_t r10_3 = (rax - r9_2 - rcx_13) ^ r9_2 u>> 0xd
int32_t rcx_16 = (rcx_13 - r9_2 - r10_3) ^ r10_3 u>> 0xc
int32_t r9_5 = (r9_2 - rcx_16 - r10_3) ^ rcx_16 << 0x10
int32_t r10_6 = (r10_3 - r9_5 - rcx_16) ^ r9_5 u>> 5
int32_t rcx_19 = (rcx_16 - r9_5 - r10_6) ^ r10_6 u>> 3
int32_t r9_8 = (r9_5 - rcx_19 - r10_6) ^ rcx_19 << 0xa
return zx.q(r10_6 - r9_8 - rcx_19) ^ zx.q(r9_8 u>> 0xf)
