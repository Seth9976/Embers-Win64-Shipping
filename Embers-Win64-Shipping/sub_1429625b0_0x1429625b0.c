// 函数: sub_1429625b0
// 地址: 0x1429625b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x118)
int64_t* r14 = arg1
int64_t i_1 = 0
int64_t result
int64_t i

do
    int64_t r9_1 = *r14
    int64_t rsi_1 = r14[6]
    int64_t rax_5 = r9_1 ^ r14[5] ^ r14[0xa] ^ r14[0xf] ^ r14[0x14]
    int64_t r13_1 = r14[0x10]
    int64_t rdi_1 = r14[0xc]
    int64_t rbx_1 = r14[0x12]
    int64_t r10_1 = r14[0x18]
    int64_t r15_1 = r14[3]
    int64_t r8_5 = r14[1] ^ rsi_1 ^ r14[0xb] ^ r13_1 ^ r14[0x15]
    int64_t rcx_4 = r15_1 ^ r14[8] ^ r14[0xd] ^ rbx_1 ^ r14[0x17]
    int64_t r12_1 = r14[0x16]
    int64_t r14_1 = r14[9]
    int64_t rdx_5 = r14[2] ^ r14[7] ^ rdi_1 ^ r14[0x11] ^ r12_1
    int64_t r11_5 = arg1[4] ^ r14_1 ^ arg1[0xe] ^ arg1[0x13] ^ r10_1
    int64_t r11_6 = r11_5 ^ rol.q(r8_5, 1)
    int64_t r11_7 = r11_6 ^ r9_1
    int64_t arg_18 = rax_5 ^ rol.q(rdx_5, 1)
    int64_t rax_13 = rol.q(rcx_4, 1) ^ r8_5
    int64_t r9_4 = rol.q(arg_18 ^ rsi_1, 0x2c)
    int64_t rax_16 = rol.q(r11_5, 1) ^ rdx_5
    int64_t rax_19 = rol.q(rax_5, 1) ^ rcx_4
    int64_t rcx_7 = rol.q(rax_13 ^ rdi_1, 0x2b)
    int64_t r8_8 = rol.q(rax_19 ^ r10_1, 0xe)
    int64_t rdx_8 = rol.q(rax_16 ^ rbx_1, 0x15)
    int64_t var_118 = (not.q(r9_4) & rcx_7) ^ *(&data_14354a260 + (i_1 << 3)) ^ r11_7
    int64_t r10_5 = rol.q(rax_16 ^ r15_1, 0x1c)
    int64_t var_110_1 = (not.q(rcx_7) & rdx_8) ^ r9_4
    int64_t var_108_1 = (not.q(rdx_8) & r8_8) ^ rcx_7
    int64_t var_100_1 = (not.q(r8_8) & r11_7) ^ rdx_8
    int64_t var_f8_1 = (not.q(r11_7) & r9_4) ^ r8_8
    r14 = arg1
    int64_t r9_7 = rol.q(rax_19 ^ r14_1, 0x14)
    int64_t rdx_11 = rol.q(arg_18 ^ r13_1, 0x2d)
    int64_t rcx_10 = rol.q(r11_6 ^ r14[0xa], 3)
    int64_t r8_11 = rol.q(rax_13 ^ r12_1, 0x3d)
    int64_t var_f0_1 = (not.q(r9_7) & rcx_10) ^ r10_5
    int64_t var_e8_1 = (not.q(rcx_10) & rdx_11) ^ r9_7
    int64_t var_e0_1 = (not.q(rdx_11) & r8_11) ^ rcx_10
    int64_t rcx_13 = rol.q(rax_16 ^ r14[0xd], 0x19)
    int64_t var_d8_1 = (not.q(r8_11) & r10_5) ^ rdx_11
    int64_t var_d0_1 = (not.q(r10_5) & r9_7) ^ r8_11
    int64_t r9_10 = rol.q(rax_13 ^ r14[7], 6)
    int64_t r10_11 = rol.q(arg_18 ^ r14[1], 1)
    int64_t rdx_14 = rol.q(rax_19 ^ r14[0x13], 8)
    int64_t r8_14 = rol.q(r11_6 ^ r14[0x14], 0x12)
    int64_t var_c8_1 = (not.q(r9_10) & rcx_13) ^ r10_11
    int64_t var_c0_1 = (not.q(rcx_13) & rdx_14) ^ r9_10
    int64_t var_b8_1 = (not.q(rdx_14) & r8_14) ^ rcx_13
    int64_t rcx_16 = rol.q(arg_18 ^ r14[0xb], 0xa)
    int64_t rbx_4 = rol.q(arg_18 ^ r14[0x15], 2)
    int64_t var_b0_1 = (not.q(r8_14) & r10_11) ^ rdx_14
    int64_t var_a8_1 = (not.q(r10_11) & r9_10) ^ r8_14
    int64_t r10_17 = rol.q(rax_19 ^ r14[4], 0x1b)
    int64_t r9_13 = rol.q(r11_6 ^ r14[5], 0x24)
    int64_t rdx_17 = rol.q(rax_13 ^ r14[0x11], 0xf)
    int64_t r8_17 = rol.q(rax_16 ^ r14[0x17], 0x38)
    int64_t r15_4 = rol.q(rax_19 ^ r14[0xe], 0x27)
    int64_t r11_13 = rol.q(r11_6 ^ r14[0xf], 0x29)
    int64_t var_a0_1 = (not.q(r9_13) & rcx_16) ^ r10_17
    int64_t rdi_4 = rol.q(rax_16 ^ r14[8], 0x37)
    int64_t rsi_4 = rol.q(rax_13 ^ r14[2], 0x3e)
    int64_t var_98_1 = (not.q(rcx_16) & rdx_17) ^ r9_13
    int64_t var_90_1 = (not.q(rdx_17) & r8_17) ^ rcx_16
    int64_t var_88_1 = (not.q(r8_17) & r10_17) ^ rdx_17
    int64_t var_80_1 = (not.q(r10_17) & r9_13) ^ r8_17
    int64_t var_78_1 = (not.q(rdi_4) & r15_4) ^ rsi_4
    int64_t var_70_1 = (not.q(r15_4) & r11_13) ^ rdi_4
    int64_t var_68_1 = (not.q(r11_13) & rbx_4) ^ r15_4
    int64_t var_60_1 = (not.q(rbx_4) & rsi_4) ^ r11_13
    int64_t var_58_1 = (not.q(rsi_4) & rdi_4) ^ rbx_4
    result = sub_1429629d0(r14, &var_118, i_1 + 1)
    i = i_1 + 2
    i_1 = i
while (i u< 0x18)
return result
