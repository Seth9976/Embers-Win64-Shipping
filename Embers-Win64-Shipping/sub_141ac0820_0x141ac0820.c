// 函数: sub_141ac0820
// 地址: 0x141ac0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg2[2]
int32_t rsi = 0
arg1[2] = rax
int32_t rdx = 0
int32_t rdi = *(rax + 8)
arg1[1].d = 0

if (rdi s> *(arg1 + 0xc))
    sub_141acba60(arg1, rdi)
    rdx = arg1[1].d

int32_t rax_1 = rdx + rdi
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_141acb8e0(arg1, rdx)

sub_141a911c0(arg1, arg2)
int32_t rdx_3 = arg1[1].d
arg1[4].d = 0

if (*(arg1 + 0x24) != rdx_3)
    sub_1405c5510(&arg1[3], rdx_3)
    rsi = arg1[4].d

int64_t count = sx.q(arg1[1].d)
int32_t rax_2 = rsi + count.d
arg1[4].d = rax_2

if (rax_2 s> *(arg1 + 0x24))
    sub_1405daba0(&arg1[3])

memset(sx.q(rsi) + arg1[3], 0, count)
char* result = arg1[3]
*result = 1
return result
