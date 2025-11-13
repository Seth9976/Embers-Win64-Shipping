// 函数: sub_142b938e0
// 地址: 0x142b938e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 6).d)

int64_t r15 = sx.q(*arg1)
int64_t rbx_1 = r15 * sx.q(arg1[3])
int64_t rcx_1 = sx.q(arg1[1]) * sx.q(arg1[2])
int32_t rcx_4 = ((rcx_1 - (rcx_1 u>> 0x3f) + 0x8000) s>> 0x10).d
int32_t rbx_4 = ((rbx_1 - (rbx_1 u>> 0x3f) + 0x8000) s>> 0x10).d
int32_t rbx_5 = rbx_4 - rcx_4

if (rbx_4 == rcx_4)
    return zx.q(rbx_5 + 6)

int32_t r9 = 1
int64_t rdx = sx.q(arg1[1])
int32_t r11 = 1
int64_t r8 = sx.q(rbx_5)
int64_t r10 = r8

if (arg1[1] s< 0)
    rdx = neg.q(rdx)
    r11 = -1

if (rbx_5 s< 0)
    r10 = neg.q(r10)
    r11 = neg.d(r11)

uint32_t rcx_5 = 0x7fffffff
uint32_t rax_11

if (r10 == 0)
    rax_11 = 0x7fffffff
else
    rax_11 = (divu.dp.q(0:((r10 u>> 1) + (rdx << 0x10)), r10)).d

if (r11 s< 0)
    rax_11 = neg.d(rax_11)

int64_t rdx_4 = sx.q(arg1[2])
bool cond:1 = arg1[2] s>= 0
int32_t r11_1 = 1
arg1[1] = neg.d(rax_11)
int64_t r10_1 = r8

if (not(cond:1))
    rdx_4 = neg.q(rdx_4)
    r11_1 = -1

if (rbx_5 s< 0)
    r10_1 = neg.q(r10_1)
    r11_1 = neg.d(r11_1)

uint32_t rax_16

if (r10_1 == 0)
    rax_16 = 0x7fffffff
else
    rax_16 = (divu.dp.q(0:((r10_1 u>> 1) + (rdx_4 << 0x10)), r10_1)).d

if (r11_1 s< 0)
    rax_16 = neg.d(rax_16)

int64_t rdx_8 = sx.q(arg1[3])
bool cond:2 = arg1[3] s>= 0
int32_t r11_2 = 1
arg1[2] = neg.d(rax_16)
int64_t r10_2 = r8

if (not(cond:2))
    rdx_8 = neg.q(rdx_8)
    r11_2 = -1

if (rbx_5 s< 0)
    r10_2 = neg.q(r10_2)
    r11_2 = neg.d(r11_2)

uint32_t rax_21

if (r10_2 == 0)
    rax_21 = 0x7fffffff
else
    rax_21 = (divu.dp.q(0:((r10_2 u>> 1) + (rdx_8 << 0x10)), r10_2)).d

if (r11_2 s< 0)
    rax_21 = neg.d(rax_21)

*arg1 = rax_21
int64_t rdx_12 = r15

if (r15.d s< 0)
    rdx_12 = neg.q(rdx_12)
    r9 = -1

if (rbx_5 s< 0)
    r8 = neg.q(r8)
    r9 = neg.d(r9)

if (r8 != 0)
    rcx_5 = (divu.dp.q(0:((r8 u>> 1) + (rdx_12 << 0x10)), r8)).d

if (r9 s< 0)
    rcx_5 = neg.d(rcx_5)

arg1[3] = rcx_5
return 0
