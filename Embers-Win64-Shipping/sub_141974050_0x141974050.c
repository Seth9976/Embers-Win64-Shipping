// 函数: sub_141974050
// 地址: 0x141974050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx_1 = (arg1[6] u>> 4).d
int32_t r13_1 = (0x9e3779b9 - rcx_1) ^ rcx_1 << 8
uint32_t rbp_1 = (arg1[7] u>> 4).d
uint32_t rdi_1 = (arg1[8] u>> 4).d
int32_t r12_2 = neg.d(rcx_1 + r13_1) ^ r13_1 u>> 0xd
int32_t rcx_4 = (rcx_1 - r13_1 - r12_2) ^ r12_2 u>> 0xc
int32_t r13_4 = (r13_1 - rcx_4 - r12_2) ^ rcx_4 << 0x10
int32_t r12_5 = (r12_2 - r13_4 - rcx_4) ^ r13_4 u>> 5
int32_t rcx_7 = (rcx_4 - r13_4 - r12_5) ^ r12_5 u>> 3
int32_t r13_7 = (r13_4 - rcx_7 - r12_5) ^ rcx_7 << 0xa
int32_t r14_1 = (0x9e3779b9 - rbp_1) ^ rbp_1 << 8
int32_t rsi_2 = neg.d(r14_1 + rbp_1) ^ r14_1 u>> 0xd
int32_t rbp_4 = (rbp_1 - r14_1 - rsi_2) ^ rsi_2 u>> 0xc
int32_t r14_4 = (r14_1 - rbp_4 - rsi_2) ^ rbp_4 << 0x10
int32_t rsi_5 = (rsi_2 - r14_4 - rbp_4) ^ r14_4 u>> 5
int32_t rbp_7 = (rbp_4 - r14_4 - rsi_5) ^ rsi_5 u>> 3
int32_t r14_7 = (r14_4 - rbp_7 - rsi_5) ^ rbp_7 << 0xa
int32_t r15_1 = (0x9e3779b9 - rdi_1) ^ rdi_1 << 8
int32_t rbx_2 = neg.d(r15_1 + rdi_1) ^ r15_1 u>> 0xd
int32_t rdi_4 = (rdi_1 - r15_1 - rbx_2) ^ rbx_2 u>> 0xc
int32_t r15_4 = (r15_1 - rdi_4 - rbx_2) ^ rdi_4 << 0x10
int32_t rbx_5 = (rbx_2 - r15_4 - rdi_4) ^ r15_4 u>> 5
int32_t rdi_7 = (rdi_4 - r15_4 - rbx_5) ^ rbx_5 u>> 3
int32_t r15_7 = (r15_4 - rdi_7 - rbx_5) ^ rdi_7 << 0xa
int32_t rax_42 = sub_141973600(arg1)
int32_t rax_49 = (zx.d(arg1[0x13].w) << 0x1c | rax_42) ^ (rbx_5 - r15_7 - rdi_7)
    ^ (r15_7 ^ r14_7 ^ r13_7) u>> 0xf ^ (rsi_5 - r14_7 - rbp_7) ^ (r12_5 - r13_7 - rcx_7)
return zx.q(rax_49) ^ zx.q(arg1[0xb].d << 0x18) ^ zx.q(*(arg1 + 0x5c))
