// 函数: sub_142b97730
// 地址: 0x142b97730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

int32_t rdi_2 = arg3 << 0x10

if (arg2 == 0)
    return 

int64_t r10_1 = sx.q(*arg2)
int32_t r9_1 = 1
int32_t r8 = 1
int64_t rax_1 = r10_1
int64_t rbp_1 = sx.q(*arg1)
int64_t rbx_1 = sx.q(rdi_2)
int64_t rcx = rbp_1
int64_t r11_1 = rbx_1

if (rbp_1.d s< 0)
    rcx = neg.q(rcx)
    r8 = -1

if (r10_1.d s< 0)
    rax_1 = neg.q(rax_1)
    r8 = neg.d(r8)

if (rdi_2 s< 0)
    r11_1 = neg.q(r11_1)
    r8 = neg.d(r8)

uint32_t r10_2 = 0x7fffffff
uint32_t r11_2

if (r11_1 == 0)
    r11_2 = 0x7fffffff
else
    r11_2 = (divu.dp.q(0:(rax_1 * rcx + (r11_1 u>> 1)), r11_1)).d

if (r8 s< 0)
    r11_2 = neg.d(r11_2)

int64_t r12_1 = sx.q(arg1[1])
int32_t r8_1 = 1
int64_t rdx_2 = sx.q(arg2[1])
int64_t rcx_3 = r12_1
int64_t rax_5 = rdx_2
int64_t rsi_1 = rbx_1

if (r12_1.d s< 0)
    rcx_3 = neg.q(rcx_3)
    r8_1 = -1

if (rdx_2.d s< 0)
    rax_5 = neg.q(rax_5)
    r8_1 = neg.d(r8_1)

if (rdi_2 s< 0)
    rsi_1 = neg.q(rsi_1)
    r8_1 = neg.d(r8_1)

uint32_t rax_8

if (rsi_1 == 0)
    rax_8 = 0x7fffffff
else
    rax_8 = (divu.dp.q(0:(rax_5 * rcx_3 + (rsi_1 u>> 1)), rsi_1)).d

if (r8_1 s< 0)
    rax_8 = neg.d(rax_8)

int64_t rdx_5 = sx.q(arg2[2])
int64_t rcx_6 = rbp_1
int64_t rax_9 = rdx_5
int32_t r8_2 = 1
int64_t r11_3 = rbx_1

if (rbp_1.d s< 0)
    rcx_6 = neg.q(rcx_6)
    r8_2 = -1

if (rdx_5.d s< 0)
    rax_9 = neg.q(rax_9)
    r8_2 = neg.d(r8_2)

if (rdi_2 s< 0)
    r11_3 = neg.q(r11_3)
    r8_2 = neg.d(r8_2)

uint32_t r11_4

if (r11_3 == 0)
    r11_4 = 0x7fffffff
else
    r11_4 = (divu.dp.q(0:(rax_9 * rcx_6 + (r11_3 u>> 1)), r11_3)).d

if (r8_2 s< 0)
    r11_4 = neg.d(r11_4)

int64_t rdx_8 = sx.q(arg2[3])
int64_t rcx_9 = r12_1
int64_t rax_13 = rdx_8

if (r12_1.d s< 0)
    rcx_9 = neg.q(rcx_9)
    r9_1 = -1

if (rdx_8.d s< 0)
    rax_13 = neg.q(rax_13)
    r9_1 = neg.d(r9_1)

if (rdi_2 s< 0)
    rbx_1 = neg.q(rbx_1)
    r9_1 = neg.d(r9_1)

if (rbx_1 != 0)
    r10_2 = (divu.dp.q(0:(rax_13 * rcx_9 + (rbx_1 u>> 1)), rbx_1)).d

if (r9_1 s< 0)
    r10_2 = neg.d(r10_2)

*arg1 = rax_8 + r11_2
arg1[1] = r10_2 + r11_4
