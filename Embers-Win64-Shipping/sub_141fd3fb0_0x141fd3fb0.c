// 函数: sub_141fd3fb0
// 地址: 0x141fd3fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[1].d
int64_t rsi = sx.q(arg3)
int64_t rbp = sx.q(arg2)
int32_t rax = rdi + rsi.d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c5060(arg1)

int64_t rdx_4 = rbp * 0x50 + *arg1
return memmove(rsi * 0x50 + rdx_4, rdx_4, (rdi - rbp.d) * 0x50) __tailcall
