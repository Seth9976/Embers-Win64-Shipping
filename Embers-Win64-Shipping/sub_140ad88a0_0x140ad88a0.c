// 函数: sub_140ad88a0
// 地址: 0x140ad88a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_140a6b260(&arg1[2], 0x10)
int32_t r9_2 = (sub_140a6b260(arg1, 0x10) - rax) ^ rax u>> 0xd
int32_t r8_2 = (0x9e3779b9 - r9_2 - rax) ^ r9_2 << 8
int32_t rsi_3 = (rax - r8_2 - r9_2) ^ r8_2 u>> 0xd
int32_t r9_5 = (r9_2 - r8_2 - rsi_3) ^ rsi_3 u>> 0xc
int32_t r8_5 = (r8_2 - r9_5 - rsi_3) ^ r9_5 << 0x10
int32_t rsi_6 = (rsi_3 - r8_5 - r9_5) ^ r8_5 u>> 5
int32_t r9_8 = (r9_5 - r8_5 - rsi_6) ^ rsi_6 u>> 3
int32_t r8_8 = (r8_5 - r9_8 - rsi_6) ^ r9_8 << 0xa
int32_t rsi_9 = (rsi_6 - r8_8 - r9_8) ^ r8_8 u>> 0xf
int32_t rdx_4 = (sub_140a6b260(&arg1[4], 0x10) - rsi_9) ^ rsi_9 u>> 0xd
int32_t rdi_2 = (0x9e3779b9 - rdx_4 - rsi_9) ^ rdx_4 << 8
int32_t rsi_12 = (rsi_9 - rdi_2 - rdx_4) ^ rdi_2 u>> 0xd
int32_t rdx_7 = (rdx_4 - rdi_2 - rsi_12) ^ rsi_12 u>> 0xc
int32_t rdi_5 = (rdi_2 - rdx_7 - rsi_12) ^ rdx_7 << 0x10
int32_t rsi_15 = (rsi_12 - rdi_5 - rdx_7) ^ rdi_5 u>> 5
int32_t rdx_10 = (rdx_7 - rdi_5 - rsi_15) ^ rsi_15 u>> 3
int32_t rdi_8 = (rdi_5 - rdx_10 - rsi_15) ^ rdx_10 << 0xa
return zx.q(rsi_15 - rdi_8 - rdx_10) ^ zx.q(rdi_8 u>> 0xf)
