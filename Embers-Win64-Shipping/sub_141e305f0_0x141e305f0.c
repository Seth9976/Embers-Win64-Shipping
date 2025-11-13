// 函数: sub_141e305f0
// 地址: 0x141e305f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
void* rbp_1 = *arg1 + 0x4a0
arg1[3] = rbp_1
int32_t rdx = 0
int32_t rdi = *(rbp_1 + 8)
arg1[2].d = 0

if (rdi s> *(arg1 + 0x14))
    sub_141acba60(&arg1[1], rdi)
    rdx = arg1[2].d

int32_t rax = rdx + rdi
arg1[2].d = rax

if (rax s> *(arg1 + 0x14))
    sub_141acb8e0(&arg1[1], rdx)

sub_141e0ba30(&arg1[1])
int32_t rdx_2 = arg1[2].d
arg1[5].d = 0

if (*(arg1 + 0x2c) != rdx_2)
    sub_1405c5510(&arg1[4], rdx_2)
    rsi = arg1[5].d

int64_t count = sx.q(arg1[2].d)
int32_t rax_1 = rsi + count.d
arg1[5].d = rax_1

if (rax_1 s> *(arg1 + 0x2c))
    sub_1405daba0(&arg1[4])

memset(sx.q(rsi) + arg1[4], 0, count)
*arg1[4] = 1
return sub_141abd4c0(&arg1[0xa], rbp_1) __tailcall
