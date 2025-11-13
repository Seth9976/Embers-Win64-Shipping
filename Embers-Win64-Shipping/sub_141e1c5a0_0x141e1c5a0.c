// 函数: sub_141e1c5a0
// 地址: 0x141e1c5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)

if (rcx != 0)
    jump(*(*rcx + 0x20))

void* rbp_1 = *arg2 + 0x4a0
arg2[3] = rbp_1
int32_t rsi = 0
int32_t rdi = *(rbp_1 + 8)
arg2[2].d = 0
int32_t temp0 = *(arg2 + 0x14)
int32_t rdx = 0

if (rdi s> temp0 && rdi != temp0)
    sub_141acba60(&arg2[1], rdi)
    rdx = arg2[2].d

int32_t rax_1 = rdx + rdi
arg2[2].d = rax_1

if (rax_1 s> *(arg2 + 0x14))
    sub_141acb8e0(&arg2[1], rdx)

sub_141e0ba30(&arg2[1])
int32_t rdx_2 = arg2[2].d
arg2[5].d = 0

if (*(arg2 + 0x2c) != rdx_2)
    sub_1405c5510(&arg2[4], rdx_2)
    rsi = arg2[5].d

int64_t count = sx.q(arg2[2].d)
int32_t rax_2 = rsi + count.d
arg2[5].d = rax_2

if (rax_2 s> *(arg2 + 0x2c))
    sub_1405daba0(&arg2[4])

memset(sx.q(rsi) + arg2[4], 0, count)
*arg2[4] = 1
return sub_141abd4c0(&arg2[0xa], rbp_1) __tailcall
