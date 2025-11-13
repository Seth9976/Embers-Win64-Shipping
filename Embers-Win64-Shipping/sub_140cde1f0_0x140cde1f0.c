// 函数: sub_140cde1f0
// 地址: 0x140cde1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *arg1
int32_t r15 = (rbx u>> 0x20).d + sub_140b5ead0(rbx.d)
int64_t rbx_2 = arg1[1]
int32_t rbp_2 = r15 u>> 0xd ^ neg.d(r15)
int32_t rdi_2 = (0x9e3779b9 - rbp_2 - r15) ^ rbp_2 << 8
int32_t r15_3 = (r15 - rdi_2 - rbp_2) ^ rdi_2 u>> 0xd
int32_t rbp_5 = (rbp_2 - rdi_2 - r15_3) ^ r15_3 u>> 0xc
int32_t rdi_5 = (rdi_2 - rbp_5 - r15_3) ^ rbp_5 << 0x10
int32_t r15_6 = (r15_3 - rdi_5 - rbp_5) ^ rdi_5 u>> 5
int32_t rbp_8 = (rbp_5 - rdi_5 - r15_6) ^ r15_6 u>> 3
int32_t rdi_8 = (rdi_5 - rbp_8 - r15_6) ^ rbp_8 << 0xa
int32_t rcx_2 = (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d)
int32_t r15_11 = (((r15_6 - rdi_8 - rbp_8) ^ rdi_8 u>> 0xf) - rcx_2) ^ rcx_2 u>> 0xd
int32_t r14_2 = (0x9e3779b9 - r15_11 - rcx_2) ^ r15_11 << 8
int32_t rcx_5 = (rcx_2 - r14_2 - r15_11) ^ r14_2 u>> 0xd
int32_t r15_14 = (r15_11 - r14_2 - rcx_5) ^ rcx_5 u>> 0xc
int32_t r14_5 = (r14_2 - r15_14 - rcx_5) ^ r15_14 << 0x10
int32_t rcx_8 = (rcx_5 - r14_5 - r15_14) ^ r14_5 u>> 5
int32_t r15_17 = (r15_14 - r14_5 - rcx_8) ^ rcx_8 u>> 3
int32_t r14_8 = (r14_5 - r15_17 - rcx_8) ^ r15_17 << 0xa
return zx.q(rcx_8 - r14_8 - r15_17) ^ zx.q(r14_8 u>> 0xf)
