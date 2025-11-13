// 函数: sub_1429439b0
// 地址: 0x1429439b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x88)
int64_t r11 = sx.q(arg2[5])
int64_t r15 = sx.q(arg2[4])
int64_t r12 = sx.q(arg2[2])
int64_t r14 = sx.q(arg2[7])
int32_t rax = arg2[6]
int32_t rcx = arg2[3]
int32_t r8 = arg2[8]
int64_t rbx = sx.q(*arg2)
int64_t rbp = sx.q(arg2[1])
int32_t r8_1 = arg2[9]
int64_t rax_2 = sx.q(rax * 0x13)
int64_t rax_3 = sx.q((r15 * 2).d)
int64_t r9_1 = sx.q((r12 * 2).d)
int64_t rcx_2 = sx.q(r14.d * 0x26)
int64_t rax_5 = sx.q(rcx * 2)
int64_t rdx_1 = sx.q(r8_1 * 0x26)
int64_t r8_3 = sx.q((rbp << 1).d)
int64_t rcx_3 = sx.q(r8 * 0x13)
int64_t rdx_2 = sx.q(rax)
int64_t r9_2 = sx.q((r11 * 2).d)
int64_t rdi_1 = sx.q((rbx * 2).d)
int64_t r10_7 = sx.q(r11.d * 0x26) * r11 + rbx * rbx + r8_3 * rdx_1 + r9_1 * rcx_3 + rax_5 * rcx_2
    + rax_3 * rax_2
int32_t arg_20
arg_20.q = sx.q((rdx_2 * 2).d) * rcx_3 + r12 * r12 + r15 * rdi_1 + r9_2 * rdx_1 + r14 * rcx_2
    + r8_3 * rax_5
int64_t rbp_6 = rbp * rdi_1 + r12 * rdx_1 + r15 * rcx_2 + r9_2 * rax_2 + rcx_3 * rax_5
    + ((r10_7 + 0x2000000) s>> 0x1a)
int64_t r15_9 = sx.q((r14 * 2).d)
int64_t rcx_9 = sx.q(r8)
int64_t r12_7 = rdx_2 * rdx_1 + sx.q(rcx) * r9_1 + r15_9 * rcx_3 + r15 * r8_3 + rdi_1 * r11
    + ((arg_20.q + 0x2000000) s>> 0x1a)
int64_t rdi_9 = r12 * rdi_1 + rbp * r8_3 + rdx_2 * rax_2 + r9_2 * rcx_2 + rdx_1 * rax_5
    + rcx_3 * rax_3 + ((rbp_6 + 0x1000000) s>> 0x19)
int64_t rdi_10 = sx.q(r8_1)
int64_t r8_12 = rdx_2 * rdi_1 + rcx_9 * rcx_3 + r15_9 * rdx_1 + sx.q(rcx) * rax_5 + r9_2 * r8_3
    + r15 * r9_1 + ((r12_7 + 0x1000000) s>> 0x19)
int32_t arg_18
arg_18.q = r8_12
int32_t arg_10
arg_10.q = sx.q(rcx) * rdi_1
int64_t r11_7 = arg_10.q + rdx_2 * rcx_2 + r12 * r8_3 + r15 * rdx_1 + r9_2 * rcx_3
    + ((rdi_9 + 0x2000000) s>> 0x1a)
arg_10.q = r11_7
int64_t r14_8 = rcx_9 * rdx_1 + rdi_1 * r14 + rdx_2 * r8_3 + r15 * rax_5 + r9_1 * r11
    + ((r8_12 + 0x2000000) s>> 0x1a)
int64_t r9_7 =
    arg_20.q + ((r11_7 + 0x1000000) s>> 0x19) - ((arg_20.q + 0x2000000) & 0xfffffffffc000000)
arg_20.q = r9_7
int64_t rbx_9 = rdi_10 * rdx_1 + rcx_9 * rdi_1 + r15 * r15 + r15_9 * r8_3 + rdx_2 * r9_1
    + r9_2 * rax_5 + ((r14_8 + 0x1000000) s>> 0x19)
int64_t rdi_16 = rdi_10 * rdi_1 + rcx_9 * r8_3 + rdx_2 * rax_5 + r14 * r9_1 + rax_3 * r11
    + ((rbx_9 + 0x2000000) s>> 0x1a)
int64_t r15_12 =
    r10_7 + ((rdi_16 + 0x1000000) s>> 0x19) * 0x13 - ((r10_7 + 0x2000000) & 0xfffffffffc000000)
arg1[1] = ((r15_12 + 0x2000000) s>> 0x1a).d - ((rbp_6 + 0x1000000).d & 0xfe000000) + rbp_6.d
*arg1 = r15_12.d - ((r15_12 + 0x2000000).d & 0xfc000000)
arg1[2] = rdi_9.d - ((rdi_9 + 0x2000000).d & 0xfc000000)
arg1[7] = r14_8.d - ((r14_8 + 0x1000000).d & 0xfe000000)
arg1[3] = arg_10 - ((r11_7 + 0x1000000).d & 0xfe000000)
arg1[8] = rbx_9.d - ((rbx_9 + 0x2000000).d & 0xfc000000)
int32_t result = arg_18 - ((r8_12 + 0x2000000).d & 0xfc000000)
arg1[4] = arg_20 - ((r9_7 + 0x2000000).d & 0xfc000000)
arg1[9] = rdi_16.d - ((rdi_16 + 0x1000000).d & 0xfe000000)
arg1[5] = ((r9_7 + 0x2000000) s>> 0x1a).d - ((r12_7 + 0x1000000).d & 0xfe000000) + r12_7.d
arg1[6] = result
return result
