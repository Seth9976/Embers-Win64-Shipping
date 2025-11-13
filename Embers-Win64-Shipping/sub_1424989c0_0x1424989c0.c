// 函数: sub_1424989c0
// 地址: 0x1424989c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x110))()
int64_t rbx_1 = arg2[1]
uint32_t rcx_1 = (*arg2 u>> 4).d
int32_t r8_1 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
int32_t rdi_2 = neg.d(r8_1 + rcx_1) ^ r8_1 u>> 0xd
int32_t rcx_4 = (rcx_1 - r8_1 - rdi_2) ^ rdi_2 u>> 0xc
int32_t r8_4 = (r8_1 - rcx_4 - rdi_2) ^ rcx_4 << 0x10
int32_t rdi_5 = (rdi_2 - r8_4 - rcx_4) ^ r8_4 u>> 5
int32_t rcx_7 = (rcx_4 - r8_4 - rdi_5) ^ rdi_5 u>> 3
int32_t r8_7 = (r8_4 - rcx_7 - rdi_5) ^ rcx_7 << 0xa
int32_t rdi_8 = (rdi_5 - r8_7 - rcx_7) ^ r8_7 u>> 0xf
int32_t rdx_1 = ((rbx_1 u>> 0x20).d - rdi_8 + sub_140b5ead0(rbx_1.d)) ^ rdi_8 u>> 0xd
int32_t rsi_2 = (0x9e3779b9 - rdx_1 - rdi_8) ^ rdx_1 << 8
int32_t rdi_11 = (rdi_8 - rsi_2 - rdx_1) ^ rsi_2 u>> 0xd
int32_t rdx_4 = (rdx_1 - rsi_2 - rdi_11) ^ rdi_11 u>> 0xc
int32_t rsi_5 = (rsi_2 - rdx_4 - rdi_11) ^ rdx_4 << 0x10
int32_t rdi_14 = (rdi_11 - rsi_5 - rdx_4) ^ rsi_5 u>> 5
int32_t rdx_7 = (rdx_4 - rsi_5 - rdi_14) ^ rdi_14 u>> 3
int32_t rsi_8 = (rsi_5 - rdx_7 - rdi_14) ^ rdx_7 << 0xa
return zx.q(rdi_14 - rsi_8 - rdx_7) ^ zx.q(rsi_8 u>> 0xf)
