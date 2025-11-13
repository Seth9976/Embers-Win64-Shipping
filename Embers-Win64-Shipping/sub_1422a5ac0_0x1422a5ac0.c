// 函数: sub_1422a5ac0
// 地址: 0x1422a5ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

int16_t* rbx_1 = arg3
int32_t r12_1 = *(arg1 + 0x28)
int32_t r15_1 = 2

if (*(arg1 + 0x3c) != 0)
    r15_1 = 4

uint64_t i_2 = zx.q(arg4)
int32_t rbp_2 = r15_1 * i_2.d
int32_t r13_2 = r15_1 * arg2
int32_t rax_1 = r12_1 + rbp_2
*(arg1 + 0x28) = rax_1

if (rax_1 s> *(arg1 + 0x2c))
    sub_1407c3da0(arg1 + 0x20, r12_1)

void* rax_3 = *(arg1 + 0x20)

if ((rax_3.b & 1) != 0)
    rax_3 = (rax_3 s>> 1) + arg1 + 0x20

void* rdx_2 = sx.q(r13_2) + rax_3
memmove(sx.q(rbp_2) + rdx_2, rdx_2, r12_1 - r13_2)
*(arg1 + 0x38) = divs.dp.d(sx.q(*(arg1 + 0x28)), r15_1)
void* rax = *(arg1 + 0x20)

if ((rax.b & 1) != 0)
    rax = (rax s>> 1) + arg1 + 0x20

void* rcx_4 = sx.q(r13_2) + rax

if (rbx_1 == 0)
    memset(rcx_4, 0, zx.q(rbp_2))
    return 

if (*(arg1 + 0x3c) != 0)
    return memcpy(rcx_4, rbx_1, rbp_2) __tailcall

if (i_2.d == 0)
    return 

uint64_t i_1 = i_2
uint64_t i

do
    int16_t rax_9 = *rbx_1
    rbx_1 = &rbx_1[2]
    *rcx_4 = rax_9
    rcx_4 += 2
    i = i_1
    i_1 -= 1
while (i != 1)
