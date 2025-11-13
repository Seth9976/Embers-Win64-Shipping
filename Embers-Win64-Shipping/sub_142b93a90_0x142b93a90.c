// 函数: sub_142b93a90
// 地址: 0x142b93a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

uint32_t* r15_1 = arg2
int32_t rsi_2 = arg3 << 0x10

if (arg2 == 0)
    return 

int32_t rbx_1 = 1
int32_t r8 = 1
int64_t rdi_1 = sx.q(*arg1)
int64_t rcx = rdi_1
int64_t r12_1 = sx.q(*arg2)
int64_t rax_1 = r12_1
int64_t r14_1 = sx.q(rsi_2)
int64_t r9_1 = r14_1

if (rdi_1.d s< 0)
    rcx = neg.q(rcx)
    r8 = -1

if (r12_1.d s< 0)
    rax_1 = neg.q(rax_1)
    r8 = neg.d(r8)

if (rsi_2 s< 0)
    r9_1 = neg.q(r9_1)
    r8 = neg.d(r8)

uint32_t r11_1 = 0x7fffffff
uint32_t r9_2

if (r9_1 == 0)
    r9_2 = 0x7fffffff
else
    r9_2 = (divu.dp.q(0:(rax_1 * rcx + (r9_1 u>> 1)), r9_1)).d

if (r8 s< 0)
    r9_2 = neg.d(r9_2)

int64_t rbp_1 = sx.q(arg1[1])
int32_t r8_1 = 1
int64_t rdx_2 = sx.q(r15_1[2])
int64_t rcx_3 = rbp_1
int64_t rax_5 = rdx_2
int64_t r10_1 = r14_1

if (rbp_1.d s< 0)
    rcx_3 = neg.q(rcx_3)
    r8_1 = -1

if (rdx_2.d s< 0)
    rax_5 = neg.q(rax_5)
    r8_1 = neg.d(r8_1)

if (rsi_2 s< 0)
    r10_1 = neg.q(r10_1)
    r8_1 = neg.d(r8_1)

uint32_t rax_8

if (r10_1 == 0)
    rax_8 = 0x7fffffff
else
    rax_8 = (divu.dp.q(0:(rax_5 * rcx_3 + (r10_1 u>> 1)), r10_1)).d

if (r8_1 s< 0)
    rax_8 = neg.d(rax_8)

int64_t rdx_5 = sx.q(r15_1[1])
int64_t rax_10 = rdx_5
int32_t r8_2 = 1
int64_t rcx_6 = rdi_1
int64_t r9_3 = r14_1

if (rdi_1.d s< 0)
    rcx_6 = neg.q(rcx_6)
    r8_2 = -1

if (rdx_5.d s< 0)
    rax_10 = neg.q(rax_10)
    r8_2 = neg.d(r8_2)

if (rsi_2 s< 0)
    r9_3 = neg.q(r9_3)
    r8_2 = neg.d(r8_2)

uint32_t r9_4

if (r9_3 == 0)
    r9_4 = 0x7fffffff
else
    r9_4 = (divu.dp.q(0:(rax_10 * rcx_6 + (r9_3 u>> 1)), r9_3)).d

if (r8_2 s< 0)
    r9_4 = neg.d(r9_4)

int64_t rdx_8 = sx.q(r15_1[3])
int32_t r8_3 = 1
int64_t rax_14 = rdx_8
int64_t rcx_9 = rbp_1
int64_t r10_2 = r14_1

if (rbp_1.d s< 0)
    rcx_9 = neg.q(rcx_9)
    r8_3 = -1

if (rdx_8.d s< 0)
    rax_14 = neg.q(rax_14)
    r8_3 = neg.d(r8_3)

if (rsi_2 s< 0)
    r10_2 = neg.q(r10_2)
    r8_3 = neg.d(r8_3)

uint32_t rax_17

if (r10_2 == 0)
    rax_17 = 0x7fffffff
else
    rax_17 = (divu.dp.q(0:(rax_14 * rcx_9 + (r10_2 u>> 1)), r10_2)).d

if (r8_3 s< 0)
    rax_17 = neg.d(rax_17)

int64_t rbp_2 = sx.q(arg1[2])
int64_t rax_19 = r12_1
int32_t r8_4 = 1
int64_t rcx_12 = rbp_2
int64_t r9_5 = r14_1

if (rbp_2.d s< 0)
    rcx_12 = neg.q(rcx_12)
    r8_4 = -1

if (r12_1.d s< 0)
    rax_19 = neg.q(rax_19)
    r8_4 = neg.d(r8_4)

if (rsi_2 s< 0)
    r9_5 = neg.q(r9_5)
    r8_4 = neg.d(r8_4)

uint32_t r10_3

if (r9_5 == 0)
    r10_3 = 0x7fffffff
else
    r10_3 = (divu.dp.q(0:(rax_19 * rcx_12 + (r9_5 u>> 1)), r9_5)).d

if (r8_4 s< 0)
    r10_3 = neg.d(r10_3)

int64_t rdi_2 = sx.q(arg1[3])
int32_t r8_5 = 1
int64_t rdx_13 = sx.q(r15_1[2])
int64_t rcx_15 = rdi_2
int64_t rax_23 = rdx_13
int64_t r9_6 = r14_1

if (rdi_2.d s< 0)
    rcx_15 = neg.q(rcx_15)
    r8_5 = -1

if (rdx_13.d s< 0)
    rax_23 = neg.q(rax_23)
    r8_5 = neg.d(r8_5)

if (rsi_2 s< 0)
    r9_6 = neg.q(r9_6)
    r8_5 = neg.d(r8_5)

uint32_t rax_26

if (r9_6 == 0)
    rax_26 = 0x7fffffff
else
    rax_26 = (divu.dp.q(0:(rax_23 * rcx_15 + (r9_6 u>> 1)), r9_6)).d

if (r8_5 s< 0)
    rax_26 = neg.d(rax_26)

int64_t rdx_16 = sx.q(r15_1[1])
int64_t rcx_18 = rbp_2
int32_t r8_6 = 1
int64_t rax_27 = rdx_16
int64_t r9_7 = r14_1

if (rbp_2.d s< 0)
    rcx_18 = neg.q(rcx_18)
    r8_6 = -1

if (rdx_16.d s< 0)
    rax_27 = neg.q(rax_27)
    r8_6 = neg.d(r8_6)

if (rsi_2 s< 0)
    r9_7 = neg.q(r9_7)
    r8_6 = neg.d(r8_6)

uint32_t r9_8

if (r9_7 == 0)
    r9_8 = 0x7fffffff
else
    r9_8 = (divu.dp.q(0:(rax_27 * rcx_18 + (r9_7 u>> 1)), r9_7)).d

if (r8_6 s< 0)
    r9_8 = neg.d(r9_8)

int64_t rdx_19 = sx.q(r15_1[3])
int64_t rcx_21 = rdi_2
int64_t rax_31 = rdx_19

if (rdi_2.d s< 0)
    rcx_21 = neg.q(rcx_21)
    rbx_1 = -1

if (rdx_19.d s< 0)
    rax_31 = neg.q(rax_31)
    rbx_1 = neg.d(rbx_1)

if (rsi_2 s< 0)
    r14_1 = neg.q(r14_1)
    rbx_1 = neg.d(rbx_1)

if (r14_1 != 0)
    r11_1 = (divu.dp.q(0:(rax_31 * rcx_21 + (r14_1 u>> 1)), r14_1)).d

if (rbx_1 s< 0)
    r11_1 = neg.d(r11_1)

*r15_1 = rax_8 + r9_2
r15_1[1] = rax_17 + r9_4
r15_1[3] = r11_1 + r9_8
r15_1[2] = r10_3 + rax_26
