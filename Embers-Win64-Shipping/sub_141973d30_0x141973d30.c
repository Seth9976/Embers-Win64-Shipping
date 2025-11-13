// 函数: sub_141973d30
// 地址: 0x141973d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r10_1 = (*arg1 u>> 4).d
uint32_t r13_1 = (arg1[1] u>> 4).d
int32_t arg_8 = 0x9e3779b9
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t r8_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - r8_2) ^ r8_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - r8_2) ^ r10_4 << 0x10
int32_t r8_5 = (r8_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - r8_5) ^ r8_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - r8_5) ^ r10_7 << 0xa
int32_t r12_1 = (0x9e3779b9 - r13_1) ^ r13_1 << 8
int32_t r15_2 = neg.d(r12_1 + r13_1) ^ r12_1 u>> 0xd
int32_t r13_4 = (r13_1 - r12_1 - r15_2) ^ r15_2 u>> 0xc
int32_t r12_4 = (r12_1 - r13_4 - r15_2) ^ r13_4 << 0x10
int32_t r15_5 = (r15_2 - r12_4 - r13_4) ^ r12_4 u>> 5
int32_t r13_7 = (r13_4 - r12_4 - r15_5) ^ r15_5 u>> 3
int32_t r12_7 = (r12_4 - r13_7 - r15_5) ^ r13_7 << 0xa
uint32_t rbp_1 = (arg1[2] u>> 4).d
int32_t r14_1 = (0x9e3779b9 - rbp_1) ^ rbp_1 << 8
uint32_t rdi_1 = (arg1[3] u>> 4).d
uint32_t r10_9 = (arg1[4] u>> 4).d
int32_t rsi_2 = neg.d(r14_1 + rbp_1) ^ r14_1 u>> 0xd
int32_t rbp_4 = (rbp_1 - r14_1 - rsi_2) ^ rsi_2 u>> 0xc
int32_t r14_4 = (r14_1 - rbp_4 - rsi_2) ^ rbp_4 << 0x10
int32_t rsi_5 = (rsi_2 - r14_4 - rbp_4) ^ r14_4 u>> 5
int32_t rbp_7 = (rbp_4 - r14_4 - rsi_5) ^ rsi_5 u>> 3
int32_t r14_7 = (r14_4 - rbp_7 - rsi_5) ^ rbp_7 << 0xa
int32_t rbx_1 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
int32_t r11_2 = neg.d(rbx_1 + rdi_1) ^ rbx_1 u>> 0xd
int32_t rdi_4 = (rdi_1 - rbx_1 - r11_2) ^ r11_2 u>> 0xc
int32_t rbx_4 = (rbx_1 - rdi_4 - r11_2) ^ rdi_4 << 0x10
int32_t r11_5 = (r11_2 - rbx_4 - rdi_4) ^ rbx_4 u>> 5
int32_t rdi_7 = (rdi_4 - rbx_4 - r11_5) ^ r11_5 u>> 3
int32_t rbx_7 = (rbx_4 - rdi_7 - r11_5) ^ rdi_7 << 0xa
int32_t r9_9 = (0x9e3779b9 - r10_9) ^ r10_9 << 8
int32_t r8_8 = neg.d(r9_9 + r10_9) ^ r9_9 u>> 0xd
uint32_t rdx_1 = (arg1[5] u>> 4).d
int32_t r10_12 = (r10_9 - r9_9 - r8_8) ^ r8_8 u>> 0xc
int32_t r9_12 = (r9_9 - r10_12 - r8_8) ^ r10_12 << 0x10
int32_t r8_11 = (r8_8 - r9_12 - r10_12) ^ r9_12 u>> 5
int32_t r10_15 = (r10_12 - r9_12 - r8_11) ^ r8_11 u>> 3
int32_t r9_15 = (r9_12 - r10_15 - r8_11) ^ r10_15 << 0xa
int32_t rcx_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
int32_t rcx_4 = neg.d(rcx_1 + rdx_1) ^ rcx_1 u>> 0xd
int32_t rdx_4 = (rdx_1 - rcx_1 - rcx_4) ^ rcx_4 u>> 0xc
arg_8 = (rcx_1 - rdx_4 - rcx_4) ^ rdx_4 << 0x10
int32_t rcx_7 = (rcx_4 - arg_8 - rdx_4) ^ arg_8 u>> 5
int32_t rdx_7 = (rdx_4 - arg_8 - rcx_7) ^ rcx_7 u>> 3
arg_8 = (arg_8 - rdx_7 - rcx_7) ^ rdx_7 << 0xa
int32_t rax_100 = (arg_8 ^ r9_15 ^ rbx_7 ^ r14_7 ^ r12_7 ^ r9_7) u>> 0xf ^ (rcx_7 - arg_8 - rdx_7)
    ^ (r8_11 - r9_15 - r10_15) ^ (r11_5 - rbx_7 - rdi_7) ^ (rsi_5 - r14_7 - rbp_7)
return zx.q(rax_100) ^ zx.q(r15_5 - r12_7 - r13_7) ^ zx.q(r8_5 - r9_7 - r10_7)
