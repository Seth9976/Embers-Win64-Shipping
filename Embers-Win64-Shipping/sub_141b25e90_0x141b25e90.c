// 函数: sub_141b25e90
// 地址: 0x141b25e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[4].d
int64_t rbp = sx.q(arg3)
int64_t* rdi = arg1
arg1[4].d = rsi + 1

if (rsi + 1 s> *(arg1 + 0x24))
    sub_1405c5230(arg1, rsi)

int64_t* r8 = rdi[3]
int64_t* rdx_1 = rdi

if (r8 != 0)
    rdx_1 = r8

void* rdx_2 = &rdx_1[rbp * 3]
memmove(rdx_2 + 0x18, rdx_2, (rsi - rbp.d) * 0x18)
int64_t* rax_2 = rdi[3]

if (rax_2 != 0)
    rdi = rax_2

rdi[rbp * 3] = *arg2
rdi[rbp * 3 + 1] = 0
rdi[rbp * 3 + 1] = arg2[1]
arg2[1] = 0
rdi[rbp * 3 + 2].d = arg2[2].d
*(&rdi[rbp * 3] + 0x14) = *(arg2 + 0x14)
arg2[2] = 0
return zx.q(rbp.d)
