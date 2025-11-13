// 函数: sub_141ca4480
// 地址: 0x141ca4480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[2] == 0 && arg1[3] == 0)
    int64_t rbx = *arg1
    return zx.q(sub_140b5ead0(rbx.d) + (rbx u>> 0x20).d)

int64_t rbx_2 = *arg1
int32_t rbp = sub_140b5ead0(rbx_2.d) + (rbx_2 u>> 0x20).d
int64_t rbx_4 = arg1[1]
int32_t rsi_2 = rbp u>> 0xd ^ neg.d(rbp)
int32_t rdi_2 = (0x9e3779b9 - rsi_2 - rbp) ^ rsi_2 << 8
int32_t rbp_3 = (rbp - rdi_2 - rsi_2) ^ rdi_2 u>> 0xd
int32_t rsi_5 = (rsi_2 - rdi_2 - rbp_3) ^ rbp_3 u>> 0xc
int32_t rdi_5 = (rdi_2 - rsi_5 - rbp_3) ^ rsi_5 << 0x10
int32_t rbp_6 = (rbp_3 - rdi_5 - rsi_5) ^ rdi_5 u>> 5
int32_t rsi_8 = (rsi_5 - rdi_5 - rbp_6) ^ rbp_6 u>> 3
int32_t rdi_8 = (rdi_5 - rsi_8 - rbp_6) ^ rsi_8 << 0xa
int32_t r14 = (rbx_4 u>> 0x20).d + sub_140b5ead0(rbx_4.d)
int32_t rbp_11 = (((rbp_6 - rdi_8 - rsi_8) ^ rdi_8 u>> 0xf) - r14) ^ r14 u>> 0xd
int32_t rbx_8 = (0x9e3779b9 - rbp_11 - r14) ^ rbp_11 << 8
int32_t r14_3 = (r14 - rbx_8 - rbp_11) ^ rbx_8 u>> 0xd
int32_t rbp_14 = (rbp_11 - rbx_8 - r14_3) ^ r14_3 u>> 0xc
int32_t rbx_11 = (rbx_8 - rbp_14 - r14_3) ^ rbp_14 << 0x10
int32_t r14_6 = (r14_3 - rbx_11 - rbp_14) ^ rbx_11 u>> 5
int32_t rbp_17 = (rbp_14 - rbx_11 - r14_6) ^ r14_6 u>> 3
int32_t rbx_14 = (rbx_11 - rbp_17 - r14_6) ^ rbp_17 << 0xa
int64_t rax_36 = arg1[2]
int32_t rdi_11 = sub_140b5ead0(rax_36.d) + rax_36:4.d
int32_t r14_11 = (((r14_6 - rbx_14 - rbp_17) ^ rbx_14 u>> 0xf) - rdi_11) ^ rdi_11 u>> 0xd
int32_t rbx_18 = (0x9e3779b9 - r14_11 - rdi_11) ^ r14_11 << 8
int32_t rdi_14 = (rdi_11 - rbx_18 - r14_11) ^ rbx_18 u>> 0xd
int32_t r14_14 = (r14_11 - rbx_18 - rdi_14) ^ rdi_14 u>> 0xc
int32_t rbx_21 = (rbx_18 - r14_14 - rdi_14) ^ r14_14 << 0x10
int32_t rdi_17 = (rdi_14 - rbx_21 - r14_14) ^ rbx_21 u>> 5
int32_t r14_17 = (r14_14 - rbx_21 - rdi_17) ^ rdi_17 u>> 3
int32_t rbx_24 = (rbx_21 - r14_17 - rdi_17) ^ r14_17 << 0xa
int64_t rax_52 = arg1[3]
int32_t rdx_1 = sub_140b5ead0(rax_52.d) + rax_52:4.d
int32_t rdi_22 = (((rdi_17 - rbx_24 - r14_17) ^ rbx_24 u>> 0xf) - rdx_1) ^ rdx_1 u>> 0xd
int32_t r15_2 = (0x9e3779b9 - rdi_22 - rdx_1) ^ rdi_22 << 8
int32_t rdx_4 = (rdx_1 - r15_2 - rdi_22) ^ r15_2 u>> 0xd
int32_t rdi_25 = (rdi_22 - r15_2 - rdx_4) ^ rdx_4 u>> 0xc
int32_t r15_5 = (r15_2 - rdi_25 - rdx_4) ^ rdi_25 << 0x10
int32_t rdx_7 = (rdx_4 - r15_5 - rdi_25) ^ r15_5 u>> 5
int32_t rdi_28 = (rdi_25 - r15_5 - rdx_7) ^ rdx_7 u>> 3
int32_t r15_8 = (r15_5 - rdi_28 - rdx_7) ^ rdi_28 << 0xa
return zx.q(rdx_7 - r15_8 - rdi_28) ^ zx.q(r15_8 u>> 0xf)
