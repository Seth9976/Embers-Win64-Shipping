// 函数: sub_142943f30
// 地址: 0x142943f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
int64_t r12 = sx.q(arg2[2])
int64_t r11 = sx.q(arg2[5])
int64_t r15 = sx.q(arg2[4])
int64_t r14 = sx.q(arg2[7])
int32_t rax = arg2[6]
int32_t rcx = arg2[3]
int32_t r8 = arg2[8]
int64_t rbx = sx.q(*arg2)
int64_t rbp = sx.q(arg2[1])
int32_t r8_1 = arg2[9]
int64_t rax_2 = sx.q(rax * 0x13)
int64_t rax_3 = sx.q((r15 * 2).d)
int64_t rax_5 = sx.q(r14.d * 0x26)
int64_t rax_6 = sx.q(rcx * 2)
int64_t r8_3 = sx.q(r8_1 * 0x26)
int64_t rdx_1 = sx.q(r8 * 0x13)
int64_t rax_8 = sx.q((r12 * 2).d)
int64_t r9_1 = sx.q((rbp << 1).d)
int64_t r8_4 = sx.q(rax)
int64_t rax_19 = sx.q((rbx * 2).d)
int64_t r10_8 = (sx.q(r11.d * 0x26) * r11 + rbx * rbx + r9_1 * r8_3 + rax_8 * rdx_1 + rax_6 * rax_5
    + rax_3 * rax_2) * 2
int64_t r10_9 = sx.q((r11 * 2).d)
int64_t r13_1 = sx.q((r14 * 2).d)
int32_t arg_18
arg_18.q = (sx.q((r8_4 * 2).d) * rdx_1 + r12 * r12 + r15 * rax_19 + r10_9 * r8_3 + r14 * rax_5
    + r9_1 * rax_6) * 2
int64_t r8_5 = sx.q(rcx)
int64_t r15_1 = ((r10_8 + 0x2000000) s>> 0x1a)
    + ((rbp * rax_19 + r12 * r8_3 + r15 * rax_5 + r10_9 * rax_2 + rdx_1 * rax_6) << 1)
int32_t var_a0_1 = r15_1.d
int64_t rsi_1 = sx.q(r8)
int64_t rbp_1 = ((arg_18.q + 0x2000000) s>> 0x1a)
    + ((r8_4 * r8_3 + r8_5 * rax_8 + r13_1 * rdx_1 + r15 * r9_1 + rax_19 * r11) << 1)
int32_t var_58 = rbp_1.d
int64_t r15_2 = ((r15_1 + 0x1000000) s>> 0x19) + ((r12 * rax_19 + rbp * r9_1 + r8_4 * rax_2
    + r10_9 * rax_5 + r8_3 * rax_6 + rdx_1 * rax_3) << 1)
int32_t arg_20
arg_20.q = r15_2
int64_t rdx_4 = sx.q(r8_1)
int64_t r12_2 = ((rbp_1 + 0x1000000) s>> 0x19) + ((r8_4 * rax_19 + rsi_1 * rdx_1 + r13_1 * r8_3
    + r8_5 * rax_6 + r10_9 * r9_1 + r15 * rax_8) << 1)
int32_t arg_10
arg_10.q = r12_2
int64_t rbp_2 = ((r15_2 + 0x2000000) s>> 0x1a)
    + ((r8_5 * rax_19 + r8_4 * rax_5 + r12 * r9_1 + r15 * r8_3 + r10_9 * rdx_1) << 1)
int64_t r14_2 = ((r12_2 + 0x2000000) s>> 0x1a)
    + ((rsi_1 * r8_3 + rax_19 * r14 + r8_4 * r9_1 + r15 * rax_6 + rax_8 * r11) << 1)
int64_t r10_14 =
    arg_18.q + ((rbp_2 + 0x1000000) s>> 0x19) - ((arg_18.q + 0x2000000) & 0xfffffffffc000000)
arg_18.q = r10_14
int64_t r11_5 = ((r14_2 + 0x1000000) s>> 0x19) + ((rdx_4 * r8_3 + rsi_1 * rax_19 + r15 * r15
    + r13_1 * r9_1 + r8_4 * rax_8 + r10_9 * rax_6) << 1)
arg1[3] = rbp_2.d - ((rbp_2 + 0x1000000).d & 0xfe000000)
arg1[7] = r14_2.d - ((r14_2 + 0x1000000).d & 0xfe000000)
arg1[8] = r11_5.d - ((r11_5 + 0x2000000).d & 0xfc000000)
int64_t r8_13 = ((r11_5 + 0x2000000) s>> 0x1a)
    + ((rdx_4 * rax_19 + rsi_1 * r9_1 + r8_4 * rax_6 + r14 * rax_8 + rax_3 * r11) << 1)
int64_t rsi_4 =
    r10_8 + ((r8_13 + 0x1000000) s>> 0x19) * 0x13 - ((r10_8 + 0x2000000) & 0xfffffffffc000000)
*arg1 = rsi_4.d - ((rsi_4 + 0x2000000).d & 0xfc000000)
arg1[2] = arg_20 - ((r15_2 + 0x2000000).d & 0xfc000000)
arg1[1] = ((rsi_4 + 0x2000000) s>> 0x1a).d - ((var_a0_1 + 0x1000000) & 0xfe000000) + var_a0_1
arg1[4] = arg_18 - ((r10_14 + 0x2000000).d & 0xfc000000)
int32_t result = arg_10 - ((r12_2 + 0x2000000).d & 0xfc000000)
arg1[5] = ((r10_14 + 0x2000000) s>> 0x1a).d - ((var_58 + 0x1000000) & 0xfe000000) + var_58
arg1[9] = r8_13.d - ((r8_13 + 0x1000000).d & 0xfe000000)
arg1[6] = result
return result
