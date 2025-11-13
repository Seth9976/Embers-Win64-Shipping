// 函数: sub_1428d2df0
// 地址: 0x1428d2df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10)
*arg1 = 0
arg1[1] = 0
int64_t r9 = arg2[1]
int64_t r8 = *arg2
int64_t var_30 = r9
int64_t rdx_2 = r9 u>> 1 | r8 << 0x3f
uint128_t zmm2 = r8.o
int64_t var_30_1 = rdx_2
int64_t r9_4 = (neg.q(zx.q(r9.d) & 1) & 0xe100000000000000) ^ r8 u>> 1
uint128_t zmm1 = r9_4.o
int64_t r13_2 = rdx_2 u>> 1 | r9_4 << 0x3f
int64_t var_30_2 = r13_2
int64_t rdx_6 = (neg.q(zx.q(rdx_2.d) & 1) & 0xe100000000000000) ^ r9_4 u>> 1
int64_t rcx = zmm1.q
int64_t r12_2 = rdx_6 << 0x3f | r13_2 u>> 1
int64_t r13_6 = (neg.q(zx.q(r13_2.d) & 1) & 0xe100000000000000) ^ rdx_6 u>> 1
*(arg1 + 0x20) = rdx_6.o
int64_t r14 = arg1[4]
int64_t rsi = arg1[5]
*(arg1 + 0x40) = zmm1
int64_t rdi_1 = r14 ^ rcx
int64_t r13_7 = r13_6 ^ r14
int64_t var_30_3 = r12_2
int64_t r12_3 = r12_2 ^ rsi
arg1[6] = r13_7
arg1[7] = r12_3
*(arg1 + 0x10) = r13_6.o
int64_t r8_2 = arg1[2]
int64_t rdx_8 = arg1[3]
int64_t r11_1 = r13_7 ^ rcx
arg1[0xc] = rdi_1
int64_t r15_1 = r8_2 ^ rcx
arg1[0xe] = r11_1
arg1[0xa] = r15_1
int64_t rax_6 = _mm_bsrli_si128(zmm1, 8).q
int64_t rbp_1 = rdx_8 ^ rax_6
int64_t rbx_1 = rsi ^ rax_6
arg1[0xb] = rbp_1
arg1[0xd] = rbx_1
int64_t r10_2 = r12_3 ^ rax_6
int64_t r9_6 = zmm2.q
arg1[0xf] = r10_2
*(arg1 + 0x80) = zmm2
int64_t rcx_1 = _mm_bsrli_si128(zmm2, 8).q
arg1[0x12] = r8_2 ^ r9_6
arg1[0x14] = r14 ^ r9_6
arg1[0x16] = r13_7 ^ r9_6
arg1[0x15] = rsi ^ rcx_1
arg1[0x1b] = rbp_1 ^ rcx_1
arg1[0x13] = rdx_8 ^ rcx_1
arg1[0x17] = r12_3 ^ rcx_1
int64_t rax_9 = arg1[8] ^ r9_6
arg1[0x1d] = rbx_1 ^ rcx_1
arg1[0x18] = rax_9
int64_t result = arg1[9] ^ rcx_1
arg1[0x1a] = r15_1 ^ r9_6
arg1[0x19] = result
arg1[0x1f] = r10_2 ^ rcx_1
arg1[0x1c] = rdi_1 ^ r9_6
arg1[0x1e] = r11_1 ^ r9_6
return result
