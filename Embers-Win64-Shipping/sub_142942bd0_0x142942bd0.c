// 函数: sub_142942bd0
// 地址: 0x142942bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
int32_t rax = *arg2
int32_t r11 = arg3[5]
int32_t r14 = arg3[7]
int32_t r9 = arg2[5]
int32_t r10 = arg2[7]
int32_t rcx = arg3[4]
int32_t rbp = arg3[6]
int64_t r12 = sx.q(arg2[6])
int64_t r13 = sx.q(*arg3)
int32_t rax_1 = arg2[1]
int32_t rax_2 = arg2[2]
int32_t rax_3 = arg2[3]
int32_t rax_4 = arg2[4]
int32_t rax_5 = arg2[9]
int32_t rax_8 = arg3[3]
int64_t rax_11 = sx.q(rax_5 * 2)
int64_t rax_12 = sx.q(arg2[1] * 2)
int64_t rax_13 = sx.q(arg3[9] * 0x13)
int64_t rax_14 = sx.q(rax_3 * 2)
int64_t rdx_2 = sx.q(arg3[2])
int64_t rax_15 = sx.q(r14 * 0x13)
int64_t rax_16 = sx.q(r9 * 2)
int64_t rax_17 = sx.q(r10 * 2)
int64_t rbx_3 = sx.q(r11 * 0x13)
int64_t r14_2 = sx.q(arg3[8] * 0x13)
int64_t r10_2 = sx.q(rbp * 0x13)
int64_t rbp_2 = sx.q(rax_4)
int64_t r11_2 = sx.q(rcx * 0x13)
int64_t r8_1 = sx.q(rdx_2.d * 0x13)
int64_t r9_2 = sx.q(rax_8 * 0x13)
int32_t var_100
var_100.q = sx.q(arg2[8])
int64_t rcx_3 = sx.q(arg3[1])
int64_t rdi_1 = sx.q(rax)
int32_t var_f0
var_f0.q = rcx_3
int64_t rdi_2 = sx.q(rax_5)
int64_t rbp_3 = sx.q(r9)
int64_t r13_8 = sx.q(rcx_3.d * 0x13) * rax_11 + rdi_1 * r13 + sx.q(rax_2) * r14_2 + rbp_2 * r10_2
    + r12 * r11_2 + var_100.q * r8_1 + r9_2 * rax_17
int64_t r13_11 = r13_8 + rbx_3 * rax_16 + rax_15 * rax_14 + rax_13 * rax_12
int64_t r12_1 = sx.q(rax_3)
int64_t r15_3 = sx.q(rax_1)
int64_t rdx_10 = sx.q(rcx) * sx.q(rax) + rdx_2 * sx.q(rax_2) + r13 * sx.q(rax_4) + r14_2 * r12
    + r10_2 * var_100.q + rcx_3 * rax_14 + sx.q(rax_8) * rax_12
int64_t rdx_13 = rdx_10 + rax_17 * rax_15 + rax_16 * rax_13 + rbx_3 * rax_11
int64_t rdx_14 = sx.q(r10)
int64_t r8_2 = sx.q(r11)
int64_t r13_21 = r15_3 * r13 + r12_1 * r14_2 + rbp_3 * r10_2 + var_f0.q * rdi_1 + rdx_14 * r11_2
    + rdi_2 * r8_1 + var_100.q * r9_2 + r12 * rbx_3
int64_t r13_24 =
    r13_21 + sx.q(rax_4) * rax_15 + sx.q(rax_2) * rax_13 + ((r13_11 + 0x2000000) s>> 0x1a)
int64_t r12_2 = sx.q(rax)
int64_t r13_33 = r15_3 * sx.q(rcx) + r12_1 * rdx_2 + r8_2 * r12_2 + rbp_3 * r13 + rdx_14 * r14_2
    + rdi_2 * r10_2 + sx.q(rax_8) * sx.q(rax_2) + var_f0.q * sx.q(rax_4)
int64_t r13_36 = r13_33 + var_100.q * rax_15 + r12 * rax_13 + ((rdx_13 + 0x2000000) s>> 0x1a)
int64_t r12_5 = sx.q(rbp)
int64_t rbx_12 = rdx_2 * r12_2 + r13 * sx.q(rax_2) + r14_2 * sx.q(rax_4) + r10_2 * r12
    + r11_2 * var_100.q + var_f0.q * rax_12 + rax_17 * rbx_3 + rax_16 * rax_15
int64_t rbx_15 = rbx_12 + r9_2 * rax_11 + rax_14 * rax_13 + ((r13_24 + 0x1000000) s>> 0x19)
int64_t rbx_16 = sx.q(r10)
int64_t rdx_26 = r12_5 * sx.q(rax) + sx.q(rcx) * sx.q(rax_2) + r8_2 * rax_12 + rdx_2 * rbp_2
    + r13 * r12 + r14_2 * var_100.q + var_f0.q * rax_16 + sx.q(rax_8) * rax_14
int64_t rdx_29 = rdx_26 + rax_17 * rax_13 + rax_15 * rax_11 + ((r13_36 + 0x1000000) s>> 0x19)
int64_t r10_4 = sx.q(rax_5)
int64_t r15_11 = r15_3 * rdx_2 + sx.q(rax_3) * r13 + rbp_3 * r14_2 + rbx_16 * r10_2
    + sx.q(rax_8) * sx.q(rax) + r10_4 * r11_2 + var_f0.q * sx.q(rax_2) + var_100.q * rbx_3
int64_t rdx_30 = sx.q(r14)
int64_t r15_14 = r15_11 + r12 * rax_15 + sx.q(rax_4) * rax_13 + ((rbx_15 + 0x2000000) s>> 0x1a)
int64_t r10_5 = sx.q(rax_8)
int64_t rbp_11 = rdx_30 * sx.q(rax) + sx.q(rax_3) * sx.q(rcx) + sx.q(r9) * rdx_2
    + r8_2 * sx.q(rax_2) + rbx_16 * r13 + r10_4 * r14_2 + r10_5 * sx.q(rax_4)
int64_t rbp_15 = rbp_11 + var_f0.q * r12 + var_100.q * rax_13 + r12_5 * sx.q(rax_1)
    + ((rdx_29 + 0x2000000) s>> 0x1a)
int64_t rcx_11 = sx.q(arg3[8])
int64_t r9_8 =
    rdx_13 + ((r15_14 + 0x1000000) s>> 0x19) - ((rdx_13 + 0x2000000) & 0xfffffffffc000000)
int64_t rdi_12 = r12_5 * sx.q(rax_2) + rdx_30 * rax_12 + r8_2 * rax_14 + sx.q(rcx) * sx.q(rax_4)
    + rdx_2 * r12 + var_f0.q * rax_17 + r13 * var_100.q + r10_5 * rax_16
int64_t rdi_15 = rdi_12 + rax_13 * rax_11 + rcx_11 * sx.q(rax) + ((rbp_15 + 0x1000000) s>> 0x19)
int64_t r10_12 = sx.q(arg3[9]) * sx.q(rax) + rdx_30 * sx.q(rax_2) + sx.q(r9) * sx.q(rcx)
    + sx.q(r10) * rdx_2 + sx.q(r11) * sx.q(rax_4) + sx.q(rax_5) * r13
int64_t r10_17 = r10_12 + sx.q(rax_8) * r12 + var_f0.q * var_100.q + rcx_11 * sx.q(rax_1)
    + r12_5 * sx.q(rax_3) + ((rdi_15 + 0x2000000) s>> 0x1a)
int64_t r12_8 =
    r13_11 + ((r10_17 + 0x1000000) s>> 0x19) * 0x13 - ((r13_11 + 0x2000000) & 0xfffffffffc000000)
*arg1 = r12_8.d - ((r12_8 + 0x2000000).d & 0xfc000000)
int32_t r12_10 = r13_24.d
arg1[2] = rbx_15.d - ((rbx_15 + 0x2000000).d & 0xfc000000)
arg1[1] = ((r12_8 + 0x2000000) s>> 0x1a).d - ((r12_10 + 0x1000000) & 0xfe000000) + r12_10
int32_t result = rdx_29.d - ((rdx_29 + 0x2000000).d & 0xfc000000)
arg1[3] = r15_14.d - ((r15_14 + 0x1000000).d & 0xfe000000)
arg1[4] = r9_8.d - ((r9_8 + 0x2000000).d & 0xfc000000)
arg1[5] = ((r9_8 + 0x2000000) s>> 0x1a).d - ((r13_36 + 0x1000000).d & 0xfe000000) + r13_36.d
arg1[6] = result
arg1[9] = r10_17.d - ((r10_17 + 0x1000000).d & 0xfe000000)
arg1[7] = rbp_15.d - ((rbp_15 + 0x1000000).d & 0xfe000000)
arg1[8] = rdi_15.d - ((rdi_15 + 0x2000000).d & 0xfc000000)
return result
