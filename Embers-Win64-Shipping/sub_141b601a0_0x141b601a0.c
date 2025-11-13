// 函数: sub_141b601a0
// 地址: 0x141b601a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140b212b0(arg1 + 8, 8, 0)
int32_t r10 = *(arg1 + 0x10)
int32_t r8_2 = (rax - r10) ^ r10 u>> 0xd
int32_t rdx_4 = (0x9e3779b9 - r8_2 - r10) ^ r8_2 << 8
int32_t r10_3 = (r10 - rdx_4 - r8_2) ^ rdx_4 u>> 0xd
int32_t r8_5 = (r8_2 - rdx_4 - r10_3) ^ r10_3 u>> 0xc
int32_t rdx_7 = (rdx_4 - r8_5 - r10_3) ^ r8_5 << 0x10
int32_t r10_6 = (r10_3 - rdx_7 - r8_5) ^ rdx_7 u>> 5
int32_t r8_8 = (r8_5 - rdx_7 - r10_6) ^ r10_6 u>> 3
int32_t rdx_10 = (rdx_7 - r8_8 - r10_6) ^ r8_8 << 0xa
int32_t r10_9 = (r10_6 - rdx_10 - r8_8) ^ rdx_10 u>> 0xf
int32_t rdx_15 = ((*(arg1 + 4) ^ *arg1) - r10_9) ^ r10_9 u>> 0xd
int32_t r9_2 = (0x9e3779b9 - rdx_15 - r10_9) ^ rdx_15 << 8
int32_t r10_12 = (r10_9 - r9_2 - rdx_15) ^ r9_2 u>> 0xd
int32_t rdx_18 = (rdx_15 - r9_2 - r10_12) ^ r10_12 u>> 0xc
int32_t r9_5 = (r9_2 - rdx_18 - r10_12) ^ rdx_18 << 0x10
int32_t r10_15 = (r10_12 - r9_5 - rdx_18) ^ r9_5 u>> 5
int32_t rdx_21 = (rdx_18 - r9_5 - r10_15) ^ r10_15 u>> 3
int32_t r9_8 = (r9_5 - rdx_21 - r10_15) ^ rdx_21 << 0xa
return zx.q(r10_15 - r9_8 - rdx_21) ^ zx.q(r9_8 u>> 0xf)
